#pragma once
// IWYU pragma private; include "Firebase/Platform/Default/UnityConfigExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/Default/zzzz__AppConfigExtensions_def.hpp"
CORDL_MODULE_EXPORT(UnityConfigExtensions)
namespace Firebase::Platform {
class IAppConfigExtensions;
}
// Forward declare root types
namespace Firebase::Platform::Default {
class UnityConfigExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::Default::UnityConfigExtensions);
// Dependencies Firebase.Platform.Default.AppConfigExtensions
namespace Firebase::Platform::Default {
// Is value type: false
// CS Name: Firebase.Platform.Default.UnityConfigExtensions
class CORDL_TYPE UnityConfigExtensions : public ::Firebase::Platform::Default::AppConfigExtensions {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::Platform::Default::UnityConfigExtensions*  _instance;

static inline ::Firebase::Platform::Default::UnityConfigExtensions* New_ctor() ;

/// @brief Method .ctor, addr 0x1920d0c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Platform::Default::UnityConfigExtensions* getStaticF__instance() ;

/// @brief Method get_DefaultInstance, addr 0x1920d6c, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::IAppConfigExtensions* get_DefaultInstance() ;

static inline void setStaticF__instance(::Firebase::Platform::Default::UnityConfigExtensions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityConfigExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityConfigExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityConfigExtensions(UnityConfigExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityConfigExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityConfigExtensions(UnityConfigExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::Default::UnityConfigExtensions, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform::Default
NEED_NO_BOX(::Firebase::Platform::Default::UnityConfigExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::Default::UnityConfigExtensions*, "Firebase.Platform.Default", "UnityConfigExtensions");
