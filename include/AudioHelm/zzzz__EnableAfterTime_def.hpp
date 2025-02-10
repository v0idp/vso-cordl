#pragma once
// IWYU pragma private; include "AudioHelm/EnableAfterTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnableAfterTime)
namespace AudioHelm {
class Sequencer;
}
// Forward declare root types
namespace AudioHelm {
class EnableAfterTime;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::EnableAfterTime);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.EnableAfterTime
class CORDL_TYPE EnableAfterTime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field sequencer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sequencer, put=__cordl_internal_set_sequencer)) ::UnityW<::AudioHelm::Sequencer>  sequencer;

/// @brief Field time, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

/// @brief Method Enable, addr 0x181a574, size 0x20, virtual false, abstract: false, final false
inline void Enable() ;

static inline ::AudioHelm::EnableAfterTime* New_ctor() ;

/// @brief Method Start, addr 0x181a524, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::AudioHelm::Sequencer> const& __cordl_internal_get_sequencer() const;

constexpr ::UnityW<::AudioHelm::Sequencer>& __cordl_internal_get_sequencer() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_sequencer(::UnityW<::AudioHelm::Sequencer>  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

/// @brief Method .ctor, addr 0x181a594, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableAfterTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableAfterTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableAfterTime(EnableAfterTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableAfterTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableAfterTime(EnableAfterTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1850};

/// @brief Field time, offset: 0x20, size: 0x4, def value: None
 float_t  ___time;

/// @brief Field sequencer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::AudioHelm::Sequencer>  ___sequencer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::EnableAfterTime, ___time) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::EnableAfterTime, ___sequencer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::EnableAfterTime, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::EnableAfterTime);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::EnableAfterTime*, "AudioHelm", "EnableAfterTime");
