#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/IInitializablePackageV2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
CORDL_MODULE_EXPORT(IInitializablePackageV2)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IInitializablePackageV2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IInitializablePackageV2);
// Dependencies Unity.Services.Core.Internal.IInitializablePackage
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.IInitializablePackageV2
class CORDL_TYPE IInitializablePackageV2 {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr operator  ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

/// @brief Method InitializeInstanceAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeInstanceAsync(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IInitializablePackageV2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInitializablePackageV2(IInitializablePackageV2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IInitializablePackageV2);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IInitializablePackageV2*, "Unity.Services.Core.Internal", "IInitializablePackageV2");
