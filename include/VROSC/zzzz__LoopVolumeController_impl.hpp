#pragma once
// IWYU pragma private; include "VROSC/LoopVolumeController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopVolumeController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
//  Writing Method size for method: ::VROSC::LoopVolumeController.get_IsSoloToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopVolumeController::*)()>(&::VROSC::LoopVolumeController::get_IsSoloToggled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x189f4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "get_IsSoloToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.get_IsMuteToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoopVolumeController::*)()>(&::VROSC::LoopVolumeController::get_IsMuteToggled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x189f520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "get_IsMuteToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.get_Volume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopVolumeController::*)()>(&::VROSC::LoopVolumeController::get_Volume)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a4fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(::StringW)>(&::VROSC::LoopVolumeController::Setup)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x18a33c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)()>(&::VROSC::LoopVolumeController::Dispose)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x18a3d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.ToggleMute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(::VROSC::InputDevice*, bool)>(&::VROSC::LoopVolumeController::ToggleMute)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18a4ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "ToggleMute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.ToggleSolo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(::VROSC::InputDevice*, bool)>(&::VROSC::LoopVolumeController::ToggleSolo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18a5030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "ToggleSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(float_t)>(&::VROSC::LoopVolumeController::SetVolume)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18a1000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.OnVolumeSliderChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(float_t)>(&::VROSC::LoopVolumeController::OnVolumeSliderChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x18a5068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "OnVolumeSliderChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.SetIsMuted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(bool)>(&::VROSC::LoopVolumeController::SetIsMuted)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18a10bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "SetIsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController.SetIsSolo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)(bool)>(&::VROSC::LoopVolumeController::SetIsSolo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x18a5084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "SetIsSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopVolumeController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopVolumeController::*)()>(&::VROSC::LoopVolumeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a50a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::LoopVolumeController::__cordl_internal_get__muteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muteButton;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::LoopVolumeController::__cordl_internal_get__muteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muteButton;
}
constexpr void VROSC::LoopVolumeController::__cordl_internal_set__muteButton(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____muteButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::LoopVolumeController::__cordl_internal_get__soloButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soloButton;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::LoopVolumeController::__cordl_internal_get__soloButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soloButton;
}
constexpr void VROSC::LoopVolumeController::__cordl_internal_set__soloButton(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____soloButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::LoopVolumeController::__cordl_internal_get__volumeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::LoopVolumeController::__cordl_internal_get__volumeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr void VROSC::LoopVolumeController::__cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& VROSC::LoopVolumeController::__cordl_internal_get_OnVolumeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVolumeChanged;
}
constexpr ::System::Action_1<float_t>* const& VROSC::LoopVolumeController::__cordl_internal_get_OnVolumeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnVolumeChanged;
}
constexpr void VROSC::LoopVolumeController::__cordl_internal_set_OnVolumeChanged(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnVolumeChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::LoopVolumeController::__cordl_internal_get_OnMuteChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMuteChanged;
}
constexpr ::System::Action_1<bool>* const& VROSC::LoopVolumeController::__cordl_internal_get_OnMuteChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMuteChanged;
}
constexpr void VROSC::LoopVolumeController::__cordl_internal_set_OnMuteChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnMuteChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::LoopVolumeController::__cordl_internal_get_OnSoloChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSoloChanged;
}
constexpr ::System::Action_1<bool>* const& VROSC::LoopVolumeController::__cordl_internal_get_OnSoloChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSoloChanged;
}
constexpr void VROSC::LoopVolumeController::__cordl_internal_set_OnSoloChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSoloChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::LoopVolumeController::get_IsSoloToggled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "get_IsSoloToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::LoopVolumeController::get_IsMuteToggled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "get_IsMuteToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t VROSC::LoopVolumeController::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "get_Volume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::LoopVolumeController::Setup(::StringW  sliderHeaderText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderHeaderText);
}
inline void VROSC::LoopVolumeController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopVolumeController::ToggleMute(::VROSC::InputDevice*  device, bool  mute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "ToggleMute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, mute);
}
inline void VROSC::LoopVolumeController::ToggleSolo(::VROSC::InputDevice*  arg1, bool  arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "ToggleSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg1, arg2);
}
inline void VROSC::LoopVolumeController::SetVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopVolumeController::OnVolumeSliderChanged(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "OnVolumeSliderChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::LoopVolumeController::SetIsMuted(bool  isMuted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "SetIsMuted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMuted);
}
inline void VROSC::LoopVolumeController::SetIsSolo(bool  isMuted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        "SetIsSolo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isMuted);
}
inline void VROSC::LoopVolumeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopVolumeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopVolumeController* VROSC::LoopVolumeController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopVolumeController*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopVolumeController::LoopVolumeController()   {
}
