#pragma once
// IWYU pragma private; include "System/EventHandler_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TEventArgs>
inline void System::EventHandler_1<TEventArgs>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EventHandler_1<TEventArgs>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template<typename TEventArgs>
inline void System::EventHandler_1<TEventArgs>::Invoke(::System::Object*  sender, TEventArgs  e)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EventHandler_1<TEventArgs>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
template<typename TEventArgs>
inline ::System::EventHandler_1<TEventArgs>* System::EventHandler_1<TEventArgs>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::EventHandler_1<TEventArgs>*>(object, method));
}
// Ctor Parameters []
template<typename TEventArgs>
constexpr ::System::EventHandler_1<TEventArgs>::EventHandler_1()   {
}
