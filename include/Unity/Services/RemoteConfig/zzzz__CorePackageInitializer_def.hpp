#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/CorePackageInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CorePackageInitializer)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::RemoteConfig {
struct CorePackageInitializer__Initialize_d__1;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class CorePackageInitializer;
}
namespace Unity::Services::RemoteConfig {
struct CorePackageInitializer__Initialize_d__1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::CorePackageInitializer);
MARK_VAL_T(::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace Unity::Services::RemoteConfig {
// Is value type: true
// CS Name: Unity.Services.RemoteConfig.CorePackageInitializer/<Initialize>d__1
struct CORDL_TYPE CorePackageInitializer__Initialize_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2eaa850, size 0x458, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2eaaca8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CorePackageInitializer__Initialize_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr CorePackageInitializer__Initialize_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field registry, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistry*  registry;

/// @brief Field <>u__1, offset: 0x28, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1, registry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
// Dependencies System.Object, Unity.Services.Core.Internal.IInitializablePackage
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.CorePackageInitializer
class CORDL_TYPE CorePackageInitializer : public ::System::Object {
public:
// Declarations
using _Initialize_d__1 = ::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr operator  ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

/// @brief Method Initialize, addr 0x2eaa790, size 0xc0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

static inline ::Unity::Services::RemoteConfig::CorePackageInitializer* New_ctor() ;

/// @brief Method Register, addr 0x2eaa61c, size 0x16c, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0x2eaa788, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CorePackageInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CorePackageInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CorePackageInitializer(CorePackageInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CorePackageInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CorePackageInitializer(CorePackageInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::CorePackageInitializer, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::CorePackageInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::CorePackageInitializer*, "Unity.Services.RemoteConfig", "CorePackageInitializer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::CorePackageInitializer__Initialize_d__1, "Unity.Services.RemoteConfig", "CorePackageInitializer/<Initialize>d__1");
