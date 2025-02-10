#pragma once
// IWYU pragma private; include "VROSC/UIDataButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIButton_def.hpp"
CORDL_MODULE_EXPORT(UIDataButton)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace VROSC {
class ClickData;
}
// Forward declare root types
namespace VROSC {
class UIDataButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIDataButton);
// Dependencies VROSC.UIButton
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIDataButton
class CORDL_TYPE UIDataButton : public ::VROSC::UIButton {
public:
// Declarations
/// @brief Field OnButtonPress, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnButtonPress, put=__cordl_internal_set_OnButtonPress)) ::System::Action_1<::System::Object*>*  OnButtonPress;

/// @brief Field _data, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::System::Object*  _data;

/// @brief Method ButtonWasPressed, addr 0x17725dc, size 0x78, virtual true, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::UIDataButton* New_ctor() ;

/// @brief Method SetData, addr 0x17725d4, size 0x8, virtual false, abstract: false, final false
inline void SetData(::System::Object*  data) ;

constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get_OnButtonPress() const;

constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get_OnButtonPress() ;

constexpr ::System::Object* const& __cordl_internal_get__data() const;

constexpr ::System::Object*& __cordl_internal_get__data() ;

constexpr void __cordl_internal_set_OnButtonPress(::System::Action_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__data(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1772654, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIDataButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIDataButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIDataButton(UIDataButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIDataButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIDataButton(UIDataButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1256};

/// @brief Field _data, offset: 0xb0, size: 0x8, def value: None
 ::System::Object*  ____data;

/// @brief Field OnButtonPress, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::System::Object*>*  ___OnButtonPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIDataButton, ____data) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIDataButton, ___OnButtonPress) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIDataButton, 0xc0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIDataButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIDataButton*, "VROSC", "UIDataButton");
