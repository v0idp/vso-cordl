#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SignInOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignInOptions)
// Forward declare root types
namespace Unity::Services::Authentication {
class SignInOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SignInOptions);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SignInOptions
class CORDL_TYPE SignInOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CreateAccount)) bool  CreateAccount;

/// @brief Field <CreateAccount>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__CreateAccount_k__BackingField, put=__cordl_internal_set__CreateAccount_k__BackingField)) bool  _CreateAccount_k__BackingField;

constexpr bool const& __cordl_internal_get__CreateAccount_k__BackingField() const;

constexpr bool& __cordl_internal_get__CreateAccount_k__BackingField() ;

constexpr void __cordl_internal_set__CreateAccount_k__BackingField(bool  value) ;

/// @brief Method get_CreateAccount, addr 0x2e98610, size 0x8, virtual false, abstract: false, final false
inline bool get_CreateAccount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignInOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignInOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignInOptions(SignInOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignInOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignInOptions(SignInOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11571};

/// @brief Field <CreateAccount>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____CreateAccount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::SignInOptions, ____CreateAccount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SignInOptions, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SignInOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SignInOptions*, "Unity.Services.Authentication", "SignInOptions");
