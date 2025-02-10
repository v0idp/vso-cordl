#pragma once
// IWYU pragma private; include "Firebase/Firestore/Future_DocumentSnapshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/zzzz__FutureBase_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Future_DocumentSnapshot)
namespace Firebase::Firestore {
class DocumentSnapshotProxy;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot_Action;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot__GetTask_c__AnonStorey0;
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
class Future_DocumentSnapshot;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot_Action;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot_SWIG_CompletionDelegate;
}
namespace Firebase::Firestore {
class Future_DocumentSnapshot__GetTask_c__AnonStorey0;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Future_DocumentSnapshot);
MARK_REF_PTR_T(::Firebase::Firestore::Future_DocumentSnapshot_Action);
MARK_REF_PTR_T(::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0);
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_DocumentSnapshot/Action
class CORDL_TYPE Future_DocumentSnapshot_Action : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x190c388, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Firebase::Firestore::Future_DocumentSnapshot_Action* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x190bd1c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_DocumentSnapshot_Action() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot_Action", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_DocumentSnapshot_Action(Future_DocumentSnapshot_Action && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot_Action", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_DocumentSnapshot_Action(Future_DocumentSnapshot_Action const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_DocumentSnapshot_Action, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_DocumentSnapshot/SWIG_CompletionDelegate
class CORDL_TYPE Future_DocumentSnapshot_SWIG_CompletionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x190c39c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  index) ;

static inline ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x190c054, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_DocumentSnapshot_SWIG_CompletionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot_SWIG_CompletionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_DocumentSnapshot_SWIG_CompletionDelegate(Future_DocumentSnapshot_SWIG_CompletionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot_SWIG_CompletionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_DocumentSnapshot_SWIG_CompletionDelegate(Future_DocumentSnapshot_SWIG_CompletionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_DocumentSnapshot/<GetTask>c__AnonStorey0
class CORDL_TYPE Future_DocumentSnapshot__GetTask_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field fu, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fu, put=__cordl_internal_set_fu)) ::Firebase::Firestore::Future_DocumentSnapshot*  fu;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::DocumentSnapshotProxy*>*  tcs;

static inline ::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::Firestore::Future_DocumentSnapshot* const& __cordl_internal_get_fu() const;

constexpr ::Firebase::Firestore::Future_DocumentSnapshot*& __cordl_internal_get_fu() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::DocumentSnapshotProxy*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::DocumentSnapshotProxy*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_fu(::Firebase::Firestore::Future_DocumentSnapshot*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::DocumentSnapshotProxy*>*  value) ;

/// @brief Method <>m__0, addr 0x190c3b0, size 0x234, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x190bd14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_DocumentSnapshot__GetTask_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot__GetTask_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_DocumentSnapshot__GetTask_c__AnonStorey0(Future_DocumentSnapshot__GetTask_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot__GetTask_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_DocumentSnapshot__GetTask_c__AnonStorey0(Future_DocumentSnapshot__GetTask_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11125};

