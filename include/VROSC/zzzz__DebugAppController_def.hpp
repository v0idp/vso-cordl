#pragma once
// IWYU pragma private; include "VROSC/DebugAppController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DebugAppController)
// Forward declare root types
namespace VROSC {
class DebugAppController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DebugAppController);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DebugAppController
class CORDL_TYPE DebugAppController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x1883cd4, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::DebugAppController* New_ctor() ;

/// @brief Method Start, addr 0x1883cdc, size 0x54, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x1883d30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugAppController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugAppController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugAppController(DebugAppController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugAppController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugAppController(DebugAppController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{588};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::DebugAppController, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DebugAppController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DebugAppController*, "VROSC", "DebugAppController");
