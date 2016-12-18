/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/return_traits/builtins.hpp
 *
 * Purpose:     Specialisations of vole::com_return_traits for built-in
 *              types.
 *
 * Created:     10th August 2006
 * Updated:     18th December 2016
 *
 * Home:        http://stlsoft.org/
 *
 * Copyright (c) 2006-2016, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the names of
 *   any contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file vole/return_traits/builtins.hpp
 *
 * \brief Specialisations of vole::com_return_traits for built-in types.
 */

#ifndef VOLE_INCL_VOLE_RETURN_TRAITS_HPP_BUILTINS
#define VOLE_INCL_VOLE_RETURN_TRAITS_HPP_BUILTINS

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_BUILTINS_MAJOR     1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_BUILTINS_MINOR     3
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_BUILTINS_REVISION  2
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_BUILTINS_EDIT      12
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/error/exceptions.hpp>
#include <vole/return_traits/com_return_traits.hpp>
#include <vole/util/common.hpp>

#include <stlsoft/conversion/truncation_test.hpp>

#include <comstl/util/variant.hpp>

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
namespace vole
{
#endif /* !VOLE_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Classes
 */

/** Specialisation of vole::com_return_traits for the <code>bool</code>
 *   type.
 */
template <>
struct com_return_traits<bool>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>bool</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     *
     * \warning The promotions from integral types are still under debate, and
     *   may be removed in a future version. If you have any comments on the
     *   matter, feel free to post a discussion on the VOLE forums.
     */
    static bool convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        HRESULT hrX = DISP_E_TYPEMISMATCH;

        if(VT_BOOL != var.vt)
        {
            if(coercionLevel >= coercion_level::naturalPromotion)
            {
                // Section 4.12 of the C++ standard (C++-03) states:
                //
                // "An rvalue of arithmetic, enumeration, pointer, or pointer
                //  to member type can be converted to an rvalue of type bool.
                //  A zero value, null pointer value, or null member pointer
                //  value is converted to false; any other value is converted
                //  to true."
                //
                // When in Rome ...

                switch(var.vt)
                {
                    case    VT_I1:
                        return 0 != var.cVal;
                    case    VT_I2:
                        return 0 != var.iVal;
                    case    VT_I4:
                        return 0 != var.lVal;
                    case    VT_UI1:
                        return 0 != var.bVal;
                    case    VT_UI2:
                        return 0 != var.uiVal;
                    case    VT_UI4:
                        return 0 != var.ulVal;
                    case    VT_INT:
                        return 0 != var.intVal;
                    case    VT_UINT:
                        return 0 != var.uintVal;
                    case    VT_R4:
                        return 0 != var.fltVal;
                    case    VT_R8:
                        return 0 != var.dblVal;
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::nonDestructiveCoercion)
            {
                switch(var.vt)
                {
                    case    VT_EMPTY:
                    case    VT_NULL:
                        return false;
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::valueCoercion)
            {
                if(VT_ERROR == var.vt)
                {
                    return 0 == var.scode;
                }
                else
                {
                    comstl::variant varCopy;
                    HRESULT         hr = varCopy.try_conversion_copy(var, VT_BOOL);

                    if(SUCCEEDED(hr))
                    {
                        return VARIANT_FALSE != varCopy.boolVal;
                    }
                    else
                    {
                        hrX = hr;
                    }
                }
            }

            goto do_throw;
        }

        return VARIANT_FALSE != var.boolVal;

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to bool", hrX);
    }
};

/** Specialisation of vole::com_return_traits for the <code>short</code>
 *   type.
 */
template <>
struct com_return_traits<short>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>short</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static short convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        HRESULT hrX = DISP_E_TYPEMISMATCH;

