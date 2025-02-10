#pragma once
// IWYU pragma private; include "VROSC/ButtonWithValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ButtonWithValue)
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class ButtonWithValue;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ButtonWithValue);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ButtonWithValue
class CORDL_TYPE ButtonWithValue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Button)) ::UnityW<::VROSC::UIButton>  Button;

/// @brief Field OnClick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClick, put=__cordl_internal_set_OnClick)) ::System::Action_1<::VROSC::ButtonWithValue*>*  OnClick;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Field _button, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::VROSC::UIButton>  _button;

/// @brief Field _value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

/// @brief Method ClickPressed, addr 0x1771c28, size 0x20, virtual false, abstract: false, final false
inline void ClickPressed() ;

static inline ::VROSC::ButtonWithValue* New_ctor() ;

/// @brief Method Setup, addr 0x1771b64, size 0xc4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method TearDown, addr 0x1771c48, size 0xc4, virtual false, abstract: false, final false
inline void TearDown() ;

constexpr ::System::Action_1<::VROSC::ButtonWithValue*>* const& __cordl_internal_get_OnClick() const;

constexpr ::System::Action_1<::VROSC::ButtonWithValue*>*& __cordl_internal_get_OnClick() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__button() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set_OnClick(::System::Action_1<::VROSC::ButtonWithValue*>*  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0x1771d0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Button, addr 0x1771b54, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIButton> get_Button() ;

/// @brief Method get_Value, addr 0x1771b5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonWithValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonWithValue(ButtonWithValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonWithValue(ButtonWithValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1252};

/// @brief Field _button, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____button;

/// @brief Field _value, offset: 0x18, size: 0x4, def value: None
 float_t  ____value;

/// @brief Field OnClick, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::ButtonWithValue*>*  ___OnClick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ButtonWithValue, ____button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonWithValue, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonWithValue, ___OnClick) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ButtonWithValue, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ButtonWithValue);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ButtonWithValue*, "VROSC", "ButtonWithValue");
