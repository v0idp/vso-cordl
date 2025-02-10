#pragma once
// IWYU pragma private; include "Firebase/FirebaseApp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirebaseApp)
namespace Firebase {
class AppOptionsInternal;
}
namespace Firebase {
class AppOptions;
}
namespace Firebase {
class FirebaseApp_CreateDelegate;
}
namespace Firebase {
class FirebaseApp_EnableModuleParams;
}
namespace Firebase {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class Action;
}
namespace System {
class EventHandler;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace Firebase {
class FirebaseApp;
}
namespace Firebase {
class FirebaseApp_CreateDelegate;
}
namespace Firebase {
class FirebaseApp_EnableModuleParams;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::FirebaseApp);
MARK_REF_PTR_T(::Firebase::FirebaseApp_CreateDelegate);
MARK_REF_PTR_T(::Firebase::FirebaseApp_EnableModuleParams);
// Dependencies System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FirebaseApp/EnableModuleParams
class CORDL_TYPE FirebaseApp_EnableModuleParams : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AlwaysEnable, put=set_AlwaysEnable)) bool  AlwaysEnable;

 __declspec(property(get=get_CSharpClassName, put=set_CSharpClassName)) ::StringW  CSharpClassName;

 __declspec(property(get=get_CppModuleName, put=set_CppModuleName)) ::StringW  CppModuleName;

/// @brief Field <AlwaysEnable>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__AlwaysEnable_k__BackingField, put=__cordl_internal_set__AlwaysEnable_k__BackingField)) bool  _AlwaysEnable_k__BackingField;

/// @brief Field <CSharpClassName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CSharpClassName_k__BackingField, put=__cordl_internal_set__CSharpClassName_k__BackingField)) ::StringW  _CSharpClassName_k__BackingField;

/// @brief Field <CppModuleName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CppModuleName_k__BackingField, put=__cordl_internal_set__CppModuleName_k__BackingField)) ::StringW  _CppModuleName_k__BackingField;

static inline ::Firebase::FirebaseApp_EnableModuleParams* New_ctor(::StringW  csharp, ::StringW  cpp, bool  always) ;

constexpr bool const& __cordl_internal_get__AlwaysEnable_k__BackingField() const;

constexpr bool& __cordl_internal_get__AlwaysEnable_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CSharpClassName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CSharpClassName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CppModuleName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CppModuleName_k__BackingField() ;

constexpr void __cordl_internal_set__AlwaysEnable_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CSharpClassName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__CppModuleName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x18f2f98, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  csharp, ::StringW  cpp, bool  always) ;

/// @brief Method get_AlwaysEnable, addr 0x18f3b5c, size 0x8, virtual false, abstract: false, final false
inline bool get_AlwaysEnable() ;

/// @brief Method get_CSharpClassName, addr 0x18f3b4c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CSharpClassName() ;

/// @brief Method get_CppModuleName, addr 0x18f3b3c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CppModuleName() ;

/// @brief Method set_AlwaysEnable, addr 0x18f3b64, size 0xc, virtual false, abstract: false, final false
inline void set_AlwaysEnable(bool  value) ;

/// @brief Method set_CSharpClassName, addr 0x18f3b54, size 0x8, virtual false, abstract: false, final false
inline void set_CSharpClassName(::StringW  value) ;

