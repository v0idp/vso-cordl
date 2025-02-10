#pragma once
// IWYU pragma private; include "VROSC/VirtuosoSampler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AudioHelmInstrumentWrapper_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtuosoSampler)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace VROSC {
class VirtuosoSampler;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VirtuosoSampler);
// Dependencies VROSC.AudioHelmInstrumentWrapper
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VirtuosoSampler
class CORDL_TYPE VirtuosoSampler : public ::VROSC::AudioHelmInstrumentWrapper {
public:
// Declarations
/// @brief Field OnSamplePlayed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSamplePlayed, put=setStaticF_OnSamplePlayed)) ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  OnSamplePlayed;

/// @brief Field _audioMixerGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioMixerGroup, put=__cordl_internal_set__audioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  _audioMixerGroup;

/// @brief Field _audioSources, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSources, put=__cordl_internal_set__audioSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>,::Array<::UnityW<::UnityEngine::AudioSource>>*>  _audioSources;

/// @brief Field _numberOfSources, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfSources, put=__cordl_internal_set__numberOfSources)) int32_t  _numberOfSources;

/// @brief Field _sourceIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceIndex, put=__cordl_internal_set__sourceIndex)) int32_t  _sourceIndex;

/// @brief Method AllNotesOff, addr 0x170808c, size 0x60, virtual true, abstract: false, final false
inline void AllNotesOff() ;

/// @brief Method GetAudioClip, addr 0x17082a4, size 0x64, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> GetAudioClip(int32_t  id) ;

static inline ::VROSC::VirtuosoSampler* New_ctor() ;

/// @brief Method NoteOff, addr 0x17080ec, size 0x4, virtual true, abstract: false, final false
inline void NoteOff(int32_t  note) ;

/// @brief Method NoteOn, addr 0x17080f0, size 0x1b4, virtual true, abstract: false, final false
inline void NoteOn(int32_t  note, float_t  velocity, double_t  predictedDspTime, float_t  pitch, float_t  volume) ;

/// @brief Method SetPitchBend, addr 0x1708308, size 0x4, virtual true, abstract: false, final false
inline void SetPitchBend(float_t  pitchBendValue) ;

/// @brief Method Setup, addr 0x1707eec, size 0x1a0, virtual true, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get__audioMixerGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get__audioMixerGroup() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>,::Array<::UnityW<::UnityEngine::AudioSource>>*> const& __cordl_internal_get__audioSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>,::Array<::UnityW<::UnityEngine::AudioSource>>*>& __cordl_internal_get__audioSources() ;

constexpr int32_t const& __cordl_internal_get__numberOfSources() const;

constexpr int32_t& __cordl_internal_get__numberOfSources() ;

constexpr int32_t const& __cordl_internal_get__sourceIndex() const;

constexpr int32_t& __cordl_internal_get__sourceIndex() ;

constexpr void __cordl_internal_set__audioMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set__audioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>,::Array<::UnityW<::UnityEngine::AudioSource>>*>  value) ;

constexpr void __cordl_internal_set__numberOfSources(int32_t  value) ;

constexpr void __cordl_internal_set__sourceIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x170830c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* getStaticF_OnSamplePlayed() ;

static inline void setStaticF_OnSamplePlayed(::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtuosoSampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtuosoSampler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtuosoSampler(VirtuosoSampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtuosoSampler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtuosoSampler(VirtuosoSampler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{861};

/// @brief Field _audioMixerGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ____audioMixerGroup;

/// @brief Field _numberOfSources, offset: 0x28, size: 0x4, def value: None
 int32_t  ____numberOfSources;

/// @brief Field _sourceIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____sourceIndex;

/// @brief Field _audioSources, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>,::Array<::UnityW<::UnityEngine::AudioSource>>*>  ____audioSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VirtuosoSampler, ____audioMixerGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::VirtuosoSampler, ____numberOfSources) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VirtuosoSampler, ____sourceIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::VirtuosoSampler, ____audioSources) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VirtuosoSampler, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VirtuosoSampler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VirtuosoSampler*, "VROSC", "VirtuosoSampler");
