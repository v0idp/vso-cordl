#pragma once
// IWYU pragma private; include "Unity/Services/Core/Threading/Internal/IUnityThreadUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
CORDL_MODULE_EXPORT(IUnityThreadUtils)
// Forward declare root types
namespace Unity::Services::Core::Threading::Internal {
class IUnityThreadUtils;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Threading::Internal::IUnityThreadUtils);
// Dependencies Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Threading::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Threading.Internal.IUnityThreadUtils
class CORDL_TYPE IUnityThreadUtils {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUnityThreadUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnityThreadUtils(IUnityThreadUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Threading::Internal
NEED_NO_BOX(::Unity::Services::Core::Threading::Internal::IUnityThreadUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Threading::Internal::IUnityThreadUtils*, "Unity.Services.Core.Threading.Internal", "IUnityThreadUtils");
