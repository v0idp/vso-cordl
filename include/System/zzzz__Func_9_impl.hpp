#pragma once
// IWYU pragma private; include "System/Func_9.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Func_9_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename TResult>
inline void System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename TResult>
inline TResult System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>::Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7, T8  arg8)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename TResult>
inline ::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>* System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>*>(object, method));
}
// Ctor Parameters []
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename TResult>
constexpr ::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>::Func_9()   {
}
