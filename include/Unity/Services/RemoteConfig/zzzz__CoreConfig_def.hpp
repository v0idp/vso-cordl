#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/CoreConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CoreConfig)
namespace Unity::Services::Authentication::Internal {
class IAccessToken;
}
namespace Unity::Services::Authentication::Internal {
class IPlayerId;
}
// Forward declare root types
namespace Unity::Services::RemoteConfig {
class CoreConfig;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::RemoteConfig::CoreConfig);
// Dependencies System.Object
namespace Unity::Services::RemoteConfig {
// Is value type: false
// CS Name: Unity.Services.RemoteConfig.CoreConfig
class CORDL_TYPE CoreConfig : public ::System::Object {
public:
// Declarations
/// @brief Field IplayerId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IplayerId, put=setStaticF_IplayerId)) ::Unity::Services::Authentication::Internal::IPlayerId*  IplayerId;

/// @brief Field Itoken, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Itoken, put=setStaticF_Itoken)) ::Unity::Services::Authentication::Internal::IAccessToken*  Itoken;

/// @brief Field analyticsUserId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_analyticsUserId, put=setStaticF_analyticsUserId)) ::StringW  analyticsUserId;

/// @brief Field installationId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_installationId, put=setStaticF_installationId)) ::StringW  installationId;

static inline ::Unity::Services::Authentication::Internal::IPlayerId* getStaticF_IplayerId() ;

static inline ::Unity::Services::Authentication::Internal::IAccessToken* getStaticF_Itoken() ;

static inline ::StringW getStaticF_analyticsUserId() ;

static inline ::StringW getStaticF_installationId() ;

static inline void setStaticF_IplayerId(::Unity::Services::Authentication::Internal::IPlayerId*  value) ;

static inline void setStaticF_Itoken(::Unity::Services::Authentication::Internal::IAccessToken*  value) ;

static inline void setStaticF_analyticsUserId(::StringW  value) ;

static inline void setStaticF_installationId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreConfig(CoreConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreConfig(CoreConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::RemoteConfig::CoreConfig, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::RemoteConfig
NEED_NO_BOX(::Unity::Services::RemoteConfig::CoreConfig);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::RemoteConfig::CoreConfig*, "Unity.Services.RemoteConfig", "CoreConfig");
