#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Authentication/zzzz__ICache_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAuthenticationCache)
// Forward declare root types
namespace Unity::Services::Authentication {
class IAuthenticationCache;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IAuthenticationCache);
// Dependencies Unity.Services.Authentication.ICache
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IAuthenticationCache
class CORDL_TYPE IAuthenticationCache {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Authentication::ICache"
constexpr operator  ::Unity::Services::Authentication::ICache*() noexcept;

/// @brief Method Migrate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Migrate(::StringW  key) ;

/// @brief Convert to "::Unity::Services::Authentication::ICache"
constexpr ::Unity::Services::Authentication::ICache* i___Unity__Services__Authentication__ICache() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAuthenticationCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthenticationCache(IAuthenticationCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11583};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IAuthenticationCache);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IAuthenticationCache*, "Unity.Services.Authentication", "IAuthenticationCache");
