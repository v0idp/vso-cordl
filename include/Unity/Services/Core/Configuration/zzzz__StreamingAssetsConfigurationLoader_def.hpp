#pragma once
// IWYU pragma private; include "Unity/Services/Core/Configuration/StreamingAssetsConfigurationLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__IConfigurationLoader_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingAssetsConfigurationLoader)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Unity::Services::Core::Configuration {
struct SerializableProjectConfiguration;
}
namespace Unity::Services::Core::Configuration {
struct StreamingAssetsConfigurationLoader__GetConfigAsync_d__2;
}
namespace Unity::Services::Core::Internal::Serialization {
class IJsonSerializer;
}
// Forward declare root types
namespace Unity::Services::Core::Configuration {
class StreamingAssetsConfigurationLoader;
}
namespace Unity::Services::Core::Configuration {
struct StreamingAssetsConfigurationLoader__GetConfigAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader);
MARK_VAL_T(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, Unity.Services.Core.Configuration.SerializableProjectConfiguration
namespace Unity::Services::Core::Configuration {
// Is value type: true
// CS Name: Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2
struct CORDL_TYPE StreamingAssetsConfigurationLoader__GetConfigAsync_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e9b268, size 0x2f8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e9b5f8, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamingAssetsConfigurationLoader__GetConfigAsync_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr StreamingAssetsConfigurationLoader__GetConfigAsync_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __t__builder, ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12472};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
// Dependencies System.Object, Unity.Services.Core.Configuration.IConfigurationLoader
namespace Unity::Services::Core::Configuration {
// Is value type: false
// CS Name: Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
class CORDL_TYPE StreamingAssetsConfigurationLoader : public ::System::Object {
public:
// Declarations
using _GetConfigAsync_d__2 = ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2;

/// @brief Field m_Serializer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Serializer, put=__cordl_internal_set_m_Serializer)) ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  m_Serializer;

/// @brief Convert operator to "::Unity::Services::Core::Configuration::IConfigurationLoader"
constexpr operator  ::Unity::Services::Core::Configuration::IConfigurationLoader*() noexcept;

/// @brief Method GetConfigAsync, addr 0x2e9b178, size 0xf0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* GetConfigAsync() ;

static inline ::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader* New_ctor(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer) ;

constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* const& __cordl_internal_get_m_Serializer() const;

constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*& __cordl_internal_get_m_Serializer() ;

constexpr void __cordl_internal_set_m_Serializer(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  value) ;

/// @brief Method .ctor, addr 0x2e9aeec, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  serializer) ;

/// @brief Convert to "::Unity::Services::Core::Configuration::IConfigurationLoader"
constexpr ::Unity::Services::Core::Configuration::IConfigurationLoader* i___Unity__Services__Core__Configuration__IConfigurationLoader() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamingAssetsConfigurationLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamingAssetsConfigurationLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamingAssetsConfigurationLoader(StreamingAssetsConfigurationLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamingAssetsConfigurationLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamingAssetsConfigurationLoader(StreamingAssetsConfigurationLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12473};

/// @brief Field m_Serializer, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*  ___m_Serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader, ___m_Serializer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Configuration
NEED_NO_BOX(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader*, "Unity.Services.Core.Configuration", "StreamingAssetsConfigurationLoader");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Configuration::StreamingAssetsConfigurationLoader__GetConfigAsync_d__2, "Unity.Services.Core.Configuration", "StreamingAssetsConfigurationLoader/<GetConfigAsync>d__2");
