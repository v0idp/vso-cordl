#pragma once
// IWYU pragma private; include "UnityEngine/AudioListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioListener)
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioListener;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioListener);
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioListener
class CORDL_TYPE AudioListener : public ::UnityEngine::AudioBehaviour {
public:
// Declarations
/// @brief Method GetSpectrumData, addr 0x2f5854c, size 0x54, virtual false, abstract: false, final false
static inline void GetSpectrumData(::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper, addr 0x2f584bc, size 0x54, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(::ByRef<::ArrayW<float_t,::Array<float_t>*>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method set_pause, addr 0x2f58510, size 0x3c, virtual false, abstract: false, final false
static inline void set_pause(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioListener(AudioListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioListener(AudioListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioListener, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AudioListener);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
