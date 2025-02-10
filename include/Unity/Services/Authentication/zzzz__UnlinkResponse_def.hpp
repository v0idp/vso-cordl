#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/UnlinkResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnlinkResponse)
// Forward declare root types
namespace Unity::Services::Authentication {
class UnlinkResponse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::UnlinkResponse);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.UnlinkResponse
class CORDL_TYPE UnlinkResponse : public ::System::Object {
public:
// Declarations
static inline ::Unity::Services::Authentication::UnlinkResponse* New_ctor() ;

/// @brief Method .ctor, addr 0x2e985a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkResponse(UnlinkResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkResponse(UnlinkResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::UnlinkResponse, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::UnlinkResponse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::UnlinkResponse*, "Unity.Services.Authentication", "UnlinkResponse");
