/* /////////////////////////////////////////////////////////////////////////
 * File:        vole/internal/generated/put_properties.hpp
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

// 1 param

template <typename T0>
void put_property(DISPID propId, T0 const &a0)
{
 varx_type var0(a0);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYPUT, &var0, 1);
}

template <typename T0>
inline void put_property(LPCOLESTR propName, T0 const &a0)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0);
}

template <typename T0>
void put_prop(DISPID propId, T0 const &a0)
{
 put_property(propId, a0);
}

template <typename T0>
inline void put_prop(LPCOLESTR propName, T0 const &a0)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0);
}

// 2 params

template <typename T0, typename T1>
void put_property(DISPID propId, T0 const &a0, T1 const &a1)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[2];
 // arguments must be reversed
 varx_type(a0).swap(vars[1]);
 varx_type(a1).swap(vars[0]);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYPUT, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template <typename T0, typename T1>
inline void put_property(LPCOLESTR propName, T0 const &a0, T1 const &a1)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1);
}

template <typename T0, typename T1>
void put_prop(DISPID propId, T0 const &a0, T1 const &a1)
{
 put_property(propId, a0, a1);
}

template <typename T0, typename T1>
inline void put_prop(LPCOLESTR propName, T0 const &a0, T1 const &a1)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1);
}

// 3 params

template <typename T0, typename T1, typename T2>
void put_property(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[3];
 // arguments must be reversed
 varx_type(a0).swap(vars[2]);
 varx_type(a1).swap(vars[1]);
 varx_type(a2).swap(vars[0]);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYPUT, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template <typename T0, typename T1, typename T2>
inline void put_property(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2);
}

template <typename T0, typename T1, typename T2>
void put_prop(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2)
{
 put_property(propId, a0, a1, a2);
}

template <typename T0, typename T1, typename T2>
inline void put_prop(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2);
}

// 4 params

template <typename T0, typename T1, typename T2, typename T3>
void put_property(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
{
 STLSOFT_STATIC_ASSERT(sizeof(varx_type) == sizeof(VARIANT));
 varx_type vars[4];
 // arguments must be reversed
 varx_type(a0).swap(vars[3]);
 varx_type(a1).swap(vars[2]);
 varx_type(a2).swap(vars[1]);
 varx_type(a3).swap(vars[0]);
 object_helper_type_::internal_Invoke(*this, propId, DISPATCH_PROPERTYPUT, &vars[0], STLSOFT_NUM_ELEMENTS(vars));
}

template <typename T0, typename T1, typename T2, typename T3>
inline void put_property(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2, a3);
}

template <typename T0, typename T1, typename T2, typename T3>
void put_prop(DISPID propId, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
{
 put_property(propId, a0, a1, a2, a3);
}

template <typename T0, typename T1, typename T2, typename T3>
inline void put_prop(LPCOLESTR propName, T0 const &a0, T1 const &a1, T2 const &a2, T3 const &a3)
{
 put_property(object_helper_type_::internal_GetIDOfName(*this, propName), a0, a1, a2, a3);
}

/* ///////////////////////////// end of file //////////////////////////// */
