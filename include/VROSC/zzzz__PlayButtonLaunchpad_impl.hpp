#pragma once
// IWYU pragma private; include "VROSC/PlayButtonLaunchpad.hpp"
#include "VROSC/zzzz__Launchpad_impl.hpp"
#include "VROSC/zzzz__PlayButtonLaunchpad_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__LaunchpadSpawner_def.hpp"
#include "VROSC/zzzz__LoopPlayButton_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
#include "VROSC/zzzz__LoopPlaybackSettingsToggle_def.hpp"
#include "VROSC/zzzz__LoopPlaybackSettingsUI_def.hpp"
#include "VROSC/zzzz__OverridePlaybackSettingsUI_def.hpp"
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)(::VROSC::LaunchpadSpawner*, ::StringW, ::StringW, ::StringW, ::UnityEngine::Color)>(&::VROSC::PlayButtonLaunchpad::Setup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17172c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)()>(&::VROSC::PlayButtonLaunchpad::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1717304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.AssignConfig
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)(::VROSC::LoopPlaybackConfig*)>(&::VROSC::PlayButtonLaunchpad::AssignConfig)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x17174a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "AssignConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.Unassign
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)()>(&::VROSC::PlayButtonLaunchpad::Unassign)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x17175e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "Unassign",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.AssignButton
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)(::VROSC::LoopPlayButton*)>(&::VROSC::PlayButtonLaunchpad::AssignButton)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x17177a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "AssignButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayButton*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.UpdateLoopPlayer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)()>(&::VROSC::PlayButtonLaunchpad::UpdateLoopPlayer)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1717928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "UpdateLoopPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)()>(&::VROSC::PlayButtonLaunchpad::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x1717a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad.LoopIsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)(bool)>(&::VROSC::PlayButtonLaunchpad::LoopIsPlaying)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1717cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "LoopIsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PlayButtonLaunchpad._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PlayButtonLaunchpad::*)()>(&::VROSC::PlayButtonLaunchpad::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1717d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopPlayButton>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__loopPlayButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayButton;
}
constexpr ::UnityW<::VROSC::LoopPlayButton> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__loopPlayButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayButton;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__loopPlayButton(::UnityW<::VROSC::LoopPlayButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlayButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__updaterMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updaterMesh;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__updaterMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updaterMesh;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__updaterMesh(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updaterMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__timingMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timingMesh;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__timingMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timingMesh;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__timingMesh(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timingMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__startIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__startIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startIcon;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__startIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__stopIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__stopIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopIcon;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__stopIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stopIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__slidersHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slidersHolder;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__slidersHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slidersHolder;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__slidersHolder(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____slidersHolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__overridePlaybackSettingsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overridePlaybackSettingsUI;
}
constexpr ::UnityW<::VROSC::OverridePlaybackSettingsUI> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__overridePlaybackSettingsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overridePlaybackSettingsUI;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__overridePlaybackSettingsUI(::UnityW<::VROSC::OverridePlaybackSettingsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overridePlaybackSettingsUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__loopPlaybackSettingsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlaybackSettingsUI;
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsUI> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__loopPlaybackSettingsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlaybackSettingsUI;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__loopPlaybackSettingsUI(::UnityW<::VROSC::LoopPlaybackSettingsUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlaybackSettingsUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsToggle>& VROSC::PlayButtonLaunchpad::__cordl_internal_get__toggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr ::UnityW<::VROSC::LoopPlaybackSettingsToggle> const& VROSC::PlayButtonLaunchpad::__cordl_internal_get__toggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr void VROSC::PlayButtonLaunchpad::__cordl_internal_set__toggleButton(::UnityW<::VROSC::LoopPlaybackSettingsToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::PlayButtonLaunchpad::Setup(::VROSC::LaunchpadSpawner*  launchpadSpawner, ::StringW  id, ::StringW  targetID, ::StringW  displayName, ::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, launchpadSpawner, id, targetID, displayName, color);
}
inline void VROSC::PlayButtonLaunchpad::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlayButtonLaunchpad::AssignConfig(::VROSC::LoopPlaybackConfig*  config)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "AssignConfig",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
inline void VROSC::PlayButtonLaunchpad::Unassign()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "Unassign",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlayButtonLaunchpad::AssignButton(::VROSC::LoopPlayButton*  loopPlayButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "AssignButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlayButton*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loopPlayButton);
}
inline void VROSC::PlayButtonLaunchpad::UpdateLoopPlayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "UpdateLoopPlayer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlayButtonLaunchpad::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PlayButtonLaunchpad::LoopIsPlaying(bool  isPlaying)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        "LoopIsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPlaying);
}
inline void VROSC::PlayButtonLaunchpad::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PlayButtonLaunchpad*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PlayButtonLaunchpad* VROSC::PlayButtonLaunchpad::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PlayButtonLaunchpad*>());
}
// Ctor Parameters []
constexpr ::VROSC::PlayButtonLaunchpad::PlayButtonLaunchpad()   {
}
