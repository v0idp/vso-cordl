#pragma once
// IWYU pragma private; include "Firebase/FutureVoid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/zzzz__FutureBase_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FutureVoid)
namespace Firebase {
class FutureVoid_Action;
}
namespace Firebase {
class FutureVoid_SWIG_CompletionDelegate;
}
namespace Firebase {
class FutureVoid__GetTask_c__AnonStorey0;
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
class Task;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase {
class FutureVoid;
}
namespace Firebase {
class FutureVoid_Action;
}
namespace Firebase {
class FutureVoid_SWIG_CompletionDelegate;
}
namespace Firebase {
class FutureVoid__GetTask_c__AnonStorey0;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::FutureVoid);
MARK_REF_PTR_T(::Firebase::FutureVoid_Action);
MARK_REF_PTR_T(::Firebase::FutureVoid_SWIG_CompletionDelegate);
MARK_REF_PTR_T(::Firebase::FutureVoid__GetTask_c__AnonStorey0);
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FutureVoid/Action
class CORDL_TYPE FutureVoid_Action : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f5144, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Firebase::FutureVoid_Action* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f4bc4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FutureVoid_Action() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid_Action", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FutureVoid_Action(FutureVoid_Action && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid_Action", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FutureVoid_Action(FutureVoid_Action const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::FutureVoid_Action, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FutureVoid/SWIG_CompletionDelegate
class CORDL_TYPE FutureVoid_SWIG_CompletionDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f5158, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  index) ;

static inline ::Firebase::FutureVoid_SWIG_CompletionDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f4efc, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FutureVoid_SWIG_CompletionDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid_SWIG_CompletionDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FutureVoid_SWIG_CompletionDelegate(FutureVoid_SWIG_CompletionDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid_SWIG_CompletionDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FutureVoid_SWIG_CompletionDelegate(FutureVoid_SWIG_CompletionDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::FutureVoid_SWIG_CompletionDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FutureVoid/<GetTask>c__AnonStorey0
class CORDL_TYPE FutureVoid__GetTask_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field fu, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fu, put=__cordl_internal_set_fu)) ::Firebase::FutureVoid*  fu;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  tcs;

static inline ::Firebase::FutureVoid__GetTask_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::FutureVoid* const& __cordl_internal_get_fu() const;

constexpr ::Firebase::FutureVoid*& __cordl_internal_get_fu() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set_fu(::Firebase::FutureVoid*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  value) ;

/// @brief Method <>m__0, addr 0x18f516c, size 0x218, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x18f4ab8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FutureVoid__GetTask_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid__GetTask_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FutureVoid__GetTask_c__AnonStorey0(FutureVoid__GetTask_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid__GetTask_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FutureVoid__GetTask_c__AnonStorey0(FutureVoid__GetTask_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11829};

/// @brief Field fu, offset: 0x10, size: 0x8, def value: None
 ::Firebase::FutureVoid*  ___fu;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*  ___tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::FutureVoid__GetTask_c__AnonStorey0, ___fu) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::FutureVoid__GetTask_c__AnonStorey0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::FutureVoid__GetTask_c__AnonStorey0, 0x20>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies Firebase.FutureBase, System.IntPtr, System.Runtime.InteropServices.HandleRef
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FutureVoid
class CORDL_TYPE FutureVoid : public ::Firebase::FutureBase {
public:
// Declarations
using Action = ::Firebase::FutureVoid_Action;

using SWIG_CompletionDelegate = ::Firebase::FutureVoid_SWIG_CompletionDelegate;

using _GetTask_c__AnonStorey0 = ::Firebase::FutureVoid__GetTask_c__AnonStorey0;

/// @brief Field CallbackIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CallbackIndex, put=setStaticF_CallbackIndex)) int32_t  CallbackIndex;

/// @brief Field CallbackLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CallbackLock, put=setStaticF_CallbackLock)) ::System::Object*  CallbackLock;

/// @brief Field Callbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Callbacks, put=setStaticF_Callbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::FutureVoid_Action*>*  Callbacks;

/// @brief Field SWIG_CompletionCB, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SWIG_CompletionCB, put=__cordl_internal_set_SWIG_CompletionCB)) ::Firebase::FutureVoid_SWIG_CompletionDelegate*  SWIG_CompletionCB;

/// @brief Field callbackData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackData, put=__cordl_internal_set_callbackData)) ::System::IntPtr  callbackData;

/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x18f4578, size 0x1bc, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x18f44e8, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetTask, addr 0x18f4900, size 0x1b8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* GetTask(::Firebase::FutureVoid*  fu) ;

static inline ::Firebase::FutureVoid* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method SWIG_CompletionDispatcher, addr 0x18f4208, size 0x1c0, virtual false, abstract: false, final false
static inline void SWIG_CompletionDispatcher(int32_t  key) ;

/// @brief Method SWIG_FreeCompletionData, addr 0x18f5030, size 0x98, virtual false, abstract: false, final false
inline void SWIG_FreeCompletionData(::System::IntPtr  data) ;

/// @brief Method SWIG_OnCompletion, addr 0x18f4f88, size 0xa8, virtual false, abstract: false, final false
inline ::System::IntPtr SWIG_OnCompletion(::Firebase::FutureVoid_SWIG_CompletionDelegate*  cs_callback, int32_t  cs_key) ;

/// @brief Method SetCompletionData, addr 0x18f4734, size 0x30, virtual false, abstract: false, final false
inline void SetCompletionData(::System::IntPtr  data) ;

/// @brief Method SetOnCompletionCallback, addr 0x18f4c4c, size 0x248, virtual false, abstract: false, final false
inline void SetOnCompletionCallback(::Firebase::FutureVoid_Action*  userCompletionCallback) ;

/// @brief Method ThrowIfDisposed, addr 0x18f4e94, size 0x68, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

constexpr ::Firebase::FutureVoid_SWIG_CompletionDelegate* const& __cordl_internal_get_SWIG_CompletionCB() const;

constexpr ::Firebase::FutureVoid_SWIG_CompletionDelegate*& __cordl_internal_get_SWIG_CompletionCB() ;

constexpr ::System::IntPtr const& __cordl_internal_get_callbackData() const;

constexpr ::System::IntPtr& __cordl_internal_get_callbackData() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_SWIG_CompletionCB(::Firebase::FutureVoid_SWIG_CompletionDelegate*  value) ;

constexpr void __cordl_internal_set_callbackData(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18f43c8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline int32_t getStaticF_CallbackIndex() ;

static inline ::System::Object* getStaticF_CallbackLock() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::FutureVoid_Action*>* getStaticF_Callbacks() ;

static inline void setStaticF_CallbackIndex(int32_t  value) ;

static inline void setStaticF_CallbackLock(::System::Object*  value) ;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::Firebase::FutureVoid_Action*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FutureVoid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FutureVoid(FutureVoid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FutureVoid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FutureVoid(FutureVoid const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11830};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field callbackData, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  ___callbackData;

/// @brief Field SWIG_CompletionCB, offset: 0x40, size: 0x8, def value: None
 ::Firebase::FutureVoid_SWIG_CompletionDelegate*  ___SWIG_CompletionCB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::FutureVoid, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::FutureVoid, ___callbackData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::FutureVoid, ___SWIG_CompletionCB) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::FutureVoid, 0x48>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::FutureVoid);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FutureVoid*, "Firebase", "FutureVoid");
NEED_NO_BOX(::Firebase::FutureVoid_Action);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FutureVoid_Action*, "Firebase", "FutureVoid/Action");
NEED_NO_BOX(::Firebase::FutureVoid_SWIG_CompletionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FutureVoid_SWIG_CompletionDelegate*, "Firebase", "FutureVoid/SWIG_CompletionDelegate");
NEED_NO_BOX(::Firebase::FutureVoid__GetTask_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FutureVoid__GetTask_c__AnonStorey0*, "Firebase", "FutureVoid/<GetTask>c__AnonStorey0");
