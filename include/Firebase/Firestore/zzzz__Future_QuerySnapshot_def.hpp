#pragma once
// IWYU pragma private; include "Firebase/Firestore/Future_QuerySnapshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/zzzz__FutureBase_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Future_QuerySnapshot)
namespace Firebase::Firestore {
class Future_QuerySnapshot_Action;
}
namespace Firebase::Firestore {
class Future_QuerySnapshot_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class Future_QuerySnapshot__GetTask_c__AnonStorey0;
}
namespace Firebase::Firestore {
class QuerySnapshotProxy;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class Future_QuerySnapshot;
}
namespace Firebase::Firestore {
class Future_QuerySnapshot_Action;
}
namespace Firebase::Firestore {
class Future_QuerySnapshot_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class Future_QuerySnapshot__GetTask_c__AnonStorey0;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Future_QuerySnapshot);
MARK_REF_PTR_T(::Firebase::Firestore::Future_QuerySnapshot_Action);
MARK_REF_PTR_T(::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0);
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_QuerySnapshot/Action
class CORDL_TYPE Future_QuerySnapshot_Action : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x190d0a4, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Firebase::Firestore::Future_QuerySnapshot_Action* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x190ca38, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_QuerySnapshot_Action() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot_Action", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_QuerySnapshot_Action(Future_QuerySnapshot_Action && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot_Action", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_QuerySnapshot_Action(Future_QuerySnapshot_Action const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11127};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_QuerySnapshot_Action, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_QuerySnapshot/SWIG_CompletionDelegate
class CORDL_TYPE Future_QuerySnapshot_SWIG_CompletionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x190d0b8, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  index) ;

static inline ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x190cd70, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_QuerySnapshot_SWIG_CompletionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot_SWIG_CompletionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_QuerySnapshot_SWIG_CompletionDelegate(Future_QuerySnapshot_SWIG_CompletionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot_SWIG_CompletionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_QuerySnapshot_SWIG_CompletionDelegate(Future_QuerySnapshot_SWIG_CompletionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_QuerySnapshot/<GetTask>c__AnonStorey0
class CORDL_TYPE Future_QuerySnapshot__GetTask_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field fu, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fu, put=__cordl_internal_set_fu)) ::Firebase::Firestore::Future_QuerySnapshot*  fu;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*  tcs;

static inline ::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::Firestore::Future_QuerySnapshot* const& __cordl_internal_get_fu() const;

constexpr ::Firebase::Firestore::Future_QuerySnapshot*& __cordl_internal_get_fu() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_fu(::Firebase::Firestore::Future_QuerySnapshot*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*  value) ;

/// @brief Method <>m__0, addr 0x190d0cc, size 0x234, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x190ca30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_QuerySnapshot__GetTask_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot__GetTask_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_QuerySnapshot__GetTask_c__AnonStorey0(Future_QuerySnapshot__GetTask_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot__GetTask_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_QuerySnapshot__GetTask_c__AnonStorey0(Future_QuerySnapshot__GetTask_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11129};

