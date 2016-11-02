/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/internal/generated/methods.hpp
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
R invoke_method(LPCOLESTR methodName)
{
 typedef com_return_traits<R>  return_traits_t;
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, NULL, 0);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R>
R invoke_method(of_type<R>, LPCOLESTR methodName)
{
 typedef com_return_traits<R>  return_traits_t;
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, NULL, 0);
 return return_traits_t::convert(result, m_coercionLevel);
}

// 1 param

template <typename R, typename T0>
R invoke_method(LPCOLESTR methodName, T0 const &a0)
{
 typedef com_return_traits<R>  return_traits_t;
 varx_type var0(a0);
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &var0, 1);
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0)
{
 typedef com_return_traits<R>  return_traits_t;
 varx_type var0(a0);
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &var0, 1);
 return return_traits_t::convert(result, m_coercionLevel);
}

// 2 params

template <typename R, typename T0, typename T1>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1)
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
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1)
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
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 3 params

template <typename R, typename T0, typename T1, typename T2>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2)
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
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2)
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
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 4 params

template <typename R, typename T0, typename T1, typename T2, typename T3>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
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
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
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
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 5 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[5];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[4]);
 varx_type(a1).swap(vars[3]);
 varx_type(a2).swap(vars[2]);
 varx_type(a3).swap(vars[1]);
 varx_type(a4).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[5];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[4]);
 varx_type(a1).swap(vars[3]);
 varx_type(a2).swap(vars[2]);
 varx_type(a3).swap(vars[1]);
 varx_type(a4).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 6 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[6];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[5]);
 varx_type(a1).swap(vars[4]);
 varx_type(a2).swap(vars[3]);
 varx_type(a3).swap(vars[2]);
 varx_type(a4).swap(vars[1]);
 varx_type(a5).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[6];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[5]);
 varx_type(a1).swap(vars[4]);
 varx_type(a2).swap(vars[3]);
 varx_type(a3).swap(vars[2]);
 varx_type(a4).swap(vars[1]);
 varx_type(a5).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 7 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[7];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[6]);
 varx_type(a1).swap(vars[5]);
 varx_type(a2).swap(vars[4]);
 varx_type(a3).swap(vars[3]);
 varx_type(a4).swap(vars[2]);
 varx_type(a5).swap(vars[1]);
 varx_type(a6).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[7];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[6]);
 varx_type(a1).swap(vars[5]);
 varx_type(a2).swap(vars[4]);
 varx_type(a3).swap(vars[3]);
 varx_type(a4).swap(vars[2]);
 varx_type(a5).swap(vars[1]);
 varx_type(a6).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 8 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[8];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[7]);
 varx_type(a1).swap(vars[6]);
 varx_type(a2).swap(vars[5]);
 varx_type(a3).swap(vars[4]);
 varx_type(a4).swap(vars[3]);
 varx_type(a5).swap(vars[2]);
 varx_type(a6).swap(vars[1]);
 varx_type(a7).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[8];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[7]);
 varx_type(a1).swap(vars[6]);
 varx_type(a2).swap(vars[5]);
 varx_type(a3).swap(vars[4]);
 varx_type(a4).swap(vars[3]);
 varx_type(a5).swap(vars[2]);
 varx_type(a6).swap(vars[1]);
 varx_type(a7).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 9 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[9];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[8]);
 varx_type(a1).swap(vars[7]);
 varx_type(a2).swap(vars[6]);
 varx_type(a3).swap(vars[5]);
 varx_type(a4).swap(vars[4]);
 varx_type(a5).swap(vars[3]);
 varx_type(a6).swap(vars[2]);
 varx_type(a7).swap(vars[1]);
 varx_type(a8).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[9];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[8]);
 varx_type(a1).swap(vars[7]);
 varx_type(a2).swap(vars[6]);
 varx_type(a3).swap(vars[5]);
 varx_type(a4).swap(vars[4]);
 varx_type(a5).swap(vars[3]);
 varx_type(a6).swap(vars[2]);
 varx_type(a7).swap(vars[1]);
 varx_type(a8).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 10 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[10];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[9]);
 varx_type(a1).swap(vars[8]);
 varx_type(a2).swap(vars[7]);
 varx_type(a3).swap(vars[6]);
 varx_type(a4).swap(vars[5]);
 varx_type(a5).swap(vars[4]);
 varx_type(a6).swap(vars[3]);
 varx_type(a7).swap(vars[2]);
 varx_type(a8).swap(vars[1]);
 varx_type(a9).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[10];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[9]);
 varx_type(a1).swap(vars[8]);
 varx_type(a2).swap(vars[7]);
 varx_type(a3).swap(vars[6]);
 varx_type(a4).swap(vars[5]);
 varx_type(a5).swap(vars[4]);
 varx_type(a6).swap(vars[3]);
 varx_type(a7).swap(vars[2]);
 varx_type(a8).swap(vars[1]);
 varx_type(a9).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 11 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[11];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[10]);
 varx_type(a1).swap(vars[9]);
 varx_type(a2).swap(vars[8]);
 varx_type(a3).swap(vars[7]);
 varx_type(a4).swap(vars[6]);
 varx_type(a5).swap(vars[5]);
 varx_type(a6).swap(vars[4]);
 varx_type(a7).swap(vars[3]);
 varx_type(a8).swap(vars[2]);
 varx_type(a9).swap(vars[1]);
 varx_type(a10).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[11];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[10]);
 varx_type(a1).swap(vars[9]);
 varx_type(a2).swap(vars[8]);
 varx_type(a3).swap(vars[7]);
 varx_type(a4).swap(vars[6]);
 varx_type(a5).swap(vars[5]);
 varx_type(a6).swap(vars[4]);
 varx_type(a7).swap(vars[3]);
 varx_type(a8).swap(vars[2]);
 varx_type(a9).swap(vars[1]);
 varx_type(a10).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 12 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[12];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[11]);
 varx_type(a1).swap(vars[10]);
 varx_type(a2).swap(vars[9]);
 varx_type(a3).swap(vars[8]);
 varx_type(a4).swap(vars[7]);
 varx_type(a5).swap(vars[6]);
 varx_type(a6).swap(vars[5]);
 varx_type(a7).swap(vars[4]);
 varx_type(a8).swap(vars[3]);
 varx_type(a9).swap(vars[2]);
 varx_type(a10).swap(vars[1]);
 varx_type(a11).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[12];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[11]);
 varx_type(a1).swap(vars[10]);
 varx_type(a2).swap(vars[9]);
 varx_type(a3).swap(vars[8]);
 varx_type(a4).swap(vars[7]);
 varx_type(a5).swap(vars[6]);
 varx_type(a6).swap(vars[5]);
 varx_type(a7).swap(vars[4]);
 varx_type(a8).swap(vars[3]);
 varx_type(a9).swap(vars[2]);
 varx_type(a10).swap(vars[1]);
 varx_type(a11).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 13 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[13];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[12]);
 varx_type(a1).swap(vars[11]);
 varx_type(a2).swap(vars[10]);
 varx_type(a3).swap(vars[9]);
 varx_type(a4).swap(vars[8]);
 varx_type(a5).swap(vars[7]);
 varx_type(a6).swap(vars[6]);
 varx_type(a7).swap(vars[5]);
 varx_type(a8).swap(vars[4]);
 varx_type(a9).swap(vars[3]);
 varx_type(a10).swap(vars[2]);
 varx_type(a11).swap(vars[1]);
 varx_type(a12).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[13];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[12]);
 varx_type(a1).swap(vars[11]);
 varx_type(a2).swap(vars[10]);
 varx_type(a3).swap(vars[9]);
 varx_type(a4).swap(vars[8]);
 varx_type(a5).swap(vars[7]);
 varx_type(a6).swap(vars[6]);
 varx_type(a7).swap(vars[5]);
 varx_type(a8).swap(vars[4]);
 varx_type(a9).swap(vars[3]);
 varx_type(a10).swap(vars[2]);
 varx_type(a11).swap(vars[1]);
 varx_type(a12).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 14 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[14];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[13]);
 varx_type(a1).swap(vars[12]);
 varx_type(a2).swap(vars[11]);
 varx_type(a3).swap(vars[10]);
 varx_type(a4).swap(vars[9]);
 varx_type(a5).swap(vars[8]);
 varx_type(a6).swap(vars[7]);
 varx_type(a7).swap(vars[6]);
 varx_type(a8).swap(vars[5]);
 varx_type(a9).swap(vars[4]);
 varx_type(a10).swap(vars[3]);
 varx_type(a11).swap(vars[2]);
 varx_type(a12).swap(vars[1]);
 varx_type(a13).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[14];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[13]);
 varx_type(a1).swap(vars[12]);
 varx_type(a2).swap(vars[11]);
 varx_type(a3).swap(vars[10]);
 varx_type(a4).swap(vars[9]);
 varx_type(a5).swap(vars[8]);
 varx_type(a6).swap(vars[7]);
 varx_type(a7).swap(vars[6]);
 varx_type(a8).swap(vars[5]);
 varx_type(a9).swap(vars[4]);
 varx_type(a10).swap(vars[3]);
 varx_type(a11).swap(vars[2]);
 varx_type(a12).swap(vars[1]);
 varx_type(a13).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 15 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[15];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[14]);
 varx_type(a1).swap(vars[13]);
 varx_type(a2).swap(vars[12]);
 varx_type(a3).swap(vars[11]);
 varx_type(a4).swap(vars[10]);
 varx_type(a5).swap(vars[9]);
 varx_type(a6).swap(vars[8]);
 varx_type(a7).swap(vars[7]);
 varx_type(a8).swap(vars[6]);
 varx_type(a9).swap(vars[5]);
 varx_type(a10).swap(vars[4]);
 varx_type(a11).swap(vars[3]);
 varx_type(a12).swap(vars[2]);
 varx_type(a13).swap(vars[1]);
 varx_type(a14).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[15];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[14]);
 varx_type(a1).swap(vars[13]);
 varx_type(a2).swap(vars[12]);
 varx_type(a3).swap(vars[11]);
 varx_type(a4).swap(vars[10]);
 varx_type(a5).swap(vars[9]);
 varx_type(a6).swap(vars[8]);
 varx_type(a7).swap(vars[7]);
 varx_type(a8).swap(vars[6]);
 varx_type(a9).swap(vars[5]);
 varx_type(a10).swap(vars[4]);
 varx_type(a11).swap(vars[3]);
 varx_type(a12).swap(vars[2]);
 varx_type(a13).swap(vars[1]);
 varx_type(a14).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 16 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[16];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[15]);
 varx_type(a1).swap(vars[14]);
 varx_type(a2).swap(vars[13]);
 varx_type(a3).swap(vars[12]);
 varx_type(a4).swap(vars[11]);
 varx_type(a5).swap(vars[10]);
 varx_type(a6).swap(vars[9]);
 varx_type(a7).swap(vars[8]);
 varx_type(a8).swap(vars[7]);
 varx_type(a9).swap(vars[6]);
 varx_type(a10).swap(vars[5]);
 varx_type(a11).swap(vars[4]);
 varx_type(a12).swap(vars[3]);
 varx_type(a13).swap(vars[2]);
 varx_type(a14).swap(vars[1]);
 varx_type(a15).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[16];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[15]);
 varx_type(a1).swap(vars[14]);
 varx_type(a2).swap(vars[13]);
 varx_type(a3).swap(vars[12]);
 varx_type(a4).swap(vars[11]);
 varx_type(a5).swap(vars[10]);
 varx_type(a6).swap(vars[9]);
 varx_type(a7).swap(vars[8]);
 varx_type(a8).swap(vars[7]);
 varx_type(a9).swap(vars[6]);
 varx_type(a10).swap(vars[5]);
 varx_type(a11).swap(vars[4]);
 varx_type(a12).swap(vars[3]);
 varx_type(a13).swap(vars[2]);
 varx_type(a14).swap(vars[1]);
 varx_type(a15).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 17 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[17];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[16]);
 varx_type(a1).swap(vars[15]);
 varx_type(a2).swap(vars[14]);
 varx_type(a3).swap(vars[13]);
 varx_type(a4).swap(vars[12]);
 varx_type(a5).swap(vars[11]);
 varx_type(a6).swap(vars[10]);
 varx_type(a7).swap(vars[9]);
 varx_type(a8).swap(vars[8]);
 varx_type(a9).swap(vars[7]);
 varx_type(a10).swap(vars[6]);
 varx_type(a11).swap(vars[5]);
 varx_type(a12).swap(vars[4]);
 varx_type(a13).swap(vars[3]);
 varx_type(a14).swap(vars[2]);
 varx_type(a15).swap(vars[1]);
 varx_type(a16).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[17];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[16]);
 varx_type(a1).swap(vars[15]);
 varx_type(a2).swap(vars[14]);
 varx_type(a3).swap(vars[13]);
 varx_type(a4).swap(vars[12]);
 varx_type(a5).swap(vars[11]);
 varx_type(a6).swap(vars[10]);
 varx_type(a7).swap(vars[9]);
 varx_type(a8).swap(vars[8]);
 varx_type(a9).swap(vars[7]);
 varx_type(a10).swap(vars[6]);
 varx_type(a11).swap(vars[5]);
 varx_type(a12).swap(vars[4]);
 varx_type(a13).swap(vars[3]);
 varx_type(a14).swap(vars[2]);
 varx_type(a15).swap(vars[1]);
 varx_type(a16).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 18 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[18];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[17]);
 varx_type(a1).swap(vars[16]);
 varx_type(a2).swap(vars[15]);
 varx_type(a3).swap(vars[14]);
 varx_type(a4).swap(vars[13]);
 varx_type(a5).swap(vars[12]);
 varx_type(a6).swap(vars[11]);
 varx_type(a7).swap(vars[10]);
 varx_type(a8).swap(vars[9]);
 varx_type(a9).swap(vars[8]);
 varx_type(a10).swap(vars[7]);
 varx_type(a11).swap(vars[6]);
 varx_type(a12).swap(vars[5]);
 varx_type(a13).swap(vars[4]);
 varx_type(a14).swap(vars[3]);
 varx_type(a15).swap(vars[2]);
 varx_type(a16).swap(vars[1]);
 varx_type(a17).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[18];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[17]);
 varx_type(a1).swap(vars[16]);
 varx_type(a2).swap(vars[15]);
 varx_type(a3).swap(vars[14]);
 varx_type(a4).swap(vars[13]);
 varx_type(a5).swap(vars[12]);
 varx_type(a6).swap(vars[11]);
 varx_type(a7).swap(vars[10]);
 varx_type(a8).swap(vars[9]);
 varx_type(a9).swap(vars[8]);
 varx_type(a10).swap(vars[7]);
 varx_type(a11).swap(vars[6]);
 varx_type(a12).swap(vars[5]);
 varx_type(a13).swap(vars[4]);
 varx_type(a14).swap(vars[3]);
 varx_type(a15).swap(vars[2]);
 varx_type(a16).swap(vars[1]);
 varx_type(a17).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 19 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[19];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[18]);
 varx_type(a1).swap(vars[17]);
 varx_type(a2).swap(vars[16]);
 varx_type(a3).swap(vars[15]);
 varx_type(a4).swap(vars[14]);
 varx_type(a5).swap(vars[13]);
 varx_type(a6).swap(vars[12]);
 varx_type(a7).swap(vars[11]);
 varx_type(a8).swap(vars[10]);
 varx_type(a9).swap(vars[9]);
 varx_type(a10).swap(vars[8]);
 varx_type(a11).swap(vars[7]);
 varx_type(a12).swap(vars[6]);
 varx_type(a13).swap(vars[5]);
 varx_type(a14).swap(vars[4]);
 varx_type(a15).swap(vars[3]);
 varx_type(a16).swap(vars[2]);
 varx_type(a17).swap(vars[1]);
 varx_type(a18).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[19];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[18]);
 varx_type(a1).swap(vars[17]);
 varx_type(a2).swap(vars[16]);
 varx_type(a3).swap(vars[15]);
 varx_type(a4).swap(vars[14]);
 varx_type(a5).swap(vars[13]);
 varx_type(a6).swap(vars[12]);
 varx_type(a7).swap(vars[11]);
 varx_type(a8).swap(vars[10]);
 varx_type(a9).swap(vars[9]);
 varx_type(a10).swap(vars[8]);
 varx_type(a11).swap(vars[7]);
 varx_type(a12).swap(vars[6]);
 varx_type(a13).swap(vars[5]);
 varx_type(a14).swap(vars[4]);
 varx_type(a15).swap(vars[3]);
 varx_type(a16).swap(vars[2]);
 varx_type(a17).swap(vars[1]);
 varx_type(a18).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 20 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[20];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[19]);
 varx_type(a1).swap(vars[18]);
 varx_type(a2).swap(vars[17]);
 varx_type(a3).swap(vars[16]);
 varx_type(a4).swap(vars[15]);
 varx_type(a5).swap(vars[14]);
 varx_type(a6).swap(vars[13]);
 varx_type(a7).swap(vars[12]);
 varx_type(a8).swap(vars[11]);
 varx_type(a9).swap(vars[10]);
 varx_type(a10).swap(vars[9]);
 varx_type(a11).swap(vars[8]);
 varx_type(a12).swap(vars[7]);
 varx_type(a13).swap(vars[6]);
 varx_type(a14).swap(vars[5]);
 varx_type(a15).swap(vars[4]);
 varx_type(a16).swap(vars[3]);
 varx_type(a17).swap(vars[2]);
 varx_type(a18).swap(vars[1]);
 varx_type(a19).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[20];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[19]);
 varx_type(a1).swap(vars[18]);
 varx_type(a2).swap(vars[17]);
 varx_type(a3).swap(vars[16]);
 varx_type(a4).swap(vars[15]);
 varx_type(a5).swap(vars[14]);
 varx_type(a6).swap(vars[13]);
 varx_type(a7).swap(vars[12]);
 varx_type(a8).swap(vars[11]);
 varx_type(a9).swap(vars[10]);
 varx_type(a10).swap(vars[9]);
 varx_type(a11).swap(vars[8]);
 varx_type(a12).swap(vars[7]);
 varx_type(a13).swap(vars[6]);
 varx_type(a14).swap(vars[5]);
 varx_type(a15).swap(vars[4]);
 varx_type(a16).swap(vars[3]);
 varx_type(a17).swap(vars[2]);
 varx_type(a18).swap(vars[1]);
 varx_type(a19).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 21 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[21];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[20]);
 varx_type(a1).swap(vars[19]);
 varx_type(a2).swap(vars[18]);
 varx_type(a3).swap(vars[17]);
 varx_type(a4).swap(vars[16]);
 varx_type(a5).swap(vars[15]);
 varx_type(a6).swap(vars[14]);
 varx_type(a7).swap(vars[13]);
 varx_type(a8).swap(vars[12]);
 varx_type(a9).swap(vars[11]);
 varx_type(a10).swap(vars[10]);
 varx_type(a11).swap(vars[9]);
 varx_type(a12).swap(vars[8]);
 varx_type(a13).swap(vars[7]);
 varx_type(a14).swap(vars[6]);
 varx_type(a15).swap(vars[5]);
 varx_type(a16).swap(vars[4]);
 varx_type(a17).swap(vars[3]);
 varx_type(a18).swap(vars[2]);
 varx_type(a19).swap(vars[1]);
 varx_type(a20).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[21];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[20]);
 varx_type(a1).swap(vars[19]);
 varx_type(a2).swap(vars[18]);
 varx_type(a3).swap(vars[17]);
 varx_type(a4).swap(vars[16]);
 varx_type(a5).swap(vars[15]);
 varx_type(a6).swap(vars[14]);
 varx_type(a7).swap(vars[13]);
 varx_type(a8).swap(vars[12]);
 varx_type(a9).swap(vars[11]);
 varx_type(a10).swap(vars[10]);
 varx_type(a11).swap(vars[9]);
 varx_type(a12).swap(vars[8]);
 varx_type(a13).swap(vars[7]);
 varx_type(a14).swap(vars[6]);
 varx_type(a15).swap(vars[5]);
 varx_type(a16).swap(vars[4]);
 varx_type(a17).swap(vars[3]);
 varx_type(a18).swap(vars[2]);
 varx_type(a19).swap(vars[1]);
 varx_type(a20).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 22 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[22];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[21]);
 varx_type(a1).swap(vars[20]);
 varx_type(a2).swap(vars[19]);
 varx_type(a3).swap(vars[18]);
 varx_type(a4).swap(vars[17]);
 varx_type(a5).swap(vars[16]);
 varx_type(a6).swap(vars[15]);
 varx_type(a7).swap(vars[14]);
 varx_type(a8).swap(vars[13]);
 varx_type(a9).swap(vars[12]);
 varx_type(a10).swap(vars[11]);
 varx_type(a11).swap(vars[10]);
 varx_type(a12).swap(vars[9]);
 varx_type(a13).swap(vars[8]);
 varx_type(a14).swap(vars[7]);
 varx_type(a15).swap(vars[6]);
 varx_type(a16).swap(vars[5]);
 varx_type(a17).swap(vars[4]);
 varx_type(a18).swap(vars[3]);
 varx_type(a19).swap(vars[2]);
 varx_type(a20).swap(vars[1]);
 varx_type(a21).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[22];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[21]);
 varx_type(a1).swap(vars[20]);
 varx_type(a2).swap(vars[19]);
 varx_type(a3).swap(vars[18]);
 varx_type(a4).swap(vars[17]);
 varx_type(a5).swap(vars[16]);
 varx_type(a6).swap(vars[15]);
 varx_type(a7).swap(vars[14]);
 varx_type(a8).swap(vars[13]);
 varx_type(a9).swap(vars[12]);
 varx_type(a10).swap(vars[11]);
 varx_type(a11).swap(vars[10]);
 varx_type(a12).swap(vars[9]);
 varx_type(a13).swap(vars[8]);
 varx_type(a14).swap(vars[7]);
 varx_type(a15).swap(vars[6]);
 varx_type(a16).swap(vars[5]);
 varx_type(a17).swap(vars[4]);
 varx_type(a18).swap(vars[3]);
 varx_type(a19).swap(vars[2]);
 varx_type(a20).swap(vars[1]);
 varx_type(a21).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 23 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[23];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[22]);
 varx_type(a1).swap(vars[21]);
 varx_type(a2).swap(vars[20]);
 varx_type(a3).swap(vars[19]);
 varx_type(a4).swap(vars[18]);
 varx_type(a5).swap(vars[17]);
 varx_type(a6).swap(vars[16]);
 varx_type(a7).swap(vars[15]);
 varx_type(a8).swap(vars[14]);
 varx_type(a9).swap(vars[13]);
 varx_type(a10).swap(vars[12]);
 varx_type(a11).swap(vars[11]);
 varx_type(a12).swap(vars[10]);
 varx_type(a13).swap(vars[9]);
 varx_type(a14).swap(vars[8]);
 varx_type(a15).swap(vars[7]);
 varx_type(a16).swap(vars[6]);
 varx_type(a17).swap(vars[5]);
 varx_type(a18).swap(vars[4]);
 varx_type(a19).swap(vars[3]);
 varx_type(a20).swap(vars[2]);
 varx_type(a21).swap(vars[1]);
 varx_type(a22).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[23];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[22]);
 varx_type(a1).swap(vars[21]);
 varx_type(a2).swap(vars[20]);
 varx_type(a3).swap(vars[19]);
 varx_type(a4).swap(vars[18]);
 varx_type(a5).swap(vars[17]);
 varx_type(a6).swap(vars[16]);
 varx_type(a7).swap(vars[15]);
 varx_type(a8).swap(vars[14]);
 varx_type(a9).swap(vars[13]);
 varx_type(a10).swap(vars[12]);
 varx_type(a11).swap(vars[11]);
 varx_type(a12).swap(vars[10]);
 varx_type(a13).swap(vars[9]);
 varx_type(a14).swap(vars[8]);
 varx_type(a15).swap(vars[7]);
 varx_type(a16).swap(vars[6]);
 varx_type(a17).swap(vars[5]);
 varx_type(a18).swap(vars[4]);
 varx_type(a19).swap(vars[3]);
 varx_type(a20).swap(vars[2]);
 varx_type(a21).swap(vars[1]);
 varx_type(a22).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 24 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[24];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[23]);
 varx_type(a1).swap(vars[22]);
 varx_type(a2).swap(vars[21]);
 varx_type(a3).swap(vars[20]);
 varx_type(a4).swap(vars[19]);
 varx_type(a5).swap(vars[18]);
 varx_type(a6).swap(vars[17]);
 varx_type(a7).swap(vars[16]);
 varx_type(a8).swap(vars[15]);
 varx_type(a9).swap(vars[14]);
 varx_type(a10).swap(vars[13]);
 varx_type(a11).swap(vars[12]);
 varx_type(a12).swap(vars[11]);
 varx_type(a13).swap(vars[10]);
 varx_type(a14).swap(vars[9]);
 varx_type(a15).swap(vars[8]);
 varx_type(a16).swap(vars[7]);
 varx_type(a17).swap(vars[6]);
 varx_type(a18).swap(vars[5]);
 varx_type(a19).swap(vars[4]);
 varx_type(a20).swap(vars[3]);
 varx_type(a21).swap(vars[2]);
 varx_type(a22).swap(vars[1]);
 varx_type(a23).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[24];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[23]);
 varx_type(a1).swap(vars[22]);
 varx_type(a2).swap(vars[21]);
 varx_type(a3).swap(vars[20]);
 varx_type(a4).swap(vars[19]);
 varx_type(a5).swap(vars[18]);
 varx_type(a6).swap(vars[17]);
 varx_type(a7).swap(vars[16]);
 varx_type(a8).swap(vars[15]);
 varx_type(a9).swap(vars[14]);
 varx_type(a10).swap(vars[13]);
 varx_type(a11).swap(vars[12]);
 varx_type(a12).swap(vars[11]);
 varx_type(a13).swap(vars[10]);
 varx_type(a14).swap(vars[9]);
 varx_type(a15).swap(vars[8]);
 varx_type(a16).swap(vars[7]);
 varx_type(a17).swap(vars[6]);
 varx_type(a18).swap(vars[5]);
 varx_type(a19).swap(vars[4]);
 varx_type(a20).swap(vars[3]);
 varx_type(a21).swap(vars[2]);
 varx_type(a22).swap(vars[1]);
 varx_type(a23).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 25 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[25];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[24]);
 varx_type(a1).swap(vars[23]);
 varx_type(a2).swap(vars[22]);
 varx_type(a3).swap(vars[21]);
 varx_type(a4).swap(vars[20]);
 varx_type(a5).swap(vars[19]);
 varx_type(a6).swap(vars[18]);
 varx_type(a7).swap(vars[17]);
 varx_type(a8).swap(vars[16]);
 varx_type(a9).swap(vars[15]);
 varx_type(a10).swap(vars[14]);
 varx_type(a11).swap(vars[13]);
 varx_type(a12).swap(vars[12]);
 varx_type(a13).swap(vars[11]);
 varx_type(a14).swap(vars[10]);
 varx_type(a15).swap(vars[9]);
 varx_type(a16).swap(vars[8]);
 varx_type(a17).swap(vars[7]);
 varx_type(a18).swap(vars[6]);
 varx_type(a19).swap(vars[5]);
 varx_type(a20).swap(vars[4]);
 varx_type(a21).swap(vars[3]);
 varx_type(a22).swap(vars[2]);
 varx_type(a23).swap(vars[1]);
 varx_type(a24).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[25];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[24]);
 varx_type(a1).swap(vars[23]);
 varx_type(a2).swap(vars[22]);
 varx_type(a3).swap(vars[21]);
 varx_type(a4).swap(vars[20]);
 varx_type(a5).swap(vars[19]);
 varx_type(a6).swap(vars[18]);
 varx_type(a7).swap(vars[17]);
 varx_type(a8).swap(vars[16]);
 varx_type(a9).swap(vars[15]);
 varx_type(a10).swap(vars[14]);
 varx_type(a11).swap(vars[13]);
 varx_type(a12).swap(vars[12]);
 varx_type(a13).swap(vars[11]);
 varx_type(a14).swap(vars[10]);
 varx_type(a15).swap(vars[9]);
 varx_type(a16).swap(vars[8]);
 varx_type(a17).swap(vars[7]);
 varx_type(a18).swap(vars[6]);
 varx_type(a19).swap(vars[5]);
 varx_type(a20).swap(vars[4]);
 varx_type(a21).swap(vars[3]);
 varx_type(a22).swap(vars[2]);
 varx_type(a23).swap(vars[1]);
 varx_type(a24).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 26 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[26];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[25]);
 varx_type(a1).swap(vars[24]);
 varx_type(a2).swap(vars[23]);
 varx_type(a3).swap(vars[22]);
 varx_type(a4).swap(vars[21]);
 varx_type(a5).swap(vars[20]);
 varx_type(a6).swap(vars[19]);
 varx_type(a7).swap(vars[18]);
 varx_type(a8).swap(vars[17]);
 varx_type(a9).swap(vars[16]);
 varx_type(a10).swap(vars[15]);
 varx_type(a11).swap(vars[14]);
 varx_type(a12).swap(vars[13]);
 varx_type(a13).swap(vars[12]);
 varx_type(a14).swap(vars[11]);
 varx_type(a15).swap(vars[10]);
 varx_type(a16).swap(vars[9]);
 varx_type(a17).swap(vars[8]);
 varx_type(a18).swap(vars[7]);
 varx_type(a19).swap(vars[6]);
 varx_type(a20).swap(vars[5]);
 varx_type(a21).swap(vars[4]);
 varx_type(a22).swap(vars[3]);
 varx_type(a23).swap(vars[2]);
 varx_type(a24).swap(vars[1]);
 varx_type(a25).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[26];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[25]);
 varx_type(a1).swap(vars[24]);
 varx_type(a2).swap(vars[23]);
 varx_type(a3).swap(vars[22]);
 varx_type(a4).swap(vars[21]);
 varx_type(a5).swap(vars[20]);
 varx_type(a6).swap(vars[19]);
 varx_type(a7).swap(vars[18]);
 varx_type(a8).swap(vars[17]);
 varx_type(a9).swap(vars[16]);
 varx_type(a10).swap(vars[15]);
 varx_type(a11).swap(vars[14]);
 varx_type(a12).swap(vars[13]);
 varx_type(a13).swap(vars[12]);
 varx_type(a14).swap(vars[11]);
 varx_type(a15).swap(vars[10]);
 varx_type(a16).swap(vars[9]);
 varx_type(a17).swap(vars[8]);
 varx_type(a18).swap(vars[7]);
 varx_type(a19).swap(vars[6]);
 varx_type(a20).swap(vars[5]);
 varx_type(a21).swap(vars[4]);
 varx_type(a22).swap(vars[3]);
 varx_type(a23).swap(vars[2]);
 varx_type(a24).swap(vars[1]);
 varx_type(a25).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 27 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[27];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[26]);
 varx_type(a1).swap(vars[25]);
 varx_type(a2).swap(vars[24]);
 varx_type(a3).swap(vars[23]);
 varx_type(a4).swap(vars[22]);
 varx_type(a5).swap(vars[21]);
 varx_type(a6).swap(vars[20]);
 varx_type(a7).swap(vars[19]);
 varx_type(a8).swap(vars[18]);
 varx_type(a9).swap(vars[17]);
 varx_type(a10).swap(vars[16]);
 varx_type(a11).swap(vars[15]);
 varx_type(a12).swap(vars[14]);
 varx_type(a13).swap(vars[13]);
 varx_type(a14).swap(vars[12]);
 varx_type(a15).swap(vars[11]);
 varx_type(a16).swap(vars[10]);
 varx_type(a17).swap(vars[9]);
 varx_type(a18).swap(vars[8]);
 varx_type(a19).swap(vars[7]);
 varx_type(a20).swap(vars[6]);
 varx_type(a21).swap(vars[5]);
 varx_type(a22).swap(vars[4]);
 varx_type(a23).swap(vars[3]);
 varx_type(a24).swap(vars[2]);
 varx_type(a25).swap(vars[1]);
 varx_type(a26).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[27];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[26]);
 varx_type(a1).swap(vars[25]);
 varx_type(a2).swap(vars[24]);
 varx_type(a3).swap(vars[23]);
 varx_type(a4).swap(vars[22]);
 varx_type(a5).swap(vars[21]);
 varx_type(a6).swap(vars[20]);
 varx_type(a7).swap(vars[19]);
 varx_type(a8).swap(vars[18]);
 varx_type(a9).swap(vars[17]);
 varx_type(a10).swap(vars[16]);
 varx_type(a11).swap(vars[15]);
 varx_type(a12).swap(vars[14]);
 varx_type(a13).swap(vars[13]);
 varx_type(a14).swap(vars[12]);
 varx_type(a15).swap(vars[11]);
 varx_type(a16).swap(vars[10]);
 varx_type(a17).swap(vars[9]);
 varx_type(a18).swap(vars[8]);
 varx_type(a19).swap(vars[7]);
 varx_type(a20).swap(vars[6]);
 varx_type(a21).swap(vars[5]);
 varx_type(a22).swap(vars[4]);
 varx_type(a23).swap(vars[3]);
 varx_type(a24).swap(vars[2]);
 varx_type(a25).swap(vars[1]);
 varx_type(a26).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 28 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[28];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[27]);
 varx_type(a1).swap(vars[26]);
 varx_type(a2).swap(vars[25]);
 varx_type(a3).swap(vars[24]);
 varx_type(a4).swap(vars[23]);
 varx_type(a5).swap(vars[22]);
 varx_type(a6).swap(vars[21]);
 varx_type(a7).swap(vars[20]);
 varx_type(a8).swap(vars[19]);
 varx_type(a9).swap(vars[18]);
 varx_type(a10).swap(vars[17]);
 varx_type(a11).swap(vars[16]);
 varx_type(a12).swap(vars[15]);
 varx_type(a13).swap(vars[14]);
 varx_type(a14).swap(vars[13]);
 varx_type(a15).swap(vars[12]);
 varx_type(a16).swap(vars[11]);
 varx_type(a17).swap(vars[10]);
 varx_type(a18).swap(vars[9]);
 varx_type(a19).swap(vars[8]);
 varx_type(a20).swap(vars[7]);
 varx_type(a21).swap(vars[6]);
 varx_type(a22).swap(vars[5]);
 varx_type(a23).swap(vars[4]);
 varx_type(a24).swap(vars[3]);
 varx_type(a25).swap(vars[2]);
 varx_type(a26).swap(vars[1]);
 varx_type(a27).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[28];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[27]);
 varx_type(a1).swap(vars[26]);
 varx_type(a2).swap(vars[25]);
 varx_type(a3).swap(vars[24]);
 varx_type(a4).swap(vars[23]);
 varx_type(a5).swap(vars[22]);
 varx_type(a6).swap(vars[21]);
 varx_type(a7).swap(vars[20]);
 varx_type(a8).swap(vars[19]);
 varx_type(a9).swap(vars[18]);
 varx_type(a10).swap(vars[17]);
 varx_type(a11).swap(vars[16]);
 varx_type(a12).swap(vars[15]);
 varx_type(a13).swap(vars[14]);
 varx_type(a14).swap(vars[13]);
 varx_type(a15).swap(vars[12]);
 varx_type(a16).swap(vars[11]);
 varx_type(a17).swap(vars[10]);
 varx_type(a18).swap(vars[9]);
 varx_type(a19).swap(vars[8]);
 varx_type(a20).swap(vars[7]);
 varx_type(a21).swap(vars[6]);
 varx_type(a22).swap(vars[5]);
 varx_type(a23).swap(vars[4]);
 varx_type(a24).swap(vars[3]);
 varx_type(a25).swap(vars[2]);
 varx_type(a26).swap(vars[1]);
 varx_type(a27).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 29 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[29];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[28]);
 varx_type(a1).swap(vars[27]);
 varx_type(a2).swap(vars[26]);
 varx_type(a3).swap(vars[25]);
 varx_type(a4).swap(vars[24]);
 varx_type(a5).swap(vars[23]);
 varx_type(a6).swap(vars[22]);
 varx_type(a7).swap(vars[21]);
 varx_type(a8).swap(vars[20]);
 varx_type(a9).swap(vars[19]);
 varx_type(a10).swap(vars[18]);
 varx_type(a11).swap(vars[17]);
 varx_type(a12).swap(vars[16]);
 varx_type(a13).swap(vars[15]);
 varx_type(a14).swap(vars[14]);
 varx_type(a15).swap(vars[13]);
 varx_type(a16).swap(vars[12]);
 varx_type(a17).swap(vars[11]);
 varx_type(a18).swap(vars[10]);
 varx_type(a19).swap(vars[9]);
 varx_type(a20).swap(vars[8]);
 varx_type(a21).swap(vars[7]);
 varx_type(a22).swap(vars[6]);
 varx_type(a23).swap(vars[5]);
 varx_type(a24).swap(vars[4]);
 varx_type(a25).swap(vars[3]);
 varx_type(a26).swap(vars[2]);
 varx_type(a27).swap(vars[1]);
 varx_type(a28).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[29];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[28]);
 varx_type(a1).swap(vars[27]);
 varx_type(a2).swap(vars[26]);
 varx_type(a3).swap(vars[25]);
 varx_type(a4).swap(vars[24]);
 varx_type(a5).swap(vars[23]);
 varx_type(a6).swap(vars[22]);
 varx_type(a7).swap(vars[21]);
 varx_type(a8).swap(vars[20]);
 varx_type(a9).swap(vars[19]);
 varx_type(a10).swap(vars[18]);
 varx_type(a11).swap(vars[17]);
 varx_type(a12).swap(vars[16]);
 varx_type(a13).swap(vars[15]);
 varx_type(a14).swap(vars[14]);
 varx_type(a15).swap(vars[13]);
 varx_type(a16).swap(vars[12]);
 varx_type(a17).swap(vars[11]);
 varx_type(a18).swap(vars[10]);
 varx_type(a19).swap(vars[9]);
 varx_type(a20).swap(vars[8]);
 varx_type(a21).swap(vars[7]);
 varx_type(a22).swap(vars[6]);
 varx_type(a23).swap(vars[5]);
 varx_type(a24).swap(vars[4]);
 varx_type(a25).swap(vars[3]);
 varx_type(a26).swap(vars[2]);
 varx_type(a27).swap(vars[1]);
 varx_type(a28).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 30 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[30];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[29]);
 varx_type(a1).swap(vars[28]);
 varx_type(a2).swap(vars[27]);
 varx_type(a3).swap(vars[26]);
 varx_type(a4).swap(vars[25]);
 varx_type(a5).swap(vars[24]);
 varx_type(a6).swap(vars[23]);
 varx_type(a7).swap(vars[22]);
 varx_type(a8).swap(vars[21]);
 varx_type(a9).swap(vars[20]);
 varx_type(a10).swap(vars[19]);
 varx_type(a11).swap(vars[18]);
 varx_type(a12).swap(vars[17]);
 varx_type(a13).swap(vars[16]);
 varx_type(a14).swap(vars[15]);
 varx_type(a15).swap(vars[14]);
 varx_type(a16).swap(vars[13]);
 varx_type(a17).swap(vars[12]);
 varx_type(a18).swap(vars[11]);
 varx_type(a19).swap(vars[10]);
 varx_type(a20).swap(vars[9]);
 varx_type(a21).swap(vars[8]);
 varx_type(a22).swap(vars[7]);
 varx_type(a23).swap(vars[6]);
 varx_type(a24).swap(vars[5]);
 varx_type(a25).swap(vars[4]);
 varx_type(a26).swap(vars[3]);
 varx_type(a27).swap(vars[2]);
 varx_type(a28).swap(vars[1]);
 varx_type(a29).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[30];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[29]);
 varx_type(a1).swap(vars[28]);
 varx_type(a2).swap(vars[27]);
 varx_type(a3).swap(vars[26]);
 varx_type(a4).swap(vars[25]);
 varx_type(a5).swap(vars[24]);
 varx_type(a6).swap(vars[23]);
 varx_type(a7).swap(vars[22]);
 varx_type(a8).swap(vars[21]);
 varx_type(a9).swap(vars[20]);
 varx_type(a10).swap(vars[19]);
 varx_type(a11).swap(vars[18]);
 varx_type(a12).swap(vars[17]);
 varx_type(a13).swap(vars[16]);
 varx_type(a14).swap(vars[15]);
 varx_type(a15).swap(vars[14]);
 varx_type(a16).swap(vars[13]);
 varx_type(a17).swap(vars[12]);
 varx_type(a18).swap(vars[11]);
 varx_type(a19).swap(vars[10]);
 varx_type(a20).swap(vars[9]);
 varx_type(a21).swap(vars[8]);
 varx_type(a22).swap(vars[7]);
 varx_type(a23).swap(vars[6]);
 varx_type(a24).swap(vars[5]);
 varx_type(a25).swap(vars[4]);
 varx_type(a26).swap(vars[3]);
 varx_type(a27).swap(vars[2]);
 varx_type(a28).swap(vars[1]);
 varx_type(a29).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 31 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[31];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[30]);
 varx_type(a1).swap(vars[29]);
 varx_type(a2).swap(vars[28]);
 varx_type(a3).swap(vars[27]);
 varx_type(a4).swap(vars[26]);
 varx_type(a5).swap(vars[25]);
 varx_type(a6).swap(vars[24]);
 varx_type(a7).swap(vars[23]);
 varx_type(a8).swap(vars[22]);
 varx_type(a9).swap(vars[21]);
 varx_type(a10).swap(vars[20]);
 varx_type(a11).swap(vars[19]);
 varx_type(a12).swap(vars[18]);
 varx_type(a13).swap(vars[17]);
 varx_type(a14).swap(vars[16]);
 varx_type(a15).swap(vars[15]);
 varx_type(a16).swap(vars[14]);
 varx_type(a17).swap(vars[13]);
 varx_type(a18).swap(vars[12]);
 varx_type(a19).swap(vars[11]);
 varx_type(a20).swap(vars[10]);
 varx_type(a21).swap(vars[9]);
 varx_type(a22).swap(vars[8]);
 varx_type(a23).swap(vars[7]);
 varx_type(a24).swap(vars[6]);
 varx_type(a25).swap(vars[5]);
 varx_type(a26).swap(vars[4]);
 varx_type(a27).swap(vars[3]);
 varx_type(a28).swap(vars[2]);
 varx_type(a29).swap(vars[1]);
 varx_type(a30).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[31];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[30]);
 varx_type(a1).swap(vars[29]);
 varx_type(a2).swap(vars[28]);
 varx_type(a3).swap(vars[27]);
 varx_type(a4).swap(vars[26]);
 varx_type(a5).swap(vars[25]);
 varx_type(a6).swap(vars[24]);
 varx_type(a7).swap(vars[23]);
 varx_type(a8).swap(vars[22]);
 varx_type(a9).swap(vars[21]);
 varx_type(a10).swap(vars[20]);
 varx_type(a11).swap(vars[19]);
 varx_type(a12).swap(vars[18]);
 varx_type(a13).swap(vars[17]);
 varx_type(a14).swap(vars[16]);
 varx_type(a15).swap(vars[15]);
 varx_type(a16).swap(vars[14]);
 varx_type(a17).swap(vars[13]);
 varx_type(a18).swap(vars[12]);
 varx_type(a19).swap(vars[11]);
 varx_type(a20).swap(vars[10]);
 varx_type(a21).swap(vars[9]);
 varx_type(a22).swap(vars[8]);
 varx_type(a23).swap(vars[7]);
 varx_type(a24).swap(vars[6]);
 varx_type(a25).swap(vars[5]);
 varx_type(a26).swap(vars[4]);
 varx_type(a27).swap(vars[3]);
 varx_type(a28).swap(vars[2]);
 varx_type(a29).swap(vars[1]);
 varx_type(a30).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

