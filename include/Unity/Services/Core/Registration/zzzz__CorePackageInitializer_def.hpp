#pragma once
// IWYU pragma private; include "Unity/Services/Core/Registration/CorePackageInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackageV2_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsComponentProvider_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CorePackageInitializer)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Configuration::Internal {
class ICloudProjectId;
}
namespace Unity::Services::Core::Configuration::Internal {
class IProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
class ExternalUserId;
}
namespace Unity::Services::Core::Configuration {
class ProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
namespace Unity::Services::Core::Device {
class InstallationId;
}
namespace Unity::Services::Core::Environments::Internal {
class Environments;
}
namespace Unity::Services::Core::Internal::Serialization {
class IJsonSerializer;
}
namespace Unity::Services::Core::Internal {
class CorePackageRegistry;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__GenerateProjectConfigurationAsync_d__53;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__InitializeComponents_d__47;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__InitializeProjectConfigAsync_d__52;
}
namespace Unity::Services::Core::Scheduler::Internal {
class ActionScheduler;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IDiagnosticsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
namespace Unity::Services::Core::Threading::Internal {
class UnityThreadUtilsInternal;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
// Forward declare root types
namespace Unity::Services::Core::Registration {
class CorePackageInitializer;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__GenerateProjectConfigurationAsync_d__53;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__InitializeComponents_d__47;
}
namespace Unity::Services::Core::Registration {
struct CorePackageInitializer__InitializeProjectConfigAsync_d__52;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Registration::CorePackageInitializer);
MARK_VAL_T(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53);
MARK_VAL_T(::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54);
MARK_VAL_T(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47);
MARK_VAL_T(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, Unity.Services.Core.Configuration.SerializableProjectConfiguration
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__53
struct CORDL_TYPE CorePackageInitializer__GenerateProjectConfigurationAsync_d__53 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea4ff0, size 0x30c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea52fc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CorePackageInitializer__GenerateProjectConfigurationAsync_d__53() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }]
constexpr CorePackageInitializer__GenerateProjectConfigurationAsync_d__53(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>  __t__builder, ::Unity::Services::Core::InitializationOptions*  options, ::Unity::Services::Core::Registration::CorePackageInitializer*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>  __t__builder;

/// @brief Field options, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::InitializationOptions*  options;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Registration::CorePackageInitializer*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Registration
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, Unity.Services.Core.Configuration.SerializableProjectConfiguration
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__54
struct CORDL_TYPE CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea5378, size 0x414, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea578c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }]
constexpr CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __t__builder;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54, __u__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Registration
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: Unity.Services.Core.Registration.CorePackageInitializer/<InitializeComponents>d__47
struct CORDL_TYPE CorePackageInitializer__InitializeComponents_d__47 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea5808, size 0x3d8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea5be0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CorePackageInitializer__InitializeComponents_d__47() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr CorePackageInitializer__InitializeComponents_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Registration::CorePackageInitializer*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Registration::CorePackageInitializer*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Registration
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::Core::Registration {
// Is value type: true
// CS Name: Unity.Services.Core.Registration.CorePackageInitializer/<InitializeProjectConfigAsync>d__52
struct CORDL_TYPE CorePackageInitializer__InitializeProjectConfigAsync_d__52 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea5c48, size 0x268, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea5eb0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CorePackageInitializer__InitializeProjectConfigAsync_d__52() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Registration::CorePackageInitializer*", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>", modifiers: "", def_value: None }]
constexpr CorePackageInitializer__InitializeProjectConfigAsync_d__52(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Registration::CorePackageInitializer*  __4__this, ::Unity::Services::Core::InitializationOptions*  options, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12410};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Registration::CorePackageInitializer*  __4__this;

/// @brief Field options, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::InitializationOptions*  options;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, options) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Registration
// Dependencies System.Object, Unity.Services.Core.Internal.IInitializablePackage, Unity.Services.Core.Internal.IInitializablePackageV2, Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider
namespace Unity::Services::Core::Registration {
// Is value type: false
// CS Name: Unity.Services.Core.Registration.CorePackageInitializer
class CORDL_TYPE CorePackageInitializer : public ::System::Object {
public:
// Declarations
using _GenerateProjectConfigurationAsync_d__53 = ::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53;

using _GetSerializedConfigOrEmptyAsync_d__54 = ::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54;

using _InitializeComponents_d__47 = ::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47;

using _InitializeProjectConfigAsync_d__52 = ::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52;

