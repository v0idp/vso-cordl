#pragma once
// IWYU pragma private; include "VROSC/TransformMoverControllerInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransformMoverControllerInput)
// Forward declare root types
namespace VROSC {
class TransformMoverControllerInput;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TransformMoverControllerInput);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TransformMoverControllerInput
class CORDL_TYPE TransformMoverControllerInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::VROSC::TransformMoverControllerInput* New_ctor() ;

/// @brief Method .ctor, addr 0x173ff48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformMoverControllerInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformMoverControllerInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformMoverControllerInput(TransformMoverControllerInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformMoverControllerInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformMoverControllerInput(TransformMoverControllerInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1108};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::TransformMoverControllerInput, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TransformMoverControllerInput);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformMoverControllerInput*, "VROSC", "TransformMoverControllerInput");
