#pragma once
// IWYU pragma private; include "VROSC/MarimbaController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SynthController_def.hpp"
CORDL_MODULE_EXPORT(MarimbaController)
namespace VROSC {
class MarimbaDataController;
}
// Forward declare root types
namespace VROSC {
class MarimbaController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MarimbaController);
// Dependencies VROSC.SynthController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MarimbaController
class CORDL_TYPE MarimbaController : public ::VROSC::SynthController {
public:
// Declarations
 __declspec(property(get=get_MarimbaDataController)) ::VROSC::MarimbaDataController*  MarimbaDataController;

static inline ::VROSC::MarimbaController* New_ctor() ;

/// @brief Method .ctor, addr 0x179412c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MarimbaDataController, addr 0x1790ad0, size 0x7c, virtual false, abstract: false, final false
inline ::VROSC::MarimbaDataController* get_MarimbaDataController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarimbaController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarimbaController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MarimbaController(MarimbaController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarimbaController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarimbaController(MarimbaController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MarimbaController, 0x108>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MarimbaController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MarimbaController*, "VROSC", "MarimbaController");
