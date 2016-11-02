/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/return_traits/com_return_traits.hpp
 *
 * Purpose:     Definition of the vole::com_return_traits traits class.
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


/** \file vole/return_traits/com_return_traits.hpp
 *
 * \brief Definition of the vole::com_return_traits traits class.
 */

#ifndef VOLE_INCL_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS
#define VOLE_INCL_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS_MAJOR    2
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS_MINOR    0
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS_REVISION 1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS_EDIT     4
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/return_traits/coercion_level.hpp>
#include <vole/util/common.hpp>

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

/** Traits class that determines how a return value from an automation
 *   function, in the form of a <code>VARIANT</code>, may be converted to
 *   a user-specified type.
 */
template <typename T>
struct com_return_traits
{
    /// \brief Converts the contents of a variant to the type
    ///
    /// \param var The variant whose contents will be copied and converted
    /// \param coercionLevel The conversion level: 0 means exact types are
    ///   matched; 1 means natural conversions (e.g. short=>long) are allowed;
    ///   2 means VariantChangeType is used to coerce the type.
    static T convert(VARIANT const& var, coercion_level::coercion_level coercionLevel);
};

/** Specialisation of vole::com_return_traits for the <code>void</code>
 *   type, used to indicate that a function has no return value.
 */
template <>
struct com_return_traits<void>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>void</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static void convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        STLSOFT_SUPPRESS_UNUSED(var);
        STLSOFT_SUPPRESS_UNUSED(coercionLevel);
    }
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_RETURN_TRAITS_HPP_COM_RETURN_TRAITS */

/* ///////////////////////////// end of file //////////////////////////// */
