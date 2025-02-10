#pragma once
// IWYU pragma private; include "GlobalNamespace/PasswordField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UIInputField_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PasswordField)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class PasswordField;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PasswordField);
// Dependencies UIInputField
namespace GlobalNamespace {
// Is value type: false
// CS Name: PasswordField
class CORDL_TYPE PasswordField : public ::GlobalNamespace::UIInputField {
public:
// Declarations
/// @brief Field _hiddenText, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hiddenText, put=__cordl_internal_set__hiddenText)) ::UnityW<::TMPro::TextMeshPro>  _hiddenText;

/// @brief Method Awake, addr 0x16c442c, size 0x120, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EnteredPasswordChanged, addr 0x16c47e4, size 0x44, virtual false, abstract: false, final false
inline void EnteredPasswordChanged(::StringW  password) ;

static inline ::GlobalNamespace::PasswordField* New_ctor() ;

/// @brief Method OnDestroy, addr 0x16c463c, size 0xd0, virtual true, abstract: false, final false
inline void OnDestroy() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__hiddenText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__hiddenText() ;

constexpr void __cordl_internal_set__hiddenText(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x16c4828, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PasswordField() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PasswordField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PasswordField(PasswordField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PasswordField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PasswordField(PasswordField const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{63};

/// @brief Field _hiddenText, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____hiddenText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PasswordField, ____hiddenText) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PasswordField, 0xd8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PasswordField);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PasswordField*, "", "PasswordField");
