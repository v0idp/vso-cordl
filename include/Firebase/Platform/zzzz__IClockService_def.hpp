#pragma once
// IWYU pragma private; include "Firebase/Platform/IClockService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IClockService)
// Forward declare root types
namespace Firebase::Platform {
class IClockService;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::IClockService);
// Dependencies 
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.IClockService
class CORDL_TYPE IClockService {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IClockService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IClockService(IClockService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::IClockService);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::IClockService*, "Firebase.Platform", "IClockService");
