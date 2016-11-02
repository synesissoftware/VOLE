/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/argument_traits/MFC_types.hpp
 *
 * Purpose:     Specialisations of vole::com_argument_traits traits for
 *              MFC types.
 *
 * Created:     4th March 2010
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


/** \file vole/argument_traits/MFC_types.hpp
 *
 * \brief Specialisations of vole::com_argument_traits traits for
 *              MFC types.
 */

#ifndef VOLE_INCL_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES
#define VOLE_INCL_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES_MAJOR      1
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES_MINOR      0
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES_REVISION   1
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES_EDIT       1
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

/* VOLE Header Files */
#include <vole/argument_traits/com_argument_traits.hpp>

/* Standard C++ Header Files */
#include <afx.h>

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

template <>
struct com_argument_traits<CString>
{
    static variant_base_type to_variant(CString const& v)
    {
        return variant_base_type(static_cast<LPCTSTR>(v), v.GetLength());
    }
};

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_ARGUMENT_TRAITS_HPP_MFC_TYPES */

/* ///////////////////////////// end of file //////////////////////////// */
