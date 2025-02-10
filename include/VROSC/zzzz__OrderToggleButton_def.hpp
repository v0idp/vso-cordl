#pragma once
// IWYU pragma private; include "VROSC/OrderToggleButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIToggle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrderToggleButton)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class ClickData;
}
// Forward declare root types
namespace VROSC {
class OrderToggleButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OrderToggleButton);
// Dependencies VROSC.UIToggle
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OrderToggleButton
class CORDL_TYPE OrderToggleButton : public ::VROSC::UIToggle {
public:
// Declarations
 __declspec(property(get=get_CurrentState, put=set_CurrentState)) int32_t  CurrentState;

/// @brief Field OnStateChanged, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStateChanged, put=__cordl_internal_set_OnStateChanged)) ::System::Action_1<int32_t>*  OnStateChanged;

/// @brief Field <CurrentState>k__BackingField, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) int32_t  _CurrentState_k__BackingField;

/// @brief Field _statesText, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__statesText, put=__cordl_internal_set__statesText)) ::ArrayW<::StringW,::Array<::StringW>*>  _statesText;

/// @brief Method Awake, addr 0x1749f64, size 0x48, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonWasPressed, addr 0x1749fac, size 0xe8, virtual true, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::OrderToggleButton* New_ctor() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnStateChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnStateChanged() ;

constexpr int32_t const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__statesText() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__statesText() ;

constexpr void __cordl_internal_set_OnStateChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__statesText(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x174a094, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentState, addr 0x1749f54, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentState() ;

/// @brief Method set_CurrentState, addr 0x1749f5c, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OrderToggleButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OrderToggleButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OrderToggleButton(OrderToggleButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OrderToggleButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OrderToggleButton(OrderToggleButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1136};

/// @brief Field _statesText, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____statesText;

/// @brief Field <CurrentState>k__BackingField, offset: 0xd8, size: 0x4, def value: None
 int32_t  ____CurrentState_k__BackingField;

/// @brief Field OnStateChanged, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnStateChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OrderToggleButton, ____statesText) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrderToggleButton, ____CurrentState_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VROSC::OrderToggleButton, ___OnStateChanged) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OrderToggleButton, 0xe8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OrderToggleButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OrderToggleButton*, "VROSC", "OrderToggleButton");
