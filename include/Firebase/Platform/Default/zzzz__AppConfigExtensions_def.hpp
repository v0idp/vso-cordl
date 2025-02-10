#pragma once
// IWYU pragma private; include "Firebase/Platform/Default/AppConfigExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/zzzz__IAppConfigExtensions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppConfigExtensions)
namespace Firebase::Platform {
class IAppConfigExtensions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Firebase::Platform::Default {
class AppConfigExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::Default::AppConfigExtensions);
// Dependencies Firebase.Platform.IAppConfigExtensions, System.Object
namespace Firebase::Platform::Default {
// Is value type: false
// CS Name: Firebase.Platform.Default.AppConfigExtensions
class CORDL_TYPE AppConfigExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::StringW  Default;

/// @brief Field DefaultUpdateUrl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultUpdateUrl, put=setStaticF_DefaultUpdateUrl)) ::System::Uri*  DefaultUpdateUrl;

/// @brief Field SStringState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SStringState, put=setStaticF_SStringState)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  SStringState;

/// @brief Field Sync, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Sync, put=setStaticF_Sync)) ::System::Object*  Sync;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::Platform::Default::AppConfigExtensions*  _instance;

/// @brief Convert operator to "::Firebase::Platform::IAppConfigExtensions"
constexpr operator  ::Firebase::Platform::IAppConfigExtensions*() noexcept;

static inline ::Firebase::Platform::Default::AppConfigExtensions* New_ctor() ;

/// @brief Method .ctor, addr 0x1920d64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_Default() ;

static inline ::System::Uri* getStaticF_DefaultUpdateUrl() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* getStaticF_SStringState() ;

static inline ::System::Object* getStaticF_Sync() ;

static inline ::Firebase::Platform::Default::AppConfigExtensions* getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x1921a5c, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::IAppConfigExtensions* get_Instance() ;

/// @brief Convert to "::Firebase::Platform::IAppConfigExtensions"
constexpr ::Firebase::Platform::IAppConfigExtensions* i___Firebase__Platform__IAppConfigExtensions() noexcept;

static inline void setStaticF_Default(::StringW  value) ;

static inline void setStaticF_DefaultUpdateUrl(::System::Uri*  value) ;

static inline void setStaticF_SStringState(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

static inline void setStaticF_Sync(::System::Object*  value) ;

static inline void setStaticF__instance(::Firebase::Platform::Default::AppConfigExtensions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppConfigExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppConfigExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppConfigExtensions(AppConfigExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppConfigExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppConfigExtensions(AppConfigExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::Default::AppConfigExtensions, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform::Default
NEED_NO_BOX(::Firebase::Platform::Default::AppConfigExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::Default::AppConfigExtensions*, "Firebase.Platform.Default", "AppConfigExtensions");
