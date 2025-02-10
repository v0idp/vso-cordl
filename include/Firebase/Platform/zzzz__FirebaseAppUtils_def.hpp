#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseAppUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/zzzz__IFirebaseAppUtils_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FirebaseAppUtils)
namespace Firebase::Platform {
struct PlatformLogLevel;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Firebase::Platform {
class FirebaseAppUtils;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::FirebaseAppUtils);
// Dependencies Firebase.Platform.IFirebaseAppUtils, System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseAppUtils
class CORDL_TYPE FirebaseAppUtils : public ::System::Object {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::Firebase::Platform::FirebaseAppUtils*  instance;

/// @brief Convert operator to "::Firebase::Platform::IFirebaseAppUtils"
constexpr operator  ::Firebase::Platform::IFirebaseAppUtils*() noexcept;

/// @brief Method GetLogLevel, addr 0x18f6568, size 0xf8, virtual true, abstract: false, final true
inline ::Firebase::Platform::PlatformLogLevel GetLogLevel() ;

static inline ::Firebase::Platform::FirebaseAppUtils* New_ctor() ;

/// @brief Method PollCallbacks, addr 0x18f6564, size 0x4, virtual true, abstract: false, final true
inline void PollCallbacks() ;

/// @brief Method TranslateDllNotFoundException, addr 0x18f6510, size 0x54, virtual true, abstract: false, final true
inline void TranslateDllNotFoundException(::System::Action*  action) ;

/// @brief Method .ctor, addr 0x18f64b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Platform::FirebaseAppUtils* getStaticF_instance() ;

/// @brief Method get_Instance, addr 0x18f64b8, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::FirebaseAppUtils* get_Instance() ;

/// @brief Convert to "::Firebase::Platform::IFirebaseAppUtils"
constexpr ::Firebase::Platform::IFirebaseAppUtils* i___Firebase__Platform__IFirebaseAppUtils() noexcept;

static inline void setStaticF_instance(::Firebase::Platform::FirebaseAppUtils*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseAppUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAppUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseAppUtils(FirebaseAppUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseAppUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseAppUtils(FirebaseAppUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11836};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseAppUtils, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::FirebaseAppUtils);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseAppUtils*, "Firebase.Platform", "FirebaseAppUtils");
