#pragma once
// IWYU pragma private; include "VROSC/ToggleWithValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ToggleWithValue)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class ToggleWithValue;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ToggleWithValue);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ToggleWithValue
class CORDL_TYPE ToggleWithValue : public ::System::Object {
public:
// Declarations
/// @brief Field OnToggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnToggle, put=__cordl_internal_set_OnToggle)) ::System::Action_1<::VROSC::ToggleWithValue*>*  OnToggle;

 __declspec(property(get=get_Toogle)) ::UnityW<::VROSC::UIToggle>  Toogle;

 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Field _toggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::VROSC::UIToggle>  _toggle;

/// @brief Field _value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

static inline ::VROSC::ToggleWithValue* New_ctor() ;

/// @brief Method SetActive, addr 0x17720cc, size 0x20, virtual false, abstract: false, final false
inline void SetActive(bool  state, bool  invoke) ;

/// @brief Method SetDisabled, addr 0x17722dc, size 0x28, virtual false, abstract: false, final false
inline void SetDisabled(::System::Object*  disabler, bool  shouldBeDisabled) ;

/// @brief Method Setup, addr 0x1771fd8, size 0xf4, virtual false, abstract: false, final false
inline void Setup(bool  activeAtStart) ;

/// @brief Method TearDown, addr 0x1772110, size 0xd8, virtual false, abstract: false, final false
inline void TearDown() ;

/// @brief Method TogglePressed, addr 0x17720ec, size 0x24, virtual false, abstract: false, final false
inline void TogglePressed(::VROSC::InputDevice*  device, bool  toggled) ;

constexpr ::System::Action_1<::VROSC::ToggleWithValue*>* const& __cordl_internal_get_OnToggle() const;

constexpr ::System::Action_1<::VROSC::ToggleWithValue*>*& __cordl_internal_get_OnToggle() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__toggle() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set_OnToggle(::System::Action_1<::VROSC::ToggleWithValue*>*  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0x1772304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Toogle, addr 0x1771fc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIToggle> get_Toogle() ;

/// @brief Method get_Value, addr 0x1771fd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleWithValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleWithValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleWithValue(ToggleWithValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleWithValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleWithValue(ToggleWithValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1254};

/// @brief Field _toggle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____toggle;

/// @brief Field _value, offset: 0x18, size: 0x4, def value: None
 float_t  ____value;

/// @brief Field OnToggle, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::ToggleWithValue*>*  ___OnToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ToggleWithValue, ____toggle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToggleWithValue, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ToggleWithValue, ___OnToggle) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ToggleWithValue, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ToggleWithValue);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToggleWithValue*, "VROSC", "ToggleWithValue");
