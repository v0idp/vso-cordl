#pragma once
// IWYU pragma private; include "DG/Tweening/TweenCallback_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "DG/Tweening/zzzz__TweenCallback_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void DG::Tweening::TweenCallback_1<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::TweenCallback_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template<typename T>
inline void DG::Tweening::TweenCallback_1<T>::Invoke(T  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::TweenCallback_1<T>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline ::System::IAsyncResult* DG::Tweening::TweenCallback_1<T>::BeginInvoke(T  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::TweenCallback_1<T>*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, value, callback, object);
}
template<typename T>
inline void DG::Tweening::TweenCallback_1<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::TweenCallback_1<T>*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template<typename T>
inline ::DG::Tweening::TweenCallback_1<T>* DG::Tweening::TweenCallback_1<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::TweenCallback_1<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::DG::Tweening::TweenCallback_1<T>::TweenCallback_1()   {
}
