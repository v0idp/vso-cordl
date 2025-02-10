#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/CloudProjectId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__ICloudProjectId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CloudProjectId)
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class CloudProjectId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::CloudProjectId);
// Dependencies System.Object, Unity.Services.Core.Configuration.Internal.ICloudProjectId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.CloudProjectId
class CORDL_TYPE CloudProjectId : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::ICloudProjectId"
constexpr operator  ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method GetCloudProjectId, addr 0x2e9a718, size 0x50, virtual true, abstract: false, final true
inline ::StringW GetCloudProjectId() ;

static inline ::Unity::Services::Core::Configuration::CloudProjectId* New_ctor() ;

/// @brief Method .ctor, addr 0x2e9a768, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Configuration::Internal::ICloudProjectId"
constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* i___Unity__Services__Core__Configuration__Internal__ICloudProjectId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloudProjectId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloudProjectId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudProjectId(CloudProjectId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudProjectId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudProjectId(CloudProjectId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::CloudProjectId, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::CloudProjectId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::CloudProjectId*, "Unity.Services.Core.Configuration", "CloudProjectId");
