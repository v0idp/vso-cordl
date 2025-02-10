#pragma once
// IWYU pragma private; include "VROSC/UI/UIScalePanelButtonColoring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/zzzz__UIInteractableColoring_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIScalePanelButtonColoring)
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC::UI {
class UIScalePanelButtonColoring;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIScalePanelButtonColoring);
// Dependencies VROSC.UI.UIInteractableColoring
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIScalePanelButtonColoring
class CORDL_TYPE UIScalePanelButtonColoring : public ::VROSC::UI::UIInteractableColoring {
public:
// Declarations
/// @brief Field _axis, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) int32_t  _axis;

/// @brief Field _mesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::VROSC::AdjustableMesh>  _mesh;

/// @brief Field _natural, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__natural, put=__cordl_internal_set__natural)) bool  _natural;

/// @brief Field _renderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _toggled, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__toggled, put=__cordl_internal_set__toggled)) bool  _toggled;

/// @brief Method Awake, addr 0x17e6094, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetValues, addr 0x17e6244, size 0x124, virtual false, abstract: false, final false
inline void GetValues() ;

static inline ::VROSC::UI::UIScalePanelButtonColoring* New_ctor() ;

/// @brief Method SetAxis, addr 0x17e60b4, size 0x8, virtual false, abstract: false, final false
inline void SetAxis(int32_t  axis) ;

/// @brief Method SetToggled, addr 0x17e60bc, size 0xc, virtual false, abstract: false, final false
inline void SetToggled(bool  toggled) ;

/// @brief Method UpdateColor, addr 0x17e60c8, size 0x120, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr int32_t const& __cordl_internal_get__axis() const;

constexpr int32_t& __cordl_internal_get__axis() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__mesh() ;

constexpr bool const& __cordl_internal_get__natural() const;

constexpr bool& __cordl_internal_get__natural() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr bool const& __cordl_internal_get__toggled() const;

constexpr bool& __cordl_internal_get__toggled() ;

constexpr void __cordl_internal_set__axis(int32_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__natural(bool  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__toggled(bool  value) ;

/// @brief Method .ctor, addr 0x17e6368, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIScalePanelButtonColoring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIScalePanelButtonColoring", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIScalePanelButtonColoring(UIScalePanelButtonColoring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIScalePanelButtonColoring", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIScalePanelButtonColoring(UIScalePanelButtonColoring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1608};

/// @brief Field _mesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____mesh;

/// @brief Field _renderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _natural, offset: 0x60, size: 0x1, def value: None
 bool  ____natural;

/// @brief Field _toggled, offset: 0x61, size: 0x1, def value: None
 bool  ____toggled;

/// @brief Field _axis, offset: 0x64, size: 0x4, def value: None
 int32_t  ____axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIScalePanelButtonColoring, ____mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScalePanelButtonColoring, ____renderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScalePanelButtonColoring, ____natural) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScalePanelButtonColoring, ____toggled) == 0x61, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIScalePanelButtonColoring, ____axis) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIScalePanelButtonColoring, 0x68>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIScalePanelButtonColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIScalePanelButtonColoring*, "VROSC.UI", "UIScalePanelButtonColoring");
