#pragma once
// IWYU pragma private; include "Unity/Services/Core/Scheduler/Internal/MinimumBinaryHeap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MinimumBinaryHeap)
// Forward declare root types
namespace Unity::Services::Core::Scheduler::Internal {
class MinimumBinaryHeap;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap);
// Dependencies System.Object
namespace Unity::Services::Core::Scheduler::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Scheduler.Internal.MinimumBinaryHeap
class CORDL_TYPE MinimumBinaryHeap : public ::System::Object {
public:
// Declarations
static inline ::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap* New_ctor() ;

/// @brief Method .ctor, addr 0x2ea6e34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinimumBinaryHeap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinimumBinaryHeap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinimumBinaryHeap(MinimumBinaryHeap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinimumBinaryHeap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinimumBinaryHeap(MinimumBinaryHeap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Scheduler::Internal
NEED_NO_BOX(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Scheduler::Internal::MinimumBinaryHeap*, "Unity.Services.Core.Scheduler.Internal", "MinimumBinaryHeap");
