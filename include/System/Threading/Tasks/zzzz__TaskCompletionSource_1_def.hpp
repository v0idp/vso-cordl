#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskCompletionSource_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskCompletionSource_1)
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class AggregateException;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::TaskCompletionSource_1);
// Dependencies System.Object
namespace System::Threading::Tasks {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.TaskCompletionSource`1<TResult>
class CORDL_TYPE TaskCompletionSource_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TResult>*  Task;

/// @brief Field _task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__task, put=__cordl_internal_set__task)) ::System::Threading::Tasks::Task_1<TResult>*  _task;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor() ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Object*  state) ;

static inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* New_ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method SetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCanceled() ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetException(::System::AggregateException*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(TResult  result) ;

/// @brief Method SpinUntilCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SpinUntilCompleted() ;

/// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetCanceled() ;

/// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetException(::System::Exception*  exception) ;

/// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetResult(TResult  result) ;

constexpr ::System::Threading::Tasks::Task_1<TResult>* const& __cordl_internal_get__task() const;

constexpr ::System::Threading::Tasks::Task_1<TResult>*& __cordl_internal_get__task() ;

constexpr void __cordl_internal_set__task(::System::Threading::Tasks::Task_1<TResult>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions) ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<TResult>* get_Task() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskCompletionSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskCompletionSource_1(TaskCompletionSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskCompletionSource_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskCompletionSource_1(TaskCompletionSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2461};

/// @brief Field _task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<TResult>*  ____task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::TaskCompletionSource_1, "System.Threading.Tasks", "TaskCompletionSource`1");
