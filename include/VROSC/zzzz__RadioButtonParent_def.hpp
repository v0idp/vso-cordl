#pragma once
// IWYU pragma private; include "VROSC/RadioButtonParent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
CORDL_MODULE_EXPORT(RadioButtonParent)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class RadioButton;
}
// Forward declare root types
namespace VROSC {
class RadioButtonParent;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::RadioButtonParent);
// Dependencies VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RadioButtonParent
class CORDL_TYPE RadioButtonParent : public ::VROSC::Node {
public:
// Declarations
/// @brief Field _changedThisFrame, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__changedThisFrame, put=__cordl_internal_set__changedThisFrame)) bool  _changedThisFrame;

/// @brief Field _radioButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__radioButtons, put=__cordl_internal_set__radioButtons)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>*  _radioButtons;

/// @brief Method LateUpdate, addr 0x1725280, size 0x8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::RadioButtonParent* New_ctor() ;

/// @brief Method RegisterButton, addr 0x1724f78, size 0xa4, virtual false, abstract: false, final false
inline void RegisterButton(::VROSC::RadioButton*  radioButton) ;

/// @brief Method Trigger, addr 0x172506c, size 0x158, virtual false, abstract: false, final false
inline void Trigger(::VROSC::RadioButton*  radioButton) ;

constexpr bool const& __cordl_internal_get__changedThisFrame() const;

constexpr bool& __cordl_internal_get__changedThisFrame() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>* const& __cordl_internal_get__radioButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>*& __cordl_internal_get__radioButtons() ;

constexpr void __cordl_internal_set__changedThisFrame(bool  value) ;

constexpr void __cordl_internal_set__radioButtons(::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>*  value) ;

/// @brief Method .ctor, addr 0x1725288, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadioButtonParent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadioButtonParent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioButtonParent(RadioButtonParent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioButtonParent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioButtonParent(RadioButtonParent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1009};

/// @brief Field _radioButtons, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>*  ____radioButtons;

/// @brief Field _changedThisFrame, offset: 0x28, size: 0x1, def value: None
 bool  ____changedThisFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RadioButtonParent, ____radioButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::RadioButtonParent, ____changedThisFrame) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RadioButtonParent, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::RadioButtonParent);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RadioButtonParent*, "VROSC", "RadioButtonParent");