 __declspec(property(get=get_ActionScheduler, put=set_ActionScheduler)) ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*  ActionScheduler;

 __declspec(property(get=get_CloudProjectId, put=set_CloudProjectId)) ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  CloudProjectId;

 __declspec(property(get=get_DiagnosticsFactory, put=set_DiagnosticsFactory)) ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*  DiagnosticsFactory;

 __declspec(property(get=get_Environments, put=set_Environments)) ::Unity::Services::Core::Environments::Internal::Environments*  Environments;

 __declspec(property(get=get_ExternalUserId, put=set_ExternalUserId)) ::Unity::Services::Core::Configuration::ExternalUserId*  ExternalUserId;

 __declspec(property(get=get_InstallationId, put=set_InstallationId)) ::Unity::Services::Core::Device::InstallationId*  InstallationId;

 __declspec(property(get=get_MetricsFactory, put=set_MetricsFactory)) ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  MetricsFactory;

 __declspec(property(get=get_ProjectConfig, put=set_ProjectConfig)) ::Unity::Services::Core::Configuration::ProjectConfiguration*  ProjectConfig;

 __declspec(property(get=get_UnityThreadUtils, put=set_UnityThreadUtils)) ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*  UnityThreadUtils;

/// @brief Field <ActionScheduler>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionScheduler_k__BackingField, put=__cordl_internal_set__ActionScheduler_k__BackingField)) ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*  _ActionScheduler_k__BackingField;

/// @brief Field <CloudProjectId>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloudProjectId_k__BackingField, put=__cordl_internal_set__CloudProjectId_k__BackingField)) ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  _CloudProjectId_k__BackingField;

/// @brief Field <DiagnosticsFactory>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DiagnosticsFactory_k__BackingField, put=__cordl_internal_set__DiagnosticsFactory_k__BackingField)) ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*  _DiagnosticsFactory_k__BackingField;

/// @brief Field <Environments>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Environments_k__BackingField, put=__cordl_internal_set__Environments_k__BackingField)) ::Unity::Services::Core::Environments::Internal::Environments*  _Environments_k__BackingField;

/// @brief Field <ExternalUserId>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ExternalUserId_k__BackingField, put=__cordl_internal_set__ExternalUserId_k__BackingField)) ::Unity::Services::Core::Configuration::ExternalUserId*  _ExternalUserId_k__BackingField;

/// @brief Field <InstallationId>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__InstallationId_k__BackingField, put=__cordl_internal_set__InstallationId_k__BackingField)) ::Unity::Services::Core::Device::InstallationId*  _InstallationId_k__BackingField;

/// @brief Field <MetricsFactory>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetricsFactory_k__BackingField, put=__cordl_internal_set__MetricsFactory_k__BackingField)) ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  _MetricsFactory_k__BackingField;

/// @brief Field <ProjectConfig>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProjectConfig_k__BackingField, put=__cordl_internal_set__ProjectConfig_k__BackingField)) ::Unity::Services::Core::Configuration::ProjectConfiguration*  _ProjectConfig_k__BackingField;

/// @brief Field <UnityThreadUtils>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnityThreadUtils_k__BackingField, put=__cordl_internal_set__UnityThreadUtils_k__BackingField)) ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*  _UnityThreadUtils_k__BackingField;

/// @brief Field m_CurrentInitializationOptions, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentInitializationOptions, put=__cordl_internal_set_m_CurrentInitializationOptions)) ::Unity::Services::Core::InitializationOptions*  m_CurrentInitializationOptions;

/// @brief Field m_Registry, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Registry, put=__cordl_internal_set_m_Registry)) ::Unity::Services::Core::Internal::CoreRegistry*  m_Registry;

/// @brief Field m_Serializer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Serializer, put=__cordl_internal_set_m_Serializer)) ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  m_Serializer;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr operator  ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackageV2"
constexpr operator  ::Unity::Services::Core::Internal::IInitializablePackageV2*() noexcept;

/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider"
constexpr operator  ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*() noexcept;

/// @brief Method FreeOptionsDependantComponents, addr 0x2ea46b0, size 0xc, virtual false, abstract: false, final false
inline void FreeOptionsDependantComponents() ;

/// @brief Method GenerateProjectConfigurationAsync, addr 0x2ea4878, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::ProjectConfiguration*>* GenerateProjectConfigurationAsync(::Unity::Services::Core::InitializationOptions*  options) ;

/// @brief Method GetSerializedConfigOrEmptyAsync, addr 0x2ea4964, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* GetSerializedConfigOrEmptyAsync() ;

/// @brief Method HaveInitOptionsChanged, addr 0x2ea463c, size 0x74, virtual false, abstract: false, final false
inline bool HaveInitOptionsChanged() ;

/// @brief Method Initialize, addr 0x2ea456c, size 0x8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

/// @brief Method InitializeActionScheduler, addr 0x2ea4730, size 0x74, virtual false, abstract: false, final false
inline void InitializeActionScheduler() ;

/// @brief Method InitializeCloudProjectId, addr 0x2ea4d8c, size 0x68, virtual false, abstract: false, final false
inline void InitializeCloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  cloudProjectId) ;

/// @brief Method InitializeComponents, addr 0x2ea4574, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeComponents() ;

/// @brief Method InitializeDiagnostics, addr 0x2ea4d2c, size 0x60, virtual false, abstract: false, final false
inline void InitializeDiagnostics() ;

/// @brief Method InitializeEnvironments, addr 0x2ea4ba4, size 0x128, virtual false, abstract: false, final false
inline void InitializeEnvironments(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  projectConfiguration) ;

/// @brief Method InitializeExternalUserId, addr 0x2ea4a48, size 0x15c, virtual false, abstract: false, final false
inline void InitializeExternalUserId(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*  projectConfiguration) ;

/// @brief Method InitializeInstallationId, addr 0x2ea46bc, size 0x74, virtual false, abstract: false, final false
inline void InitializeInstallationId() ;

/// @brief Method InitializeInstanceAsync, addr 0x2ea4634, size 0x8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitializeInstanceAsync(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

/// @brief Method InitializeMetrics, addr 0x2ea4ccc, size 0x60, virtual false, abstract: false, final false
inline void InitializeMetrics() ;

/// @brief Method InitializeOnLoad, addr 0x2ea4260, size 0xb8, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

/// @brief Method InitializeProjectConfigAsync, addr 0x2ea47a4, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeProjectConfigAsync(::Unity::Services::Core::InitializationOptions*  options) ;

/// @brief Method InitializeUnityThreadUtils, addr 0x2ea4df4, size 0x60, virtual false, abstract: false, final false
inline void InitializeUnityThreadUtils() ;

static inline ::Unity::Services::Core::Registration::CorePackageInitializer* New_ctor(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer) ;

/// @brief Method Register, addr 0x2ea4340, size 0x22c, virtual true, abstract: false, final true
inline void Register(::Unity::Services::Core::Internal::CorePackageRegistry*  registry) ;

/// @brief Method <InitializeComponents>g__RegisterProvidedComponents|47_0, addr 0x2ea4e54, size 0x194, virtual false, abstract: false, final false
inline void _InitializeComponents_g__RegisterProvidedComponents_47_0() ;

/// @brief Method <InitializeComponents>g__SendFailedInitDiagnostic|47_1, addr 0x2ea4fe8, size 0x8, virtual false, abstract: false, final false
static inline bool _InitializeComponents_g__SendFailedInitDiagnostic_47_1(::System::Exception*  reason) ;

constexpr ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* const& __cordl_internal_get__ActionScheduler_k__BackingField() const;

constexpr ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*& __cordl_internal_get__ActionScheduler_k__BackingField() ;

constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* const& __cordl_internal_get__CloudProjectId_k__BackingField() const;

constexpr ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*& __cordl_internal_get__CloudProjectId_k__BackingField() ;

constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* const& __cordl_internal_get__DiagnosticsFactory_k__BackingField() const;

constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*& __cordl_internal_get__DiagnosticsFactory_k__BackingField() ;

constexpr ::Unity::Services::Core::Environments::Internal::Environments* const& __cordl_internal_get__Environments_k__BackingField() const;

constexpr ::Unity::Services::Core::Environments::Internal::Environments*& __cordl_internal_get__Environments_k__BackingField() ;

constexpr ::Unity::Services::Core::Configuration::ExternalUserId* const& __cordl_internal_get__ExternalUserId_k__BackingField() const;

constexpr ::Unity::Services::Core::Configuration::ExternalUserId*& __cordl_internal_get__ExternalUserId_k__BackingField() ;

constexpr ::Unity::Services::Core::Device::InstallationId* const& __cordl_internal_get__InstallationId_k__BackingField() const;

constexpr ::Unity::Services::Core::Device::InstallationId*& __cordl_internal_get__InstallationId_k__BackingField() ;

constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* const& __cordl_internal_get__MetricsFactory_k__BackingField() const;

constexpr ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*& __cordl_internal_get__MetricsFactory_k__BackingField() ;

constexpr ::Unity::Services::Core::Configuration::ProjectConfiguration* const& __cordl_internal_get__ProjectConfig_k__BackingField() const;

constexpr ::Unity::Services::Core::Configuration::ProjectConfiguration*& __cordl_internal_get__ProjectConfig_k__BackingField() ;

constexpr ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* const& __cordl_internal_get__UnityThreadUtils_k__BackingField() const;

constexpr ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*& __cordl_internal_get__UnityThreadUtils_k__BackingField() ;

constexpr ::Unity::Services::Core::InitializationOptions* const& __cordl_internal_get_m_CurrentInitializationOptions() const;

constexpr ::Unity::Services::Core::InitializationOptions*& __cordl_internal_get_m_CurrentInitializationOptions() ;

constexpr ::Unity::Services::Core::Internal::CoreRegistry* const& __cordl_internal_get_m_Registry() const;

constexpr ::Unity::Services::Core::Internal::CoreRegistry*& __cordl_internal_get_m_Registry() ;

constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* const& __cordl_internal_get_m_Serializer() const;

constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*& __cordl_internal_get_m_Serializer() ;

constexpr void __cordl_internal_set__ActionScheduler_k__BackingField(::Unity::Services::Core::Scheduler::Internal::ActionScheduler*  value) ;

constexpr void __cordl_internal_set__CloudProjectId_k__BackingField(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  value) ;

constexpr void __cordl_internal_set__DiagnosticsFactory_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*  value) ;

