#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/RemoteConfigService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemoteConfigService)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace Unity::Services::RemoteConfig {
class ConfigManagerImpl;
}
namespace Unity::Services::RemoteConfig {
struct ConfigResponse;
}
namespace Unity::Services::RemoteConfig {
class RemoteConfigService___c;
}
namespace Unity::Services::RemoteConfig {
class RuntimeConfig;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class RemoteConfigService;
}
namespace Unity::Services::RemoteConfig {
class RemoteConfigService___c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::RemoteConfigService);
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::RemoteConfigService___c);
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.RemoteConfigService/<>c
class CORDL_TYPE RemoteConfigService___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Unity::Services::RemoteConfig::RemoteConfigService___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::StringW,bool>*  __9__9_0;

static inline ::Unity::Services::RemoteConfig::RemoteConfigService___c* New_ctor() ;

/// @brief Method .ctor, addr 0x2eab498, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_ConfigManagerImpl>b__9_0, addr 0x2eab4a0, size 0x54, virtual false, abstract: false, final false
inline bool _get_ConfigManagerImpl_b__9_0(::StringW  s) ;

static inline ::Unity::Services::RemoteConfig::RemoteConfigService___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Unity::Services::RemoteConfig::RemoteConfigService___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigService___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigService___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigService___c(RemoteConfigService___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigService___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigService___c(RemoteConfigService___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::RemoteConfigService___c, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.RemoteConfigService
class CORDL_TYPE RemoteConfigService : public ::System::Object {
public:
// Declarations
using __c = ::Unity::Services::RemoteConfig::RemoteConfigService___c;

 __declspec(property(get=get_ConfigManagerImpl)) ::Unity::Services::RemoteConfig::ConfigManagerImpl*  ConfigManagerImpl;

/// @brief Field _autoLoadEnvironment, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoLoadEnvironment, put=__cordl_internal_set__autoLoadEnvironment)) bool  _autoLoadEnvironment;

/// @brief Field _configManagerImpl, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__configManagerImpl, put=__cordl_internal_set__configManagerImpl)) ::Unity::Services::RemoteConfig::ConfigManagerImpl*  _configManagerImpl;

/// @brief Field _lastToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastToken, put=__cordl_internal_set__lastToken)) ::StringW  _lastToken;

 __declspec(property(get=get_appConfig)) ::Unity::Services::RemoteConfig::RuntimeConfig*  appConfig;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::Unity::Services::RemoteConfig::RemoteConfigService*  instance;

/// @brief Field padlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_padlock, put=setStaticF_padlock)) ::System::Object*  padlock;

/// @brief Method FetchConfigsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename T2>
inline ::System::Threading::Tasks::Task_1<::Unity::Services::RemoteConfig::RuntimeConfig*>* FetchConfigsAsync(T  userAttributes, T2  appAttributes) ;

static inline ::Unity::Services::RemoteConfig::RemoteConfigService* New_ctor() ;

constexpr bool const& __cordl_internal_get__autoLoadEnvironment() const;

constexpr bool& __cordl_internal_get__autoLoadEnvironment() ;

constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl* const& __cordl_internal_get__configManagerImpl() const;

constexpr ::Unity::Services::RemoteConfig::ConfigManagerImpl*& __cordl_internal_get__configManagerImpl() ;

constexpr ::StringW const& __cordl_internal_get__lastToken() const;

constexpr ::StringW& __cordl_internal_get__lastToken() ;

constexpr void __cordl_internal_set__autoLoadEnvironment(bool  value) ;

constexpr void __cordl_internal_set__configManagerImpl(::Unity::Services::RemoteConfig::ConfigManagerImpl*  value) ;

constexpr void __cordl_internal_set__lastToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x2eaadf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_FetchCompleted, addr 0x2eab368, size 0x20, virtual false, abstract: false, final false
inline void add_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value) ;

static inline ::Unity::Services::RemoteConfig::RemoteConfigService* getStaticF_instance() ;

static inline ::System::Object* getStaticF_padlock() ;

/// @brief Method get_ConfigManagerImpl, addr 0x2eaaf7c, size 0x3ec, virtual false, abstract: false, final false
inline ::Unity::Services::RemoteConfig::ConfigManagerImpl* get_ConfigManagerImpl() ;

/// @brief Method get_Instance, addr 0x2eaae00, size 0x17c, virtual false, abstract: false, final false
static inline ::Unity::Services::RemoteConfig::RemoteConfigService* get_Instance() ;

/// @brief Method get_appConfig, addr 0x2eab3a8, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Services::RemoteConfig::RuntimeConfig* get_appConfig() ;

/// @brief Method remove_FetchCompleted, addr 0x2eab388, size 0x20, virtual false, abstract: false, final false
inline void remove_FetchCompleted(::System::Action_1<::Unity::Services::RemoteConfig::ConfigResponse>*  value) ;

static inline void setStaticF_instance(::Unity::Services::RemoteConfig::RemoteConfigService*  value) ;

static inline void setStaticF_padlock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigService(RemoteConfigService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigService(RemoteConfigService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12229};

/// @brief Field _configManagerImpl, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::RemoteConfig::ConfigManagerImpl*  ____configManagerImpl;

/// @brief Field _lastToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____lastToken;

/// @brief Field _autoLoadEnvironment, offset: 0x20, size: 0x1, def value: None
 bool  ____autoLoadEnvironment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigService, ____configManagerImpl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigService, ____lastToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::RemoteConfig::RemoteConfigService, ____autoLoadEnvironment) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::RemoteConfigService, 0x28>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::RemoteConfigService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::RemoteConfigService*, "Unity.Services.RemoteConfig", "RemoteConfigService");
NEED_NO_BOX(::Unity::Services::RemoteConfig::RemoteConfigService___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::RemoteConfigService___c*, "Unity.Services.RemoteConfig", "RemoteConfigService/<>c");