        if(VT_I2 != var.vt)
        {
            if(coercionLevel >= coercion_level::naturalPromotion)
            {
                switch(var.vt)
                {
                    case    VT_I1:
                        return static_cast<short>(var.cVal);
                    case    VT_UI1:
                        return static_cast<short>(var.bVal);
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::nonDestructiveCoercion)
            {
                switch(var.vt)
                {
                    case    VT_EMPTY:
                    case    VT_NULL:
                        return 0;
                    case    VT_INT:
                        if(stlsoft::truncation_test<short>(var.intVal))
                        {
                            return static_cast<short>(var.intVal);
                        }
                        break;
                    case    VT_UINT:
                        if(stlsoft::truncation_test<short>(var.uintVal))
                        {
                            return static_cast<short>(var.uintVal);
                        }
                        break;
                    case    VT_UI2:
                        if(stlsoft::truncation_test<short>(var.uiVal))
                        {
                            return static_cast<short>(var.uiVal);
                        }
                        break;
                    case    VT_I4:
                        if(stlsoft::truncation_test<short>(var.lVal))
                        {
                            return static_cast<short>(var.lVal);
                        }
                        break;
                    case    VT_UI4:
                        if(stlsoft::truncation_test<short>(var.ulVal))
                        {
                            return static_cast<short>(var.ulVal);
                        }
                        break;
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::valueCoercion)
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_I2);

                if(SUCCEEDED(hr))
                {
                    return varCopy.iVal;
                }
                else
                {
                    hrX = hr;
                }
            }

            goto do_throw;
        }

        return var.iVal;

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to short", hrX);
    }
};

/** Specialisation of vole::com_return_traits for the <code>int</code>
 *   type.
 */
template <>
struct com_return_traits<int>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>int</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static int convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        HRESULT hrX = DISP_E_TYPEMISMATCH;

        if(VT_I4 != var.vt)
        {
            if(coercionLevel >= coercion_level::naturalPromotion)
            {
                switch(var.vt)
                {
                    case    VT_I1:
                        return static_cast<int>(var.cVal);
                    case    VT_UI1:
                        return static_cast<int>(var.bVal);
                    case    VT_I2:
                        return static_cast<int>(var.iVal);
                    case    VT_UI2:
                        return static_cast<int>(var.uiVal);
                    case    VT_INT:
                        return static_cast<int>(var.intVal);
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::nonDestructiveCoercion)
            {
                switch(var.vt)
                {
                    case    VT_EMPTY:
                    case    VT_NULL:
                        return 0;
                    case    VT_UI4:
                        if(stlsoft::truncation_test<int>(var.ulVal))
                        {
                            return static_cast<int>(var.ulVal);
                        }
                        break;
                    case    VT_UINT:
                        if(stlsoft::truncation_test<short>(var.uintVal))
                        {
                            return static_cast<short>(var.uintVal);
                        }
                        break;
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::valueCoercion)
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_I4);

                if(SUCCEEDED(hr))
                {
                    return varCopy.lVal;
                }
                else
                {
                    hrX = hr;
                }
            }

            goto do_throw;
        }

        return var.lVal;

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to int", hrX);
    }
};

/** Specialisation of vole::com_return_traits for the <code>long</code>
 *   type.
 */
template <>
struct com_return_traits<long>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>long</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static long convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        HRESULT hrX = DISP_E_TYPEMISMATCH;

        if(VT_I4 != var.vt)
        {
            if(coercionLevel >= coercion_level::naturalPromotion)
            {
                switch(var.vt)
                {
                    case    VT_I1:
                        return static_cast<long>(var.cVal);
                    case    VT_UI1:
                        return static_cast<long>(var.bVal);
                    case    VT_I2:
                        return static_cast<long>(var.iVal);
                    case    VT_UI2:
                        return static_cast<long>(var.uiVal);
                    case    VT_INT:
                        return static_cast<short>(var.intVal);
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::nonDestructiveCoercion)
            {
                switch(var.vt)
                {
                    case    VT_EMPTY:
                    case    VT_NULL:
                        return 0;
                    case    VT_UI4:
                        if(stlsoft::truncation_test<long>(var.ulVal))
                        {
                            return static_cast<long>(var.ulVal);
                        }
                        break;
                    case    VT_UINT:
                        if(stlsoft::truncation_test<short>(var.uintVal))
                        {
                            return static_cast<short>(var.uintVal);
                        }
                        break;
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::valueCoercion)
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_I4);

                if(SUCCEEDED(hr))
                {
                    return varCopy.lVal;
                }
                else
                {
                    hrX = hr;
                }
            }

            goto do_throw;
        }

        return var.lVal;

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to long", hrX);
    }
};

