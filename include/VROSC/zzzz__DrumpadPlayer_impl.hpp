#pragma once
// IWYU pragma private; include "VROSC/DrumpadPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__DrumpadPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__DrumPadEffectOnSignal_def.hpp"
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "VROSC/zzzz__IntNode_def.hpp"
#include "VROSC/zzzz__NotePlayer_def.hpp"
#include "VROSC/zzzz__PredictiveHittable_def.hpp"
#include "VROSC/zzzz__ValueSourceSelector_def.hpp"
//  Writing Method size for method: ::VROSC::DrumpadPlayer.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(int32_t, ::UnityEngine::Color, ::VROSC::InstrumentController*)>(&::VROSC::DrumpadPlayer::Setup)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1709660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.SetSampleIdOrNoteNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(int32_t, bool)>(&::VROSC::DrumpadPlayer::SetSampleIdOrNoteNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1709d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetSampleIdOrNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.SetVelocityDependant
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(bool)>(&::VROSC::DrumpadPlayer::SetVelocityDependant)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x17096d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetVelocityDependant",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(float_t)>(&::VROSC::DrumpadPlayer::SetVolume)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17096fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.SetPitch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(int32_t, bool)>(&::VROSC::DrumpadPlayer::SetPitch)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1709724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetPitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.PlayPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(int32_t)>(&::VROSC::DrumpadPlayer::PlayPreview)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x170a65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "PlayPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.Colorize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(::UnityEngine::Color)>(&::VROSC::DrumpadPlayer::Colorize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x170a5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "Colorize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer.OnClicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)(::VROSC::ClickData*)>(&::VROSC::DrumpadPlayer::OnClicked)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x170a738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "OnClicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DrumpadPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DrumpadPlayer::*)()>(&::VROSC::DrumpadPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x170a758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::IntNode>& VROSC::DrumpadPlayer::__cordl_internal_get__noteNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteNode;
}
constexpr ::UnityW<::VROSC::IntNode> const& VROSC::DrumpadPlayer::__cordl_internal_get__noteNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteNode;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__noteNode(::UnityW<::VROSC::IntNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NotePlayer>& VROSC::DrumpadPlayer::__cordl_internal_get__notePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notePlayer;
}
constexpr ::UnityW<::VROSC::NotePlayer> const& VROSC::DrumpadPlayer::__cordl_internal_get__notePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notePlayer;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__notePlayer(::UnityW<::VROSC::NotePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notePlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ValueSourceSelector>& VROSC::DrumpadPlayer::__cordl_internal_get__valueSourceSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueSourceSelector;
}
constexpr ::UnityW<::VROSC::ValueSourceSelector> const& VROSC::DrumpadPlayer::__cordl_internal_get__valueSourceSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueSourceSelector;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__valueSourceSelector(::UnityW<::VROSC::ValueSourceSelector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueSourceSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PredictiveHittable>& VROSC::DrumpadPlayer::__cordl_internal_get__hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hittable;
}
constexpr ::UnityW<::VROSC::PredictiveHittable> const& VROSC::DrumpadPlayer::__cordl_internal_get__hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hittable;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__hittable(::UnityW<::VROSC::PredictiveHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hittable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& VROSC::DrumpadPlayer::__cordl_internal_get__drumpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumpad;
}
constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& VROSC::DrumpadPlayer::__cordl_internal_get__drumpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumpad;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__drumpad(::UnityW<::VROSC::DrumPadEffectOnSignal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumpad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::DrumpadPlayer::__cordl_internal_get__previewAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::DrumpadPlayer::__cordl_internal_get__previewAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewAudioSource;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__previewAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewAudioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::DrumpadPlayer::__cordl_internal_get__untilFadeTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untilFadeTimer;
}
constexpr float_t const& VROSC::DrumpadPlayer::__cordl_internal_get__untilFadeTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untilFadeTimer;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__untilFadeTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____untilFadeTimer = value;
}
constexpr ::UnityW<::VROSC::InstrumentController>& VROSC::DrumpadPlayer::__cordl_internal_get__instrumentController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentController;
}
constexpr ::UnityW<::VROSC::InstrumentController> const& VROSC::DrumpadPlayer::__cordl_internal_get__instrumentController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instrumentController;
}
constexpr void VROSC::DrumpadPlayer::__cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instrumentController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DrumpadPlayer::Setup(int32_t  sampleId, ::UnityEngine::Color  groupColor, ::VROSC::InstrumentController*  instrumentController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleId, groupColor, instrumentController);
}
inline void VROSC::DrumpadPlayer::SetSampleIdOrNoteNumber(int32_t  sampleIdOrNoteNumber, bool  preview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetSampleIdOrNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleIdOrNoteNumber, preview);
}
inline void VROSC::DrumpadPlayer::SetVelocityDependant(bool  shouldBeVelocityDependant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetVelocityDependant",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldBeVelocityDependant);
}
inline void VROSC::DrumpadPlayer::SetVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::DrumpadPlayer::SetPitch(int32_t  pitch, bool  preview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "SetPitch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pitch, preview);
}
inline void VROSC::DrumpadPlayer::PlayPreview(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "PlayPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::DrumpadPlayer::Colorize(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "Colorize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::DrumpadPlayer::OnClicked(::VROSC::ClickData*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        "OnClicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void VROSC::DrumpadPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DrumpadPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DrumpadPlayer* VROSC::DrumpadPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DrumpadPlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::DrumpadPlayer::DrumpadPlayer()   {
}
