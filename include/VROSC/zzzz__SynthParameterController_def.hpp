#pragma once
// IWYU pragma private; include "VROSC/SynthParameterController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(SynthParameterController)
namespace VROSC {
class Signal;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
class SynthParameterController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthParameterController);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthParameterController
class CORDL_TYPE SynthParameterController : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _synthController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__synthController, put=__cordl_internal_set__synthController)) ::UnityW<::VROSC::SynthController>  _synthController;

static inline ::VROSC::SynthParameterController* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1720614, size 0x1c, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1720630, size 0x1c, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__synthController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__synthController() ;

constexpr void __cordl_internal_set__synthController(::UnityW<::VROSC::SynthController>  value) ;

/// @brief Method .ctor, addr 0x172064c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthParameterController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthParameterController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthParameterController(SynthParameterController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthParameterController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthParameterController(SynthParameterController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{972};

/// @brief Field _synthController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____synthController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthParameterController, ____synthController) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthParameterController, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthParameterController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthParameterController*, "VROSC", "SynthParameterController");
