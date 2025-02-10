#pragma once
// IWYU pragma private; include "AudioHelm/DestroyAfterTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DestroyAfterTime)
// Forward declare root types
namespace AudioHelm {
class DestroyAfterTime;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::DestroyAfterTime);
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.DestroyAfterTime
class CORDL_TYPE DestroyAfterTime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field time, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

/// @brief Method Die, addr 0x181a4a8, size 0x6c, virtual false, abstract: false, final false
inline void Die() ;

static inline ::AudioHelm::DestroyAfterTime* New_ctor() ;

/// @brief Method Start, addr 0x181a458, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_time(float_t  value) ;

/// @brief Method .ctor, addr 0x181a514, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestroyAfterTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestroyAfterTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DestroyAfterTime(DestroyAfterTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestroyAfterTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestroyAfterTime(DestroyAfterTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1849};

/// @brief Field time, offset: 0x20, size: 0x4, def value: None
 float_t  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::DestroyAfterTime, ___time) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::DestroyAfterTime, 0x28>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::DestroyAfterTime);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::DestroyAfterTime*, "AudioHelm", "DestroyAfterTime");
