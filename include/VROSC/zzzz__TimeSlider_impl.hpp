#pragma once
// IWYU pragma private; include "VROSC/TimeSlider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TimeSlider_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "VROSC/zzzz__TapeRecorder_def.hpp"
#include "VROSC/zzzz__TimeSlider_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::TimeSlider_SourceType::TimeSlider_SourceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::TimeSlider_SourceType::TimeSlider_SourceType()   {
}
constexpr ::VROSC::TimeSlider_SourceType  VROSC::TimeSlider_SourceType::AudioSource{static_cast<int32_t>(0x0)};
constexpr ::VROSC::TimeSlider_SourceType  VROSC::TimeSlider_SourceType::VideoPlayer{static_cast<int32_t>(0x1)};
constexpr ::VROSC::TimeSlider_SourceType  VROSC::TimeSlider_SourceType::TapeRecorder{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::TimeSlider.get_Slider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::UISlider> (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::get_Slider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1770434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "get_Slider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.get_Seeking
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::get_Seeking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177043c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "get_Seeking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.set_Seeking
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(bool)>(&::VROSC::TimeSlider::set_Seeking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1770444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "set_Seeking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.get_SourceIsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::get_SourceIsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1770450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "get_SourceIsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.set_SourceIsPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(bool)>(&::VROSC::TimeSlider::set_SourceIsPlaying)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1770458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "set_SourceIsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x17705d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::OnDestroy)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1770778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(float_t)>(&::VROSC::TimeSlider::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x17708f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17709bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.Disable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(bool)>(&::VROSC::TimeSlider::Disable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1770a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Disable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.UpdateTimeSlider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::UpdateTimeSlider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17709c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "UpdateTimeSlider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.UpdateSlider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::UpdateSlider)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x177047c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "UpdateSlider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.UpdateLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(bool)>(&::VROSC::TimeSlider::UpdateLabel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x17704dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "UpdateLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.GetTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::GetTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1770c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "GetTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.GetLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::GetLength)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1770b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "GetLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.TimeSliderGrabbed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(bool)>(&::VROSC::TimeSlider::TimeSliderGrabbed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1770c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "TimeSliderGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.PauseSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::PauseSource)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1770d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "PauseSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.PlaySource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::PlaySource)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1770d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "PlaySource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.SetTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(float_t)>(&::VROSC::TimeSlider::SetTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1770abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "SetTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider.SeekCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)(::UnityEngine::Video::VideoPlayer*)>(&::VROSC::TimeSlider::SeekCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1770df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "SeekCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TimeSlider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TimeSlider::*)()>(&::VROSC::TimeSlider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1770df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UISlider>& VROSC::TimeSlider::__cordl_internal_get__timeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::TimeSlider::__cordl_internal_get__timeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSlider;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__timeSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::TimeSlider::__cordl_internal_get__timeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::TimeSlider::__cordl_internal_get__timeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeText;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__timeText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& VROSC::TimeSlider::__cordl_internal_get__videoPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoPlayer;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& VROSC::TimeSlider::__cordl_internal_get__videoPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoPlayer;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::TimeSlider::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::TimeSlider::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TapeRecorder>& VROSC::TimeSlider::__cordl_internal_get__tapeRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapeRecorder;
}
constexpr ::UnityW<::VROSC::TapeRecorder> const& VROSC::TimeSlider::__cordl_internal_get__tapeRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapeRecorder;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__tapeRecorder(::UnityW<::VROSC::TapeRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tapeRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TimeSlider_SourceType& VROSC::TimeSlider::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::VROSC::TimeSlider_SourceType const& VROSC::TimeSlider::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__source(::VROSC::TimeSlider_SourceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr bool& VROSC::TimeSlider::__cordl_internal_get__Seeking_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Seeking_k__BackingField;
}
constexpr bool const& VROSC::TimeSlider::__cordl_internal_get__Seeking_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Seeking_k__BackingField;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__Seeking_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Seeking_k__BackingField = value;
}
constexpr bool& VROSC::TimeSlider::__cordl_internal_get__sliderFollowsTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliderFollowsTime;
}
constexpr bool const& VROSC::TimeSlider::__cordl_internal_get__sliderFollowsTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliderFollowsTime;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__sliderFollowsTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sliderFollowsTime = value;
}
constexpr bool& VROSC::TimeSlider::__cordl_internal_get__sourceIsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceIsPlaying;
}
constexpr bool const& VROSC::TimeSlider::__cordl_internal_get__sourceIsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceIsPlaying;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__sourceIsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceIsPlaying = value;
}
constexpr bool& VROSC::TimeSlider::__cordl_internal_get__sourceWasPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceWasPlaying;
}
constexpr bool const& VROSC::TimeSlider::__cordl_internal_get__sourceWasPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceWasPlaying;
}
constexpr void VROSC::TimeSlider::__cordl_internal_set__sourceWasPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceWasPlaying = value;
}
inline ::UnityW<::VROSC::UISlider> VROSC::TimeSlider::get_Slider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "get_Slider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::UISlider>, false>(this, ___internal_method);
}
inline bool VROSC::TimeSlider::get_Seeking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "get_Seeking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::set_Seeking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "set_Seeking",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::TimeSlider::get_SourceIsPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "get_SourceIsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::set_SourceIsPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "set_SourceIsPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::TimeSlider::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::Init(float_t  sourceLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceLength);
}
inline void VROSC::TimeSlider::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::Disable(bool  disable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "Disable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disable);
}
inline void VROSC::TimeSlider::UpdateTimeSlider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "UpdateTimeSlider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::UpdateSlider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "UpdateSlider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::UpdateLabel(bool  useSliderValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "UpdateLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useSliderValue);
}
inline float_t VROSC::TimeSlider::GetTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "GetTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::TimeSlider::GetLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "GetLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::TimeSliderGrabbed(bool  isGrabbed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "TimeSliderGrabbed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isGrabbed);
}
inline void VROSC::TimeSlider::PauseSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "PauseSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::PlaySource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "PlaySource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TimeSlider::SetTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "SetTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time);
}
inline void VROSC::TimeSlider::SeekCompleted(::UnityEngine::Video::VideoPlayer*  videoPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        "SeekCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, videoPlayer);
}
inline void VROSC::TimeSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TimeSlider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TimeSlider* VROSC::TimeSlider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TimeSlider*>());
}
// Ctor Parameters []
constexpr ::VROSC::TimeSlider::TimeSlider()   {
}
