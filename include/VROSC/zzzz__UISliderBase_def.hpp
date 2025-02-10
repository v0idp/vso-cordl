#pragma once
// IWYU pragma private; include "VROSC/UISliderBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UISliderBase)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class UISliderBase;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISliderBase);
// Dependencies VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISliderBase
class CORDL_TYPE UISliderBase : public ::VROSC::UIInteractable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field OnGrabbed, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabbed, put=__cordl_internal_set_OnGrabbed)) ::System::Action_1<bool>*  OnGrabbed;

/// @brief Field OnValueChanged, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<float_t>*  OnValueChanged;

 __declspec(property(get=get_Size)) ::UnityEngine::Vector2  Size;

 __declspec(property(get=get_Value, put=set_Value)) float_t  Value;

/// @brief Field <Value>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) float_t  _Value_k__BackingField;

/// @brief Field _leftAdjustableMesh, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftAdjustableMesh, put=__cordl_internal_set__leftAdjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _leftAdjustableMesh;

/// @brief Field _preview, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__preview, put=__cordl_internal_set__preview)) float_t  _preview;

/// @brief Field _rightAdjustableMesh, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightAdjustableMesh, put=__cordl_internal_set__rightAdjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _rightAdjustableMesh;

/// @brief Field _sliderColor, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliderColor, put=__cordl_internal_set__sliderColor)) ::UnityW<::VROSC::UI::UIColorGetter>  _sliderColor;

/// @brief Field _useSingleMesh, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__useSingleMesh, put=__cordl_internal_set__useSingleMesh)) bool  _useSingleMesh;

/// @brief Field _uvRange, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__uvRange, put=__cordl_internal_set__uvRange)) ::VROSC::MinMaxFloat*  _uvRange;

/// @brief Method Awake, addr 0x177307c, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateUV, addr 0x17745c8, size 0x11c, virtual false, abstract: false, final false
inline void CalculateUV(float_t  value) ;

/// @brief Method GetSize, addr 0x1773bf0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 GetSize() ;

static inline ::VROSC::UISliderBase* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17731e8, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17735d8, size 0xd0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x1774844, size 0x90, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x177332c, size 0xdc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x17746e4, size 0x140, virtual false, abstract: false, final false
inline void SetColor() ;

/// @brief Method SetDisabled, addr 0x1774824, size 0x20, virtual true, abstract: false, final false
inline void SetDisabled(::System::Object*  disabler, bool  shouldBeDisabled) ;

/// @brief Method SetValue, addr 0x1773d28, size 0x98, virtual true, abstract: false, final false
inline void SetValue(float_t  value, bool  force, bool  useCallback) ;

/// @brief Method VerifyMeshes, addr 0x1774588, size 0x40, virtual false, abstract: false, final false
inline void VerifyMeshes() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnGrabbed() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnGrabbed() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr float_t const& __cordl_internal_get__Value_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Value_k__BackingField() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__leftAdjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__leftAdjustableMesh() ;

constexpr float_t const& __cordl_internal_get__preview() const;

constexpr float_t& __cordl_internal_get__preview() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__rightAdjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__rightAdjustableMesh() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__sliderColor() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__sliderColor() ;

constexpr bool const& __cordl_internal_get__useSingleMesh() const;

constexpr bool& __cordl_internal_get__useSingleMesh() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__uvRange() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__uvRange() ;

constexpr void __cordl_internal_set_OnGrabbed(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__leftAdjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__preview(float_t  value) ;

constexpr void __cordl_internal_set__rightAdjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__sliderColor(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__useSingleMesh(bool  value) ;

constexpr void __cordl_internal_set__uvRange(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x1773e68, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x1774570, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_Size, addr 0x1773a78, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_Size() ;

/// @brief Method get_Value, addr 0x1774580, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

/// @brief Method set_Value, addr 0x1774578, size 0x8, virtual false, abstract: false, final false
inline void set_Value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISliderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISliderBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISliderBase(UISliderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISliderBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISliderBase(UISliderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1262};

/// @brief Field <Value>k__BackingField, offset: 0x90, size: 0x4, def value: None
 float_t  ____Value_k__BackingField;

/// @brief Field OnValueChanged, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnValueChanged;

/// @brief Field OnGrabbed, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnGrabbed;

/// @brief Field _sliderColor, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____sliderColor;

/// @brief Field _useSingleMesh, offset: 0xb0, size: 0x1, def value: None
 bool  ____useSingleMesh;

/// @brief Field _leftAdjustableMesh, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____leftAdjustableMesh;

/// @brief Field _rightAdjustableMesh, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____rightAdjustableMesh;

/// @brief Field _uvRange, offset: 0xc8, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____uvRange;

/// @brief Field _preview, offset: 0xd0, size: 0x4, def value: None
 float_t  ____preview;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISliderBase, ____Value_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ___OnValueChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ___OnGrabbed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ____sliderColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ____useSingleMesh) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ____leftAdjustableMesh) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ____rightAdjustableMesh) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ____uvRange) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderBase, ____preview) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISliderBase, 0xd8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISliderBase);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderBase*, "VROSC", "UISliderBase");
