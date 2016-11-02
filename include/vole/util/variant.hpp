/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/util/variant.hpp
 *
 * Purpose:     Definition of the vole::variant utility class.
 *
 * Created:     6th March 2010
 * Updated:     9th August 2012
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2010-2012, Matthew Wilson and Synesis Software
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


/** \file vole/object.hpp
 *
 * \brief Definition of the vole::variant utility class.
 */

#ifndef VOLE_INCL_VOLE_UTIL_HPP_VARIANT
#define VOLE_INCL_VOLE_UTIL_HPP_VARIANT

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_UTIL_HPP_VARIANT_MAJOR       1
# define VOLE_VER_VOLE_UTIL_HPP_VARIANT_MINOR       0
# define VOLE_VER_VOLE_UTIL_HPP_VARIANT_REVISION    2
# define VOLE_VER_VOLE_UTIL_HPP_VARIANT_EDIT        3
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

/* VOLE Header Files */
#include <vole/util/common.hpp>
#include <vole/util/variant_base_type.hpp>
#include <vole/argument_traits/com_argument_traits.hpp>

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

class variant
    : public variant_base_type
{
public:
    typedef variant_base_type   parent_class_type;
    typedef variant             class_type;

public:
    variant()
        : parent_class_type()
    {}
    variant(VARIANT const& rhs)
        : parent_class_type(rhs)
    {}
#if 0
    // Cannot define these here, otherwise we get ambiguous
    // conversions when specifying arguments of type
    //
    // - VARIANT
    // - comstl::variant
    // - vole::variant
    variant(class_type const& rhs)
        : parent_class_type(rhs)
    {}
    variant(parent_class_type const& rhs)
        : parent_class_type(rhs)
    {}
#endif /* 0 */
    class_type& operator =(class_type const& rhs)
    {
        parent_class_type::operator =(rhs);

        return *this;
    }
    variant(bool b)
        : parent_class_type(b)
    {}
    variant(stlsoft::sint8_t i)
        : parent_class_type(i)
    {}
    variant(stlsoft::uint8_t i)
        : parent_class_type(i)
    {}
    variant(stlsoft::sint16_t i)
        : parent_class_type(i)
    {}
    variant(stlsoft::uint16_t i)
        : parent_class_type(i)
    {}
    variant(stlsoft::sint32_t i)
        : parent_class_type(i)
    {}
    variant(stlsoft::uint32_t i)
        : parent_class_type(i)
    {}
#ifdef STLSOFT_CF_SHORT_DISTINCT_INT_TYPE
    variant(short i)
        : parent_class_type(i)
    {}
    variant(unsigned short i)
        : parent_class_type(i)
    {}
#endif /* STLSOFT_CF_SHORT_DISTINCT_INT_TYPE */

#ifdef STLSOFT_CF_INT_DISTINCT_INT_TYPE
    variant(int i)
        : parent_class_type(i)
    {}
    variant(unsigned int i)
        : parent_class_type(i)
    {}
#endif /* STLSOFT_CF_INT_DISTINCT_INT_TYPE */

#ifdef STLSOFT_CF_LONG_DISTINCT_INT_TYPE
    variant(long i)
        : parent_class_type(i)
    {}
    variant(unsigned long i)
        : parent_class_type(i)
    {}
#endif /* STLSOFT_CF_LONG_DISTINCT_INT_TYPE */

    variant(float r)
        : parent_class_type(r)
    {}
    variant(double r)
        : parent_class_type(r)
    {}
    variant(CY cy)
        : parent_class_type(cy)
    {}
    variant(DECIMAL const& dec)
        : parent_class_type(dec)
    {}

    variant(LPUNKNOWN punk, bool_type bAddRef)
        : parent_class_type(punk, bAddRef)
    {}
    variant(LPDISPATCH pdisp, bool_type bAddRef)
        : parent_class_type(pdisp, bAddRef)
    {}
    variant(char const* s, int len = -1)
        : parent_class_type(s, len)
    {}
    variant(wchar_t const* s, int len = -1)
        : parent_class_type(s, len)
    {}
    variant(VARIANT const& var, VARTYPE vt)
        : parent_class_type(var, vt)
    {}

    template <typename T>
    variant(T const& value)
        : parent_class_type(com_argument_traits<T>::to_variant(value))
    {}
};

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_UTIL_HPP_VARIANT */

/* ///////////////////////////// end of file //////////////////////////// */
