#pragma once
// IWYU pragma private; include "System/Threading/ManualResetEvent.hpp"
#include "System/Threading/zzzz__EventWaitHandle_impl.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::System::Threading::ManualResetEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ManualResetEvent::*)(bool)>(&::System::Threading::ManualResetEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27a6d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ManualResetEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::ManualResetEvent::_ctor(bool  initialState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ManualResetEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialState);
}
inline ::System::Threading::ManualResetEvent* System::Threading::ManualResetEvent::New_ctor(bool  initialState)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ManualResetEvent*>(initialState));
}
// Ctor Parameters []
constexpr ::System::Threading::ManualResetEvent::ManualResetEvent()   {
}
