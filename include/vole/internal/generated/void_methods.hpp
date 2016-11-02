/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/internal/generated/void_methods.hpp
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

void invoke_method_v(LPCOLESTR methodName)
{
 object_helper_type_::internal_invoke_method_v(*this, methodName, NULL, 0);
}

void invoke_method_v(DISPID methodId)
{
 object_helper_type_::internal_invoke_method_v(*this, methodId, NULL, 0);
}

// 1 param

template<typename T0>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0)
{
 varx_type var0(a0);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &var0, 1);
}

template<typename T0>
void invoke_method_v(DISPID methodId, T0 const &a0)
{
 varx_type var0(a0);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &var0, 1);
}

// 2 params

template<typename T0, typename T1>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[2];
 // arguments must be reversed
 varx_type(a0).swap(vars[1]);
 varx_type(a1).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[2];
 // arguments must be reversed
 varx_type(a0).swap(vars[1]);
 varx_type(a1).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 3 params

template<typename T0, typename T1, typename T2>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[3];
 // arguments must be reversed
 varx_type(a0).swap(vars[2]);
 varx_type(a1).swap(vars[1]);
 varx_type(a2).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[3];
 // arguments must be reversed
 varx_type(a0).swap(vars[2]);
 varx_type(a1).swap(vars[1]);
 varx_type(a2).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 4 params

template<typename T0, typename T1, typename T2, typename T3>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[4];
 // arguments must be reversed
 varx_type(a0).swap(vars[3]);
 varx_type(a1).swap(vars[2]);
 varx_type(a2).swap(vars[1]);
 varx_type(a3).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[4];
 // arguments must be reversed
 varx_type(a0).swap(vars[3]);
 varx_type(a1).swap(vars[2]);
 varx_type(a2).swap(vars[1]);
 varx_type(a3).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 5 params

template<typename T0, typename T1, typename T2, typename T3, typename T4>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[5];
 // arguments must be reversed
 varx_type(a0).swap(vars[4]);
 varx_type(a1).swap(vars[3]);
 varx_type(a2).swap(vars[2]);
 varx_type(a3).swap(vars[1]);
 varx_type(a4).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[5];
 // arguments must be reversed
 varx_type(a0).swap(vars[4]);
 varx_type(a1).swap(vars[3]);
 varx_type(a2).swap(vars[2]);
 varx_type(a3).swap(vars[1]);
 varx_type(a4).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 6 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[6];
 // arguments must be reversed
 varx_type(a0).swap(vars[5]);
 varx_type(a1).swap(vars[4]);
 varx_type(a2).swap(vars[3]);
 varx_type(a3).swap(vars[2]);
 varx_type(a4).swap(vars[1]);
 varx_type(a5).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[6];
 // arguments must be reversed
 varx_type(a0).swap(vars[5]);
 varx_type(a1).swap(vars[4]);
 varx_type(a2).swap(vars[3]);
 varx_type(a3).swap(vars[2]);
 varx_type(a4).swap(vars[1]);
 varx_type(a5).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 7 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[7];
 // arguments must be reversed
 varx_type(a0).swap(vars[6]);
 varx_type(a1).swap(vars[5]);
 varx_type(a2).swap(vars[4]);
 varx_type(a3).swap(vars[3]);
 varx_type(a4).swap(vars[2]);
 varx_type(a5).swap(vars[1]);
 varx_type(a6).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[7];
 // arguments must be reversed
 varx_type(a0).swap(vars[6]);
 varx_type(a1).swap(vars[5]);
 varx_type(a2).swap(vars[4]);
 varx_type(a3).swap(vars[3]);
 varx_type(a4).swap(vars[2]);
 varx_type(a5).swap(vars[1]);
 varx_type(a6).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 8 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[8];
 // arguments must be reversed
 varx_type(a0).swap(vars[7]);
 varx_type(a1).swap(vars[6]);
 varx_type(a2).swap(vars[5]);
 varx_type(a3).swap(vars[4]);
 varx_type(a4).swap(vars[3]);
 varx_type(a5).swap(vars[2]);
 varx_type(a6).swap(vars[1]);
 varx_type(a7).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[8];
 // arguments must be reversed
 varx_type(a0).swap(vars[7]);
 varx_type(a1).swap(vars[6]);
 varx_type(a2).swap(vars[5]);
 varx_type(a3).swap(vars[4]);
 varx_type(a4).swap(vars[3]);
 varx_type(a5).swap(vars[2]);
 varx_type(a6).swap(vars[1]);
 varx_type(a7).swap(vars[0]);
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 9 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[9];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[9];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 10 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[10];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[10];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 11 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[11];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[11];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 12 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[12];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[12];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 13 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[13];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[13];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 14 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[14];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[14];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 15 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[15];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[15];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 16 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[16];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[16];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 17 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[17];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[17];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 18 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[18];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[18];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 19 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[19];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[19];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 20 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[20];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[20];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 21 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[21];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[21];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 22 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[22];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[22];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 23 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[23];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[23];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 24 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[24];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[24];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 25 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[25];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[25];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 26 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[26];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[26];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 27 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[27];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[27];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 28 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[28];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[28];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 29 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[29];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[29];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 30 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[30];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[30];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 31 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[31];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[31];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

// 32 params

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
void invoke_method_v(LPCOLESTR methodName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30, T31 const &a31)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[32];
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
 object_helper_type_::internal_invoke_method_v(*this, methodName, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
void invoke_method_v(DISPID methodId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3, T4 const &a4, T5 const &a5, T6 const &a6, T7 const &a7, T8 const &a8, T9 const &a9, T10 const &a10, T11 const &a11, T12 const &a12, T13 const &a13, T14 const &a14, T15 const &a15, T16 const &a16, T17 const &a17, T18 const &a18, T19 const &a19, T20 const &a20, T21 const &a21, T22 const &a22, T23 const &a23, T24 const &a24, T25 const &a25, T26 const &a26, T27 const &a27, T28 const &a28, T29 const &a29, T30 const &a30, T31 const &a31)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[32];
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
 object_helper_type_::internal_invoke_method_v(*this, methodId, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

/* ///////////////////////////// end of file //////////////////////////// */
