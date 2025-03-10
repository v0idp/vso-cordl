#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProcessInfo)
// Forward declare root types
namespace System::Diagnostics {
class ProcessInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessInfo);
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.ProcessInfo
class CORDL_TYPE ProcessInfo : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProcessInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProcessInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProcessInfo(ProcessInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProcessInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProcessInfo(ProcessInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessInfo, 0x10>, "Size mismatch!");

} // namespace end def System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessInfo*, "System.Diagnostics", "ProcessInfo");