constexpr void __cordl_internal_set__Environments_k__BackingField(::Unity::Services::Core::Environments::Internal::Environments*  value) ;

constexpr void __cordl_internal_set__ExternalUserId_k__BackingField(::Unity::Services::Core::Configuration::ExternalUserId*  value) ;

constexpr void __cordl_internal_set__InstallationId_k__BackingField(::Unity::Services::Core::Device::InstallationId*  value) ;

constexpr void __cordl_internal_set__MetricsFactory_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  value) ;

constexpr void __cordl_internal_set__ProjectConfig_k__BackingField(::Unity::Services::Core::Configuration::ProjectConfiguration*  value) ;

constexpr void __cordl_internal_set__UnityThreadUtils_k__BackingField(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*  value) ;

constexpr void __cordl_internal_set_m_CurrentInitializationOptions(::Unity::Services::Core::InitializationOptions*  value) ;

constexpr void __cordl_internal_set_m_Registry(::Unity::Services::Core::Internal::CoreRegistry*  value) ;

constexpr void __cordl_internal_set_m_Serializer(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  value) ;

/// @brief Method .ctor, addr 0x2ea4318, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer) ;

/// @brief Method get_ActionScheduler, addr 0x2ea41d0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Scheduler::Internal::ActionScheduler* get_ActionScheduler() ;

