#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerSnapshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioMixerSnapshot)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixerSnapshot);
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioMixerSnapshot
class CORDL_TYPE AudioMixerSnapshot : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixerSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixerSnapshot(AudioMixerSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixerSnapshot(AudioMixerSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerSnapshot, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixerSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerSnapshot*, "UnityEngine.Audio", "AudioMixerSnapshot");
