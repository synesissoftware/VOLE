/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/collection.hpp
 *
 * Purpose:     Definition of the vole::collection type.
 *
 * Created:     4th January 2007
 * Updated:     9th August 2012
 *
 * Home:        http://vole.sourceforge.net/
 *
 * Copyright (c) 2007-2012, Matthew Wilson and Synesis Software
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


/** \file vole/collection.hpp
 *
 * \brief Definition of the vole::collection type.
 */

#ifndef VOLE_INCL_VOLE_HPP_COLLECTION
#define VOLE_INCL_VOLE_HPP_COLLECTION

#ifndef VOLE_DOCUMENTATION_SKIP_SECTION
# define VOLE_VER_VOLE_HPP_COLLECTION_MAJOR     1
# define VOLE_VER_VOLE_HPP_COLLECTION_MINOR     1
# define VOLE_VER_VOLE_HPP_COLLECTION_REVISION  4
# define VOLE_VER_VOLE_HPP_COLLECTION_EDIT      12
#endif /* !VOLE_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#include <vole/object.hpp>

#include <stlsoft/properties/method_properties.hpp>

#include <comstl/collections/enumerator_sequence.hpp>
#include <comstl/error/excepinfo_functions.h>
#include <comstl/util/value_policies.hpp>

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

/** \brief OLE collection facade.
 *
 */
