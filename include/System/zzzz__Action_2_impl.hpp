#pragma once
// IWYU pragma private; include "System/Action_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2>
inline void System::Action_2<T1,T2>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_2<T1,T2>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template<typename T1,typename T2>
inline void System::Action_2<T1,T2>::Invoke(T1  arg1, T2  arg2)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Action_2<T1,T2>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2);
}
template<typename T1,typename T2>
inline ::System::Action_2<T1,T2>* System::Action_2<T1,T2>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Action_2<T1,T2>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::System::Action_2<T1,T2>::Action_2()   {
}