// 32 params

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
R invoke_method(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30, T31 const &a31)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[32];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[31]);
 varx_type(a1).swap(vars[30]);
 varx_type(a2).swap(vars[29]);
 varx_type(a3).swap(vars[28]);
 varx_type(a4).swap(vars[27]);
 varx_type(a5).swap(vars[26]);
 varx_type(a6).swap(vars[25]);
 varx_type(a7).swap(vars[24]);
 varx_type(a8).swap(vars[23]);
 varx_type(a9).swap(vars[22]);
 varx_type(a10).swap(vars[21]);
 varx_type(a11).swap(vars[20]);
 varx_type(a12).swap(vars[19]);
 varx_type(a13).swap(vars[18]);
 varx_type(a14).swap(vars[17]);
 varx_type(a15).swap(vars[16]);
 varx_type(a16).swap(vars[15]);
 varx_type(a17).swap(vars[14]);
 varx_type(a18).swap(vars[13]);
 varx_type(a19).swap(vars[12]);
 varx_type(a20).swap(vars[11]);
 varx_type(a21).swap(vars[10]);
 varx_type(a22).swap(vars[9]);
 varx_type(a23).swap(vars[8]);
 varx_type(a24).swap(vars[7]);
 varx_type(a25).swap(vars[6]);
 varx_type(a26).swap(vars[5]);
 varx_type(a27).swap(vars[4]);
 varx_type(a28).swap(vars[3]);
 varx_type(a29).swap(vars[2]);
 varx_type(a30).swap(vars[1]);
 varx_type(a31).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

