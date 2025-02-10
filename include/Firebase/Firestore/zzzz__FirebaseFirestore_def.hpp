#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirebaseFirestore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirebaseFirestore)
namespace Firebase::Firestore {
class CollectionReference;
}
namespace Firebase::Firestore {
class FirebaseFirestoreSettings;
}
namespace Firebase::Firestore {
class FirebaseFirestore_LoadBundleTaskProgressDelegate;
}
namespace Firebase::Firestore {
class FirebaseFirestore_SnapshotsInSyncDelegate;
}
namespace Firebase::Firestore {
class FirebaseFirestore__Collection_c__AnonStorey0;
}
namespace Firebase::Firestore {
class FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5;
}
namespace Firebase::Firestore {
class FirestoreProxy;
}
namespace Firebase::Firestore {
template<typename T>
class ListenerRegistrationMap_1;
}
namespace Firebase::Firestore {
class LoadBundleTaskProgress;
}
namespace Firebase::Firestore {
class TransactionManager;
}
namespace Firebase::Firestore {
class WriteBatch;
}
namespace Firebase {
class FirebaseApp;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Threading {
class ReaderWriterLock;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace Firebase::Firestore {
class FirebaseFirestore_LoadBundleTaskProgressDelegate;
}
namespace Firebase::Firestore {
class FirebaseFirestore_SnapshotsInSyncDelegate;
}
namespace Firebase::Firestore {
class FirebaseFirestore__Collection_c__AnonStorey0;
}
namespace Firebase::Firestore {
class FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirebaseFirestore);
MARK_REF_PTR_T(::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate);
MARK_REF_PTR_T(::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0);
MARK_REF_PTR_T(::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5);
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirebaseFirestore/SnapshotsInSyncDelegate
class CORDL_TYPE FirebaseFirestore_SnapshotsInSyncDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x191c324, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  callbackId) ;

static inline ::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x191c194, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseFirestore_SnapshotsInSyncDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore_SnapshotsInSyncDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseFirestore_SnapshotsInSyncDelegate(FirebaseFirestore_SnapshotsInSyncDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore_SnapshotsInSyncDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseFirestore_SnapshotsInSyncDelegate(FirebaseFirestore_SnapshotsInSyncDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirebaseFirestore/LoadBundleTaskProgressDelegate
class CORDL_TYPE FirebaseFirestore_LoadBundleTaskProgressDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x191c338, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  callbackId, ::System::IntPtr  progress) ;

static inline ::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x191c220, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseFirestore_LoadBundleTaskProgressDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore_LoadBundleTaskProgressDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseFirestore_LoadBundleTaskProgressDelegate(FirebaseFirestore_LoadBundleTaskProgressDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore_LoadBundleTaskProgressDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseFirestore_LoadBundleTaskProgressDelegate(FirebaseFirestore_LoadBundleTaskProgressDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11211};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirebaseFirestore/<Collection>c__AnonStorey0
class CORDL_TYPE FirebaseFirestore__Collection_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field $this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::Firebase::Firestore::FirebaseFirestore*  $this;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

static inline ::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::Firestore::FirebaseFirestore* const& __cordl_internal_get_$this() const;

constexpr ::Firebase::Firestore::FirebaseFirestore*& __cordl_internal_get_$this() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_$this(::Firebase::Firestore::FirebaseFirestore*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// @brief Method <>m__0, addr 0x191c34c, size 0x88, virtual false, abstract: false, final false
inline ::Firebase::Firestore::CollectionReference* __m__0(::Firebase::Firestore::FirestoreProxy*  proxy) ;

/// @brief Method .ctor, addr 0x191bebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseFirestore__Collection_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore__Collection_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseFirestore__Collection_c__AnonStorey0(FirebaseFirestore__Collection_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore__Collection_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseFirestore__Collection_c__AnonStorey0(FirebaseFirestore__Collection_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11212};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field $this, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestore*  ___$this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0, ___$this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirebaseFirestore/<SnapshotsInSyncHandler>c__AnonStorey5
class CORDL_TYPE FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

static inline ::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

/// @brief Method <>m__0, addr 0x191c440, size 0x2c, virtual false, abstract: false, final false
inline ::System::Object* __m__0() ;

/// @brief Method .ctor, addr 0x191bfc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5(FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5(FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11213};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5, ___callback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirebaseFirestore
class CORDL_TYPE FirebaseFirestore : public ::System::Object {
public:
// Declarations
using LoadBundleTaskProgressDelegate = ::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate;

using SnapshotsInSyncDelegate = ::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate;

using _Collection_c__AnonStorey0 = ::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0;

using _SnapshotsInSyncHandler_c__AnonStorey5 = ::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5;

 __declspec(property(get=get_App, put=set_App)) ::Firebase::FirebaseApp*  App;

/// @brief Field <App>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__App_k__BackingField, put=__cordl_internal_set__App_k__BackingField)) ::Firebase::FirebaseApp*  _App_k__BackingField;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_2<::Firebase::Firestore::FirestoreProxy*,::Firebase::Firestore::WriteBatch*>*  __f__am$cache0;

/// @brief Field _disposeLock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__disposeLock, put=__cordl_internal_set__disposeLock)) ::System::Threading::ReaderWriterLock*  _disposeLock;

/// @brief Field _instanceCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instanceCache, put=setStaticF__instanceCache)) ::System::Collections::Generic::IDictionary_2<::Firebase::FirebaseApp*,::Firebase::Firestore::FirebaseFirestore*>*  _instanceCache;

/// @brief Field _isInCppInstanceCache, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInCppInstanceCache, put=__cordl_internal_set__isInCppInstanceCache)) bool  _isInCppInstanceCache;

/// @brief Field _isInCppInstanceCacheLock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__isInCppInstanceCacheLock, put=__cordl_internal_set__isInCppInstanceCacheLock)) ::System::Object*  _isInCppInstanceCacheLock;

/// @brief Field _proxy, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::FirestoreProxy*  _proxy;

/// @brief Field _settings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Firebase::Firestore::FirebaseFirestoreSettings*  _settings;

/// @brief Field _transactionManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transactionManager, put=__cordl_internal_set__transactionManager)) ::Firebase::Firestore::TransactionManager*  _transactionManager;

/// @brief Field handler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_handler, put=setStaticF_handler)) ::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate*  handler;

/// @brief Field loadBundleProgressCallbackMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadBundleProgressCallbackMap, put=setStaticF_loadBundleProgressCallbackMap)) ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_1<::Firebase::Firestore::LoadBundleTaskProgress*>*>*  loadBundleProgressCallbackMap;

/// @brief Field snapshotsInSyncCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapshotsInSyncCallbacks, put=setStaticF_snapshotsInSyncCallbacks)) ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action*>*  snapshotsInSyncCallbacks;

/// @brief Field snapshotsInSyncHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapshotsInSyncHandler, put=setStaticF_snapshotsInSyncHandler)) ::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate*  snapshotsInSyncHandler;

/// @brief Method Collection, addr 0x191bdc4, size 0xf8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::CollectionReference* Collection(::StringW  path) ;

/// @brief Method Dispose, addr 0x191b38c, size 0x35c, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x191b2f8, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetInstance, addr 0x191ba54, size 0x370, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FirebaseFirestore* GetInstance(::Firebase::FirebaseApp*  app) ;

/// @brief Method LoadBundleTaskProgressHandler, addr 0x191af30, size 0x1d4, virtual false, abstract: false, final false
static inline void LoadBundleTaskProgressHandler(int32_t  callbackId, ::System::IntPtr  progressPtr) ;

static inline ::Firebase::Firestore::FirebaseFirestore* New_ctor(::Firebase::Firestore::FirestoreProxy*  proxy, ::Firebase::FirebaseApp*  app) ;

/// @brief Method OnAppDisposed, addr 0x191b6e8, size 0x4, virtual false, abstract: false, final false
inline void OnAppDisposed(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method RemoveSelfFromInstanceCache, addr 0x191b76c, size 0x234, virtual false, abstract: false, final false
inline void RemoveSelfFromInstanceCache() ;

/// @brief Method SnapshotsInSyncHandler, addr 0x191ad48, size 0x1e8, virtual false, abstract: false, final false
static inline void SnapshotsInSyncHandler(int32_t  callbackId) ;

/// @brief Method StartBatch, addr 0x191bec4, size 0xfc, virtual false, abstract: false, final false
inline ::Firebase::Firestore::WriteBatch* StartBatch() ;

/// @brief Method WithFirestoreProxy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T WithFirestoreProxy(::System::Func_2<::Firebase::Firestore::FirestoreProxy*,T>*  func) ;

/// @brief Method <StartBatch>m__0, addr 0x191c2ac, size 0x78, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::WriteBatch* _StartBatch_m__0(::Firebase::Firestore::FirestoreProxy*  proxy) ;

constexpr ::Firebase::FirebaseApp* const& __cordl_internal_get__App_k__BackingField() const;

constexpr ::Firebase::FirebaseApp*& __cordl_internal_get__App_k__BackingField() ;

constexpr ::System::Threading::ReaderWriterLock* const& __cordl_internal_get__disposeLock() const;

constexpr ::System::Threading::ReaderWriterLock*& __cordl_internal_get__disposeLock() ;

constexpr bool const& __cordl_internal_get__isInCppInstanceCache() const;

constexpr bool& __cordl_internal_get__isInCppInstanceCache() ;

constexpr ::System::Object* const& __cordl_internal_get__isInCppInstanceCacheLock() const;

constexpr ::System::Object*& __cordl_internal_get__isInCppInstanceCacheLock() ;

constexpr ::Firebase::Firestore::FirestoreProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::FirestoreProxy*& __cordl_internal_get__proxy() ;

constexpr ::Firebase::Firestore::FirebaseFirestoreSettings* const& __cordl_internal_get__settings() const;

constexpr ::Firebase::Firestore::FirebaseFirestoreSettings*& __cordl_internal_get__settings() ;

constexpr ::Firebase::Firestore::TransactionManager* const& __cordl_internal_get__transactionManager() const;

constexpr ::Firebase::Firestore::TransactionManager*& __cordl_internal_get__transactionManager() ;

constexpr void __cordl_internal_set__App_k__BackingField(::Firebase::FirebaseApp*  value) ;

constexpr void __cordl_internal_set__disposeLock(::System::Threading::ReaderWriterLock*  value) ;

constexpr void __cordl_internal_set__isInCppInstanceCache(bool  value) ;

constexpr void __cordl_internal_set__isInCppInstanceCacheLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::FirestoreProxy*  value) ;

constexpr void __cordl_internal_set__settings(::Firebase::Firestore::FirebaseFirestoreSettings*  value) ;

constexpr void __cordl_internal_set__transactionManager(::Firebase::Firestore::TransactionManager*  value) ;

/// @brief Method .ctor, addr 0x191b104, size 0x1f4, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::FirestoreProxy*  proxy, ::Firebase::FirebaseApp*  app) ;

static inline ::System::Func_2<::Firebase::Firestore::FirestoreProxy*,::Firebase::Firestore::WriteBatch*>* getStaticF___f__am$cache0() ;

static inline ::System::Collections::Generic::IDictionary_2<::Firebase::FirebaseApp*,::Firebase::Firestore::FirebaseFirestore*>* getStaticF__instanceCache() ;

static inline ::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate* getStaticF_handler() ;

static inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_1<::Firebase::Firestore::LoadBundleTaskProgress*>*>* getStaticF_loadBundleProgressCallbackMap() ;

static inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action*>* getStaticF_snapshotsInSyncCallbacks() ;

static inline ::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate* getStaticF_snapshotsInSyncHandler() ;

/// @brief Method get_App, addr 0x191b9a0, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::FirebaseApp* get_App() ;

/// @brief Method get_DefaultInstance, addr 0x191b9b0, size 0xa4, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FirebaseFirestore* get_DefaultInstance() ;

static inline void setStaticF___f__am$cache0(::System::Func_2<::Firebase::Firestore::FirestoreProxy*,::Firebase::Firestore::WriteBatch*>*  value) ;

static inline void setStaticF__instanceCache(::System::Collections::Generic::IDictionary_2<::Firebase::FirebaseApp*,::Firebase::Firestore::FirebaseFirestore*>*  value) ;

static inline void setStaticF_handler(::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate*  value) ;

static inline void setStaticF_loadBundleProgressCallbackMap(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_1<::Firebase::Firestore::LoadBundleTaskProgress*>*>*  value) ;

static inline void setStaticF_snapshotsInSyncCallbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action*>*  value) ;

static inline void setStaticF_snapshotsInSyncHandler(::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate*  value) ;

/// @brief Method set_App, addr 0x191b9a8, size 0x8, virtual false, abstract: false, final false
inline void set_App(::Firebase::FirebaseApp*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseFirestore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseFirestore(FirebaseFirestore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseFirestore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseFirestore(FirebaseFirestore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11214};

/// @brief Field _isInCppInstanceCacheLock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____isInCppInstanceCacheLock;

/// @brief Field _isInCppInstanceCache, offset: 0x18, size: 0x1, def value: None
 bool  ____isInCppInstanceCache;

/// @brief Field _disposeLock, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::ReaderWriterLock*  ____disposeLock;

/// @brief Field _proxy, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Firestore::FirestoreProxy*  ____proxy;

/// @brief Field _settings, offset: 0x30, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestoreSettings*  ____settings;

/// @brief Field _transactionManager, offset: 0x38, size: 0x8, def value: None
 ::Firebase::Firestore::TransactionManager*  ____transactionManager;

/// @brief Field <App>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Firebase::FirebaseApp*  ____App_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____isInCppInstanceCacheLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____isInCppInstanceCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____disposeLock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____proxy) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____transactionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirebaseFirestore, ____App_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirebaseFirestore, 0x48>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore*, "Firebase.Firestore", "FirebaseFirestore");
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore_LoadBundleTaskProgressDelegate*, "Firebase.Firestore", "FirebaseFirestore/LoadBundleTaskProgressDelegate");
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore_SnapshotsInSyncDelegate*, "Firebase.Firestore", "FirebaseFirestore/SnapshotsInSyncDelegate");
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore__Collection_c__AnonStorey0*, "Firebase.Firestore", "FirebaseFirestore/<Collection>c__AnonStorey0");
NEED_NO_BOX(::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirebaseFirestore__SnapshotsInSyncHandler_c__AnonStorey5*, "Firebase.Firestore", "FirebaseFirestore/<SnapshotsInSyncHandler>c__AnonStorey5");
