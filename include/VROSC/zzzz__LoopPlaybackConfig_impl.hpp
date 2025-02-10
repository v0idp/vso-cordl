#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigData_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackSettings_def.hpp"
#include "VROSC/zzzz__Loop_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync::LoopPlaybackConfig_TriggerSync(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync::LoopPlaybackConfig_TriggerSync()   {
}
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::Instant{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::LoopPoint{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::Bar{static_cast<int32_t>(0x2)};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::Quarter{static_cast<int32_t>(0x3)};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::Eigth{static_cast<int32_t>(0x4)};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::Sixteenth{static_cast<int32_t>(0x5)};
constexpr ::VROSC::LoopPlaybackConfig_TriggerSync  VROSC::LoopPlaybackConfig_TriggerSync::Twelfth{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration::LoopPlaybackConfig_FadeDuration(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration::LoopPlaybackConfig_FadeDuration()   {
}
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::Sixteenth{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::Eighth{static_cast<int32_t>(0x2)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::Quarter{static_cast<int32_t>(0x3)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::Bar{static_cast<int32_t>(0x4)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::TwoBars{static_cast<int32_t>(0x5)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::FourBars{static_cast<int32_t>(0x6)};
constexpr ::VROSC::LoopPlaybackConfig_FadeDuration  VROSC::LoopPlaybackConfig_FadeDuration::Auto{static_cast<int32_t>(0x7)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopPlaybackConfig_Sync::LoopPlaybackConfig_Sync(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlaybackConfig_Sync::LoopPlaybackConfig_Sync()   {
}
constexpr ::VROSC::LoopPlaybackConfig_Sync  VROSC::LoopPlaybackConfig_Sync::PlayFromStart{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopPlaybackConfig_Sync  VROSC::LoopPlaybackConfig_Sync::Global{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoopPlaybackConfig_LoopMode::LoopPlaybackConfig_LoopMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlaybackConfig_LoopMode::LoopPlaybackConfig_LoopMode()   {
}
constexpr ::VROSC::LoopPlaybackConfig_LoopMode  VROSC::LoopPlaybackConfig_LoopMode::Loop{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoopPlaybackConfig_LoopMode  VROSC::LoopPlaybackConfig_LoopMode::Once{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.set_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfigData*)>(&::VROSC::LoopPlaybackConfig::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.get_Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfigData* (::VROSC::LoopPlaybackConfig::*)()>(&::VROSC::LoopPlaybackConfig::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.set_ReferenceLoopForStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::Loop*)>(&::VROSC::LoopPlaybackConfig::set_ReferenceLoopForStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "set_ReferenceLoopForStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.get_ReferenceLoopForStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Loop* (::VROSC::LoopPlaybackConfig::*)()>(&::VROSC::LoopPlaybackConfig::get_ReferenceLoopForStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "get_ReferenceLoopForStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.set_ReferenceLoopForLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::Loop*)>(&::VROSC::LoopPlaybackConfig::set_ReferenceLoopForLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "set_ReferenceLoopForLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.get_ReferenceLoopForLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Loop* (::VROSC::LoopPlaybackConfig::*)()>(&::VROSC::LoopPlaybackConfig::get_ReferenceLoopForLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1898aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "get_ReferenceLoopForLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)()>(&::VROSC::LoopPlaybackConfig::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1898ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfigData*)>(&::VROSC::LoopPlaybackConfig::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1898b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig*, bool)>(&::VROSC::LoopPlaybackConfig::_ctor)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x1898c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig_TriggerSync, bool, ::VROSC::LoopPlaybackConfig_TriggerSync, ::VROSC::LoopPlaybackConfig_FadeDuration, ::VROSC::LoopPlaybackConfig_FadeDuration, bool, bool)>(&::VROSC::LoopPlaybackConfig::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1899060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SharedConstructor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig_TriggerSync, bool, ::VROSC::LoopPlaybackConfig_TriggerSync, ::VROSC::LoopPlaybackConfig_FadeDuration, ::VROSC::LoopPlaybackConfig_FadeDuration, bool, bool)>(&::VROSC::LoopPlaybackConfig::SharedConstructor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1898b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SharedConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.ApplyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopPlaybackConfig::ApplyTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1899148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SetStartMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig_TriggerSync)>(&::VROSC::LoopPlaybackConfig::SetStartMode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18991a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetStartMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SetStopMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig_TriggerSync)>(&::VROSC::LoopPlaybackConfig::SetStopMode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18991f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetStopMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SetFadeIn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig_FadeDuration)>(&::VROSC::LoopPlaybackConfig::SetFadeIn)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x189924c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetFadeIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SetFadeOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(::VROSC::LoopPlaybackConfig_FadeDuration)>(&::VROSC::LoopPlaybackConfig::SetFadeOut)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18992a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetFadeOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SetOneShot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(bool)>(&::VROSC::LoopPlaybackConfig::SetOneShot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18992f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetOneShot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.SetRetrigger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlaybackConfig::*)(bool)>(&::VROSC::LoopPlaybackConfig::SetRetrigger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x189934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetRetrigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.GetNextTriggerSyncPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::VROSC::LoopPlayerPlaybackSettings*, int32_t, ::VROSC::LoopPlaybackConfig_TriggerSync)>(&::VROSC::LoopPlaybackConfig::GetNextTriggerSyncPoint)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18993a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "GetNextTriggerSyncPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.GetSyncLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::VROSC::LoopPlayerPlaybackSettings*, ::VROSC::LoopPlaybackConfig_TriggerSync)>(&::VROSC::LoopPlaybackConfig::GetSyncLength)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1899514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "GetSyncLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlaybackConfig.GetFirstPlayConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfig* (*)(::VROSC::LoopPlaybackConfig*)>(&::VROSC::LoopPlaybackConfig::GetFirstPlayConfig)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1899658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "GetFirstPlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::LoopPlaybackConfigData*& VROSC::LoopPlaybackConfig::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::VROSC::LoopPlaybackConfigData* const& VROSC::LoopPlaybackConfig::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set__Data_k__BackingField(::VROSC::LoopPlaybackConfigData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Data_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Loop*& VROSC::LoopPlaybackConfig::__cordl_internal_get__ReferenceLoopForStart_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceLoopForStart_k__BackingField;
}
constexpr ::VROSC::Loop* const& VROSC::LoopPlaybackConfig::__cordl_internal_get__ReferenceLoopForStart_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceLoopForStart_k__BackingField;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set__ReferenceLoopForStart_k__BackingField(::VROSC::Loop*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ReferenceLoopForStart_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Loop*& VROSC::LoopPlaybackConfig::__cordl_internal_get__ReferenceLoopForLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceLoopForLength_k__BackingField;
}
constexpr ::VROSC::Loop* const& VROSC::LoopPlaybackConfig::__cordl_internal_get__ReferenceLoopForLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceLoopForLength_k__BackingField;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set__ReferenceLoopForLength_k__BackingField(::VROSC::Loop*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ReferenceLoopForLength_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnStartSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartSet;
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnStartSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartSet;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnStartSet(::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnStartSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnStopSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopSet;
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnStopSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopSet;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnStopSet(::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnStopSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnOneShotSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOneShotSet;
}
constexpr ::System::Action_1<bool>* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnOneShotSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOneShotSet;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnOneShotSet(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnOneShotSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnRetriggerSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRetriggerSet;
}
constexpr ::System::Action_1<bool>* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnRetriggerSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRetriggerSet;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnRetriggerSet(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRetriggerSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnFadeOutSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFadeOutSet;
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnFadeOutSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFadeOutSet;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnFadeOutSet(::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnFadeOutSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnFadeInSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFadeInSet;
}
constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnFadeInSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFadeInSet;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnFadeInSet(::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnFadeInSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnConfigChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConfigChanged;
}
constexpr ::System::Action* const& VROSC::LoopPlaybackConfig::__cordl_internal_get_OnConfigChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConfigChanged;
}
constexpr void VROSC::LoopPlaybackConfig::__cordl_internal_set_OnConfigChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnConfigChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopPlaybackConfig::setStaticF_TriggerSyncNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "TriggerSyncNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> VROSC::LoopPlaybackConfig::getStaticF_TriggerSyncNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "TriggerSyncNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get>();
}
inline void VROSC::LoopPlaybackConfig::setStaticF_FadeDurationNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "FadeDurationNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> VROSC::LoopPlaybackConfig::getStaticF_FadeDurationNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "FadeDurationNames", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get>();
}
inline void VROSC::LoopPlaybackConfig::set_Data(::VROSC::LoopPlaybackConfigData*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "set_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlaybackConfigData* VROSC::LoopPlaybackConfig::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "get_Data",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfigData*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlaybackConfig::set_ReferenceLoopForStart(::VROSC::Loop*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "set_ReferenceLoopForStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Loop* VROSC::LoopPlaybackConfig::get_ReferenceLoopForStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "get_ReferenceLoopForStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Loop*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlaybackConfig::set_ReferenceLoopForLength(::VROSC::Loop*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "set_ReferenceLoopForLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Loop*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::Loop* VROSC::LoopPlaybackConfig::get_ReferenceLoopForLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "get_ReferenceLoopForLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Loop*, false>(this, ___internal_method);
}
inline void VROSC::LoopPlaybackConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlaybackConfig::_ctor(::VROSC::LoopPlaybackConfigData*  configData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configData);
}
inline void VROSC::LoopPlaybackConfig::_ctor(::VROSC::LoopPlaybackConfig*  other, bool  updateFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other, updateFrom);
}
inline void VROSC::LoopPlaybackConfig::_ctor(::VROSC::LoopPlaybackConfig_TriggerSync  startMode, bool  isStartModeLocked, ::VROSC::LoopPlaybackConfig_TriggerSync  stopMode, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut, bool  oneShot, bool  retrigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startMode, isStartModeLocked, stopMode, fadeIn, fadeOut, oneShot, retrigger);
}
inline void VROSC::LoopPlaybackConfig::SharedConstructor(::VROSC::LoopPlaybackConfig_TriggerSync  startMode, bool  isStartModeLocked, ::VROSC::LoopPlaybackConfig_TriggerSync  stopMode, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut, bool  oneShot, bool  retrigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SharedConstructor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startMode, isStartModeLocked, stopMode, fadeIn, fadeOut, oneShot, retrigger);
}
inline void VROSC::LoopPlaybackConfig::ApplyTo(::VROSC::LoopPlaybackConfig*  other)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::LoopPlaybackConfig::SetStartMode(::VROSC::LoopPlaybackConfig_TriggerSync  startMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetStartMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startMode);
}
inline void VROSC::LoopPlaybackConfig::SetStopMode(::VROSC::LoopPlaybackConfig_TriggerSync  stopMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetStopMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stopMode);
}
inline void VROSC::LoopPlaybackConfig::SetFadeIn(::VROSC::LoopPlaybackConfig_FadeDuration  fade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetFadeIn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fade);
}
inline void VROSC::LoopPlaybackConfig::SetFadeOut(::VROSC::LoopPlaybackConfig_FadeDuration  fade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetFadeOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fade);
}
inline void VROSC::LoopPlaybackConfig::SetOneShot(bool  oneShot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetOneShot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oneShot);
}
inline void VROSC::LoopPlaybackConfig::SetRetrigger(bool  retrigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "SetRetrigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, retrigger);
}
inline int32_t VROSC::LoopPlaybackConfig::GetNextTriggerSyncPoint(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  sample, ::VROSC::LoopPlaybackConfig_TriggerSync  triggerSync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "GetNextTriggerSyncPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, settings, sample, triggerSync);
}
inline int32_t VROSC::LoopPlaybackConfig::GetSyncLength(::VROSC::LoopPlayerPlaybackSettings*  settings, ::VROSC::LoopPlaybackConfig_TriggerSync  sync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "GetSyncLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayerPlaybackSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_TriggerSync>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, settings, sync);
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlaybackConfig::GetFirstPlayConfig(::VROSC::LoopPlaybackConfig*  recording)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlaybackConfig*>::get(),
                        "GetFirstPlayConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfig*, false>(nullptr, ___internal_method, recording);
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlaybackConfig::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlaybackConfig*>());
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlaybackConfig::New_ctor(::VROSC::LoopPlaybackConfigData*  configData)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlaybackConfig*>(configData));
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlaybackConfig::New_ctor(::VROSC::LoopPlaybackConfig*  other, bool  updateFrom)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlaybackConfig*>(other, updateFrom));
}
inline ::VROSC::LoopPlaybackConfig* VROSC::LoopPlaybackConfig::New_ctor(::VROSC::LoopPlaybackConfig_TriggerSync  startMode, bool  isStartModeLocked, ::VROSC::LoopPlaybackConfig_TriggerSync  stopMode, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut, bool  oneShot, bool  retrigger)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlaybackConfig*>(startMode, isStartModeLocked, stopMode, fadeIn, fadeOut, oneShot, retrigger));
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlaybackConfig::LoopPlaybackConfig()   {
}
