#pragma once
// IWYU pragma private; include "VROSC/UIToggleGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIToggleGroup)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class UIToggleGroup;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIToggleGroup);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIToggleGroup
class CORDL_TYPE UIToggleGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnValueChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<int32_t>*  OnValueChanged;

 __declspec(property(get=get_Value, put=set_Value)) int32_t  Value;

/// @brief Field <Value>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) int32_t  _Value_k__BackingField;

/// @brief Field _allowOff, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowOff, put=__cordl_internal_set__allowOff)) bool  _allowOff;

/// @brief Field _currentToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentToggle, put=__cordl_internal_set__currentToggle)) ::UnityW<::VROSC::UIToggle>  _currentToggle;

/// @brief Field _startValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startValue, put=__cordl_internal_set__startValue)) int32_t  _startValue;

/// @brief Field _toggles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggles, put=__cordl_internal_set__toggles)) ::ArrayW<::UnityW<::VROSC::UIToggle>,::Array<::UnityW<::VROSC::UIToggle>>*>  _toggles;

/// @brief Method Awake, addr 0x177685c, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::UIToggleGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1776acc, size 0x124, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Set, addr 0x177698c, size 0x140, virtual false, abstract: false, final false
inline void Set(int32_t  index, bool  invoke) ;

/// @brief Method ToggleChanged, addr 0x1776bf0, size 0x68, virtual false, abstract: false, final false
inline void ToggleChanged(::VROSC::UIToggle*  toggle) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr int32_t const& __cordl_internal_get__Value_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Value_k__BackingField() ;

constexpr bool const& __cordl_internal_get__allowOff() const;

constexpr bool& __cordl_internal_get__allowOff() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__currentToggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__currentToggle() ;

constexpr int32_t const& __cordl_internal_get__startValue() const;

constexpr int32_t& __cordl_internal_get__startValue() ;

constexpr ::ArrayW<::UnityW<::VROSC::UIToggle>,::Array<::UnityW<::VROSC::UIToggle>>*> const& __cordl_internal_get__toggles() const;

constexpr ::ArrayW<::UnityW<::VROSC::UIToggle>,::Array<::UnityW<::VROSC::UIToggle>>*>& __cordl_internal_get__toggles() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__allowOff(bool  value) ;

constexpr void __cordl_internal_set__currentToggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__startValue(int32_t  value) ;

constexpr void __cordl_internal_set__toggles(::ArrayW<::UnityW<::VROSC::UIToggle>,::Array<::UnityW<::VROSC::UIToggle>>*>  value) ;

/// @brief Method .ctor, addr 0x1776c58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Value, addr 0x1776854, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Value() ;

/// @brief Method set_Value, addr 0x177684c, size 0x8, virtual false, abstract: false, final false
inline void set_Value(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIToggleGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIToggleGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIToggleGroup(UIToggleGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIToggleGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIToggleGroup(UIToggleGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1268};

/// @brief Field _toggles, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::UIToggle>,::Array<::UnityW<::VROSC::UIToggle>>*>  ____toggles;

/// @brief Field _startValue, offset: 0x28, size: 0x4, def value: None
 int32_t  ____startValue;

/// @brief Field _allowOff, offset: 0x2c, size: 0x1, def value: None
 bool  ____allowOff;

/// @brief Field _currentToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____currentToggle;

/// @brief Field OnValueChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnValueChanged;

/// @brief Field <Value>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIToggleGroup, ____toggles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggleGroup, ____startValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggleGroup, ____allowOff) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggleGroup, ____currentToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggleGroup, ___OnValueChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIToggleGroup, ____Value_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIToggleGroup, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIToggleGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIToggleGroup*, "VROSC", "UIToggleGroup");
