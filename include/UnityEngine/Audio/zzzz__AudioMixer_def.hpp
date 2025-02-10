#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixer)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixer);
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioMixer
class CORDL_TYPE AudioMixer : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method GetFloat, addr 0x2f59fec, size 0x54, virtual false, abstract: false, final false
inline bool GetFloat(::StringW  name, ::ByRef<float_t>  value) ;

/// @brief Method SetFloat, addr 0x2f59f98, size 0x54, virtual false, abstract: false, final false
inline bool SetFloat(::StringW  name, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixer(AudioMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixer(AudioMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
