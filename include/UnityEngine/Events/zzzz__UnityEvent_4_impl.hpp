#pragma once
// IWYU pragma private; include "UnityEngine/Events/UnityEvent_4.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_4_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
template<typename T0,typename T1,typename T2,typename T3>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::__cordl_internal_get_m_InvokeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InvokeArray;
}
template<typename T0,typename T1,typename T2,typename T3>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::__cordl_internal_get_m_InvokeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InvokeArray;
}
template<typename T0,typename T1,typename T2,typename T3>
constexpr void UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::__cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___m_InvokeArray, value);
}
template<typename T0,typename T1,typename T2,typename T3>
inline void UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T0,typename T1,typename T2,typename T3>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, targetObjType);
}
template<typename T0,typename T1,typename T2,typename T3>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(this, ___internal_method, target, theFunction);
}
template<typename T0,typename T1,typename T2,typename T3>
inline ::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>* UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>*>());
}
// Ctor Parameters []
template<typename T0,typename T1,typename T2,typename T3>
constexpr ::UnityEngine::Events::UnityEvent_4<T0,T1,T2,T3>::UnityEvent_4()   {
}
