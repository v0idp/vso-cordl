#pragma once
// IWYU pragma private; include "VROSC/UIColorPickerSwatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIColorPickerSwatch)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class ProceduralAdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class UIColorPickerSwatch;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIColorPickerSwatch);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPickerSwatch
class CORDL_TYPE UIColorPickerSwatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

/// @brief Field <Color>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field _colorDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorDisplay, put=__cordl_internal_set__colorDisplay)) ::UnityW<::VROSC::ProceduralAdjustableMesh>  _colorDisplay;

/// @brief Field _selected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__selected, put=__cordl_internal_set__selected)) ::UnityW<::UnityEngine::GameObject>  _selected;

/// @brief Method Awake, addr 0x1779080, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::UIColorPickerSwatch* New_ctor() ;

/// @brief Method SetColor, addr 0x17790c0, size 0x78, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetHovering, addr 0x17790a0, size 0x20, virtual false, abstract: false, final false
inline void SetHovering(bool  hovering) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Color_k__BackingField() ;

constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh> const& __cordl_internal_get__colorDisplay() const;

constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh>& __cordl_internal_get__colorDisplay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__selected() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__selected() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__colorDisplay(::UnityW<::VROSC::ProceduralAdjustableMesh>  value) ;

constexpr void __cordl_internal_set__selected(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1779138, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x1779074, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method set_Color, addr 0x1779068, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorPickerSwatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerSwatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPickerSwatch(UIColorPickerSwatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerSwatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPickerSwatch(UIColorPickerSwatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1279};

/// @brief Field <Color>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____Color_k__BackingField;

/// @brief Field _colorDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ProceduralAdjustableMesh>  ____colorDisplay;

/// @brief Field _selected, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____selected;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPickerSwatch, ____Color_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerSwatch, ____colorDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerSwatch, ____selected) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPickerSwatch, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIColorPickerSwatch);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerSwatch*, "VROSC", "UIColorPickerSwatch");
