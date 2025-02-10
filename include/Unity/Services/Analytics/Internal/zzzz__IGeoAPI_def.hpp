#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IGeoAPI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGeoAPI)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IGeoAPI;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IGeoAPI);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IGeoAPI
class CORDL_TYPE IGeoAPI {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IGeoAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGeoAPI(IGeoAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IGeoAPI);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IGeoAPI*, "Unity.Services.Analytics.Internal", "IGeoAPI");
