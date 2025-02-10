#pragma once
// IWYU pragma private; include "Firebase/Dispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dispatcher)
namespace Firebase {
template<typename TResult>
class Dispatcher_CallbackStorage_1;
}
namespace Firebase {
template<typename TResult>
class Dispatcher__RunAsync_c__AnonStorey1_1;
}
namespace Firebase {
template<typename TResult>
class Dispatcher__Run_c__AnonStorey0_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
class EventWaitHandle;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Firebase {
class Dispatcher;
}
namespace Firebase {
template<typename TResult>
class Dispatcher_CallbackStorage_1;
}
namespace Firebase {
template<typename TResult>
class Dispatcher__RunAsync_c__AnonStorey1_1;
}
namespace Firebase {
template<typename TResult>
class Dispatcher__Run_c__AnonStorey0_1;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Dispatcher);
MARK_GEN_REF_PTR_T(::Firebase::Dispatcher_CallbackStorage_1);
MARK_GEN_REF_PTR_T(::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1);
MARK_GEN_REF_PTR_T(::Firebase::Dispatcher__Run_c__AnonStorey0_1);
// Dependencies System.Object
namespace Firebase {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Firebase.Dispatcher/CallbackStorage`1<TResult>
class CORDL_TYPE Dispatcher_CallbackStorage_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Exception, put=set_Exception)) ::System::Exception*  Exception;

 __declspec(property(get=get_Result, put=set_Result)) TResult  Result;

/// @brief Field <Exception>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Exception_k__BackingField, put=__cordl_internal_set__Exception_k__BackingField)) ::System::Exception*  _Exception_k__BackingField;

/// @brief Field <Result>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Result_k__BackingField, put=__cordl_internal_set__Result_k__BackingField)) TResult  _Result_k__BackingField;

static inline ::Firebase::Dispatcher_CallbackStorage_1<TResult>* New_ctor() ;

constexpr ::System::Exception* const& __cordl_internal_get__Exception_k__BackingField() const;

constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField() ;

constexpr TResult const& __cordl_internal_get__Result_k__BackingField() const;

constexpr TResult& __cordl_internal_get__Result_k__BackingField() ;

constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception*  value) ;

constexpr void __cordl_internal_set__Result_k__BackingField(TResult  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Exception, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult get_Result() ;

/// @brief Method set_Exception, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Exception(::System::Exception*  value) ;

/// @brief Method set_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Result(TResult  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dispatcher_CallbackStorage_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher_CallbackStorage_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dispatcher_CallbackStorage_1(Dispatcher_CallbackStorage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher_CallbackStorage_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dispatcher_CallbackStorage_1(Dispatcher_CallbackStorage_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12203};

/// @brief Field <Result>k__BackingField, offset: 0x10, size: 0x8, def value: None
 TResult  ____Result_k__BackingField;

/// @brief Field <Exception>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ____Exception_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Firebase.Dispatcher/<Run>c__AnonStorey0`1<TResult>
class CORDL_TYPE Dispatcher__Run_c__AnonStorey0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Func_1<TResult>*  callback;

/// @brief Field result, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::Firebase::Dispatcher_CallbackStorage_1<TResult>*  result;

/// @brief Field waitHandle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitHandle, put=__cordl_internal_set_waitHandle)) ::System::Threading::EventWaitHandle*  waitHandle;

static inline ::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>* New_ctor() ;

constexpr ::System::Func_1<TResult>* const& __cordl_internal_get_callback() const;

constexpr ::System::Func_1<TResult>*& __cordl_internal_get_callback() ;

constexpr ::Firebase::Dispatcher_CallbackStorage_1<TResult>* const& __cordl_internal_get_result() const;

constexpr ::Firebase::Dispatcher_CallbackStorage_1<TResult>*& __cordl_internal_get_result() ;

constexpr ::System::Threading::EventWaitHandle* const& __cordl_internal_get_waitHandle() const;

constexpr ::System::Threading::EventWaitHandle*& __cordl_internal_get_waitHandle() ;

constexpr void __cordl_internal_set_callback(::System::Func_1<TResult>*  value) ;

constexpr void __cordl_internal_set_result(::Firebase::Dispatcher_CallbackStorage_1<TResult>*  value) ;

constexpr void __cordl_internal_set_waitHandle(::System::Threading::EventWaitHandle*  value) ;

/// @brief Method <>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dispatcher__Run_c__AnonStorey0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher__Run_c__AnonStorey0_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dispatcher__Run_c__AnonStorey0_1(Dispatcher__Run_c__AnonStorey0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher__Run_c__AnonStorey0_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dispatcher__Run_c__AnonStorey0_1(Dispatcher__Run_c__AnonStorey0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12204};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<TResult>*  ___callback;

/// @brief Field result, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Dispatcher_CallbackStorage_1<TResult>*  ___result;

/// @brief Field waitHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::EventWaitHandle*  ___waitHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: Firebase.Dispatcher/<RunAsync>c__AnonStorey1`1<TResult>
class CORDL_TYPE Dispatcher__RunAsync_c__AnonStorey1_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Func_1<TResult>*  callback;

/// @brief Field tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*  tcs;

static inline ::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>* New_ctor() ;

constexpr ::System::Func_1<TResult>* const& __cordl_internal_get_callback() const;

constexpr ::System::Func_1<TResult>*& __cordl_internal_get_callback() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_callback(::System::Func_1<TResult>*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<TResult>*  value) ;

/// @brief Method <>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dispatcher__RunAsync_c__AnonStorey1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher__RunAsync_c__AnonStorey1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dispatcher__RunAsync_c__AnonStorey1_1(Dispatcher__RunAsync_c__AnonStorey1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher__RunAsync_c__AnonStorey1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dispatcher__RunAsync_c__AnonStorey1_1(Dispatcher__RunAsync_c__AnonStorey1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12205};

/// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*  ___tcs;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<TResult>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.Dispatcher
class CORDL_TYPE Dispatcher : public ::System::Object {
public:
// Declarations
template<typename TResult>
using CallbackStorage_1 = ::Firebase::Dispatcher_CallbackStorage_1<TResult>;

template<typename TResult>
using _RunAsync_c__AnonStorey1_1 = ::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1<TResult>;

template<typename TResult>
using _Run_c__AnonStorey0_1 = ::Firebase::Dispatcher__Run_c__AnonStorey0_1<TResult>;

/// @brief Field ownerThreadId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ownerThreadId, put=__cordl_internal_set_ownerThreadId)) int32_t  ownerThreadId;

/// @brief Field queue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<::System::Action*>*  queue;

/// @brief Method ManagesThisThread, addr 0x1922630, size 0x34, virtual false, abstract: false, final false
inline bool ManagesThisThread() ;

static inline ::Firebase::Dispatcher* New_ctor() ;

/// @brief Method PollJobs, addr 0x191f9cc, size 0x128, virtual false, abstract: false, final false
inline void PollJobs() ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
inline TResult Run(::System::Func_1<TResult>*  callback) ;

/// @brief Method RunAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* RunAsync(::System::Func_1<TResult>*  callback) ;

/// @brief Method RunAsyncNow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TResult>
static inline ::System::Threading::Tasks::Task_1<TResult>* RunAsyncNow(::System::Func_1<TResult>*  callback) ;

constexpr int32_t const& __cordl_internal_get_ownerThreadId() const;

constexpr int32_t& __cordl_internal_get_ownerThreadId() ;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& __cordl_internal_get_queue() ;

constexpr void __cordl_internal_set_ownerThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

/// @brief Method .ctor, addr 0x19201fc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dispatcher(Dispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dispatcher(Dispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12206};

/// @brief Field ownerThreadId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ownerThreadId;

/// @brief Field queue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::Action*>*  ___queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Dispatcher, ___ownerThreadId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Dispatcher, ___queue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Dispatcher, 0x20>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::Dispatcher);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Dispatcher*, "Firebase", "Dispatcher");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Dispatcher_CallbackStorage_1, "Firebase", "Dispatcher/CallbackStorage`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Dispatcher__RunAsync_c__AnonStorey1_1, "Firebase", "Dispatcher/<RunAsync>c__AnonStorey1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Dispatcher__Run_c__AnonStorey0_1, "Firebase", "Dispatcher/<Run>c__AnonStorey0`1");
