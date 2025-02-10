#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/UpdatePasswordRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UpdatePasswordRequest)
// Forward declare root types
namespace Unity::Services::Authentication {
class UpdatePasswordRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::UpdatePasswordRequest);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.UpdatePasswordRequest
class CORDL_TYPE UpdatePasswordRequest : public ::System::Object {
public:
// Declarations
static inline ::Unity::Services::Authentication::UpdatePasswordRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x2e98568, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdatePasswordRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdatePasswordRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdatePasswordRequest(UpdatePasswordRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdatePasswordRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdatePasswordRequest(UpdatePasswordRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::UpdatePasswordRequest, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::UpdatePasswordRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::UpdatePasswordRequest*, "Unity.Services.Authentication", "UpdatePasswordRequest");