/// @brief Method set_CppModuleName, addr 0x18f3b44, size 0x8, virtual false, abstract: false, final false
inline void set_CppModuleName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseApp_EnableModuleParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseApp_EnableModuleParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseApp_EnableModuleParams(FirebaseApp_EnableModuleParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseApp_EnableModuleParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseApp_EnableModuleParams(FirebaseApp_EnableModuleParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11822};

/// @brief Field <CppModuleName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____CppModuleName_k__BackingField;

/// @brief Field <CSharpClassName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____CSharpClassName_k__BackingField;

/// @brief Field <AlwaysEnable>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____AlwaysEnable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::FirebaseApp_EnableModuleParams, ____CppModuleName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::FirebaseApp_EnableModuleParams, ____CSharpClassName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::FirebaseApp_EnableModuleParams, ____AlwaysEnable_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::FirebaseApp_EnableModuleParams, 0x28>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FirebaseApp/CreateDelegate
class CORDL_TYPE FirebaseApp_CreateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f3b70, size 0x14, virtual true, abstract: false, final false
inline ::Firebase::FirebaseApp* Invoke() ;

static inline ::Firebase::FirebaseApp_CreateDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f1590, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseApp_CreateDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseApp_CreateDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseApp_CreateDelegate(FirebaseApp_CreateDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseApp_CreateDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseApp_CreateDelegate(FirebaseApp_CreateDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::FirebaseApp_CreateDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase {
// Is value type: false
// CS Name: Firebase.FirebaseApp
class CORDL_TYPE FirebaseApp : public ::System::Object {
public:
// Declarations
using CreateDelegate = ::Firebase::FirebaseApp_CreateDelegate;

using EnableModuleParams = ::Firebase::FirebaseApp_EnableModuleParams;

/// @brief Field AppDisposed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppDisposed, put=__cordl_internal_set_AppDisposed)) ::System::EventHandler*  AppDisposed;

/// @brief Field AppUtilCallbacksInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AppUtilCallbacksInitialized, put=setStaticF_AppUtilCallbacksInitialized)) bool  AppUtilCallbacksInitialized;

/// @brief Field AppUtilCallbacksLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AppUtilCallbacksLock, put=setStaticF_AppUtilCallbacksLock)) ::System::Object*  AppUtilCallbacksLock;

/// @brief Field CheckDependenciesThread, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CheckDependenciesThread, put=setStaticF_CheckDependenciesThread)) int32_t  CheckDependenciesThread;

/// @brief Field CheckDependenciesThreadLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CheckDependenciesThreadLock, put=setStaticF_CheckDependenciesThreadLock)) ::System::Object*  CheckDependenciesThreadLock;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameInternal)) ::StringW  NameInternal;

 __declspec(property(get=get_Options)) ::Firebase::AppOptions*  Options;

/// @brief Field PreventOnAllAppsDestroyed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_PreventOnAllAppsDestroyed, put=setStaticF_PreventOnAllAppsDestroyed)) bool  PreventOnAllAppsDestroyed;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::Firebase::FirebaseApp_CreateDelegate*  __f__am$cache0;

/// @brief Field <>f__am$cache1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache1, put=setStaticF___f__am$cache1)) ::System::Func_1<bool>*  __f__am$cache1;

/// @brief Field cPtrToProxy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cPtrToProxy, put=setStaticF_cPtrToProxy)) ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::FirebaseApp*>*  cPtrToProxy;

/// @brief Field crashlyticsInitializationAttempted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_crashlyticsInitializationAttempted, put=setStaticF_crashlyticsInitializationAttempted)) bool  crashlyticsInitializationAttempted;

/// @brief Field disposeLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_disposeLock, put=setStaticF_disposeLock)) ::System::Object*  disposeLock;

/// @brief Field name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field nameToProxy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nameToProxy, put=setStaticF_nameToProxy)) ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::FirebaseApp*>*  nameToProxy;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddReference, addr 0x18f211c, size 0x18c, virtual false, abstract: false, final false
inline void AddReference() ;

/// @brief Method AppSetDefaultConfigPath, addr 0x18f34a4, size 0x80, virtual false, abstract: false, final false
static inline void AppSetDefaultConfigPath(::StringW  path) ;

/// @brief Method Create, addr 0x18f131c, size 0xe0, virtual false, abstract: false, final false
static inline ::Firebase::FirebaseApp* Create() ;

/// @brief Method CreateAndTrack, addr 0x18f1618, size 0x8ec, virtual false, abstract: false, final false
static inline ::Firebase::FirebaseApp* CreateAndTrack(::Firebase::FirebaseApp_CreateDelegate*  createDelegate, ::Firebase::FirebaseApp*  existingProxy) ;

/// @brief Method CreateInternal, addr 0x18f39bc, size 0xe8, virtual false, abstract: false, final false
static inline ::Firebase::FirebaseApp* CreateInternal() ;

/// @brief Method Dispose, addr 0x18f0a38, size 0x94, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x18f09a4, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetInstance, addr 0x18f1178, size 0x1a4, virtual false, abstract: false, final false
static inline ::Firebase::FirebaseApp* GetInstance(::StringW  name) ;

/// @brief Method InitializeAppUtilCallbacks, addr 0x18f24f4, size 0xaa4, virtual false, abstract: false, final false
static inline void InitializeAppUtilCallbacks() ;

/// @brief Method InitializeCrashlyticsIfPresent, addr 0x18f31dc, size 0x244, virtual false, abstract: false, final false
static inline bool InitializeCrashlyticsIfPresent() ;

/// @brief Method IsCheckDependenciesRunning, addr 0x18f3694, size 0xfc, virtual false, abstract: false, final false
static inline bool IsCheckDependenciesRunning() ;

static inline ::Firebase::FirebaseApp* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method OnAllAppsDestroyed, addr 0x18f2360, size 0x194, virtual false, abstract: false, final false
static inline void OnAllAppsDestroyed() ;

/// @brief Method RegisterLibraryInternal, addr 0x18f3604, size 0x90, virtual false, abstract: false, final false
static inline void RegisterLibraryInternal(::StringW  library, ::StringW  version) ;

/// @brief Method ReleaseReferenceInternal, addr 0x18f22a8, size 0xb8, virtual false, abstract: false, final false
static inline void ReleaseReferenceInternal(::Firebase::FirebaseApp*  app) ;

/// @brief Method RemoveReference, addr 0x18f0b5c, size 0x2a0, virtual false, abstract: false, final false
inline void RemoveReference() ;

/// @brief Method ThrowIfCheckDependenciesRunning, addr 0x18f13fc, size 0x194, virtual false, abstract: false, final false
static inline void ThrowIfCheckDependenciesRunning() ;

/// @brief Method ThrowIfNull, addr 0x18f1f30, size 0x68, virtual false, abstract: false, final false
inline void ThrowIfNull() ;

/// @brief Method TranslateDllNotFoundException, addr 0x18f0dfc, size 0x14c, virtual false, abstract: false, final false
static inline void TranslateDllNotFoundException(::System::Action*  closureToExecute) ;

/// @brief Method UrlStringToUri, addr 0x18f3068, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Uri* UrlStringToUri(::StringW  urlString) ;

/// @brief Method WeakReferenceGetTarget, addr 0x18f314c, size 0x90, virtual false, abstract: false, final false
static inline ::System::Object* WeakReferenceGetTarget(::System::WeakReference*  weakReference) ;

/// @brief Method <CreateAndTrack>m__1, addr 0x18f3af0, size 0x4c, virtual false, abstract: false, final false
static inline bool _CreateAndTrack_m__1() ;

/// @brief Method <Create>m__0, addr 0x18f3aa4, size 0x4c, virtual false, abstract: false, final false
static inline ::Firebase::FirebaseApp* _Create_m__0() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_AppDisposed() const;

constexpr ::System::EventHandler*& __cordl_internal_get_AppDisposed() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_AppDisposed(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18f069c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method add_AppDisposed, addr 0x18f1fe4, size 0x9c, virtual false, abstract: false, final false
inline void add_AppDisposed(::System::EventHandler*  value) ;

/// @brief Method getCPtr, addr 0x18f0960, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::FirebaseApp*  obj) ;

static inline bool getStaticF_AppUtilCallbacksInitialized() ;

static inline ::System::Object* getStaticF_AppUtilCallbacksLock() ;

static inline int32_t getStaticF_CheckDependenciesThread() ;

static inline ::System::Object* getStaticF_CheckDependenciesThreadLock() ;

static inline bool getStaticF_PreventOnAllAppsDestroyed() ;

static inline ::Firebase::FirebaseApp_CreateDelegate* getStaticF___f__am$cache0() ;

static inline ::System::Func_1<bool>* getStaticF___f__am$cache1() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::FirebaseApp*>* getStaticF_cPtrToProxy() ;

static inline bool getStaticF_crashlyticsInitializationAttempted() ;

static inline ::System::Object* getStaticF_disposeLock() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::FirebaseApp*>* getStaticF_nameToProxy() ;

/// @brief Method get_DefaultInstance, addr 0x18f1084, size 0x74, virtual false, abstract: false, final false
static inline ::Firebase::FirebaseApp* get_DefaultInstance() ;

/// @brief Method get_DefaultName, addr 0x18f10f8, size 0x80, virtual false, abstract: false, final false
static inline ::StringW get_DefaultName() ;

/// @brief Method get_LogLevel, addr 0x18f1f98, size 0x4c, virtual false, abstract: false, final false
static inline ::Firebase::LogLevel get_LogLevel() ;

/// @brief Method get_Name, addr 0x18f1f04, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameInternal, addr 0x18f0acc, size 0x90, virtual false, abstract: false, final false
inline ::StringW get_NameInternal() ;

/// @brief Method get_Options, addr 0x18f3790, size 0x70, virtual false, abstract: false, final false
inline ::Firebase::AppOptions* get_Options() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method options, addr 0x18f3800, size 0xe8, virtual false, abstract: false, final false
inline ::Firebase::AppOptionsInternal* options() ;

/// @brief Method remove_AppDisposed, addr 0x18f2080, size 0x9c, virtual false, abstract: false, final false
inline void remove_AppDisposed(::System::EventHandler*  value) ;

static inline void setStaticF_AppUtilCallbacksInitialized(bool  value) ;

static inline void setStaticF_AppUtilCallbacksLock(::System::Object*  value) ;

static inline void setStaticF_CheckDependenciesThread(int32_t  value) ;

static inline void setStaticF_CheckDependenciesThreadLock(::System::Object*  value) ;

static inline void setStaticF_PreventOnAllAppsDestroyed(bool  value) ;

static inline void setStaticF___f__am$cache0(::Firebase::FirebaseApp_CreateDelegate*  value) ;

static inline void setStaticF___f__am$cache1(::System::Func_1<bool>*  value) ;

static inline void setStaticF_cPtrToProxy(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Firebase::FirebaseApp*>*  value) ;

static inline void setStaticF_crashlyticsInitializationAttempted(bool  value) ;

static inline void setStaticF_disposeLock(::System::Object*  value) ;

static inline void setStaticF_nameToProxy(::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::FirebaseApp*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseApp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseApp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseApp(FirebaseApp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseApp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseApp(FirebaseApp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11824};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field name, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field AppDisposed, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler*  ___AppDisposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::FirebaseApp, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::FirebaseApp, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::FirebaseApp, ___name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::FirebaseApp, ___AppDisposed) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::FirebaseApp, 0x38>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::FirebaseApp);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseApp*, "Firebase", "FirebaseApp");
NEED_NO_BOX(::Firebase::FirebaseApp_CreateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseApp_CreateDelegate*, "Firebase", "FirebaseApp/CreateDelegate");
NEED_NO_BOX(::Firebase::FirebaseApp_EnableModuleParams);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseApp_EnableModuleParams*, "Firebase", "FirebaseApp/EnableModuleParams");
