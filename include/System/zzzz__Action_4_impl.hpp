#pragma once
// IWYU pragma private; include "System/Action_4.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3,typename T4>
inline void System::Action_4<T1,T2,T3,T4>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_4<T1,T2,T3,T4>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void System::Action_4<T1,T2,T3,T4>::Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_4<T1,T2,T3,T4>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2, arg3, arg4);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::System::Action_4<T1,T2,T3,T4>* System::Action_4<T1,T2,T3,T4>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Action_4<T1,T2,T3,T4>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4>
constexpr ::System::Action_4<T1,T2,T3,T4>::Action_4()   {
}
