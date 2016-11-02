/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/argument_traits/com_argument_traits.hpp
 *
 * Purpose:     Definition of the vole::com_argument_traits traits class.
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


/** \file vole/argument_traits/com_argument_traits.hpp
 *
 * \brief Definition of the vole::com_argument_traits traits class.
 */

#ifndef VOLE_INCL_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS
#define VOLE_INCL_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS_MAJOR    1
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS_MINOR    0
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS_REVISION 2
# define VOLE_VER_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS_EDIT     2
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

/* VOLE Header Files */
#include <vole/util/common.hpp>
#include <vole/util/variant_base_type.hpp>

/* STLSoft Header Files */
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

/** Traits class that determines how an argument will be converted into a
 *   <code>VARIANT</code> in order to be passed to an automation method..
 */
template <ss_typename_param_k T>
struct com_argument_traits
{
private:
    struct need_to_specialise_the_traits_for_your_argument_type
    {};

public:
    /** Specialise and define a to_variant() static method with a return
     *   type of variant_base_type
     */

    // NOTE: if you end up here, you are trying to use a type for which
    // no specialisation of the traits is defined (or visible to your)
    // compiler. *You* need to provide such a specialisation!
    static need_to_specialise_the_traits_for_your_argument_type to_variant(T const& v);
};

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_ARGUMENT_TRAITS_HPP_COM_ARGUMENT_TRAITS */

/* ///////////////////////////// end of file //////////////////////////// */
