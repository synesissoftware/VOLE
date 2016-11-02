/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/return_traits/time_types.hpp
 *
 * Purpose:     Specialisations of vole::com_return_traits for time types.
 *
 * Created:     7th September 2008
 * Updated:     5th March 2010
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2008-2010, Matthew Wilson and Synesis Software
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


/** \file vole/return_traits/time_types.hpp
 *
 * \brief Specialisations of vole::com_return_traits for time types.
 */

#ifndef VOLE_INCL_VOLE_RETURN_TRAITS_HPP_TIME_TYPES
#define VOLE_INCL_VOLE_RETURN_TRAITS_HPP_TIME_TYPES

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_TIME_TYPES_MAJOR       1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_TIME_TYPES_MINOR       1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_TIME_TYPES_REVISION    1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_TIME_TYPES_EDIT        5
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/error/exceptions.hpp>
#include <vole/return_traits/com_return_traits.hpp>
#include <vole/util/common.hpp>

#include <stlsoft/util/true_typedef.hpp>
#include <winstl/shims/conversion/to_SYSTEMTIME.hpp>
#include <winstl/shims/conversion/to_FILETIME.hpp>

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
namespace vole
{
#endif /* !VOLE_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Typedefs
 */

/** <a href = "http://">Disambiguated type</a> for eliciting date return
 * values (C++ type: <code>DATE</code>; Variant Type: <code>VT_DATE</code>).
 *
 */
typedef stlsoft::true_typedef<DATE, DATE*>  date_t;

/* /////////////////////////////////////////////////////////////////////////
 * Classes
 */

/** Specialisation of vole::com_return_traits for the
 *   <code>date_t</code> (aka <code>DATE</code>) type.
 */
template <>
struct com_return_traits<date_t>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>date_t</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     *
     * \note If <code>coercionLevel</code> parameter is valueCoercion, then
     *   conversion will be attemped. Otherwise, the variant type must be
     *   <code>VT_DATE</code>
     */
    static date_t convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_DATE == var.vt)
        {
            return date_t(var.date);
        }
        else
        {
            HRESULT hrX = DISP_E_TYPEMISMATCH;

            if(coercion_level::valueCoercion == coercionLevel)
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_DATE);

                if(SUCCEEDED(hr))
                {
                    return date_t(varCopy.date);
                }
                else
                {
                    hrX = hr;
                }
            }

            throw type_conversion_exception("Could not convert VARIANT to date", hrX);
        }
    }
};

/** Specialisation of vole::com_return_traits for the
 *   <code>SYSTEMTIME</code> type.
 */
template <>
struct com_return_traits<SYSTEMTIME>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>SYSTEMTIME</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     *
     * \note If <code>coercionLevel</code> parameter is valueCoercion, then
     *   conversion will be attemped. Otherwise, the variant type must be
     *   <code>VT_DATE</code>
     */
    static SYSTEMTIME convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_DATE == var.vt)
        {
            return winstl::to_SYSTEMTIME(var.date);
        }
        else
        {
            HRESULT hrX = DISP_E_TYPEMISMATCH;

            if(coercion_level::valueCoercion == coercionLevel)
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_DATE);

                if(SUCCEEDED(hr))
                {
                    return winstl::to_SYSTEMTIME(varCopy.date);
                }
                else
                {
                    hrX = hr;
                }
            }

            throw type_conversion_exception("Could not convert VARIANT to date", hrX);
        }
    }
};

/** Specialisation of vole::com_return_traits for the
 *   <code>FILETIME</code> type.
 */
template <>
struct com_return_traits<FILETIME>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>FILETIME</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     *
     * \note If <code>coercionLevel</code> parameter is valueCoercion, then
     *   conversion will be attemped. Otherwise, the variant type must be
     *   <code>VT_DATE</code>
     */
    static FILETIME convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_DATE == var.vt)
        {
            return winstl::to_FILETIME(var.date);
        }
        else
        {
            HRESULT hrX = DISP_E_TYPEMISMATCH;

            if(coercion_level::valueCoercion == coercionLevel)
            {
                comstl::variant varCopy;
                HRESULT         hr = varCopy.try_conversion_copy(var, VT_DATE);

                if(SUCCEEDED(hr))
                {
                    return winstl::to_FILETIME(varCopy.date);
                }
                else
                {
                    hrX = hr;
                }
            }

            throw type_conversion_exception("Could not convert VARIANT to date", hrX);
        }
    }
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_RETURN_TRAITS_HPP_TIME_TYPES */

/* ///////////////////////////// end of file //////////////////////////// */