class collection
    : public object
{
public:
    /// The parent class type: vole::object
    typedef object                          parent_class_type;
    /// This type
    typedef collection                      class_type;
    /// The wrapped pointer type
    typedef stlsoft::ref_ptr<IDispatch>     ptr_type;
    /// The wrapper enumerator pointer type
    typedef stlsoft::ref_ptr<IEnumVARIANT>  NewEnum_ptr_type;
    /// The value type: <code>comstl::variant</code>
    typedef comstl::variant                 value_type;
    /// The size type
    typedef size_t                          size_type;
    /// The difference type
    typedef ptrdiff_t                       difference_type;
private:
    typedef comstl::enumerator_sequence<
        IEnumVARIANT
    ,   VARIANT
    ,   comstl::VARIANT_policy
    ,   VARIANT const&
    ,   comstl::input_cloning_policy<IEnumVARIANT>
    ,   5
    >                                       enumerator_sequence_type_;
public:
    /// The iterator type
    class                                   iterator
        : public stlsoft::iterator_base<std::input_iterator_tag, value_type, difference_type, void, void>
    {
    public:
        /// This type
        typedef iterator    class_type;
    private:
#ifdef VOLE_NO_NAMESPACE
        friend class ::collection;
#else /* ? VOLE_NO_NAMESPACE */
        friend class ::vole::collection;
#endif /* VOLE_NO_NAMESPACE */

    public:
        /// Default constructor
        iterator()
            : m_it()
        {}
    private:
        iterator(enumerator_sequence_type_::iterator it)
            : m_it(it)
        {}

    public:
        /// Deferences the iterator
        ///
        /// \note Behaviour is undefined if iterator is invalid
        value_type operator *()
        {
            return *m_it;
        }
        /// Increments the iterator
        ///
        /// \note Behaviour is undefined if iterator is invalid
        class_type &operator ++()
        {
            ++m_it;

            return *this;
        }
        /// Determines the equivalence with another instance
        ///
        /// \param rhs The other instances
        int equal(class_type const& rhs) const
        {
            return m_it == rhs.m_it;
        }

    private:
        enumerator_sequence_type_::iterator m_it;
    };


public:
    /// Constructs an instance of the collection, from a wrapped pointer to
    /// <code>IDispatch</code>.
    collection(ptr_type p, coercion_level::coercion_level coercionLevel = coercion_level::naturalPromotion)
        : parent_class_type(p, coercionLevel)
    {}
    /// Constructs an instance of the collection, from a vole::object.
    collection(parent_class_type obj)
        : parent_class_type(obj)
    {}
    /// Constructs an instance of the collection, from a <code>VARIANT</code>.
    collection(VARIANT &var, coercion_level::coercion_level coercionLevel = coercion_level::naturalPromotion)
        : parent_class_type(var, coercionLevel)
    {}

/// \name Specific properties
/// @{
public:
    /// The number of elements in the collection
    long    get_Count() const
    {
        return this->get_property(of_type<long>(), L"Count");
    }

    /// Accesses an element, using the default value (DISPID_VALUE)
    ///
    /// \remarks Because the Item member may be implemented either as a
    ///   property or as a method, this implemented attempt both, first
    ///   as a property, and then as a method. If both fail, an exception
    ///   is thrown.
    template <typename I0>
    value_type operator [](I0 const& i0) const
    {
        ptr_type        disp = get_checked_disp_();
        comstl::variant result;
        comstl::variant param0(i0);
        DISPPARAMS      dispparams = { &param0, NULL, 1, 0 };
        EXCEPINFO       xi = { 0, 0, NULL, NULL, NULL, 0, NULL, NULL, 0 };
        HRESULT         hr = disp->Invoke(DISPID_VALUE, IID_NULL, this->lcid(), DISPATCH_PROPERTYGET, &dispparams, &result, &xi, NULL);

        comstl::EXCEPINFO_free(&xi); // Don't care about the strings (and must ensure they're free'd)

        if(DISP_E_MEMBERNOTFOUND == hr)
        {
            hr = disp->Invoke(DISPID_VALUE, IID_NULL, this->lcid(), DISPATCH_METHOD, &dispparams, &result, &xi, NULL);

            comstl::EXCEPINFO_free(&xi); // Don't care about the strings (and must ensure they're free'd)
        }

        if(FAILED(hr))
        {
            throw invocation_exception("Default value not obtainable on collection", hr);
        }

        return result;
    }

    /// If the object is a collection, this property returns its enumerator.
    ///
    /// \exception vole::invocation_exception
    NewEnum_ptr_type get__NewEnum() const
    {
        typedef stlsoft::ref_ptr<IUnknown>  Unknown_ptr_t;

        Unknown_ptr_t unk;

        VARIANT     result;
        DISPPARAMS  params = { NULL, NULL, 0, 0 };
        HRESULT     hr;

        ::VariantInit(&result);
        hr = get()->Invoke(DISPID_NEWENUM, IID_NULL, lcid(), DISPATCH_PROPERTYGET, &params, &result, NULL, NULL);

        if(DISP_E_MEMBERNOTFOUND == hr)
        {
            hr = get()->Invoke(DISPID_NEWENUM, IID_NULL, lcid(), DISPATCH_METHOD, &params, &result, NULL, NULL);
        }

        if(FAILED(hr))
        {
            throw invocation_exception("could not elicit collection's enumerator", hr);
        }
        else
        {
            unk.set(result.punkVal, false);
        }

        return comstl::interface_cast<IEnumVARIANT>(unk);
    }
/// @}

#ifdef VOLE_DOCUMENTATION_SKIP_SECTION
    /// This property invokes the underlying collection object's
    /// <b>Count</b> property.
    ///
    /// \note Accessing this property is equivalent to invoking
    ///   the get_Count() method.
    ///
    /// \exception vole::vole_exception
    long                Count;

    /// This property invokes the underlying collection object's
    /// <b>_NewEnum</b> property
    ///
    /// \note Accessing this property is equivalent to invoking
    ///   the get__NewEnum() method.
    ///
    /// \exception vole::vole_exception
    NewEnum_ptr_type    _NewEnum;

#elif defined(VOLE_METHOD_PROPERTY_SUPPORT)
    VOLE_OPT_METHOD_PROPERTY_DEFINE_OFFSET(class_type, Count);
    VOLE_OPT_METHOD_PROPERTY_DEFINE_OFFSET(class_type, _NewEnum);
union
{
    VOLE_OPT_METHOD_PROPERTY_GET_PROP(long, class_type, get_Count, Count);
    VOLE_OPT_METHOD_PROPERTY_GET_PROP(NewEnum_ptr_type, class_type, get__NewEnum, _NewEnum);
};
#endif /* VOLE_METHOD_PROPERTY_SUPPORT */

/// \name Iteration
/// @{
public:
    /// Returns an iterator referring to the beginning of the element
    /// sequence.
    iterator    begin() const
    {
        // TODO: Evaluate whether this should be checked against NULL, a la get_checked_disp_()
        enumerator_sequence_type_ es(get__NewEnum().get(), true);

        return iterator(es.begin());
    }
    /// Returns an end-point iterator, marking the end of the element
    /// sequence.
    iterator    end() const
    {
        return iterator();
    }
/// @}
};

/// Evaluates whether two iterator instances are equal
inline int operator ==(collection::iterator const& lhs, collection::iterator const& rhs)
{
    return lhs.equal(rhs);
}

/// Evaluates whether two iterator instances are not equal
inline int operator !=(collection::iterator const& lhs, collection::iterator const& rhs)
{
    return !lhs.equal(rhs);
}


// Traits for vole::object

/** Specialisation of vole::com_return_traits for the <code>vole::collection</code>
 *   type.
 */
template <>
struct com_return_traits<collection>
{
    /** Converts the given <code>VARIANT</code> to an instance of
     *   <code>vole::collection</code>, according to the given coercion level.
     *
     * \param var The variant returned by the call to
     *   <code>IDispatch::Invoke()</code>
     * \param coercionLevel Level of coercion supplied to the constructor of
     *   vole::object or vole::collection.
     */
    static collection convert(VARIANT const& var, coercion_level::coercion_level coercionLevel)
    {
        return com_return_traits<object>::convert(var, coercionLevel);
    }
};

/* ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_NO_NAMESPACE
} // namespace vole
#endif /* !VOLE_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !VOLE_INCL_VOLE_HPP_COLLECTION */

/* ///////////////////////////// end of file //////////////////////////// */