/// @brief Method get_CloudProjectId, addr 0x2ea4220, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Configuration::Internal::ICloudProjectId* get_CloudProjectId() ;

/// @brief Method get_DiagnosticsFactory, addr 0x2ea4230, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory* get_DiagnosticsFactory() ;

/// @brief Method get_Environments, addr 0x2ea4200, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Environments::Internal::Environments* get_Environments() ;

/// @brief Method get_ExternalUserId, addr 0x2ea4210, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Configuration::ExternalUserId* get_ExternalUserId() ;

/// @brief Method get_InstallationId, addr 0x2ea41e0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Device::InstallationId* get_InstallationId() ;

/// @brief Method get_MetricsFactory, addr 0x2ea4240, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory* get_MetricsFactory() ;

/// @brief Method get_ProjectConfig, addr 0x2ea41f0, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Configuration::ProjectConfiguration* get_ProjectConfig() ;

/// @brief Method get_UnityThreadUtils, addr 0x2ea4250, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal* get_UnityThreadUtils() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackageV2"
constexpr ::Unity::Services::Core::Internal::IInitializablePackageV2* i___Unity__Services__Core__Internal__IInitializablePackageV2() noexcept;

/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider"
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* i___Unity__Services__Core__Telemetry__Internal__IDiagnosticsComponentProvider() noexcept;

