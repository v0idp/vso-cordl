#pragma once
// IWYU pragma private; include "Firebase/Platform/Default/SystemClock.hpp"
#include "Firebase/Platform/zzzz__IClockService_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Platform/Default/zzzz__SystemClock_def.hpp"
#include "Firebase/Platform/zzzz__IClockService_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::Default::SystemClock._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::Default::SystemClock::*)()>(&::Firebase::Platform::Default::SystemClock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1921c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::SystemClock*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Platform::Default::SystemClock::setStaticF_Instance(::Firebase::Platform::IClockService*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::IClockService*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::SystemClock*>::get>(std::forward<::Firebase::Platform::IClockService*>(value));
}
inline ::Firebase::Platform::IClockService* Firebase::Platform::Default::SystemClock::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::IClockService*, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::SystemClock*>::get>();
}
inline void Firebase::Platform::Default::SystemClock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::SystemClock*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Platform::Default::SystemClock* Firebase::Platform::Default::SystemClock::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Platform::Default::SystemClock*>());
}
/// @brief Convert operator to "::Firebase::Platform::IClockService"
constexpr  Firebase::Platform::Default::SystemClock::operator ::Firebase::Platform::IClockService*() noexcept {
return static_cast<::Firebase::Platform::IClockService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Firebase::Platform::IClockService"
constexpr ::Firebase::Platform::IClockService* Firebase::Platform::Default::SystemClock::i___Firebase__Platform__IClockService() noexcept {
return static_cast<::Firebase::Platform::IClockService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Platform::Default::SystemClock::SystemClock()   {
}
