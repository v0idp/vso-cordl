#pragma once
// IWYU pragma private; include "Unity/Services/Core/Device/InstallationId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Device/Internal/zzzz__IInstallationId_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InstallationId)
namespace Unity::Services::Core::Device {
class IUserIdentifierProvider;
}
// Forward declare root types
namespace Unity::Services::Core::Device {
class InstallationId;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Device::InstallationId);
// Dependencies System.Object, Unity.Services.Core.Device.Internal.IInstallationId, Unity.Services.Core.Internal.IServiceComponent
namespace Unity::Services::Core::Device {
// Is value type: false
// CS Name: Unity.Services.Core.Device.InstallationId
class CORDL_TYPE InstallationId : public ::System::Object {
public:
// Declarations
/// @brief Field Identifier, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Identifier, put=__cordl_internal_set_Identifier)) ::StringW  Identifier;

/// @brief Field UnityAdsIdentifierProvider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnityAdsIdentifierProvider, put=__cordl_internal_set_UnityAdsIdentifierProvider)) ::Unity::Services::Core::Device::IUserIdentifierProvider*  UnityAdsIdentifierProvider;

/// @brief Field UnityAnalyticsIdentifierProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnityAnalyticsIdentifierProvider, put=__cordl_internal_set_UnityAnalyticsIdentifierProvider)) ::Unity::Services::Core::Device::IUserIdentifierProvider*  UnityAnalyticsIdentifierProvider;

/// @brief Convert operator to "::Unity::Services::Core::Device::Internal::IInstallationId"
constexpr operator  ::Unity::Services::Core::Device::Internal::IInstallationId*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr operator  ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

/// @brief Method CreateIdentifier, addr 0x2e9c6ac, size 0x278, virtual false, abstract: false, final false
inline void CreateIdentifier() ;

/// @brief Method GenerateGuid, addr 0x2e9c968, size 0x2c, virtual false, abstract: false, final false
static inline ::StringW GenerateGuid() ;

/// @brief Method GetOrCreateIdentifier, addr 0x2e9c680, size 0x2c, virtual true, abstract: false, final true
inline ::StringW GetOrCreateIdentifier() ;

static inline ::Unity::Services::Core::Device::InstallationId* New_ctor() ;

/// @brief Method ReadIdentifierFromFile, addr 0x2e9c924, size 0x44, virtual false, abstract: false, final false
static inline ::StringW ReadIdentifierFromFile() ;

/// @brief Method WriteIdentifierToFile, addr 0x2e9c994, size 0x54, virtual false, abstract: false, final false
static inline void WriteIdentifierToFile(::StringW  identifier) ;

constexpr ::StringW const& __cordl_internal_get_Identifier() const;

constexpr ::StringW& __cordl_internal_get_Identifier() ;

constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider* const& __cordl_internal_get_UnityAdsIdentifierProvider() const;

constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider*& __cordl_internal_get_UnityAdsIdentifierProvider() ;

constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider* const& __cordl_internal_get_UnityAnalyticsIdentifierProvider() const;

constexpr ::Unity::Services::Core::Device::IUserIdentifierProvider*& __cordl_internal_get_UnityAnalyticsIdentifierProvider() ;

constexpr void __cordl_internal_set_Identifier(::StringW  value) ;

constexpr void __cordl_internal_set_UnityAdsIdentifierProvider(::Unity::Services::Core::Device::IUserIdentifierProvider*  value) ;

constexpr void __cordl_internal_set_UnityAnalyticsIdentifierProvider(::Unity::Services::Core::Device::IUserIdentifierProvider*  value) ;

/// @brief Method .ctor, addr 0x2e9c5d8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Device::Internal::IInstallationId"
constexpr ::Unity::Services::Core::Device::Internal::IInstallationId* i___Unity__Services__Core__Device__Internal__IInstallationId() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstallationId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstallationId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstallationId(InstallationId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstallationId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstallationId(InstallationId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12500};

/// @brief Field Identifier, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Identifier;

/// @brief Field UnityAdsIdentifierProvider, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Core::Device::IUserIdentifierProvider*  ___UnityAdsIdentifierProvider;

/// @brief Field UnityAnalyticsIdentifierProvider, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Device::IUserIdentifierProvider*  ___UnityAnalyticsIdentifierProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Device::InstallationId, ___Identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Device::InstallationId, ___UnityAdsIdentifierProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Device::InstallationId, ___UnityAnalyticsIdentifierProvider) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Device::InstallationId, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Device
NEED_NO_BOX(::Unity::Services::Core::Device::InstallationId);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Device::InstallationId*, "Unity.Services.Core.Device", "InstallationId");
