#pragma once
// IWYU pragma private; include "System/Threading/ContextCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ContextCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ContextCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Threading::ContextCallback::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x27aae38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ContextCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ContextCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ContextCallback::*)(::System::Object*)>(&::System::Threading::ContextCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ade48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ContextCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ContextCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void System::Threading::ContextCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ContextCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Threading::ContextCallback::Invoke(::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ContextCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::Threading::ContextCallback* System::Threading::ContextCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ContextCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Threading::ContextCallback::ContextCallback()   {
}
