#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IProfile)
// Forward declare root types
namespace Unity::Services::Authentication {
class IProfile;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IProfile);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IProfile
class CORDL_TYPE IProfile {
public:
// Declarations
 __declspec(property(get=get_Current)) ::StringW  Current;

/// @brief Method get_Current, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "IProfile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProfile(IProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11535};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IProfile);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IProfile*, "Unity.Services.Authentication", "IProfile");
