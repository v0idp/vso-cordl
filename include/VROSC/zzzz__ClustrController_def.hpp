#pragma once
// IWYU pragma private; include "VROSC/ClustrController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SynthController_def.hpp"
CORDL_MODULE_EXPORT(ClustrController)
namespace VROSC {
class ClustrDataController;
}
// Forward declare root types
namespace VROSC {
class ClustrController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ClustrController);
// Dependencies VROSC.SynthController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ClustrController
class CORDL_TYPE ClustrController : public ::VROSC::SynthController {
public:
// Declarations
 __declspec(property(get=get_ClustrDataController)) ::VROSC::ClustrDataController*  ClustrDataController;

static inline ::VROSC::ClustrController* New_ctor() ;

/// @brief Method .ctor, addr 0x1785b94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClustrDataController, addr 0x1785b18, size 0x7c, virtual false, abstract: false, final false
inline ::VROSC::ClustrDataController* get_ClustrDataController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClustrController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClustrController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClustrController(ClustrController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClustrController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClustrController(ClustrController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::ClustrController, 0x108>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ClustrController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ClustrController*, "VROSC", "ClustrController");
