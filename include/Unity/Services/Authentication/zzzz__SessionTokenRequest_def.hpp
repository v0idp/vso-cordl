#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/SessionTokenRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionTokenRequest)
// Forward declare root types
namespace Unity::Services::Authentication {
class SessionTokenRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::SessionTokenRequest);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.SessionTokenRequest
class CORDL_TYPE SessionTokenRequest : public ::System::Object {
public:
// Declarations
/// @brief Field SessionToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionToken, put=__cordl_internal_set_SessionToken)) ::StringW  SessionToken;

static inline ::Unity::Services::Authentication::SessionTokenRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_SessionToken() const;

constexpr ::StringW& __cordl_internal_get_SessionToken() ;

constexpr void __cordl_internal_set_SessionToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e98548, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionTokenRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionTokenRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionTokenRequest(SessionTokenRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionTokenRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionTokenRequest(SessionTokenRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11549};

/// @brief Field SessionToken, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___SessionToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::SessionTokenRequest, ___SessionToken) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::SessionTokenRequest, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::SessionTokenRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::SessionTokenRequest*, "Unity.Services.Authentication", "SessionTokenRequest");
