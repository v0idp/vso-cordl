#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/ICache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICache)
// Forward declare root types
namespace Unity::Services::Authentication {
class ICache;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::ICache);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.ICache
class CORDL_TYPE ICache {
public:
// Declarations
/// @brief Method DeleteKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DeleteKey(::StringW  key) ;

/// @brief Method GetString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetString(::StringW  key) ;

/// @brief Method SetString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetString(::StringW  key, ::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ICache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICache(ICache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::ICache);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::ICache*, "Unity.Services.Authentication", "ICache");
