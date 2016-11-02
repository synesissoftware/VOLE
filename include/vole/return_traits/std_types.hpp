/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/return_traits/std_types.hpp
 *
 * Purpose:     Specialisations of vole::com_return_traits for standard C++
 *              types.
 *
 * Created:     16th January 2007
 * Updated:     5th March 2010
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2007-2010, Matthew Wilson and Synesis Software
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


/** \file vole/return_traits/std_types.hpp
 *
 * \brief Specialisations of vole::com_return_traits for standard C++ types.
 */

#ifndef VOLE_INCL_VOLE_RETURN_TRAITS_HPP_STD_TYPES
#define VOLE_INCL_VOLE_RETURN_TRAITS_HPP_STD_TYPES

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_STD_TYPES_MAJOR    1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_STD_TYPES_MINOR    2
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_STD_TYPES_REVISION 1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_STD_TYPES_EDIT     8
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/error/exceptions.hpp>
#include <vole/return_traits/com_return_traits.hpp>
#include <vole/util/common.hpp>

#include <stlsoft/smartptr/scoped_handle.hpp>

#include <winstl/conversion/char_conversions.hpp>
#include <winstl/error/error_desc.hpp>

#include <string>

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

/** Specialisation of vole::com_return_traits for the
 *   <code>std::string</code> type.
 */
template <>
struct com_return_traits<std::string>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>std::string</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static std::string convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_BSTR == var.vt)
        {
            return std::string(winstl::w2a(var.bstrVal).c_str());
        }
        else
        {
            HRESULT hrX = DISP_E_TYPEMISMATCH;

            if(int(coercionLevel) < coercion_level::nonDestructiveCoercion)
            {
    do_throw:
                throw type_conversion_exception("Could not convert VARIANT to string", hrX);
            }
            else
            {
                if( VT_ERROR == var.vt &&
                    coercion_level::valueCoercion == coercionLevel)
                {
                    winstl::error_desc_a desc(var.scode);

                    if(!desc.empty())
                    {
                        return std::string(desc.c_str(), desc.size());
                    }
                }

                VARIANT varNew;
                USHORT  wFlags  =   0
                                |   VARIANT_ALPHABOOL
#ifdef VOLE_USE_LOCALBOOL
                                |   VARIANT_LOCALBOOL
#endif /* VOLE_USE_LOCALBOOL */
                                |   0
                                ;

                if(int(coercionLevel) < coercion_level::valueCoercion)
                {
                    wFlags |= VARIANT_NOVALUEPROP;
                }

                ::VariantInit(&varNew);

                HRESULT hr = ::VariantChangeType(&varNew, const_cast<VARIANT*>(&var), 0, VT_BSTR);

                if(FAILED(hr))
                {
                    hrX = hr;

                    goto do_throw;
                }
                else
                {
                    stlsoft::scoped_handle<VARIANT*>    sh(&varNew, ::VariantClear);

                    return convert(varNew, coercion_level::noCoercion);
                }
            }
        }
    }
};

/** Specialisation of vole::com_return_traits for the
 *   <code>std::wstring</code> type.
 */
template <>
struct com_return_traits<std::wstring>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>std::wstring</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static std::wstring convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_BSTR == var.vt)
        {
            return std::wstring(var.bstrVal, size_t(::SysStringLen(var.bstrVal)));
        }
        else
        {
            HRESULT hrX = DISP_E_TYPEMISMATCH;

            if(int(coercionLevel) < coercion_level::nonDestructiveCoercion)
            {
    do_throw:
                throw type_conversion_exception("Could not convert VARIANT to string", hrX);
            }
            else
            {
                if( VT_ERROR == var.vt &&
                    coercion_level::valueCoercion == coercionLevel)
                {
                    winstl::error_desc_w desc(var.scode);

                    if(!desc.empty())
                    {
                        return std::wstring(desc.c_str(), desc.size());
                    }
                }

                VARIANT varNew;
                USHORT  wFlags  =   0
                                |   VARIANT_ALPHABOOL
#ifdef VOLE_USE_LOCALBOOL
                                |   VARIANT_LOCALBOOL
#endif /* VOLE_USE_LOCALBOOL */
                                |   0
                                ;

                if(int(coercionLevel) < coercion_level::valueCoercion)
                {
                    wFlags |= VARIANT_NOVALUEPROP;
                }

                ::VariantInit(&varNew);

                HRESULT hr = ::VariantChangeType(&varNew, const_cast<VARIANT*>(&var), 0, VT_BSTR);

                if(FAILED(hr))
                {
                    hrX = hr;

                    goto do_throw;
                }
                else
                {
                    stlsoft::scoped_handle<VARIANT*>    sh(&varNew, ::VariantClear);

                    return convert(varNew, coercion_level::noCoercion);
                }
            }
        }
    }
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_RETURN_TRAITS_HPP_STD_TYPES */

/* ///////////////////////////// end of file //////////////////////////// */
