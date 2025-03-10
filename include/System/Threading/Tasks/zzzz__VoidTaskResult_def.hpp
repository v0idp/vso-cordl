#pragma once
// IWYU pragma private; include "System/Threading/Tasks/VoidTaskResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(VoidTaskResult)
// Forward declare root types
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::VoidTaskResult);
// Dependencies 
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: System.Threading.Tasks.VoidTaskResult
#pragma pack(push, 0)
struct CORDL_TYPE VoidTaskResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VoidTaskResult() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::VoidTaskResult, 0x1>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::VoidTaskResult, "System.Threading.Tasks", "VoidTaskResult");
