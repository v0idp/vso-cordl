#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DocumentReference)
namespace Firebase::Firestore {
class CollectionReference;
}
namespace Firebase::Firestore {
class DocumentReferenceProxy;
}
namespace Firebase::Firestore {
class DocumentReference_ListenerDelegate;
}
namespace Firebase::Firestore {
class DocumentSnapshotProxy;
}
namespace Firebase::Firestore {
class DocumentSnapshot;
}
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
class SetOptions;
}
namespace Firebase::Firestore {
struct Source;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
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
class DocumentReference;
}
namespace Firebase::Firestore {
class DocumentReference_ListenerDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::DocumentReference);
MARK_REF_PTR_T(::Firebase::Firestore::DocumentReference_ListenerDelegate);
// Dependencies System.MulticastDelegate
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.DocumentReference/ListenerDelegate
class CORDL_TYPE DocumentReference_ListenerDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x191d9ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage) ;

static inline ::Firebase::Firestore::DocumentReference_ListenerDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x191d8b4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocumentReference_ListenerDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocumentReference_ListenerDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocumentReference_ListenerDelegate(DocumentReference_ListenerDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocumentReference_ListenerDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocumentReference_ListenerDelegate(DocumentReference_ListenerDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DocumentReference_ListenerDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.IEquatable`1<T>, System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.DocumentReference
class CORDL_TYPE DocumentReference : public ::System::Object {
public:
// Declarations
using ListenerDelegate = ::Firebase::Firestore::DocumentReference_ListenerDelegate;

 __declspec(property(get=get_Firestore)) ::Firebase::Firestore::FirebaseFirestore*  Firestore;

 __declspec(property(get=get_Id)) ::StringW  Id;

 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_Proxy)) ::Firebase::Firestore::DocumentReferenceProxy*  Proxy;

/// @brief Field _firestore, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__firestore, put=__cordl_internal_set__firestore)) ::Firebase::Firestore::FirebaseFirestore*  _firestore;

/// @brief Field _proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::DocumentReferenceProxy*  _proxy;

/// @brief Field documentSnapshotsHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_documentSnapshotsHandler, put=setStaticF_documentSnapshotsHandler)) ::Firebase::Firestore::DocumentReference_ListenerDelegate*  documentSnapshotsHandler;

/// @brief Field snapshotListenerCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapshotListenerCallbacks, put=setStaticF_snapshotListenerCallbacks)) ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*  snapshotListenerCallbacks;

/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>"
constexpr operator  ::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>*() noexcept;

/// @brief Method ClearCallbacksForOwner, addr 0x191b6ec, size 0x80, virtual false, abstract: false, final false
static inline void ClearCallbacksForOwner(::Firebase::Firestore::FirebaseFirestore*  owner) ;

/// @brief Method Collection, addr 0x191d164, size 0xc8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::CollectionReference* Collection(::StringW  path) ;

/// @brief Method DeleteAsync, addr 0x191d460, size 0x20, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DeleteAsync() ;

/// @brief Method DocumentSnapshotsHandler, addr 0x191cf70, size 0x1c4, virtual false, abstract: false, final false
static inline void DocumentSnapshotsHandler(int32_t  callbackId, ::System::IntPtr  snapshotPtr, ::Firebase::Firestore::FirestoreError  errorCode, ::StringW  errorMessage) ;

/// @brief Method Equals, addr 0x191d28c, size 0x64, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191d2f0, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::Firebase::Firestore::DocumentReference*  other) ;

/// @brief Method GetHashCode, addr 0x191d22c, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetSnapshotAsync, addr 0x191d708, size 0xcc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>* GetSnapshotAsync(::Firebase::Firestore::Source  source) ;

static inline ::Firebase::Firestore::DocumentReference* New_ctor(::Firebase::Firestore::DocumentReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method SetAsync, addr 0x191d56c, size 0x19c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetAsync(::System::Object*  documentData, ::Firebase::Firestore::SetOptions*  options) ;

/// @brief Method ToString, addr 0x191d370, size 0xf0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateAsync, addr 0x191d480, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateAsync(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  updates) ;

/// @brief Method <GetSnapshotAsync>m__0, addr 0x191d940, size 0x6c, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentSnapshot* _GetSnapshotAsync_m__0(::Firebase::Firestore::DocumentSnapshotProxy*  taskResult) ;

constexpr ::Firebase::Firestore::FirebaseFirestore* const& __cordl_internal_get__firestore() const;

constexpr ::Firebase::Firestore::FirebaseFirestore*& __cordl_internal_get__firestore() ;

constexpr ::Firebase::Firestore::DocumentReferenceProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::DocumentReferenceProxy*& __cordl_internal_get__proxy() ;

constexpr void __cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value) ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::DocumentReferenceProxy*  value) ;

/// @brief Method .ctor, addr 0x19154c4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::DocumentReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

static inline ::Firebase::Firestore::DocumentReference_ListenerDelegate* getStaticF_documentSnapshotsHandler() ;

static inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>* getStaticF_snapshotListenerCallbacks() ;

/// @brief Method get_Firestore, addr 0x191d13c, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FirebaseFirestore* get_Firestore() ;

/// @brief Method get_Id, addr 0x191744c, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// @brief Method get_Path, addr 0x191d144, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_Proxy, addr 0x191d134, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentReferenceProxy* get_Proxy() ;

/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::DocumentReference*>* i___System__IEquatable_1___Firebase__Firestore__DocumentReference__() noexcept;

static inline void setStaticF_documentSnapshotsHandler(::Firebase::Firestore::DocumentReference_ListenerDelegate*  value) ;

static inline void setStaticF_snapshotListenerCallbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Action_3<::Firebase::Firestore::DocumentSnapshotProxy*,::Firebase::Firestore::FirestoreError,::StringW>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocumentReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocumentReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocumentReference(DocumentReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocumentReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocumentReference(DocumentReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11219};

/// @brief Field _proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::DocumentReferenceProxy*  ____proxy;

/// @brief Field _firestore, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestore*  ____firestore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::DocumentReference, ____proxy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::DocumentReference, ____firestore) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DocumentReference, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::DocumentReference);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentReference*, "Firebase.Firestore", "DocumentReference");
NEED_NO_BOX(::Firebase::Firestore::DocumentReference_ListenerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentReference_ListenerDelegate*, "Firebase.Firestore", "DocumentReference/ListenerDelegate");
