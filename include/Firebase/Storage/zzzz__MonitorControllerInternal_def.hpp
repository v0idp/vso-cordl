#pragma once
// IWYU pragma private; include "Firebase/Storage/MonitorControllerInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonitorControllerInternal)
namespace Firebase::Storage {
class ControllerInternal;
}
namespace Firebase::Storage {
class MonitorControllerInternal_MonitorControllerEventDelegate;
}
namespace Firebase::Storage {
class MonitorControllerInternal__Create_c__AnonStorey0;
}
namespace Firebase::Storage {
class MonitorControllerInternal__OnPaused_c__AnonStorey1;
}
namespace Firebase::Storage {
class MonitorControllerInternal__OnProgress_c__AnonStorey2;
}
namespace Firebase::Storage {
class StorageReferenceInternal;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace Firebase::Storage {
class MonitorControllerInternal;
}
namespace Firebase::Storage {
class MonitorControllerInternal_MonitorControllerEventDelegate;
}
namespace Firebase::Storage {
class MonitorControllerInternal__Create_c__AnonStorey0;
}
namespace Firebase::Storage {
class MonitorControllerInternal__OnPaused_c__AnonStorey1;
}
namespace Firebase::Storage {
class MonitorControllerInternal__OnProgress_c__AnonStorey2;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::MonitorControllerInternal);
MARK_REF_PTR_T(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate);
MARK_REF_PTR_T(::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0);
MARK_REF_PTR_T(::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1);
MARK_REF_PTR_T(::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2);
// Dependencies System.MulticastDelegate
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate
class CORDL_TYPE MonitorControllerInternal_MonitorControllerEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1926854, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  controllerPtr) ;

static inline ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1926038, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonitorControllerInternal_MonitorControllerEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal_MonitorControllerEventDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonitorControllerInternal_MonitorControllerEventDelegate(MonitorControllerInternal_MonitorControllerEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal_MonitorControllerEventDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonitorControllerInternal_MonitorControllerEventDelegate(MonitorControllerInternal_MonitorControllerEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MonitorControllerInternal/<Create>c__AnonStorey0
class CORDL_TYPE MonitorControllerInternal__Create_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxy, put=__cordl_internal_set_proxy)) ::Firebase::Storage::MonitorControllerInternal*  proxy;

static inline ::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::Storage::MonitorControllerInternal* const& __cordl_internal_get_proxy() const;

constexpr ::Firebase::Storage::MonitorControllerInternal*& __cordl_internal_get_proxy() ;

constexpr void __cordl_internal_set_proxy(::Firebase::Storage::MonitorControllerInternal*  value) ;

/// @brief Method <>m__0, addr 0x1926868, size 0x8c, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method <>m__1, addr 0x19268f4, size 0x8c, virtual false, abstract: false, final false
inline void __m__1() ;

/// @brief Method .ctor, addr 0x1926030, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonitorControllerInternal__Create_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal__Create_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonitorControllerInternal__Create_c__AnonStorey0(MonitorControllerInternal__Create_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal__Create_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonitorControllerInternal__Create_c__AnonStorey0(MonitorControllerInternal__Create_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11678};

/// @brief Field proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::MonitorControllerInternal*  ___proxy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0, ___proxy) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.IntPtr, System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MonitorControllerInternal/<OnPaused>c__AnonStorey1
class CORDL_TYPE MonitorControllerInternal__OnPaused_c__AnonStorey1 : public ::System::Object {
public:
// Declarations
/// @brief Field controllerPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerPtr, put=__cordl_internal_set_controllerPtr)) ::System::IntPtr  controllerPtr;

static inline ::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1* New_ctor() ;

constexpr ::System::IntPtr const& __cordl_internal_get_controllerPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_controllerPtr() ;

constexpr void __cordl_internal_set_controllerPtr(::System::IntPtr  value) ;

/// @brief Method <>m__0, addr 0x1926980, size 0x84, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x1926214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonitorControllerInternal__OnPaused_c__AnonStorey1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal__OnPaused_c__AnonStorey1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonitorControllerInternal__OnPaused_c__AnonStorey1(MonitorControllerInternal__OnPaused_c__AnonStorey1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal__OnPaused_c__AnonStorey1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonitorControllerInternal__OnPaused_c__AnonStorey1(MonitorControllerInternal__OnPaused_c__AnonStorey1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11679};

/// @brief Field controllerPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___controllerPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1, ___controllerPtr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.IntPtr, System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MonitorControllerInternal/<OnProgress>c__AnonStorey2
class CORDL_TYPE MonitorControllerInternal__OnProgress_c__AnonStorey2 : public ::System::Object {
public:
// Declarations
/// @brief Field controllerPtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerPtr, put=__cordl_internal_set_controllerPtr)) ::System::IntPtr  controllerPtr;

static inline ::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2* New_ctor() ;

constexpr ::System::IntPtr const& __cordl_internal_get_controllerPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_controllerPtr() ;

constexpr void __cordl_internal_set_controllerPtr(::System::IntPtr  value) ;

/// @brief Method <>m__0, addr 0x1926a04, size 0x84, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x192621c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonitorControllerInternal__OnProgress_c__AnonStorey2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal__OnProgress_c__AnonStorey2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonitorControllerInternal__OnProgress_c__AnonStorey2(MonitorControllerInternal__OnProgress_c__AnonStorey2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal__OnProgress_c__AnonStorey2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonitorControllerInternal__OnProgress_c__AnonStorey2(MonitorControllerInternal__OnProgress_c__AnonStorey2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11680};

/// @brief Field controllerPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___controllerPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2, ___controllerPtr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.MonitorControllerInternal
class CORDL_TYPE MonitorControllerInternal : public ::System::Object {
public:
// Declarations
using MonitorControllerEventDelegate = ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate;

using _Create_c__AnonStorey0 = ::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0;

using _OnPaused_c__AnonStorey1 = ::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1;

using _OnProgress_c__AnonStorey2 = ::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2;

