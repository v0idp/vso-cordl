#pragma once
// IWYU pragma private; include "VROSC/TimeSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSlider)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
class TapeRecorder;
}
namespace VROSC {
struct TimeSlider_SourceType;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
struct TimeSlider_SourceType;
}
namespace VROSC {
class TimeSlider;
}
// Write type traits
MARK_VAL_T(::VROSC::TimeSlider_SourceType);
MARK_REF_PTR_T(::VROSC::TimeSlider);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TimeSlider/SourceType
struct CORDL_TYPE TimeSlider_SourceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TimeSlider_SourceType_Unwrapped
enum struct __TimeSlider_SourceType_Unwrapped : int32_t {
__E_AudioSource = static_cast<int32_t>(0x0),
__E_VideoPlayer = static_cast<int32_t>(0x1),
__E_TapeRecorder = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeSlider_SourceType_Unwrapped () const noexcept {
return static_cast<__TimeSlider_SourceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeSlider_SourceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimeSlider_SourceType(int32_t  value__) noexcept;

/// @brief Field AudioSource value: I32(0)
static ::VROSC::TimeSlider_SourceType const AudioSource;

/// @brief Field TapeRecorder value: I32(2)
static ::VROSC::TimeSlider_SourceType const TapeRecorder;

/// @brief Field VideoPlayer value: I32(1)
static ::VROSC::TimeSlider_SourceType const VideoPlayer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TimeSlider_SourceType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TimeSlider_SourceType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.TimeSlider::SourceType
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TimeSlider
class CORDL_TYPE TimeSlider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SourceType = ::VROSC::TimeSlider_SourceType;

 __declspec(property(get=get_Seeking, put=set_Seeking)) bool  Seeking;

 __declspec(property(get=get_Slider)) ::UnityW<::VROSC::UISlider>  Slider;

 __declspec(property(get=get_SourceIsPlaying, put=set_SourceIsPlaying)) bool  SourceIsPlaying;

/// @brief Field <Seeking>k__BackingField, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Seeking_k__BackingField, put=__cordl_internal_set__Seeking_k__BackingField)) bool  _Seeking_k__BackingField;

/// @brief Field _audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _sliderFollowsTime, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get__sliderFollowsTime, put=__cordl_internal_set__sliderFollowsTime)) bool  _sliderFollowsTime;

/// @brief Field _source, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::VROSC::TimeSlider_SourceType  _source;

/// @brief Field _sourceIsPlaying, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get__sourceIsPlaying, put=__cordl_internal_set__sourceIsPlaying)) bool  _sourceIsPlaying;

/// @brief Field _sourceWasPlaying, offset 0x4f, size 0x1 
 __declspec(property(get=__cordl_internal_get__sourceWasPlaying, put=__cordl_internal_set__sourceWasPlaying)) bool  _sourceWasPlaying;

/// @brief Field _tapeRecorder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tapeRecorder, put=__cordl_internal_set__tapeRecorder)) ::UnityW<::VROSC::TapeRecorder>  _tapeRecorder;

/// @brief Field _timeSlider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSlider, put=__cordl_internal_set__timeSlider)) ::UnityW<::VROSC::UISlider>  _timeSlider;

/// @brief Field _timeText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeText, put=__cordl_internal_set__timeText)) ::UnityW<::TMPro::TextMeshPro>  _timeText;

/// @brief Field _videoPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoPlayer, put=__cordl_internal_set__videoPlayer)) ::UnityW<::UnityEngine::Video::VideoPlayer>  _videoPlayer;

/// @brief Method Disable, addr 0x1770a1c, size 0xa0, virtual false, abstract: false, final false
inline void Disable(bool  disable) ;

/// @brief Method GetLength, addr 0x1770b24, size 0x100, virtual false, abstract: false, final false
inline float_t GetLength() ;

/// @brief Method GetTime, addr 0x1770c24, size 0x68, virtual false, abstract: false, final false
inline float_t GetTime() ;

/// @brief Method Init, addr 0x17708f4, size 0xb4, virtual false, abstract: false, final false
inline void Init(float_t  sourceLength) ;

static inline ::VROSC::TimeSlider* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1770778, size 0x17c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PauseSource, addr 0x1770d14, size 0x68, virtual false, abstract: false, final false
inline void PauseSource() ;

/// @brief Method PlaySource, addr 0x1770d7c, size 0x74, virtual false, abstract: false, final false
inline void PlaySource() ;

/// @brief Method SeekCompleted, addr 0x1770df0, size 0x8, virtual false, abstract: false, final false
inline void SeekCompleted(::UnityEngine::Video::VideoPlayer*  videoPlayer) ;

/// @brief Method SetTime, addr 0x1770abc, size 0x68, virtual false, abstract: false, final false
inline void SetTime(float_t  time) ;

/// @brief Method Start, addr 0x17705d0, size 0x1a8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TimeSliderGrabbed, addr 0x1770c8c, size 0x88, virtual false, abstract: false, final false
inline void TimeSliderGrabbed(bool  isGrabbed) ;

/// @brief Method Update, addr 0x17709bc, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLabel, addr 0x17704dc, size 0xf4, virtual false, abstract: false, final false
inline void UpdateLabel(bool  useSliderValue) ;

/// @brief Method UpdateSlider, addr 0x177047c, size 0x60, virtual false, abstract: false, final false
inline void UpdateSlider() ;

/// @brief Method UpdateTimeSlider, addr 0x17709c0, size 0x5c, virtual false, abstract: false, final false
inline void UpdateTimeSlider() ;

constexpr bool const& __cordl_internal_get__Seeking_k__BackingField() const;

constexpr bool& __cordl_internal_get__Seeking_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr bool const& __cordl_internal_get__sliderFollowsTime() const;

constexpr bool& __cordl_internal_get__sliderFollowsTime() ;

constexpr ::VROSC::TimeSlider_SourceType const& __cordl_internal_get__source() const;

constexpr ::VROSC::TimeSlider_SourceType& __cordl_internal_get__source() ;

constexpr bool const& __cordl_internal_get__sourceIsPlaying() const;

constexpr bool& __cordl_internal_get__sourceIsPlaying() ;

constexpr bool const& __cordl_internal_get__sourceWasPlaying() const;

constexpr bool& __cordl_internal_get__sourceWasPlaying() ;

constexpr ::UnityW<::VROSC::TapeRecorder> const& __cordl_internal_get__tapeRecorder() const;

constexpr ::UnityW<::VROSC::TapeRecorder>& __cordl_internal_get__tapeRecorder() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__timeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__timeSlider() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__timeText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__timeText() ;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get__videoPlayer() const;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get__videoPlayer() ;

constexpr void __cordl_internal_set__Seeking_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__sliderFollowsTime(bool  value) ;

constexpr void __cordl_internal_set__source(::VROSC::TimeSlider_SourceType  value) ;

constexpr void __cordl_internal_set__sourceIsPlaying(bool  value) ;

constexpr void __cordl_internal_set__sourceWasPlaying(bool  value) ;

constexpr void __cordl_internal_set__tapeRecorder(::UnityW<::VROSC::TapeRecorder>  value) ;

constexpr void __cordl_internal_set__timeSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__timeText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value) ;

/// @brief Method .ctor, addr 0x1770df8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Seeking, addr 0x177043c, size 0x8, virtual false, abstract: false, final false
inline bool get_Seeking() ;

/// @brief Method get_Slider, addr 0x1770434, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UISlider> get_Slider() ;

/// @brief Method get_SourceIsPlaying, addr 0x1770450, size 0x8, virtual false, abstract: false, final false
inline bool get_SourceIsPlaying() ;

/// @brief Method set_Seeking, addr 0x1770444, size 0xc, virtual false, abstract: false, final false
inline void set_Seeking(bool  value) ;

/// @brief Method set_SourceIsPlaying, addr 0x1770458, size 0x24, virtual false, abstract: false, final false
inline void set_SourceIsPlaying(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSlider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSlider(TimeSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSlider(TimeSlider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1244};

/// @brief Field _timeSlider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____timeSlider;

/// @brief Field _timeText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____timeText;

/// @brief Field _videoPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  ____videoPlayer;

/// @brief Field _audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// @brief Field _tapeRecorder, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::TapeRecorder>  ____tapeRecorder;

/// @brief Field _source, offset: 0x48, size: 0x4, def value: None
 ::VROSC::TimeSlider_SourceType  ____source;

/// @brief Field <Seeking>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  ____Seeking_k__BackingField;

/// @brief Field _sliderFollowsTime, offset: 0x4d, size: 0x1, def value: None
 bool  ____sliderFollowsTime;

/// @brief Field _sourceIsPlaying, offset: 0x4e, size: 0x1, def value: None
 bool  ____sourceIsPlaying;

/// @brief Field _sourceWasPlaying, offset: 0x4f, size: 0x1, def value: None
 bool  ____sourceWasPlaying;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TimeSlider, ____timeSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____timeText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____videoPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____tapeRecorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____source) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____Seeking_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____sliderFollowsTime) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____sourceIsPlaying) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimeSlider, ____sourceWasPlaying) == 0x4f, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TimeSlider, 0x50>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TimeSlider_SourceType, "VROSC", "TimeSlider/SourceType");
NEED_NO_BOX(::VROSC::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TimeSlider*, "VROSC", "TimeSlider");