/** Specialisation of vole::com_return_traits for the <code>double</code>
 *   type.
 */
template <>
struct com_return_traits<double>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>long</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static double convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        HRESULT hrX = DISP_E_TYPEMISMATCH;

        if(VT_R8 != var.vt)
        {
            if(coercionLevel >= coercion_level::naturalPromotion)
            {
                switch(var.vt)
                {
                    case    VT_R4:
                        return static_cast<double>(var.fltVal);
                    case    VT_I1:
                        return static_cast<double>(var.cVal);
                    case    VT_UI1:
                        return static_cast<double>(var.bVal);
                    case    VT_I2:
                        return static_cast<double>(var.iVal);
                    case    VT_UI2:
                        return static_cast<double>(var.uiVal);
                    case    VT_I4:
                        return static_cast<double>(var.lVal);
                    case    VT_UI4:
                        return static_cast<double>(var.ulVal);
                    case    VT_INT:
                        return static_cast<double>(var.intVal);
                    case    VT_UINT:
                        return static_cast<double>(var.uintVal);
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::nonDestructiveCoercion)
            {
                switch(var.vt)
                {
                    case    VT_EMPTY:
                    case    VT_NULL:
                        return 0.0;
                }
            }

            if( coercionLevel >= coercion_level::valueCoercion ||
                (   coercionLevel >= coercion_level::nonDestructiveCoercion &&
                    VT_DECIMAL == var.vt) ||
                VOLE_util_always_false_())
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_R8);

                if(SUCCEEDED(hr))
                {
                    return varCopy.dblVal;
                }
                else
                {
                    hrX = hr;
                }
            }

            goto do_throw;
        }

        return var.dblVal;

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to double", hrX);
    }
};

/** Specialisation of vole::com_return_traits for the <code>float</code>
 *   type.
 */
template <>
struct com_return_traits<float>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>long</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static float convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        HRESULT hrX = DISP_E_TYPEMISMATCH;

        if(VT_R4 != var.vt)
        {
            if(coercionLevel >= coercion_level::naturalPromotion)
            {
                switch(var.vt)
                {
                    case    VT_I1:
                        return static_cast<float>(var.cVal);
                    case    VT_UI1:
                        return static_cast<float>(var.bVal);
                    case    VT_I2:
                        return static_cast<float>(var.iVal);
                    case    VT_UI2:
                        return static_cast<float>(var.uiVal);
                    case    VT_I4:
                        return static_cast<float>(var.lVal);
                    case    VT_UI4:
                        return static_cast<float>(var.ulVal);
                    case    VT_INT:
                        return static_cast<float>(var.intVal);
                    case    VT_UINT:
                        return static_cast<float>(var.uintVal);
                    default:
                        break;
                }
            }

            if(coercionLevel >= coercion_level::nonDestructiveCoercion)
            {
                switch(var.vt)
                {
                    case    VT_EMPTY:
                    case    VT_NULL:
                        return 0.0f;
                    case    VT_R8:
                        if(can_convert_double_(var.dblVal))
                        {
                            return static_cast<float>(var.dblVal);
                        }
                        break;
                }
            }

            if( coercionLevel >= coercion_level::valueCoercion ||
                (   coercionLevel >= coercion_level::nonDestructiveCoercion &&
                    VT_DECIMAL == var.vt) ||
                VOLE_util_always_false_())
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_R4);

                if(SUCCEEDED(hr))
                {
                    return varCopy.fltVal;
                }
                else
                {
                    hrX = hr;
                }
            }

            goto do_throw;
        }

        return var.fltVal;

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to float", hrX);
    }

private:
    static bool can_convert_double_(double dblVal)
    {
        if(0.0 == dblVal)
        {
            return true;
        }
        else
        {
            float   fltVal  =   static_cast<float>(dblVal);
            double  dblVal2 =   fltVal;
            double  result  =   dblVal / dblVal2;

            if( result > 0.99999999 &&
                result < 1.00000001)
            {
                return true;
            }
        }

        return false;
    }
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_RETURN_TRAITS_HPP_BUILTINS */

/* ///////////////////////////// end of file //////////////////////////// */
