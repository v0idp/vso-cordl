#pragma once
// IWYU pragma private; include "Firebase/Extensions/TaskExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskExtension)
namespace Firebase::Extensions {
class TaskExtension__ContinueWithOnMainThread_c__AnonStorey0;
}
namespace Firebase::Extensions {
class _ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Firebase::Extensions {
class TaskExtension;
}
namespace Firebase::Extensions {
class TaskExtension__ContinueWithOnMainThread_c__AnonStorey0;
}
namespace Firebase::Extensions {
class _ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Extensions::TaskExtension);
MARK_REF_PTR_T(::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0);
MARK_REF_PTR_T(::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1);
// Dependencies System.Object
namespace Firebase::Extensions {
// Is value type: false
// CS Name: Firebase.Extensions.TaskExtension/<ContinueWithOnMainThread>c__AnonStorey0/<ContinueWithOnMainThread>c__AnonStorey1
class CORDL_TYPE _ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__ref$0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___f__ref$0, put=__cordl_internal_set___f__ref$0)) ::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0*  __f__ref$0;

/// @brief Field t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t, put=__cordl_internal_set_t)) ::System::Threading::Tasks::Task*  t;

static inline ::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1* New_ctor() ;

constexpr ::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0* const& __cordl_internal_get___f__ref$0() const;

constexpr ::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0*& __cordl_internal_get___f__ref$0() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_t() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_t() ;

constexpr void __cordl_internal_set___f__ref$0(::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0*  value) ;

constexpr void __cordl_internal_set_t(::System::Threading::Tasks::Task*  value) ;

/// @brief Method <>m__0, addr 0x192d780, size 0xc6f8b0, virtual false, abstract: false, final false
inline bool __m__0() ;

/// @brief Method .ctor, addr 0x192d778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr _ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1(_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1(_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12521};

/// @brief Field t, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___t;

/// @brief Field <>f__ref$0, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0*  _____f__ref$0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1, _____f__ref$0) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Extensions
// Dependencies System.Object
namespace Firebase::Extensions {
// Is value type: false
// CS Name: Firebase.Extensions.TaskExtension/<ContinueWithOnMainThread>c__AnonStorey0
class CORDL_TYPE TaskExtension__ContinueWithOnMainThread_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
using _ContinueWithOnMainThread_c__AnonStorey1 = ::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1;

/// @brief Field continuation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuation, put=__cordl_internal_set_continuation)) ::System::Action_1<::System::Threading::Tasks::Task*>*  continuation;

static inline ::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0* New_ctor() ;

constexpr ::System::Action_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get_continuation() const;

constexpr ::System::Action_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get_continuation() ;

constexpr void __cordl_internal_set_continuation(::System::Action_1<::System::Threading::Tasks::Task*>*  value) ;

/// @brief Method <>m__0, addr 0x192d688, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* __m__0(::System::Threading::Tasks::Task*  t) ;

/// @brief Method .ctor, addr 0x192d680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtension__ContinueWithOnMainThread_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtension__ContinueWithOnMainThread_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtension__ContinueWithOnMainThread_c__AnonStorey0(TaskExtension__ContinueWithOnMainThread_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtension__ContinueWithOnMainThread_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtension__ContinueWithOnMainThread_c__AnonStorey0(TaskExtension__ContinueWithOnMainThread_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12522};

/// @brief Field continuation, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::System::Threading::Tasks::Task*>*  ___continuation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0, ___continuation) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Extensions
// Dependencies System.Object
namespace Firebase::Extensions {
// Is value type: false
// CS Name: Firebase.Extensions.TaskExtension
class CORDL_TYPE TaskExtension : public ::System::Object {
public:
// Declarations
using _ContinueWithOnMainThread_c__AnonStorey0 = ::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0;

/// @brief Method ContinueWithOnMainThread, addr 0x192d590, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* ContinueWithOnMainThread(::System::Threading::Tasks::Task*  task, ::System::Action_1<::System::Threading::Tasks::Task*>*  continuation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaskExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaskExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TaskExtension(TaskExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaskExtension(TaskExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12523};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Extensions::TaskExtension, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Extensions
NEED_NO_BOX(::Firebase::Extensions::TaskExtension);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Extensions::TaskExtension*, "Firebase.Extensions", "TaskExtension");
NEED_NO_BOX(::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Extensions::TaskExtension__ContinueWithOnMainThread_c__AnonStorey0*, "Firebase.Extensions", "TaskExtension/<ContinueWithOnMainThread>c__AnonStorey0");
NEED_NO_BOX(::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Extensions::_ContinueWithOnMainThread_c__AnonStorey0_TaskExtension__ContinueWithOnMainThread_c__AnonStorey1*, "Firebase.Extensions", "TaskExtension/<ContinueWithOnMainThread>c__AnonStorey0/<ContinueWithOnMainThread>c__AnonStorey1");