 __declspec(property(get=get_BytesTransferred)) int64_t  BytesTransferred;

 __declspec(property(get=get_Controller)) ::Firebase::Storage::ControllerInternal*  Controller;

/// @brief Field Paused, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Paused, put=__cordl_internal_set_Paused)) ::System::EventHandler_1<::System::EventArgs*>*  Paused;

/// @brief Field Progress, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) ::System::EventHandler_1<::System::EventArgs*>*  Progress;

 __declspec(property(get=get_TotalByteCount)) int64_t  TotalByteCount;

/// @brief Field <>f__mg$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache0, put=setStaticF___f__mg$cache0)) ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  __f__mg$cache0;

/// @brief Field <>f__mg$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache1, put=setStaticF___f__mg$cache1)) ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  __f__mg$cache1;

/// @brief Field cPtrsToProxies, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cPtrsToProxies, put=setStaticF_cPtrsToProxies)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::WeakReference*>*  cPtrsToProxies;

/// @brief Field forwardToPausedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_forwardToPausedEvent, put=__cordl_internal_set_forwardToPausedEvent)) ::System::Action*  forwardToPausedEvent;

/// @brief Field forwardToProgressEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_forwardToProgressEvent, put=__cordl_internal_set_forwardToProgressEvent)) ::System::Action*  forwardToProgressEvent;

/// @brief Field storageReference, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_storageReference, put=__cordl_internal_set_storageReference)) ::Firebase::Storage::StorageReferenceInternal*  storageReference;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Create, addr 0x1925c98, size 0x398, virtual false, abstract: false, final false
static inline ::Firebase::Storage::MonitorControllerInternal* Create(::Firebase::Storage::StorageReferenceInternal*  storageReference) ;

/// @brief Method Dispose, addr 0x1925880, size 0x2b8, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x19257e4, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Storage::MonitorControllerInternal* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::Firebase::Storage::MonitorControllerInternal* New_ctor(::Firebase::Storage::StorageReferenceInternal*  storage_reference) ;

/// @brief Method OnPaused, addr 0x19254c8, size 0xac, virtual false, abstract: false, final false
static inline void OnPaused(::System::IntPtr  controllerPtr) ;

/// @brief Method OnProgress, addr 0x1925574, size 0xac, virtual false, abstract: false, final false
static inline void OnProgress(::System::IntPtr  controllerPtr) ;

/// @brief Method ProxyFromCPtr, addr 0x1926224, size 0x1b4, virtual false, abstract: false, final false
static inline ::Firebase::Storage::MonitorControllerInternal* ProxyFromCPtr(::System::IntPtr  controllerPtr) ;

/// @brief Method RegisterCancellationToken, addr 0x19263d8, size 0xbc, virtual false, abstract: false, final false
inline void RegisterCancellationToken(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SetPausedEvent, addr 0x19260c4, size 0xa8, virtual false, abstract: false, final false
inline void SetPausedEvent(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  arg0, ::System::IntPtr  event_data) ;

/// @brief Method SetProgressEvent, addr 0x192616c, size 0xa8, virtual false, abstract: false, final false
inline void SetProgressEvent(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  arg0, ::System::IntPtr  event_data) ;

/// @brief Method <RegisterCancellationToken>m__0, addr 0x19267a4, size 0x18, virtual false, abstract: false, final false
inline void _RegisterCancellationToken_m__0() ;

constexpr ::System::EventHandler_1<::System::EventArgs*>* const& __cordl_internal_get_Paused() const;

constexpr ::System::EventHandler_1<::System::EventArgs*>*& __cordl_internal_get_Paused() ;

constexpr ::System::EventHandler_1<::System::EventArgs*>* const& __cordl_internal_get_Progress() const;

constexpr ::System::EventHandler_1<::System::EventArgs*>*& __cordl_internal_get_Progress() ;

constexpr ::System::Action* const& __cordl_internal_get_forwardToPausedEvent() const;

constexpr ::System::Action*& __cordl_internal_get_forwardToPausedEvent() ;

constexpr ::System::Action* const& __cordl_internal_get_forwardToProgressEvent() const;

constexpr ::System::Action*& __cordl_internal_get_forwardToProgressEvent() ;

constexpr ::Firebase::Storage::StorageReferenceInternal* const& __cordl_internal_get_storageReference() const;

constexpr ::Firebase::Storage::StorageReferenceInternal*& __cordl_internal_get_storageReference() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_Paused(::System::EventHandler_1<::System::EventArgs*>*  value) ;

constexpr void __cordl_internal_set_Progress(::System::EventHandler_1<::System::EventArgs*>*  value) ;

constexpr void __cordl_internal_set_forwardToPausedEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_forwardToProgressEvent(::System::Action*  value) ;

constexpr void __cordl_internal_set_storageReference(::Firebase::Storage::StorageReferenceInternal*  value) ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1925620, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x1925674, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::StorageReferenceInternal*  storage_reference) ;

/// @brief Method add_Progress, addr 0x1925b38, size 0xb0, virtual false, abstract: false, final false
inline void add_Progress(::System::EventHandler_1<::System::EventArgs*>*  value) ;

/// @brief Method getCPtr, addr 0x19257a0, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Storage::MonitorControllerInternal*  obj) ;

static inline ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate* getStaticF___f__mg$cache0() ;

static inline ::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate* getStaticF___f__mg$cache1() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::WeakReference*>* getStaticF_cPtrsToProxies() ;

/// @brief Method get_BytesTransferred, addr 0x19265e8, size 0x98, virtual false, abstract: false, final false
inline int64_t get_BytesTransferred() ;

/// @brief Method get_Controller, addr 0x1926494, size 0x100, virtual false, abstract: false, final false
inline ::Firebase::Storage::ControllerInternal* get_Controller() ;

/// @brief Method get_TotalByteCount, addr 0x1926680, size 0x98, virtual false, abstract: false, final false
inline int64_t get_TotalByteCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_Progress, addr 0x1925be8, size 0xb0, virtual false, abstract: false, final false
inline void remove_Progress(::System::EventHandler_1<::System::EventArgs*>*  value) ;

static inline void setStaticF___f__mg$cache0(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  value) ;

static inline void setStaticF___f__mg$cache1(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*  value) ;

static inline void setStaticF_cPtrsToProxies(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::System::WeakReference*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonitorControllerInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonitorControllerInternal(MonitorControllerInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonitorControllerInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonitorControllerInternal(MonitorControllerInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11681};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field Paused, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler_1<::System::EventArgs*>*  ___Paused;

/// @brief Field Progress, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler_1<::System::EventArgs*>*  ___Progress;

/// @brief Field forwardToPausedEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___forwardToPausedEvent;

/// @brief Field forwardToProgressEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___forwardToProgressEvent;

/// @brief Field storageReference, offset: 0x48, size: 0x8, def value: None
 ::Firebase::Storage::StorageReferenceInternal*  ___storageReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___Paused) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___Progress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___forwardToPausedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___forwardToProgressEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::MonitorControllerInternal, ___storageReference) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::MonitorControllerInternal, 0x50>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::MonitorControllerInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MonitorControllerInternal*, "Firebase.Storage", "MonitorControllerInternal");
NEED_NO_BOX(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MonitorControllerInternal_MonitorControllerEventDelegate*, "Firebase.Storage", "MonitorControllerInternal/MonitorControllerEventDelegate");
NEED_NO_BOX(::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MonitorControllerInternal__Create_c__AnonStorey0*, "Firebase.Storage", "MonitorControllerInternal/<Create>c__AnonStorey0");
NEED_NO_BOX(::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MonitorControllerInternal__OnPaused_c__AnonStorey1*, "Firebase.Storage", "MonitorControllerInternal/<OnPaused>c__AnonStorey1");
NEED_NO_BOX(::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::MonitorControllerInternal__OnProgress_c__AnonStorey2*, "Firebase.Storage", "MonitorControllerInternal/<OnProgress>c__AnonStorey2");
