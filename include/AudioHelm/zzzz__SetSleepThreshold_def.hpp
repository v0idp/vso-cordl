#pragma once
// IWYU pragma private; include "AudioHelm/SetSleepThreshold.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SetSleepThreshold)
// Forward declare root types
namespace AudioHelm {
class SetSleepThreshold;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::SetSleepThreshold);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.SetSleepThreshold
class CORDL_TYPE SetSleepThreshold : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field threshold, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) float_t  threshold;

static inline ::AudioHelm::SetSleepThreshold* New_ctor() ;

/// @brief Method Start, addr 0x181cf98, size 0x5c, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_threshold() const;

constexpr float_t& __cordl_internal_get_threshold() ;

constexpr void __cordl_internal_set_threshold(float_t  value) ;

/// @brief Method .ctor, addr 0x181cff4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetSleepThreshold() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetSleepThreshold", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetSleepThreshold(SetSleepThreshold && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetSleepThreshold", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetSleepThreshold(SetSleepThreshold const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1865};

/// @brief Field threshold, offset: 0x20, size: 0x4, def value: None
 float_t  ___threshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::SetSleepThreshold, ___threshold) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::SetSleepThreshold, 0x28>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::SetSleepThreshold);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::SetSleepThreshold*, "AudioHelm", "SetSleepThreshold");
