#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/CowatchingState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchingState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CowatchingState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CowatchingState::*)(::System::IntPtr)>(&::Oculus::Platform::Models::CowatchingState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2884a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CowatchingState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::CowatchingState::__cordl_internal_get_InSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InSession;
}
constexpr bool const& Oculus::Platform::Models::CowatchingState::__cordl_internal_get_InSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InSession;
}
constexpr void Oculus::Platform::Models::CowatchingState::__cordl_internal_set_InSession(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InSession = value;
}
inline void Oculus::Platform::Models::CowatchingState::_ctor(::System::IntPtr  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CowatchingState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::CowatchingState* Oculus::Platform::Models::CowatchingState::New_ctor(::System::IntPtr  o)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::CowatchingState*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CowatchingState::CowatchingState()   {
}
