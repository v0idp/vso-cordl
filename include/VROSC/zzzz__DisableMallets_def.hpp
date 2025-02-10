#pragma once
// IWYU pragma private; include "VROSC/DisableMallets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableMallets)
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
class InputDevice;
}
// Forward declare root types
namespace VROSC {
class DisableMallets;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DisableMallets);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DisableMallets
class CORDL_TYPE DisableMallets : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controllerInputNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerInputNode, put=__cordl_internal_set__controllerInputNode)) ::UnityW<::VROSC::ControllerInputNode>  _controllerInputNode;

/// @brief Method Awake, addr 0x1717d1c, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HoverBegin, addr 0x1717e80, size 0x6c, virtual false, abstract: false, final false
inline void HoverBegin(::VROSC::InputDevice*  device) ;

/// @brief Method HoverEnd, addr 0x1717eec, size 0x6c, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  device) ;

static inline ::VROSC::DisableMallets* New_ctor() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__controllerInputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__controllerInputNode() ;

constexpr void __cordl_internal_set__controllerInputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

/// @brief Method .ctor, addr 0x1717f58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableMallets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableMallets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableMallets(DisableMallets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableMallets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableMallets(DisableMallets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{916};

/// @brief Field _controllerInputNode, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____controllerInputNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DisableMallets, ____controllerInputNode) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DisableMallets, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DisableMallets);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DisableMallets*, "VROSC", "DisableMallets");
