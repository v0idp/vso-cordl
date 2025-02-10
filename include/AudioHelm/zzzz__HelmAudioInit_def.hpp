#pragma once
// IWYU pragma private; include "AudioHelm/HelmAudioInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelmAudioInit)
namespace AudioHelm {
class HelmAudioReceive;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace AudioHelm {
class HelmAudioInit;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmAudioInit);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmAudioInit
class CORDL_TYPE HelmAudioInit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field receiveAudio, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveAudio, put=__cordl_internal_set_receiveAudio)) ::UnityW<::AudioHelm::HelmAudioReceive>  receiveAudio;

/// @brief Field sendAudioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendAudioSource, put=__cordl_internal_set_sendAudioSource)) ::UnityW<::UnityEngine::AudioSource>  sendAudioSource;

/// @brief Field spatializerMixerGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spatializerMixerGroup, put=__cordl_internal_set_spatializerMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  spatializerMixerGroup;

/// @brief Field synthesizerMixerGroup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_synthesizerMixerGroup, put=__cordl_internal_set_synthesizerMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  synthesizerMixerGroup;

/// @brief Field warnedNoAudioGroup, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_warnedNoAudioGroup, put=__cordl_internal_set_warnedNoAudioGroup)) bool  warnedNoAudioGroup;

/// @brief Field wasSpatialized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSpatialized, put=__cordl_internal_set_wasSpatialized)) bool  wasSpatialized;

/// @brief Method Awake, addr 0x181e1b8, size 0xfc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetChannel, addr 0x181dc94, size 0xf8, virtual false, abstract: false, final false
inline int32_t GetChannel() ;

static inline ::AudioHelm::HelmAudioInit* New_ctor() ;

/// @brief Method SetupSpatialization, addr 0x181dd8c, size 0x2f4, virtual false, abstract: false, final false
inline void SetupSpatialization(::UnityEngine::AudioSource*  audioComponent) ;

/// @brief Method Update, addr 0x181e2b4, size 0x250, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::AudioHelm::HelmAudioReceive> const& __cordl_internal_get_receiveAudio() const;

constexpr ::UnityW<::AudioHelm::HelmAudioReceive>& __cordl_internal_get_receiveAudio() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sendAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sendAudioSource() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_spatializerMixerGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_spatializerMixerGroup() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_synthesizerMixerGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_synthesizerMixerGroup() ;

constexpr bool const& __cordl_internal_get_warnedNoAudioGroup() const;

constexpr bool& __cordl_internal_get_warnedNoAudioGroup() ;

constexpr bool const& __cordl_internal_get_wasSpatialized() const;

constexpr bool& __cordl_internal_get_wasSpatialized() ;

constexpr void __cordl_internal_set_receiveAudio(::UnityW<::AudioHelm::HelmAudioReceive>  value) ;

constexpr void __cordl_internal_set_sendAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_spatializerMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_synthesizerMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_warnedNoAudioGroup(bool  value) ;

constexpr void __cordl_internal_set_wasSpatialized(bool  value) ;

/// @brief Method .ctor, addr 0x181e590, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmAudioInit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmAudioInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmAudioInit(HelmAudioInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmAudioInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmAudioInit(HelmAudioInit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1871};

/// @brief Field warnedNoAudioGroup, offset: 0x20, size: 0x1, def value: None
 bool  ___warnedNoAudioGroup;

/// @brief Field synthesizerMixerGroup, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___synthesizerMixerGroup;

/// @brief Field spatializerMixerGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___spatializerMixerGroup;

/// @brief Field sendAudioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___sendAudioSource;

/// @brief Field wasSpatialized, offset: 0x40, size: 0x1, def value: None
 bool  ___wasSpatialized;

/// @brief Field receiveAudio, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::AudioHelm::HelmAudioReceive>  ___receiveAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmAudioInit, ___warnedNoAudioGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmAudioInit, ___synthesizerMixerGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmAudioInit, ___spatializerMixerGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmAudioInit, ___sendAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmAudioInit, ___wasSpatialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::HelmAudioInit, ___receiveAudio) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmAudioInit, 0x50>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmAudioInit);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmAudioInit*, "AudioHelm", "HelmAudioInit");
