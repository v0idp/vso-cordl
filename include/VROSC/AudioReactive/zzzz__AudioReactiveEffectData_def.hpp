#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/AudioReactiveEffectData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AudioReactiveEffectData)
// Forward declare root types
namespace VROSC::AudioReactive {
class AudioReactiveEffectData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::AudioReactiveEffectData);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.AudioReactiveEffectData
class CORDL_TYPE AudioReactiveEffectData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::VROSC::AudioReactive::AudioReactiveEffectData* New_ctor() ;

/// @brief Method .ctor, addr 0x17d463c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioReactiveEffectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveEffectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReactiveEffectData(AudioReactiveEffectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReactiveEffectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReactiveEffectData(AudioReactiveEffectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1541};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::AudioReactiveEffectData, 0x18>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveEffectData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveEffectData*, "VROSC.AudioReactive", "AudioReactiveEffectData");
