#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemForceField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ParticleSystemForceField)
// Forward declare root types
namespace UnityEngine {
class ParticleSystemForceField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystemForceField);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemForceField
class CORDL_TYPE ParticleSystemForceField : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_endRange, put=set_endRange)) float_t  endRange;

/// @brief Method get_endRange, addr 0x2fc0894, size 0x3c, virtual false, abstract: false, final false
inline float_t get_endRange() ;

/// @brief Method set_endRange, addr 0x2fc08d0, size 0x4c, virtual false, abstract: false, final false
inline void set_endRange(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemForceField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemForceField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemForceField(ParticleSystemForceField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemForceField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemForceField(ParticleSystemForceField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemForceField, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystemForceField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemForceField*, "UnityEngine", "ParticleSystemForceField");
