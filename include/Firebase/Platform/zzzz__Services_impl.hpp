#pragma once
// IWYU pragma private; include "Firebase/Platform/Services.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Platform/zzzz__Services_def.hpp"
#include "Firebase/Platform/zzzz__IAppConfigExtensions_def.hpp"
#include "Firebase/Platform/zzzz__IClockService_def.hpp"
#include "Firebase/Platform/zzzz__ILoggingService_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::Services.set_AppConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Platform::IAppConfigExtensions*)>(&::Firebase::Platform::Services::set_AppConfig)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x192251c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get(),
                        "set_AppConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::IAppConfigExtensions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::Services.set_Clock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Platform::IClockService*)>(&::Firebase::Platform::Services::set_Clock)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1922578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get(),
                        "set_Clock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::IClockService*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::Services.set_Logging
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Platform::ILoggingService*)>(&::Firebase::Platform::Services::set_Logging)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x19225d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get(),
                        "set_Logging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::ILoggingService*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Platform::Services::setStaticF__AppConfig_k__BackingField(::Firebase::Platform::IAppConfigExtensions*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::IAppConfigExtensions*, "<AppConfig>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get>(std::forward<::Firebase::Platform::IAppConfigExtensions*>(value));
}
inline ::Firebase::Platform::IAppConfigExtensions* Firebase::Platform::Services::getStaticF__AppConfig_k__BackingField()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::IAppConfigExtensions*, "<AppConfig>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get>();
}
inline void Firebase::Platform::Services::setStaticF__Clock_k__BackingField(::Firebase::Platform::IClockService*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::IClockService*, "<Clock>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get>(std::forward<::Firebase::Platform::IClockService*>(value));
}
inline ::Firebase::Platform::IClockService* Firebase::Platform::Services::getStaticF__Clock_k__BackingField()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::IClockService*, "<Clock>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get>();
}
inline void Firebase::Platform::Services::setStaticF__Logging_k__BackingField(::Firebase::Platform::ILoggingService*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::ILoggingService*, "<Logging>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get>(std::forward<::Firebase::Platform::ILoggingService*>(value));
}
inline ::Firebase::Platform::ILoggingService* Firebase::Platform::Services::getStaticF__Logging_k__BackingField()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::ILoggingService*, "<Logging>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get>();
}
inline void Firebase::Platform::Services::set_AppConfig(::Firebase::Platform::IAppConfigExtensions*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get(),
                        "set_AppConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::IAppConfigExtensions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Firebase::Platform::Services::set_Clock(::Firebase::Platform::IClockService*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get(),
                        "set_Clock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::IClockService*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Firebase::Platform::Services::set_Logging(::Firebase::Platform::ILoggingService*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Services*>::get(),
                        "set_Logging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::ILoggingService*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Firebase::Platform::Services::Services()   {
}
