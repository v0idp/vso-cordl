#pragma once
// IWYU pragma private; include "VROSC/RemoteConfigManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteConfigManager)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace Unity::Services::RemoteConfig {
struct ConfigResponse;
}
namespace Unity::Services::RemoteConfig {
class RuntimeConfig;
}
namespace VROSC {
struct RemoteConfigManager_AppAttributes;
}
namespace VROSC {
struct RemoteConfigManager_UserAttributes;
}
namespace VROSC {
struct RemoteConfigManager__Setup_d__19;
}
// Forward declare root types
namespace VROSC {
class RemoteConfigManager;
}
namespace VROSC {
struct RemoteConfigManager_AppAttributes;
}
namespace VROSC {
struct RemoteConfigManager_UserAttributes;
}
namespace VROSC {
struct RemoteConfigManager__Setup_d__19;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::RemoteConfigManager);
MARK_VAL_T(::VROSC::RemoteConfigManager_AppAttributes);
MARK_VAL_T(::VROSC::RemoteConfigManager_UserAttributes);
MARK_VAL_T(::VROSC::RemoteConfigManager__Setup_d__19);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.RemoteConfigManager/UserAttributes
#pragma pack(push, 0)
struct CORDL_TYPE RemoteConfigManager_UserAttributes {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigManager_UserAttributes() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::RemoteConfigManager_UserAttributes, 0x1>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.RemoteConfigManager/AppAttributes
#pragma pack(push, 0)
struct CORDL_TYPE RemoteConfigManager_AppAttributes {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigManager_AppAttributes() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{784};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::RemoteConfigManager_AppAttributes, 0x1>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace VROSC {
// Is value type: true
// CS Name: VROSC.RemoteConfigManager/<Setup>d__19
struct CORDL_TYPE RemoteConfigManager__Setup_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16f6624, size 0x568, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16f6b8c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigManager__Setup_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::RemoteConfigManager*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>", modifiers: "", def_value: None }]
constexpr RemoteConfigManager__Setup_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::RemoteConfigManager*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{785};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::RemoteConfigManager*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::RemoteConfig::RuntimeConfig*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RemoteConfigManager__Setup_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager__Setup_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager__Setup_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager__Setup_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager__Setup_d__19, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RemoteConfigManager__Setup_d__19, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RemoteConfigManager
class CORDL_TYPE RemoteConfigManager : public ::System::Object {
public:
// Declarations
using AppAttributes = ::VROSC::RemoteConfigManager_AppAttributes;

using UserAttributes = ::VROSC::RemoteConfigManager_UserAttributes;

using _Setup_d__19 = ::VROSC::RemoteConfigManager__Setup_d__19;

 __declspec(property(get=get_ABGroupName, put=set_ABGroupName)) ::StringW  ABGroupName;

 __declspec(property(get=get_ABTestId, put=set_ABTestId)) ::StringW  ABTestId;

 __declspec(property(get=get_IsLoaded, put=set_IsLoaded)) bool  IsLoaded;

 __declspec(property(get=get_StartEnvironment, put=set_StartEnvironment)) ::StringW  StartEnvironment;

/// @brief Field <ABGroupName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ABGroupName_k__BackingField, put=__cordl_internal_set__ABGroupName_k__BackingField)) ::StringW  _ABGroupName_k__BackingField;

/// @brief Field <ABTestId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ABTestId_k__BackingField, put=__cordl_internal_set__ABTestId_k__BackingField)) ::StringW  _ABTestId_k__BackingField;

/// @brief Field <IsLoaded>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLoaded_k__BackingField, put=__cordl_internal_set__IsLoaded_k__BackingField)) bool  _IsLoaded_k__BackingField;

/// @brief Field <StartEnvironment>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__StartEnvironment_k__BackingField, put=__cordl_internal_set__StartEnvironment_k__BackingField)) ::StringW  _StartEnvironment_k__BackingField;

/// @brief Method ApplyRemoteConfig, addr 0x16f6418, size 0x198, virtual false, abstract: false, final false
inline void ApplyRemoteConfig(::Unity::Services::RemoteConfig::ConfigResponse  configResponse) ;

static inline ::VROSC::RemoteConfigManager* New_ctor() ;

/// @brief Method Setup, addr 0x16f638c, size 0x8c, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::StringW const& __cordl_internal_get__ABGroupName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ABGroupName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ABTestId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ABTestId_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLoaded_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__StartEnvironment_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__StartEnvironment_k__BackingField() ;

constexpr void __cordl_internal_set__ABGroupName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ABTestId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__IsLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StartEnvironment_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x16f65b0, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ABGroupName, addr 0x16f635c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ABGroupName() ;

/// @brief Method get_ABTestId, addr 0x16f636c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ABTestId() ;

/// @brief Method get_IsLoaded, addr 0x16f6348, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLoaded() ;

/// @brief Method get_StartEnvironment, addr 0x16f637c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StartEnvironment() ;

/// @brief Method set_ABGroupName, addr 0x16f6364, size 0x8, virtual false, abstract: false, final false
inline void set_ABGroupName(::StringW  value) ;

/// @brief Method set_ABTestId, addr 0x16f6374, size 0x8, virtual false, abstract: false, final false
inline void set_ABTestId(::StringW  value) ;

/// @brief Method set_IsLoaded, addr 0x16f6350, size 0xc, virtual false, abstract: false, final false
inline void set_IsLoaded(bool  value) ;

/// @brief Method set_StartEnvironment, addr 0x16f6384, size 0x8, virtual false, abstract: false, final false
inline void set_StartEnvironment(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigManager(RemoteConfigManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigManager(RemoteConfigManager const& ) = delete;

/// @brief Field ENVIRONMENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  ENVIRONMENT_NAME{u"production"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{786};

/// @brief Field <IsLoaded>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsLoaded_k__BackingField;

/// @brief Field <ABGroupName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ABGroupName_k__BackingField;

/// @brief Field <ABTestId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____ABTestId_k__BackingField;

/// @brief Field <StartEnvironment>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____StartEnvironment_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RemoteConfigManager, ____IsLoaded_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager, ____ABGroupName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager, ____ABTestId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteConfigManager, ____StartEnvironment_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RemoteConfigManager, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::RemoteConfigManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RemoteConfigManager*, "VROSC", "RemoteConfigManager");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RemoteConfigManager_AppAttributes, "VROSC", "RemoteConfigManager/AppAttributes");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RemoteConfigManager_UserAttributes, "VROSC", "RemoteConfigManager/UserAttributes");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RemoteConfigManager__Setup_d__19, "VROSC", "RemoteConfigManager/<Setup>d__19");
