/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/return_traits/ole_types.hpp
 *
 * Purpose:     Specialisations of vole::com_return_traits for OLE types.
 *
 * Created:     10th August 2006
 * Updated:     5th March 2010
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2006-2010, Matthew Wilson and Synesis Software
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


/** \file vole/return_traits/ole_types.hpp
 *
 * \brief Specialisations of vole::com_return_traits for OLE types.
 */

#ifndef VOLE_INCL_VOLE_RETURN_TRAITS_HPP_OLE_TYPES
#define VOLE_INCL_VOLE_RETURN_TRAITS_HPP_OLE_TYPES

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_OLE_TYPES_MAJOR    1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_OLE_TYPES_MINOR    2
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_OLE_TYPES_REVISION 1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_OLE_TYPES_EDIT     8
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/error/exceptions.hpp>
#include <vole/return_traits/com_return_traits.hpp>
#include <vole/util/common.hpp>

#include <stlsoft/smartptr/ref_ptr.hpp>
#include <stlsoft/smartptr/scoped_handle.hpp>

#include <comstl/string/bstr.hpp>
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

/** Specialisation of vole::com_return_traits for the
 *   <code>comstl::bstr</code> type.
 */
template <>
struct com_return_traits<comstl::bstr>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>comstl::bstr</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static comstl::bstr convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        STLSOFT_SUPPRESS_UNUSED(coercionLevel);

        VARIANT varNew;

        ::VariantInit(&varNew);

        HRESULT hr = ::VariantChangeType(&varNew, const_cast<VARIANT*>(&var), 0, VT_BSTR);

        if(FAILED(hr))
        {
            throw type_conversion_exception("Could not convert VARIANT to string", hr);
        }
        else
        {
            stlsoft::scoped_handle<VARIANT*>    sh(&varNew, ::VariantClear);

            return comstl::bstr(varNew.bstrVal);
        }
    }
};

/** Specialisation of vole::com_return_traits for the
 *   <code>comstl::variant</code> type.
 */
template <>
struct com_return_traits<comstl::variant>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>comstl::variant</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static comstl::variant convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        STLSOFT_SUPPRESS_UNUSED(coercionLevel);

        return comstl::variant(var);
    }
};

/** Specialisation of vole::com_return_traits for the
 *   <code>stlsoft::ref_ptr&lt;IDispatch></code> type.
 */
template <>
struct com_return_traits<stlsoft::ref_ptr<IDispatch> >
{
public:
    /// smart-pointer specialisation for this type
    typedef stlsoft::ref_ptr<IDispatch> IDispatch_ptr;

public:
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>stlsoft::ref_ptr&lt;IDispatch></code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static IDispatch_ptr convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_DISPATCH != var.vt)
        {
            if(int(coercionLevel) < coercion_level::nonDestructiveCoercion)
            {
                if(VT_UNKNOWN == var.vt)
                {
                    // A 'nonDestructiveCoercion' is to QI for IDispatch
                    LPDISPATCH  pdisp;

                    if(NULL == var.punkVal)
                    {
                        return IDispatch_ptr();
                    }
                    else if(SUCCEEDED(var.punkVal->QueryInterface(IID_IDispatch, reinterpret_cast<void**>(&pdisp))))
                    {
                        return IDispatch_ptr(pdisp, false);
                    }
                }
            }

            goto do_throw;
        }

        return IDispatch_ptr(var.pdispVal, true);

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to IDispatch*", DISP_E_TYPEMISMATCH);
    }
};

/** Specialisation of vole::com_return_traits for the
 *   <code>stlsoft::ref_ptr&lt;IUnknown></code> type.
 */
template <>
struct com_return_traits<stlsoft::ref_ptr<IUnknown> >
{
public:
    /// smart-pointer specialisation for this type
    typedef stlsoft::ref_ptr<IUnknown>  IUnknown_ptr;

public:
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>stlsoft::ref_ptr&lt;IUnknown></code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static IUnknown_ptr convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        if(VT_UNKNOWN != var.vt)
        {
            if(int(coercionLevel) < coercion_level::naturalPromotion)
            {
                if(VT_DISPATCH == var.vt)
                {
                    return IUnknown_ptr(var.pdispVal, true);
                }
            }

            goto do_throw;
        }

        return IUnknown_ptr(var.punkVal, true);

    do_throw:
        throw type_conversion_exception("Could not convert VARIANT to IUnknown*", DISP_E_TYPEMISMATCH);
    }
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_RETURN_TRAITS_HPP_OLE_TYPES */

/* ///////////////////////////// end of file //////////////////////////// */
