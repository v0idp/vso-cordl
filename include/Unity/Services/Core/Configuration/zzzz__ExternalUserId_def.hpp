#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/ExternalUserId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IExternalUserId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExternalUserId)
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class ExternalUserId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::ExternalUserId);
// Dependencies System.Object, Unity.Services.Core.Configuration.Internal.IExternalUserId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.ExternalUserId
class CORDL_TYPE ExternalUserId : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Convert operator to "::Unity::Services::Core::Configuration::Internal::IExternalUserId"
constexpr operator  ::Unity::Services::Core::Configuration::Internal::IExternalUserId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

static inline ::Unity::Services::Core::Configuration::ExternalUserId* New_ctor() ;

/// @brief Method .ctor, addr 0x2e9af78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_UserId, addr 0x2e9af14, size 0x64, virtual true, abstract: false, final true
inline ::StringW get_UserId() ;

/// @brief Convert to "::Unity::Services::Core::Configuration::Internal::IExternalUserId"
constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId* i___Unity__Services__Core__Configuration__Internal__IExternalUserId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalUserId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalUserId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalUserId(ExternalUserId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalUserId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalUserId(ExternalUserId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::ExternalUserId, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::ExternalUserId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::ExternalUserId*, "Unity.Services.Core.Configuration", "ExternalUserId");
