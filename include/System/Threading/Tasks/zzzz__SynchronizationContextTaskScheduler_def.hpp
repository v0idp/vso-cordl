#pragma once
// IWYU pragma private; include "System/Threading/Tasks/SynchronizationContextTaskScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SynchronizationContextTaskScheduler)
namespace System::Threading::Tasks {
class SynchronizationContextTaskScheduler___c;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class SynchronizationContextTaskScheduler;
}
namespace System::Threading::Tasks {
class SynchronizationContextTaskScheduler___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextTaskScheduler);
MARK_REF_PTR_T(::System::Threading::Tasks::SynchronizationContextTaskScheduler___c);
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.SynchronizationContextTaskScheduler/<>c
class CORDL_TYPE SynchronizationContextTaskScheduler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*  __9;

static inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c* New_ctor() ;

/// @brief Method <.cctor>b__8_0, addr 0x27c4158, size 0x84, virtual false, abstract: false, final false
inline void __cctor_b__8_0(::System::Object*  s) ;

/// @brief Method .ctor, addr 0x27c4150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c* getStaticF___9() ;

static inline void setStaticF___9(::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynchronizationContextTaskScheduler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextTaskScheduler___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchronizationContextTaskScheduler___c(SynchronizationContextTaskScheduler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextTaskScheduler___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchronizationContextTaskScheduler___c(SynchronizationContextTaskScheduler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2515};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c, 0x10>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
// Dependencies System.Threading.Tasks.TaskScheduler
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.SynchronizationContextTaskScheduler
class CORDL_TYPE SynchronizationContextTaskScheduler : public ::System::Threading::Tasks::TaskScheduler {
public:
// Declarations
using __c = ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c;

/// @brief Field m_synchronizationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_synchronizationContext, put=__cordl_internal_set_m_synchronizationContext)) ::System::Threading::SynchronizationContext*  m_synchronizationContext;

/// @brief Field s_postCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_postCallback, put=setStaticF_s_postCallback)) ::System::Threading::SendOrPostCallback*  s_postCallback;

static inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler* New_ctor() ;

/// @brief Method QueueTask, addr 0x27c3f64, size 0x84, virtual true, abstract: false, final false
inline void QueueTask(::System::Threading::Tasks::Task*  task) ;

/// @brief Method TryExecuteTaskInline, addr 0x27c3fe8, size 0x48, virtual true, abstract: false, final false
inline bool TryExecuteTaskInline(::System::Threading::Tasks::Task*  task, bool  taskWasPreviouslyQueued) ;

constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get_m_synchronizationContext() const;

constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_m_synchronizationContext() ;

constexpr void __cordl_internal_set_m_synchronizationContext(::System::Threading::SynchronizationContext*  value) ;

/// @brief Method .ctor, addr 0x27c3d3c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_s_postCallback() ;

static inline void setStaticF_s_postCallback(::System::Threading::SendOrPostCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynchronizationContextTaskScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextTaskScheduler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchronizationContextTaskScheduler(SynchronizationContextTaskScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextTaskScheduler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchronizationContextTaskScheduler(SynchronizationContextTaskScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2516};

/// @brief Field m_synchronizationContext, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  ___m_synchronizationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::SynchronizationContextTaskScheduler, ___m_synchronizationContext) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::SynchronizationContextTaskScheduler, 0x20>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextTaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextTaskScheduler*, "System.Threading.Tasks", "SynchronizationContextTaskScheduler");
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextTaskScheduler___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*, "System.Threading.Tasks", "SynchronizationContextTaskScheduler/<>c");