/// @brief Field fu, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::Future_QuerySnapshot*  ___fu;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::QuerySnapshotProxy*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0, ___fu) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies Firebase.FutureBase, System.IntPtr, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_QuerySnapshot
class CORDL_TYPE Future_QuerySnapshot : public ::Firebase::FutureBase {
public:
// Declarations
using Action = ::Firebase::Firestore::Future_QuerySnapshot_Action;

using SWIG_CompletionDelegate = ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate;

using _GetTask_c__AnonStorey0 = ::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0;

/// @brief Field CallbackIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CallbackIndex, put=setStaticF_CallbackIndex)) int32_t  CallbackIndex;

/// @brief Field CallbackLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CallbackLock, put=setStaticF_CallbackLock)) ::System::Object*  CallbackLock;

/// @brief Field Callbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Callbacks, put=setStaticF_Callbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::Firestore::Future_QuerySnapshot_Action*>*  Callbacks;

/// @brief Field SWIG_CompletionCB, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SWIG_CompletionCB, put=__cordl_internal_set_SWIG_CompletionCB)) ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*  SWIG_CompletionCB;

/// @brief Field callbackData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackData, put=__cordl_internal_set_callbackData)) ::System::IntPtr  callbackData;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x190c840, size 0x1c0, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x190c7a4, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetResult, addr 0x190cf3c, size 0xec, virtual false, abstract: false, final false
inline ::Firebase::Firestore::QuerySnapshotProxy* GetResult() ;

/// @brief Method GetTask, addr 0x19079dc, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshotProxy*>* GetTask(::Firebase::Firestore::Future_QuerySnapshot*  fu) ;

static inline ::Firebase::Firestore::Future_QuerySnapshot* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SWIG_CompletionDispatcher, addr 0x190c5e4, size 0x1c0, virtual false, abstract: false, final false
static inline void SWIG_CompletionDispatcher(int32_t  key) ;

/// @brief Method SWIG_FreeCompletionData, addr 0x190cea4, size 0x98, virtual false, abstract: false, final false
inline void SWIG_FreeCompletionData(::System::IntPtr  data) ;

/// @brief Method SWIG_OnCompletion, addr 0x190cdfc, size 0xa8, virtual false, abstract: false, final false
inline ::System::IntPtr SWIG_OnCompletion(::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*  cs_callback, int32_t  cs_key) ;

/// @brief Method SetCompletionData, addr 0x190ca00, size 0x30, virtual false, abstract: false, final false
inline void SetCompletionData(::System::IntPtr  data) ;

/// @brief Method SetOnCompletionCallback, addr 0x190cac0, size 0x248, virtual false, abstract: false, final false
inline void SetOnCompletionCallback(::Firebase::Firestore::Future_QuerySnapshot_Action*  userCompletionCallback) ;

/// @brief Method ThrowIfDisposed, addr 0x190cd08, size 0x68, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

constexpr ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate* const& __cordl_internal_get_SWIG_CompletionCB() const;

constexpr ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*& __cordl_internal_get_SWIG_CompletionCB() ;

constexpr ::System::IntPtr const& __cordl_internal_get_callbackData() const;

constexpr ::System::IntPtr& __cordl_internal_get_callbackData() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_SWIG_CompletionCB(::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*  value) ;

constexpr void __cordl_internal_set_callbackData(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1907934, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline int32_t getStaticF_CallbackIndex() ;

static inline ::System::Object* getStaticF_CallbackLock() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::Firestore::Future_QuerySnapshot_Action*>* getStaticF_Callbacks() ;

static inline void setStaticF_CallbackIndex(int32_t  value) ;

static inline void setStaticF_CallbackLock(::System::Object*  value) ;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::Firestore::Future_QuerySnapshot_Action*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_QuerySnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_QuerySnapshot(Future_QuerySnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_QuerySnapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_QuerySnapshot(Future_QuerySnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11130};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field callbackData, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___callbackData;

/// @brief Field SWIG_CompletionCB, offset: 0x40, size: 0x8, def value: None
 ::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*  ___SWIG_CompletionCB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Future_QuerySnapshot, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Future_QuerySnapshot, ___callbackData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Future_QuerySnapshot, ___SWIG_CompletionCB) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_QuerySnapshot, 0x48>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::Future_QuerySnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_QuerySnapshot*, "Firebase.Firestore", "Future_QuerySnapshot");
NEED_NO_BOX(::Firebase::Firestore::Future_QuerySnapshot_Action);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_QuerySnapshot_Action*, "Firebase.Firestore", "Future_QuerySnapshot/Action");
NEED_NO_BOX(::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_QuerySnapshot_SWIG_CompletionDelegate*, "Firebase.Firestore", "Future_QuerySnapshot/SWIG_CompletionDelegate");
NEED_NO_BOX(::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_QuerySnapshot__GetTask_c__AnonStorey0*, "Firebase.Firestore", "Future_QuerySnapshot/<GetTask>c__AnonStorey0");
