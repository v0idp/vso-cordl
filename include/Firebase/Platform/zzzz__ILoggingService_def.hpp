#pragma once
// IWYU pragma private; include "Firebase/Platform/ILoggingService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILoggingService)
// Forward declare root types
namespace Firebase::Platform {
class ILoggingService;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::ILoggingService);
// Dependencies 
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.ILoggingService
class CORDL_TYPE ILoggingService {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ILoggingService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILoggingService(ILoggingService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::ILoggingService);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::ILoggingService*, "Firebase.Platform", "ILoggingService");
