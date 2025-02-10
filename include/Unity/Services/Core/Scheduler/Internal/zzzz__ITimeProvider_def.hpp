#pragma once
// IWYU pragma private; include "Unity/Services/Core/Scheduler/Internal/ITimeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITimeProvider)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class ITimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::ITimeProvider);
// Dependencies 
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Scheduler.Internal.ITimeProvider
class CORDL_TYPE ITimeProvider {
public:
// Declarations
 __declspec(property(get=get_Now)) ::System::DateTime  Now;

/// @brief Method get_Now, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::DateTime get_Now() ;

// Ctor Parameters [CppParam { name: "", ty: "ITimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITimeProvider(ITimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::ITimeProvider*, "Unity.Services.Core.Scheduler.Internal", "ITimeProvider");
