#pragma once
// IWYU pragma private; include "Firebase/Platform/IFirebaseAppUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFirebaseAppUtils)
namespace Firebase::Platform {
struct PlatformLogLevel;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Firebase::Platform {
class IFirebaseAppUtils;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::IFirebaseAppUtils);
// Dependencies 
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.IFirebaseAppUtils
class CORDL_TYPE IFirebaseAppUtils {
public:
// Declarations
/// @brief Method GetLogLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Firebase::Platform::PlatformLogLevel GetLogLevel() ;

/// @brief Method PollCallbacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PollCallbacks() ;

/// @brief Method TranslateDllNotFoundException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void TranslateDllNotFoundException(::System::Action*  action) ;

// Ctor Parameters [CppParam { name: "", ty: "IFirebaseAppUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFirebaseAppUtils(IFirebaseAppUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::IFirebaseAppUtils);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::IFirebaseAppUtils*, "Firebase.Platform", "IFirebaseAppUtils");
