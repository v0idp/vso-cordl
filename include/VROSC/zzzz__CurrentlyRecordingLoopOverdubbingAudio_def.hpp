#pragma once
// IWYU pragma private; include "VROSC/CurrentlyRecordingLoopOverdubbingAudio.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurrentlyRecordingLoopOverdubbingAudio)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace VROSC {
class CurrentlyRecordingLoopOverdubbingAudio;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CurrentlyRecordingLoopOverdubbingAudio);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CurrentlyRecordingLoopOverdubbingAudio
class CORDL_TYPE CurrentlyRecordingLoopOverdubbingAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _active, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _audio, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audio, put=__cordl_internal_set__audio)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _audio;

/// @brief Field _audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _loopLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__loopLength, put=__cordl_internal_set__loopLength)) int32_t  _loopLength;

/// @brief Field _syncOffset, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__syncOffset, put=__cordl_internal_set__syncOffset)) int32_t  _syncOffset;

/// @brief Method GetLocalLoopSampleIndex, addr 0x18a714c, size 0x6c, virtual false, abstract: false, final false
inline int32_t GetLocalLoopSampleIndex(int32_t  atSample) ;

static inline ::VROSC::CurrentlyRecordingLoopOverdubbingAudio* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x18a7028, size 0x124, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method OnDisable, addr 0x18a700c, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18a6ff0, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartOverdub, addr 0x18a6a74, size 0x14, virtual false, abstract: false, final false
inline void StartOverdub(int32_t  syncOffset, int32_t  loopLength, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio) ;

/// @brief Method StopOverdub, addr 0x18a6f70, size 0x8, virtual false, abstract: false, final false
inline void StopOverdub() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get__audio() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get__audio() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr int32_t const& __cordl_internal_get__loopLength() const;

constexpr int32_t& __cordl_internal_get__loopLength() ;

constexpr int32_t const& __cordl_internal_get__syncOffset() const;

constexpr int32_t& __cordl_internal_get__syncOffset() ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__audio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__loopLength(int32_t  value) ;

constexpr void __cordl_internal_set__syncOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0x18a71b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentlyRecordingLoopOverdubbingAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoopOverdubbingAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentlyRecordingLoopOverdubbingAudio(CurrentlyRecordingLoopOverdubbingAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentlyRecordingLoopOverdubbingAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentlyRecordingLoopOverdubbingAudio(CurrentlyRecordingLoopOverdubbingAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{696};

/// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// @brief Field _active, offset: 0x28, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _syncOffset, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____syncOffset;

/// @brief Field _loopLength, offset: 0x30, size: 0x4, def value: None
 int32_t  ____loopLength;

/// @brief Field _audio, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ____audio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CurrentlyRecordingLoopOverdubbingAudio, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopOverdubbingAudio, ____active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopOverdubbingAudio, ____syncOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopOverdubbingAudio, ____loopLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::CurrentlyRecordingLoopOverdubbingAudio, ____audio) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CurrentlyRecordingLoopOverdubbingAudio, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CurrentlyRecordingLoopOverdubbingAudio);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CurrentlyRecordingLoopOverdubbingAudio*, "VROSC", "CurrentlyRecordingLoopOverdubbingAudio");
