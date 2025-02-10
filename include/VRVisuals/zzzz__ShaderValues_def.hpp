#pragma once
// IWYU pragma private; include "VRVisuals/ShaderValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ShaderValues)
// Forward declare root types
namespace VRVisuals {
class ShaderValues;
}
// Write type traits
MARK_REF_PTR_T(::VRVisuals::ShaderValues);
// Dependencies UnityEngine.MonoBehaviour
namespace VRVisuals {
// Is value type: false
// CS Name: VRVisuals.ShaderValues
class CORDL_TYPE ShaderValues : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method GetValuesFromTime, addr 0x17c57f4, size 0x1c8, virtual false, abstract: false, final false
inline void GetValuesFromTime() ;

static inline ::VRVisuals::ShaderValues* New_ctor() ;

/// @brief Method .ctor, addr 0x17c59bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderValues(ShaderValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderValues(ShaderValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{274};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRVisuals::ShaderValues, 0x20>, "Size mismatch!");

} // namespace end def VRVisuals
NEED_NO_BOX(::VRVisuals::ShaderValues);
DEFINE_IL2CPP_ARG_TYPE(::VRVisuals::ShaderValues*, "VRVisuals", "ShaderValues");