/// @brief Method set_ActionScheduler, addr 0x2ea41d8, size 0x8, virtual false, abstract: false, final false
inline void set_ActionScheduler(::Unity::Services::Core::Scheduler::Internal::ActionScheduler*  value) ;

/// @brief Method set_CloudProjectId, addr 0x2ea4228, size 0x8, virtual false, abstract: false, final false
inline void set_CloudProjectId(::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  value) ;

/// @brief Method set_DiagnosticsFactory, addr 0x2ea4238, size 0x8, virtual false, abstract: false, final false
inline void set_DiagnosticsFactory(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*  value) ;

/// @brief Method set_Environments, addr 0x2ea4208, size 0x8, virtual false, abstract: false, final false
inline void set_Environments(::Unity::Services::Core::Environments::Internal::Environments*  value) ;

/// @brief Method set_ExternalUserId, addr 0x2ea4218, size 0x8, virtual false, abstract: false, final false
inline void set_ExternalUserId(::Unity::Services::Core::Configuration::ExternalUserId*  value) ;

/// @brief Method set_InstallationId, addr 0x2ea41e8, size 0x8, virtual false, abstract: false, final false
inline void set_InstallationId(::Unity::Services::Core::Device::InstallationId*  value) ;

/// @brief Method set_MetricsFactory, addr 0x2ea4248, size 0x8, virtual false, abstract: false, final false
inline void set_MetricsFactory(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  value) ;

/// @brief Method set_ProjectConfig, addr 0x2ea41f8, size 0x8, virtual false, abstract: false, final false
inline void set_ProjectConfig(::Unity::Services::Core::Configuration::ProjectConfiguration*  value) ;

/// @brief Method set_UnityThreadUtils, addr 0x2ea4258, size 0x8, virtual false, abstract: false, final false
inline void set_UnityThreadUtils(::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12411};

/// @brief Field <ActionScheduler>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Scheduler::Internal::ActionScheduler*  ____ActionScheduler_k__BackingField;

/// @brief Field <InstallationId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Core::Device::InstallationId*  ____InstallationId_k__BackingField;

/// @brief Field <ProjectConfig>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::ProjectConfiguration*  ____ProjectConfig_k__BackingField;

/// @brief Field <Environments>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Environments::Internal::Environments*  ____Environments_k__BackingField;

/// @brief Field <ExternalUserId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::ExternalUserId*  ____ExternalUserId_k__BackingField;

/// @brief Field <CloudProjectId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::Internal::ICloudProjectId*  ____CloudProjectId_k__BackingField;

/// @brief Field <DiagnosticsFactory>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*  ____DiagnosticsFactory_k__BackingField;

/// @brief Field <MetricsFactory>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  ____MetricsFactory_k__BackingField;

/// @brief Field <UnityThreadUtils>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Unity::Services::Core::Threading::Internal::UnityThreadUtilsInternal*  ____UnityThreadUtils_k__BackingField;

/// @brief Field m_Registry, offset: 0x58, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistry*  ___m_Registry;

/// @brief Field m_Serializer, offset: 0x60, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  ___m_Serializer;

/// @brief Field m_CurrentInitializationOptions, offset: 0x68, size: 0x8, def value: None
 ::Unity::Services::Core::InitializationOptions*  ___m_CurrentInitializationOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____ActionScheduler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____InstallationId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____ProjectConfig_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____Environments_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____ExternalUserId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____CloudProjectId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____DiagnosticsFactory_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____MetricsFactory_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ____UnityThreadUtils_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ___m_Registry) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ___m_Serializer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Registration::CorePackageInitializer, ___m_CurrentInitializationOptions) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Registration::CorePackageInitializer, 0x70>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Registration
NEED_NO_BOX(::Unity::Services::Core::Registration::CorePackageInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::CorePackageInitializer*, "Unity.Services.Core.Registration", "CorePackageInitializer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::CorePackageInitializer__GenerateProjectConfigurationAsync_d__53, "Unity.Services.Core.Registration", "CorePackageInitializer/<GenerateProjectConfigurationAsync>d__53");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::CorePackageInitializer__GetSerializedConfigOrEmptyAsync_d__54, "Unity.Services.Core.Registration", "CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__54");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeComponents_d__47, "Unity.Services.Core.Registration", "CorePackageInitializer/<InitializeComponents>d__47");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Registration::CorePackageInitializer__InitializeProjectConfigAsync_d__52, "Unity.Services.Core.Registration", "CorePackageInitializer/<InitializeProjectConfigAsync>d__52");
