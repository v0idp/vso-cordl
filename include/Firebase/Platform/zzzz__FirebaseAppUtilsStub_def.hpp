#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseAppUtilsStub.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/zzzz__IFirebaseAppUtils_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FirebaseAppUtilsStub)
namespace Firebase::Platform {
struct PlatformLogLevel;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Firebase::Platform {
class FirebaseAppUtilsStub;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::FirebaseAppUtilsStub);
// Dependencies Firebase.Platform.IFirebaseAppUtils, System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseAppUtilsStub
class CORDL_TYPE FirebaseAppUtilsStub : public ::System::Object {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::Platform::FirebaseAppUtilsStub*  _instance;

/// @brief Convert operator to "::Firebase::Platform::IFirebaseAppUtils"
constexpr operator  ::Firebase::Platform::IFirebaseAppUtils*() noexcept;

/// @brief Method GetLogLevel, addr 0x19226e8, size 0x8, virtual true, abstract: false, final true
inline ::Firebase::Platform::PlatformLogLevel GetLogLevel() ;

static inline ::Firebase::Platform::FirebaseAppUtilsStub* New_ctor() ;

/// @brief Method PollCallbacks, addr 0x19226e4, size 0x4, virtual true, abstract: false, final true
inline void PollCallbacks() ;

/// @brief Method TranslateDllNotFoundException, addr 0x19226c4, size 0x20, virtual true, abstract: false, final true
inline void TranslateDllNotFoundException(::System::Action*  action) ;

/// @brief Method .ctor, addr 0x1922664, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Platform::FirebaseAppUtilsStub* getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x192266c, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::FirebaseAppUtilsStub* get_Instance() ;

/// @brief Convert to "::Firebase::Platform::IFirebaseAppUtils"
constexpr ::Firebase::Platform::IFirebaseAppUtils* i___Firebase__Platform__IFirebaseAppUtils() noexcept;

static inline void setStaticF__instance(::Firebase::Platform::FirebaseAppUtilsStub*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAppUtilsStub() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAppUtilsStub", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAppUtilsStub(FirebaseAppUtilsStub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAppUtilsStub", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAppUtilsStub(FirebaseAppUtilsStub const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseAppUtilsStub, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::FirebaseAppUtilsStub);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseAppUtilsStub*, "Firebase.Platform", "FirebaseAppUtilsStub");
