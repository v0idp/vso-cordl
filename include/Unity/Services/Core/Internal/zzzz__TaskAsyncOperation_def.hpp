#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/TaskAsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_def.hpp"
CORDL_MODULE_EXPORT(TaskAsyncOperation)
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class TaskAsyncOperation;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::TaskAsyncOperation);
// Dependencies Unity.Services.Core.Internal.AsyncOperationBase
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.TaskAsyncOperation
class CORDL_TYPE TaskAsyncOperation : public ::Unity::Services::Core::Internal::AsyncOperationBase {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field Scheduler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Scheduler, put=setStaticF_Scheduler)) ::System::Threading::Tasks::TaskScheduler*  Scheduler;

/// @brief Field m_Task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Task, put=__cordl_internal_set_m_Task)) ::System::Threading::Tasks::Task*  m_Task;

/// @brief Method SetScheduler, addr 0x2e9d8f4, size 0x74, virtual false, abstract: false, final false
static inline void SetScheduler() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_m_Task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_m_Task() ;

constexpr void __cordl_internal_set_m_Task(::System::Threading::Tasks::Task*  value) ;

static inline ::System::Threading::Tasks::TaskScheduler* getStaticF_Scheduler() ;

/// @brief Method get_IsCompleted, addr 0x2e9d8d8, size 0x1c, virtual true, abstract: false, final false
inline bool get_IsCompleted() ;

static inline void setStaticF_Scheduler(::System::Threading::Tasks::TaskScheduler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskAsyncOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskAsyncOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskAsyncOperation(TaskAsyncOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskAsyncOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskAsyncOperation(TaskAsyncOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11973};

/// @brief Field m_Task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___m_Task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::TaskAsyncOperation, ___m_Task) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::TaskAsyncOperation, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::TaskAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::TaskAsyncOperation*, "Unity.Services.Core.Internal", "TaskAsyncOperation");