/// @brief Field fu, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::Future_DocumentSnapshot*  ___fu;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Firestore::DocumentSnapshotProxy*>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0, ___fu) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies Firebase.FutureBase, System.IntPtr, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Future_DocumentSnapshot
class CORDL_TYPE Future_DocumentSnapshot : public ::Firebase::FutureBase {
public:
// Declarations
using Action = ::Firebase::Firestore::Future_DocumentSnapshot_Action;

using SWIG_CompletionDelegate = ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate;

using _GetTask_c__AnonStorey0 = ::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0;

/// @brief Field CallbackIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CallbackIndex, put=setStaticF_CallbackIndex)) int32_t  CallbackIndex;

/// @brief Field CallbackLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CallbackLock, put=setStaticF_CallbackLock)) ::System::Object*  CallbackLock;

/// @brief Field Callbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Callbacks, put=setStaticF_Callbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::Firestore::Future_DocumentSnapshot_Action*>*  Callbacks;

/// @brief Field SWIG_CompletionCB, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SWIG_CompletionCB, put=__cordl_internal_set_SWIG_CompletionCB)) ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*  SWIG_CompletionCB;

/// @brief Field callbackData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackData, put=__cordl_internal_set_callbackData)) ::System::IntPtr  callbackData;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x190bb24, size 0x1c0, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x190ba88, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetResult, addr 0x190c220, size 0xec, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentSnapshotProxy* GetResult() ;

/// @brief Method GetTask, addr 0x190a214, size 0x1c0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshotProxy*>* GetTask(::Firebase::Firestore::Future_DocumentSnapshot*  fu) ;

static inline ::Firebase::Firestore::Future_DocumentSnapshot* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SWIG_CompletionDispatcher, addr 0x190b8c8, size 0x1c0, virtual false, abstract: false, final false
static inline void SWIG_CompletionDispatcher(int32_t  key) ;

/// @brief Method SWIG_FreeCompletionData, addr 0x190c188, size 0x98, virtual false, abstract: false, final false
inline void SWIG_FreeCompletionData(::System::IntPtr  data) ;

/// @brief Method SWIG_OnCompletion, addr 0x190c0e0, size 0xa8, virtual false, abstract: false, final false
inline ::System::IntPtr SWIG_OnCompletion(::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*  cs_callback, int32_t  cs_key) ;

/// @brief Method SetCompletionData, addr 0x190bce4, size 0x30, virtual false, abstract: false, final false
inline void SetCompletionData(::System::IntPtr  data) ;

/// @brief Method SetOnCompletionCallback, addr 0x190bda4, size 0x248, virtual false, abstract: false, final false
inline void SetOnCompletionCallback(::Firebase::Firestore::Future_DocumentSnapshot_Action*  userCompletionCallback) ;

/// @brief Method ThrowIfDisposed, addr 0x190bfec, size 0x68, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

constexpr ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate* const& __cordl_internal_get_SWIG_CompletionCB() const;

constexpr ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*& __cordl_internal_get_SWIG_CompletionCB() ;

constexpr ::System::IntPtr const& __cordl_internal_get_callbackData() const;

constexpr ::System::IntPtr& __cordl_internal_get_callbackData() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_SWIG_CompletionCB(::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*  value) ;

constexpr void __cordl_internal_set_callbackData(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x190a16c, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline int32_t getStaticF_CallbackIndex() ;

static inline ::System::Object* getStaticF_CallbackLock() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::Firestore::Future_DocumentSnapshot_Action*>* getStaticF_Callbacks() ;

static inline void setStaticF_CallbackIndex(int32_t  value) ;

static inline void setStaticF_CallbackLock(::System::Object*  value) ;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::Firestore::Future_DocumentSnapshot_Action*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Future_DocumentSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Future_DocumentSnapshot(Future_DocumentSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Future_DocumentSnapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Future_DocumentSnapshot(Future_DocumentSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11126};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field callbackData, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___callbackData;

/// @brief Field SWIG_CompletionCB, offset: 0x40, size: 0x8, def value: None
 ::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*  ___SWIG_CompletionCB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Future_DocumentSnapshot, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Future_DocumentSnapshot, ___callbackData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Future_DocumentSnapshot, ___SWIG_CompletionCB) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Future_DocumentSnapshot, 0x48>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::Future_DocumentSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_DocumentSnapshot*, "Firebase.Firestore", "Future_DocumentSnapshot");
NEED_NO_BOX(::Firebase::Firestore::Future_DocumentSnapshot_Action);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_DocumentSnapshot_Action*, "Firebase.Firestore", "Future_DocumentSnapshot/Action");
NEED_NO_BOX(::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_DocumentSnapshot_SWIG_CompletionDelegate*, "Firebase.Firestore", "Future_DocumentSnapshot/SWIG_CompletionDelegate");
NEED_NO_BOX(::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_DocumentSnapshot__GetTask_c__AnonStorey0*, "Firebase.Firestore", "Future_DocumentSnapshot/<GetTask>c__AnonStorey0");