template <typename R, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
R invoke_method(of_type<R>, LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30, T31 const &a31)
{
 typedef com_return_traits<R>  return_traits_t;
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[32];
 VARIANT result;
 ::VariantInit(&result);
 stlsoft::scoped_handle<VARIANT*> result_(&result, ::VariantClear);
 // arguments must be reversed
 varx_type(a0).swap(vars[31]);
 varx_type(a1).swap(vars[30]);
 varx_type(a2).swap(vars[29]);
 varx_type(a3).swap(vars[28]);
 varx_type(a4).swap(vars[27]);
 varx_type(a5).swap(vars[26]);
 varx_type(a6).swap(vars[25]);
 varx_type(a7).swap(vars[24]);
 varx_type(a8).swap(vars[23]);
 varx_type(a9).swap(vars[22]);
 varx_type(a10).swap(vars[21]);
 varx_type(a11).swap(vars[20]);
 varx_type(a12).swap(vars[19]);
 varx_type(a13).swap(vars[18]);
 varx_type(a14).swap(vars[17]);
 varx_type(a15).swap(vars[16]);
 varx_type(a16).swap(vars[15]);
 varx_type(a17).swap(vars[14]);
 varx_type(a18).swap(vars[13]);
 varx_type(a19).swap(vars[12]);
 varx_type(a20).swap(vars[11]);
 varx_type(a21).swap(vars[10]);
 varx_type(a22).swap(vars[9]);
 varx_type(a23).swap(vars[8]);
 varx_type(a24).swap(vars[7]);
 varx_type(a25).swap(vars[6]);
 varx_type(a26).swap(vars[5]);
 varx_type(a27).swap(vars[4]);
 varx_type(a28).swap(vars[3]);
 varx_type(a29).swap(vars[2]);
 varx_type(a30).swap(vars[1]);
 varx_type(a31).swap(vars[0]);
 object_helper_type_::internal_invoke_method(*this, &result, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
 return return_traits_t::convert(result, m_coercionLevel);
}

/* ///////////////////////////// end of file //////////////////////////// */
