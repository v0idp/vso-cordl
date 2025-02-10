#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationPackageInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticationPackageInitializer)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationPackageInitializer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationPackageInitializer);
// Dependencies System.Object, Unity.Services.Core.Internal.IInitializablePackage
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationPackageInitializer
class CORDL_TYPE AuthenticationPackageInitializer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr operator  ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

/// @brief Method GetPlayerAuthHost, addr 0x2e96658, size 0x120, virtual false, abstract: false, final false
inline ::StringW GetPlayerAuthHost(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  projectConfiguration) ;

/// @brief Method GetPlayerNamesHost, addr 0x2e96934, size 0x120, virtual false, abstract: false, final false
inline ::StringW GetPlayerNamesHost(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  projectConfiguration) ;

/// @brief Method Initialize, addr 0x2e95e0c, size 0x62c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

static inline ::Unity::Services::Authentication::AuthenticationPackageInitializer* New_ctor() ;

/// @brief Method Register, addr 0x2e96e00, size 0x21c, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0x2e9701c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationPackageInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationPackageInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationPackageInitializer(AuthenticationPackageInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationPackageInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationPackageInitializer(AuthenticationPackageInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationPackageInitializer, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationPackageInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationPackageInitializer*, "Unity.Services.Authentication", "AuthenticationPackageInitializer");
