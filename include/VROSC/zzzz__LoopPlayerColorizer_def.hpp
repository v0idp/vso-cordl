#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerColorizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopPlayerColorizer)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class UIColorPicker;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerColorizer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerColorizer);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerColorizer
class CORDL_TYPE LoopPlayerColorizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentColor, put=set_CurrentColor)) ::UnityEngine::Color  CurrentColor;

/// @brief Field OnColorChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorChanged, put=__cordl_internal_set_OnColorChanged)) ::System::Action_1<::UnityEngine::Color>*  OnColorChanged;

 __declspec(property(get=get_UIColorPicker)) ::UnityW<::VROSC::UIColorPicker>  UIColorPicker;

/// @brief Field <CurrentColor>k__BackingField, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__CurrentColor_k__BackingField, put=__cordl_internal_set__CurrentColor_k__BackingField)) ::UnityEngine::Color  _CurrentColor_k__BackingField;

/// @brief Field _adjustableMeshes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMeshes, put=__cordl_internal_set__adjustableMeshes)) ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  _adjustableMeshes;

/// @brief Field _baseColor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseColor, put=__cordl_internal_set__baseColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _baseColor;

/// @brief Field _colorPicker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorPicker, put=__cordl_internal_set__colorPicker)) ::UnityW<::VROSC::UIColorPicker>  _colorPicker;

/// @brief Field _isMuted, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMuted, put=__cordl_internal_set__isMuted)) bool  _isMuted;

/// @brief Field _muteColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__muteColor, put=__cordl_internal_set__muteColor)) ::UnityEngine::Color  _muteColor;

/// @brief Field _mutedColor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mutedColor, put=__cordl_internal_set__mutedColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _mutedColor;

/// @brief Method Awake, addr 0x18a1340, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorPicked, addr 0x18a16a0, size 0x3c, virtual false, abstract: false, final false
inline void ColorPicked(::UnityEngine::Color  color) ;

static inline ::VROSC::LoopPlayerColorizer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18a1450, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Reset, addr 0x18a1528, size 0x30, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetColor, addr 0x18a1558, size 0x70, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color, bool  invoke) ;

/// @brief Method SetMuted, addr 0x18a16dc, size 0xc, virtual false, abstract: false, final false
inline void SetMuted(bool  isMuted) ;

/// @brief Method UpdateDrawnColor, addr 0x18a15c8, size 0xd8, virtual false, abstract: false, final false
inline void UpdateDrawnColor() ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColorChanged() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnColorChanged() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__CurrentColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__CurrentColor_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*> const& __cordl_internal_get__adjustableMeshes() const;

constexpr ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>& __cordl_internal_get__adjustableMeshes() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__baseColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__baseColor() ;

constexpr ::UnityW<::VROSC::UIColorPicker> const& __cordl_internal_get__colorPicker() const;

constexpr ::UnityW<::VROSC::UIColorPicker>& __cordl_internal_get__colorPicker() ;

constexpr bool const& __cordl_internal_get__isMuted() const;

constexpr bool& __cordl_internal_get__isMuted() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__muteColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__muteColor() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__mutedColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__mutedColor() ;

constexpr void __cordl_internal_set_OnColorChanged(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__CurrentColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__adjustableMeshes(::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  value) ;

constexpr void __cordl_internal_set__baseColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__colorPicker(::UnityW<::VROSC::UIColorPicker>  value) ;

constexpr void __cordl_internal_set__isMuted(bool  value) ;

constexpr void __cordl_internal_set__muteColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__mutedColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

/// @brief Method .ctor, addr 0x18a16e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentColor, addr 0x18a1334, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_CurrentColor() ;

/// @brief Method get_UIColorPicker, addr 0x18a1320, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIColorPicker> get_UIColorPicker() ;

/// @brief Method set_CurrentColor, addr 0x18a1328, size 0xc, virtual false, abstract: false, final false
inline void set_CurrentColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerColorizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerColorizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerColorizer(LoopPlayerColorizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerColorizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerColorizer(LoopPlayerColorizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{671};

/// @brief Field _baseColor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____baseColor;

/// @brief Field _mutedColor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____mutedColor;

/// @brief Field _adjustableMeshes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::AdjustableMesh>,::Array<::UnityW<::VROSC::AdjustableMesh>>*>  ____adjustableMeshes;

/// @brief Field _colorPicker, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPicker>  ____colorPicker;

/// @brief Field <CurrentColor>k__BackingField, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____CurrentColor_k__BackingField;

/// @brief Field OnColorChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnColorChanged;

/// @brief Field _muteColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____muteColor;

/// @brief Field _isMuted, offset: 0x68, size: 0x1, def value: None
 bool  ____isMuted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____baseColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____mutedColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____adjustableMeshes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____colorPicker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____CurrentColor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ___OnColorChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____muteColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerColorizer, ____isMuted) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerColorizer, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerColorizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerColorizer*, "VROSC", "LoopPlayerColorizer");
