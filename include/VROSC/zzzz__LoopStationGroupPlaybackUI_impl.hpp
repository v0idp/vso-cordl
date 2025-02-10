#pragma once
// IWYU pragma private; include "VROSC/LoopStationGroupPlaybackUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopStationGroupPlaybackUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__LoopPlayButton_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfigOverride_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
#include "VROSC/zzzz__LoopStationGroup_def.hpp"
#include "VROSC/zzzz__LoopStation_def.hpp"
#include "VROSC/zzzz__OverridePlaybackSettingsUI_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.set_PlaybackConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(::VROSC::LoopPlaybackConfigOverride*)>(&::VROSC::LoopStationGroupPlaybackUI::set_PlaybackConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b6b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "set_PlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.get_PlaybackConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LoopPlaybackConfigOverride* (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::get_PlaybackConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18b6b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "get_PlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(::VROSC::LoopStation*, ::VROSC::LoopStationGroup*, ::VROSC::LoopPlaybackConfigOverride*)>(&::VROSC::LoopStationGroupPlaybackUI::Setup)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x18b6b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.LoopAdded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopStationGroupPlaybackUI::LoopAdded)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x18b6df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "LoopAdded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.LoopRemoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(::VROSC::LoopPlayer*)>(&::VROSC::LoopStationGroupPlaybackUI::LoopRemoved)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x18b6f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "LoopRemoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x18b70ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.UpdatePlayback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::UpdatePlayback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18b6f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "UpdatePlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.SetPlaybackConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(::VROSC::LoopPlaybackConfigOverride*)>(&::VROSC::LoopStationGroupPlaybackUI::SetPlaybackConfig)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18b6dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "SetPlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::OnDestroy)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x18b7308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.ConfigChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::ConfigChanged)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18b753c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "ConfigChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.PlayToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(bool)>(&::VROSC::LoopStationGroupPlaybackUI::PlayToggled)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x18b767c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "PlayToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.GetLongestLoopCurrentlyPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::LoopPlayer> (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::GetLongestLoopCurrentlyPlaying)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x18b7130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "GetLongestLoopCurrentlyPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)(::UnityEngine::Color)>(&::VROSC::LoopStationGroupPlaybackUI::SetColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18b7978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationGroupPlaybackUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopStationGroupPlaybackUI::*)()>(&::VROSC::LoopStationGroupPlaybackUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18b7994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI>& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__overridePlaybackSettingsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overridePlaybackSettingsUI;
}
constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI> const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__overridePlaybackSettingsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overridePlaybackSettingsUI;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__overridePlaybackSettingsUI(::UnityW<::VROSC::OverridePlaybackSettingsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overridePlaybackSettingsUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayButton>& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__playButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playButton;
}
constexpr ::UnityW<::VROSC::LoopPlayButton> const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__playButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playButton;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__playButton(::UnityW<::VROSC::LoopPlayButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoopPlaybackConfigOverride*& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__PlaybackConfig_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackConfig_k__BackingField;
}
constexpr ::VROSC::LoopPlaybackConfigOverride* const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__PlaybackConfig_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlaybackConfig_k__BackingField;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__PlaybackConfig_k__BackingField(::VROSC::LoopPlaybackConfigOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PlaybackConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStationGroup>& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__loopGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopGroup;
}
constexpr ::UnityW<::VROSC::LoopStationGroup> const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__loopGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopGroup;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__loopGroup(::UnityW<::VROSC::LoopStationGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopStation>& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__loopStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr ::UnityW<::VROSC::LoopStation> const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__loopStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopStation;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopStation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__firstLoopPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstLoopPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__firstLoopPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstLoopPlayer;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__firstLoopPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstLoopPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__longestLoopPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____longestLoopPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__longestLoopPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____longestLoopPlayer;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__longestLoopPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____longestLoopPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__shouldUpdatePlayback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUpdatePlayback;
}
constexpr bool const& VROSC::LoopStationGroupPlaybackUI::__cordl_internal_get__shouldUpdatePlayback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUpdatePlayback;
}
constexpr void VROSC::LoopStationGroupPlaybackUI::__cordl_internal_set__shouldUpdatePlayback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldUpdatePlayback = value;
}
inline void VROSC::LoopStationGroupPlaybackUI::set_PlaybackConfig(::VROSC::LoopPlaybackConfigOverride*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "set_PlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::VROSC::LoopPlaybackConfigOverride* VROSC::LoopStationGroupPlaybackUI::get_PlaybackConfig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "get_PlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::LoopPlaybackConfigOverride*, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupPlaybackUI::Setup(::VROSC::LoopStation*  loopStation, ::VROSC::LoopStationGroup*  loopGroup, ::VROSC::LoopPlaybackConfigOverride*  configOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopStation, loopGroup, configOverride);
}
inline void VROSC::LoopStationGroupPlaybackUI::LoopAdded(::VROSC::LoopPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "LoopAdded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void VROSC::LoopStationGroupPlaybackUI::LoopRemoved(::VROSC::LoopPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "LoopRemoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void VROSC::LoopStationGroupPlaybackUI::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupPlaybackUI::UpdatePlayback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "UpdatePlayback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupPlaybackUI::SetPlaybackConfig(::VROSC::LoopPlaybackConfigOverride*  playbackOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "SetPlaybackConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfigOverride*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playbackOverride);
}
inline void VROSC::LoopStationGroupPlaybackUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupPlaybackUI::ConfigChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "ConfigChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupPlaybackUI::PlayToggled(bool  play)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "PlayToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, play);
}
inline ::UnityW<::VROSC::LoopPlayer> VROSC::LoopStationGroupPlaybackUI::GetLongestLoopCurrentlyPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "GetLongestLoopCurrentlyPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::LoopPlayer>, false>(this, ___internal_method);
}
inline void VROSC::LoopStationGroupPlaybackUI::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::LoopStationGroupPlaybackUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationGroupPlaybackUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopStationGroupPlaybackUI* VROSC::LoopStationGroupPlaybackUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopStationGroupPlaybackUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationGroupPlaybackUI::LoopStationGroupPlaybackUI()   {
}
