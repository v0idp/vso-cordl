#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationErrorResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationErrorResponse)
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationErrorResponse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationErrorResponse);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationErrorResponse
class CORDL_TYPE AuthenticationErrorResponse : public ::System::Object {
public:
// Declarations
/// @brief Field Detail, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Detail, put=__cordl_internal_set_Detail)) ::StringW  Detail;

/// @brief Field Title, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Title, put=__cordl_internal_set_Title)) ::StringW  Title;

static inline ::Unity::Services::Authentication::AuthenticationErrorResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Detail() const;

constexpr ::StringW& __cordl_internal_get_Detail() ;

constexpr ::StringW const& __cordl_internal_get_Title() const;

constexpr ::StringW& __cordl_internal_get_Title() ;

constexpr void __cordl_internal_set_Detail(::StringW  value) ;

constexpr void __cordl_internal_set_Title(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e98578, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationErrorResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationErrorResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationErrorResponse(AuthenticationErrorResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationErrorResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationErrorResponse(AuthenticationErrorResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11556};

/// @brief Field Title, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Title;

/// @brief Field Detail, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Detail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationErrorResponse, ___Title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Authentication::AuthenticationErrorResponse, ___Detail) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationErrorResponse, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationErrorResponse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationErrorResponse*, "Unity.Services.Authentication", "AuthenticationErrorResponse");
