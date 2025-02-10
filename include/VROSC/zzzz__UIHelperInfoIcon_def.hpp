#pragma once
// IWYU pragma private; include "VROSC/UIHelperInfoIcon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIHelperInfoIcon)
namespace VROSC::UI {
class IconData;
}
namespace VROSC {
class IconMesh;
}
namespace VROSC {
class UIHelperPositioning;
}
// Forward declare root types
namespace VROSC {
class UIHelperInfoIcon;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIHelperInfoIcon);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIHelperInfoIcon
class CORDL_TYPE UIHelperInfoIcon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _icon, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon, put=__cordl_internal_set__icon)) ::UnityW<::VROSC::IconMesh>  _icon;

/// @brief Field _positioning, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__positioning, put=__cordl_internal_set__positioning)) ::UnityW<::VROSC::UIHelperPositioning>  _positioning;

/// @brief Method HideIcon, addr 0x1779144, size 0x4, virtual false, abstract: false, final false
inline void HideIcon() ;

static inline ::VROSC::UIHelperInfoIcon* New_ctor() ;

/// @brief Method ShowIcon, addr 0x1779140, size 0x4, virtual false, abstract: false, final false
inline void ShowIcon(::VROSC::UI::IconData*  iconData) ;

constexpr ::UnityW<::VROSC::IconMesh> const& __cordl_internal_get__icon() const;

constexpr ::UnityW<::VROSC::IconMesh>& __cordl_internal_get__icon() ;

constexpr ::UnityW<::VROSC::UIHelperPositioning> const& __cordl_internal_get__positioning() const;

constexpr ::UnityW<::VROSC::UIHelperPositioning>& __cordl_internal_get__positioning() ;

constexpr void __cordl_internal_set__icon(::UnityW<::VROSC::IconMesh>  value) ;

constexpr void __cordl_internal_set__positioning(::UnityW<::VROSC::UIHelperPositioning>  value) ;

/// @brief Method .ctor, addr 0x1779148, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIHelperInfoIcon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHelperInfoIcon", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHelperInfoIcon(UIHelperInfoIcon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHelperInfoIcon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHelperInfoIcon(UIHelperInfoIcon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1280};

/// @brief Field _icon, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::IconMesh>  ____icon;

/// @brief Field _positioning, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelperPositioning>  ____positioning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIHelperInfoIcon, ____icon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelperInfoIcon, ____positioning) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIHelperInfoIcon, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIHelperInfoIcon);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHelperInfoIcon*, "VROSC", "UIHelperInfoIcon");
