/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/return_traits/coercion_level.hpp
 *
 * Purpose:     Definition of the vole::coercion_level::coercion_level
 *              enumeration.
 *
 * Created:     10th August 2006
 * Updated:     26th December 2009
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2006-2009, Matthew Wilson and Synesis Software
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


/** \file vole/return_traits/coercion_level.hpp
 *
 * \brief Definition of the vole::coercion_level::coercion_level
 *   enumeration.
 */

#ifndef VOLE_INCL_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL
#define VOLE_INCL_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL_MAJOR       1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL_MINOR       1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL_REVISION    1
# define VOLE_VER_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL_EDIT        4
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

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

/** Defines the coercion levels that are passed to the constructors of
 *   vole::object and vole::collection classes, that control the coercion
 *   of return values.
 */
namespace coercion_level
{
    /** The coercion level, passed to the constructors of 
     *   vole::object and vole::collection classes, that control the coercion
     *   of return values.
     */
    enum coercion_level
    {
            noCoercion              =   0   /*!< No coercion is performed. If the requested type is not exact, an exception will be thrown. */
        ,   naturalPromotion        =   1   /*!< Natural (C/C++ language) promotion will be allowed. Any other conversion will result in an exception being thrown. */
        ,   nonDestructiveCoercion  =   2   /*!< Natural (C/C++ language) promotion, plus coercion to other types without loss of value are allowed. Any other conversion will result in an exception being thrown. */
        ,   valueCoercion           =   3   /*!< Full coercive abilities of COM are used. Only when <code>VariantChangeType()</code> fails will an exception be thrown. */
    };

} // namespace coercion_level

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_RETURN_TRAITS_HPP_COERCION_LEVEL */

/* ///////////////////////////// end of file //////////////////////////// */
