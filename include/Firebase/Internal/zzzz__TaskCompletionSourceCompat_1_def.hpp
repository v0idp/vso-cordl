#pragma once
// IWYU pragma private; include "Firebase/Internal/TaskCompletionSourceCompat_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskCompletionSourceCompat_1)
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System {
class AggregateException;
}
// Forward declare root types
namespace Firebase::Internal {
template<typename T>
class TaskCompletionSourceCompat_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Internal::TaskCompletionSourceCompat_1);
// Dependencies System.Object
namespace Firebase::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Internal.TaskCompletionSourceCompat`1<T>
class CORDL_TYPE TaskCompletionSourceCompat_1 : public ::System::Object {
public:
// Declarations
/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetException(::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, ::System::AggregateException*  exception) ;

/// @brief Method SetExceptionInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetExceptionInternal(::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, ::System::AggregateException*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskCompletionSourceCompat_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSourceCompat_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSourceCompat_1(TaskCompletionSourceCompat_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSourceCompat_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSourceCompat_1(TaskCompletionSourceCompat_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11835};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Internal::TaskCompletionSourceCompat_1, "Firebase.Internal", "TaskCompletionSourceCompat`1");
