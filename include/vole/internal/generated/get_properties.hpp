/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/internal/generated/get_properties.hpp
 *
 * Generated:   2nd August 2012
 *
 * Status:      This file is auto-generated: DO NOT EDIT!!!!!!!!!!!
 *
 * Copyright:   The copyright restrictions of the VOLE library, enumerated
 *              in the header file <vole/util/common.hpp>, apply to this file
 *
 * ////////////////////////////////////////////////////////////////////// */

#ifndef VOLE_INCL_VOLE_HPP_OBJECT
# error This file is included by vole/server.hpp, and cannot be include directly
#endif /* !VOLE_INCL_VOLE_HPP_OBJECT */

// 0 params

template <typename R>
R get_property(of_type<R>, DISPID propId) const
{
 typedef com_return_traits<R>  return_traits_t;
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYGET, &result);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R>
inline R get_property(DISPID propId) const
{
 return get_property(of_type<R>(), propId);
}

template <typename R>
inline R get_property(of_type<R>, LPCOLESTR propName) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName));
}

template <typename R>
inline R get_property(LPCOLESTR propName) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName));
}

template <typename R>
inline R get_prop(of_type<R>, DISPID propId) const
{
 return get_property(of_type<R>(), propId);
}

template <typename R>
inline R get_prop(DISPID propId) const
{
 return get_property(of_type<R>(), propId);
}

template <typename R>
inline R get_prop(of_type<R>, LPCOLESTR propName) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName));
}

template <typename R>
inline R get_prop(LPCOLESTR propName) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName));
}

// 1 param

template <typename R, typename T0>
R get_property(of_type<R>, DISPID propId, T0 const &a0) const
{
 typedef com_return_traits<R>  return_traits_t;
 varx_type var0(a0);
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYGET, &var0, 1, &result);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0>
inline R get_property(DISPID propId, T0 const &a0) const
{
 return get_property(of_type<R>(), propId, a0);
}

template <typename R, typename T0>
inline R get_property(of_type<R>, LPCOLESTR propName, T0 const &a0) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0);
}

template <typename R, typename T0>
inline R get_property(LPCOLESTR propName, T0 const &a0) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0);
}

template <typename R, typename T0>
inline R get_prop(of_type<R>, DISPID propId, T0 const &a0) const
{
 return get_property(of_type<R>(), propId, a0);
}

template <typename R, typename T0>
inline R get_prop(DISPID propId, T0 const &a0) const
{
 return get_property(of_type<R>(), propId, a0);
}

template <typename R, typename T0>
inline R get_prop(of_type<R>, LPCOLESTR propName, T0 const &a0) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0);
}

template <typename R, typename T0>
inline R get_prop(LPCOLESTR propName, T0 const &a0) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0);
}

// 2 params

template <typename R, typename T0, typename T1>
R get_property(of_type<R>, DISPID propId, T0 const &a0, T1 const &a1) const
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[2];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[1]);
 varx_type(a1).swap(vars[0]);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYGET, &vars[0], STLSOFT_NUM_ELEMENTS(vars), &result);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1>
inline R get_property(DISPID propId, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), propId, a0, a1);
}

template <typename R, typename T0, typename T1>
inline R get_property(of_type<R>, LPCOLESTR propName, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1);
}

template <typename R, typename T0, typename T1>
inline R get_property(LPCOLESTR propName, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1);
}

template <typename R, typename T0, typename T1>
inline R get_prop(of_type<R>, DISPID propId, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), propId, a0, a1);
}

template <typename R, typename T0, typename T1>
inline R get_prop(DISPID propId, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), propId, a0, a1);
}

template <typename R, typename T0, typename T1>
inline R get_prop(of_type<R>, LPCOLESTR propName, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1);
}

template <typename R, typename T0, typename T1>
inline R get_prop(LPCOLESTR propName, T0 const &a0, T1 const &a1) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1);
}

// 3 params

template <typename R, typename T0, typename T1, typename T2>
R get_property(of_type<R>, DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[3];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[2]);
 varx_type(a1).swap(vars[1]);
 varx_type(a2).swap(vars[0]);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYGET, &vars[0], STLSOFT_NUM_ELEMENTS(vars), &result);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_property(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), propId, a0, a1, a2);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_property(of_type<R>, LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_property(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_prop(of_type<R>, DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), propId, a0, a1, a2);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_prop(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), propId, a0, a1, a2);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_prop(of_type<R>, LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2);
}

template <typename R, typename T0, typename T1, typename T2>
inline R get_prop(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2);
}

// 4 params

template <typename R, typename T0, typename T1, typename T2, typename T3>
R get_property(of_type<R>, DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[4];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[3]);
 varx_type(a1).swap(vars[2]);
 varx_type(a2).swap(vars[1]);
 varx_type(a3).swap(vars[0]);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYGET, &vars[0], STLSOFT_NUM_ELEMENTS(vars), &result);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_property(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), propId, a0, a1, a2, a3);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_property(of_type<R>, LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2, a3);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_property(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2, a3);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_prop(of_type<R>, DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), propId, a0, a1, a2, a3);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_prop(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), propId, a0, a1, a2, a3);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_prop(of_type<R>, LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2, a3);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
inline R get_prop(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3) const
{
 return get_property(of_type<R>(), object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2, a3);
}

/* ///////////////////////////// end of file //////////////////////////// */
