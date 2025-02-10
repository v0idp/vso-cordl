#pragma once
// IWYU pragma private; include "VROSC/Metronome.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__LoopStationRecorder_def.hpp"
#include "VROSC/zzzz__Metronome_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__UserPreferencesDataController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Metronome_Mode::Metronome_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Metronome_Mode::Metronome_Mode()   {
}
constexpr ::VROSC::Metronome_Mode  VROSC::Metronome_Mode::Auto{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Metronome_Mode  VROSC::Metronome_Mode::On{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Metronome_Mode  VROSC::Metronome_Mode::Off{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Metronome_Medium::Metronome_Medium(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Metronome_Medium::Metronome_Medium()   {
}
constexpr ::VROSC::Metronome_Medium  VROSC::Metronome_Medium::Haptic{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Metronome_Medium  VROSC::Metronome_Medium::Sound{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Metronome_Medium  VROSC::Metronome_Medium::Both{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::Metronome.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)()>(&::VROSC::Metronome::Awake)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x18bf08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)()>(&::VROSC::Metronome::OnDestroy)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x18bf304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.DataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(::VROSC::UserDataControllers*)>(&::VROSC::Metronome::DataLoaded)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18bf57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "DataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.SetMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(::VROSC::Metronome_Mode)>(&::VROSC::Metronome::SetMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18bf728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "SetMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Mode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.SetMedium
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(::VROSC::Metronome_Medium)>(&::VROSC::Metronome::SetMedium)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18bf7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "SetMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Medium>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.LoopStationRecorderStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(::VROSC::LoopStationRecorder_RecordingState)>(&::VROSC::Metronome::LoopStationRecorderStateChanged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18bf868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "LoopStationRecorderStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.LoopStationTrackRemoved
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(int32_t)>(&::VROSC::Metronome::LoopStationTrackRemoved)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18bf908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "LoopStationTrackRemoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.UpdateMetronome
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(double_t)>(&::VROSC::Metronome::UpdateMetronome)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x18bf974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "UpdateMetronome",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.UpdateMetronome
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(double_t, int32_t)>(&::VROSC::Metronome::UpdateMetronome)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18bf630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "UpdateMetronome",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome.SetHapticMetronomeActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)(bool)>(&::VROSC::Metronome::SetHapticMetronomeActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18bf9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "SetHapticMetronomeActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Metronome._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Metronome::*)()>(&::VROSC::Metronome::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18bfa70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::Metronome::__cordl_internal_get__hapticMetronome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticMetronome;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::Metronome::__cordl_internal_get__hapticMetronome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticMetronome;
}
constexpr void VROSC::Metronome::__cordl_internal_set__hapticMetronome(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticMetronome)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::Metronome::__cordl_internal_get__soundMetronome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundMetronome;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::Metronome::__cordl_internal_get__soundMetronome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundMetronome;
}
constexpr void VROSC::Metronome::__cordl_internal_set__soundMetronome(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soundMetronome)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UserPreferencesDataController*& VROSC::Metronome::__cordl_internal_get__preferencesController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preferencesController;
}
constexpr ::VROSC::UserPreferencesDataController* const& VROSC::Metronome::__cordl_internal_get__preferencesController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preferencesController;
}
constexpr void VROSC::Metronome::__cordl_internal_set__preferencesController(::VROSC::UserPreferencesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preferencesController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Metronome_Mode& VROSC::Metronome::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::VROSC::Metronome_Mode const& VROSC::Metronome::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void VROSC::Metronome::__cordl_internal_set__mode(::VROSC::Metronome_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr ::VROSC::Metronome_Medium& VROSC::Metronome::__cordl_internal_get__medium()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medium;
}
constexpr ::VROSC::Metronome_Medium const& VROSC::Metronome::__cordl_internal_get__medium() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____medium;
}
constexpr void VROSC::Metronome::__cordl_internal_set__medium(::VROSC::Metronome_Medium  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____medium = value;
}
inline void VROSC::Metronome::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Metronome::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Metronome::DataLoaded(::VROSC::UserDataControllers*  user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "DataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::Metronome::SetMode(::VROSC::Metronome_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "SetMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Mode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline void VROSC::Metronome::SetMedium(::VROSC::Metronome_Medium  medium)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "SetMedium",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Metronome_Medium>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, medium);
}
inline void VROSC::Metronome::LoopStationRecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "LoopStationRecorderStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopStationRecorder_RecordingState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::Metronome::LoopStationTrackRemoved(int32_t  newTrackCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "LoopStationTrackRemoved",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTrackCount);
}
inline void VROSC::Metronome::UpdateMetronome(double_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "UpdateMetronome",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm);
}
inline void VROSC::Metronome::UpdateMetronome(double_t  bpm, int32_t  trackCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "UpdateMetronome",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm, trackCount);
}
inline void VROSC::Metronome::SetHapticMetronomeActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        "SetHapticMetronomeActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::Metronome::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Metronome*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Metronome* VROSC::Metronome::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Metronome*>());
}
// Ctor Parameters []
constexpr ::VROSC::Metronome::Metronome()   {
}
