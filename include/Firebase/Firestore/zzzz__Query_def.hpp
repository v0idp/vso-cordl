#pragma once
// IWYU pragma private; include "Firebase/Firestore/Query.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Query)
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace Firebase::Firestore {
struct FirestoreError;
}
namespace Firebase::Firestore {
template<typename T>
class ListenerRegistrationMap_1;
}
namespace Firebase::Firestore {
class QueryProxy;
}
namespace Firebase::Firestore {
class QuerySnapshotProxy;
}
namespace Firebase::Firestore {
class QuerySnapshot;
}
namespace Firebase::Firestore {
class Query_ListenerDelegate;
}
namespace Firebase::Firestore {
struct Source;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class Query;
}
namespace Firebase::Firestore {
class Query_ListenerDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Query);
MARK_REF_PTR_T(::Firebase::Firestore::Query_ListenerDelegate);
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Query/ListenerDelegate
class CORDL_TYPE Query_ListenerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1919f38, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage) ;

static inline ::Firebase::Firestore::Query_ListenerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1919e40, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Query_ListenerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Query_ListenerDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Query_ListenerDelegate(Query_ListenerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Query_ListenerDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Query_ListenerDelegate(Query_ListenerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Query_ListenerDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.Query
class CORDL_TYPE Query : public ::System::Object {
public:
// Declarations
using ListenerDelegate = ::Firebase::Firestore::Query_ListenerDelegate;

 __declspec(property(get=get_Firestore)) ::Firebase::Firestore::FirebaseFirestore*  Firestore;

/// @brief Field _firestore, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__firestore, put=__cordl_internal_set__firestore)) ::Firebase::Firestore::FirebaseFirestore*  _firestore;

/// @brief Field _proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::QueryProxy*  _proxy;

/// @brief Field querySnapshotsHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_querySnapshotsHandler, put=setStaticF_querySnapshotsHandler)) ::Firebase::Firestore::Query_ListenerDelegate*  querySnapshotsHandler;

/// @brief Field snapshotListenerCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapshotListenerCallbacks, put=setStaticF_snapshotListenerCallbacks)) ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*  snapshotListenerCallbacks;

/// @brief Method ClearCallbacksForOwner, addr 0x1919b60, size 0x80, virtual false, abstract: false, final false
static inline void ClearCallbacksForOwner(::Firebase::Firestore::FirebaseFirestore*  owner) ;

/// @brief Method Equals, addr 0x1919cb4, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1919d40, size 0x18, virtual false, abstract: false, final false
inline bool Equals(::Firebase::Firestore::Query*  other) ;

/// @brief Method GetHashCode, addr 0x1919d58, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetSnapshotAsync, addr 0x1919be8, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>* GetSnapshotAsync(::Firebase::Firestore::Source  source) ;

static inline ::Firebase::Firestore::Query* New_ctor(::Firebase::Firestore::QueryProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method QuerySnapshotsHandler, addr 0x19198fc, size 0x1c4, virtual false, abstract: false, final false
static inline void QuerySnapshotsHandler(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage) ;

/// @brief Method <GetSnapshotAsync>m__0, addr 0x1919ecc, size 0x6c, virtual false, abstract: false, final false
inline ::Firebase::Firestore::QuerySnapshot* _GetSnapshotAsync_m__0(::Firebase::Firestore::QuerySnapshotProxy*  taskResult) ;

constexpr ::Firebase::Firestore::FirebaseFirestore* const& __cordl_internal_get__firestore() const;

constexpr ::Firebase::Firestore::FirebaseFirestore*& __cordl_internal_get__firestore() ;

constexpr ::Firebase::Firestore::QueryProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::QueryProxy*& __cordl_internal_get__proxy() ;

constexpr void __cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value) ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::QueryProxy*  value) ;

/// @brief Method .ctor, addr 0x1919ac0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::QueryProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

static inline ::Firebase::Firestore::Query_ListenerDelegate* getStaticF_querySnapshotsHandler() ;

static inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>* getStaticF_snapshotListenerCallbacks() ;

/// @brief Method get_Firestore, addr 0x1919be0, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FirebaseFirestore* get_Firestore() ;

static inline void setStaticF_querySnapshotsHandler(::Firebase::Firestore::Query_ListenerDelegate*  value) ;

static inline void setStaticF_snapshotListenerCallbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::QuerySnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Query() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Query", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Query(Query && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Query", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Query(Query const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11200};

/// @brief Field _proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::QueryProxy*  ____proxy;

/// @brief Field _firestore, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestore*  ____firestore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Query, ____proxy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Query, ____firestore) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Query, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::Query);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Query*, "Firebase.Firestore", "Query");
NEED_NO_BOX(::Firebase::Firestore::Query_ListenerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Query_ListenerDelegate*, "Firebase.Firestore", "Query/ListenerDelegate");
