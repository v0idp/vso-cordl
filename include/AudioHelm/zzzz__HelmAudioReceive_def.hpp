#pragma once
// IWYU pragma private; include "AudioHelm/HelmAudioReceive.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HelmAudioReceive)
// Forward declare root types
namespace AudioHelm {
class HelmAudioReceive;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::HelmAudioReceive);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.HelmAudioReceive
class CORDL_TYPE HelmAudioReceive : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field channel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_channel, put=__cordl_internal_set_channel)) int32_t  channel;

static inline ::AudioHelm::HelmAudioReceive* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x181e598, size 0x24, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  audioChannels) ;

constexpr int32_t const& __cordl_internal_get_channel() const;

constexpr int32_t& __cordl_internal_get_channel() ;

constexpr void __cordl_internal_set_channel(int32_t  value) ;

/// @brief Method .ctor, addr 0x181e668, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelmAudioReceive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelmAudioReceive", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelmAudioReceive(HelmAudioReceive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelmAudioReceive", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelmAudioReceive(HelmAudioReceive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1872};

/// @brief Field channel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___channel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::HelmAudioReceive, ___channel) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::HelmAudioReceive, 0x28>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::HelmAudioReceive);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmAudioReceive*, "AudioHelm", "HelmAudioReceive");
