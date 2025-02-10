#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioClipPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioClipPlayable)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioClipPlayable);
// Dependencies System.IEquatable`1<T>, UnityEngine.Playables.IPlayable, UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0x2f59588, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping) ;

/// @brief Method CreateHandle, addr 0x2f596ac, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::AudioClip*  clip, bool  looping) ;

/// @brief Method Equals, addr 0x2f59984, size 0x78, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Audio::AudioClipPlayable  other) ;

/// @brief Method GetHandle, addr 0x2f598c4, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method InternalCreateAudioClipPlayable, addr 0x2f59868, size 0x5c, virtual false, abstract: false, final false
static inline bool InternalCreateAudioClipPlayable(::ByRef<::UnityEngine::Playables::PlayableGraph>  graph, ::UnityEngine::AudioClip*  clip, bool  looping, ::ByRef<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method Seek, addr 0x2f59d54, size 0x1ac, virtual false, abstract: false, final false
inline void Seek(double_t  startTime, double_t  startDelay, double_t  duration) ;

/// @brief Method SetPauseDelayInternal, addr 0x2f59f4c, size 0x4c, virtual false, abstract: false, final false
static inline void SetPauseDelayInternal(::ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay) ;

/// @brief Method SetSpatialBlend, addr 0x2f59c38, size 0xd0, virtual false, abstract: false, final false
inline void SetSpatialBlend(float_t  value) ;

/// @brief Method SetSpatialBlendInternal, addr 0x2f59d08, size 0x4c, virtual false, abstract: false, final false
static inline void SetSpatialBlendInternal(::ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  spatialBlend) ;

/// @brief Method SetStartDelayInternal, addr 0x2f59f00, size 0x4c, virtual false, abstract: false, final false
static inline void SetStartDelayInternal(::ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, double_t  delay) ;

/// @brief Method SetStereoPan, addr 0x2f59b18, size 0xd4, virtual false, abstract: false, final false
inline void SetStereoPan(float_t  value) ;

/// @brief Method SetStereoPanInternal, addr 0x2f59bec, size 0x4c, virtual false, abstract: false, final false
static inline void SetStereoPanInternal(::ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  stereoPan) ;

/// @brief Method SetVolume, addr 0x2f599fc, size 0xd0, virtual false, abstract: false, final false
inline void SetVolume(float_t  value) ;

/// @brief Method SetVolumeInternal, addr 0x2f59acc, size 0x4c, virtual false, abstract: false, final false
static inline void SetVolumeInternal(::ByRef<::UnityEngine::Playables::PlayableHandle>  hdl, float_t  volume) ;

/// @brief Method .ctor, addr 0x2f59778, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Explicit, addr 0x2f59900, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Audio::AudioClipPlayable op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method op_Implicit, addr 0x2f598d0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable  playable) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioClipPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AudioClipPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioClipPlayable, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
