#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentSnapshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DocumentSnapshot)
namespace Firebase::Firestore {
class DocumentReference;
}
namespace Firebase::Firestore {
class DocumentSnapshotProxy;
}
namespace Firebase::Firestore {
class FieldPath;
}
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace Firebase::Firestore {
struct ServerTimestampBehavior;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class DocumentSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::DocumentSnapshot);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.DocumentSnapshot
class CORDL_TYPE DocumentSnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Exists)) bool  Exists;

 __declspec(property(get=get_Id)) ::StringW  Id;

 __declspec(property(get=get_Reference)) ::Firebase::Firestore::DocumentReference*  Reference;

/// @brief Field _firestore, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__firestore, put=__cordl_internal_set__firestore)) ::Firebase::Firestore::FirebaseFirestore*  _firestore;

/// @brief Field _proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::DocumentSnapshotProxy*  _proxy;

/// @brief Method ConvertTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T ConvertTo(::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior) ;

/// @brief Method Equals, addr 0x191cee0, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191cf50, size 0x18, virtual false, abstract: false, final false
inline bool Equals(::Firebase::Firestore::DocumentSnapshot*  other) ;

/// @brief Method GetHashCode, addr 0x191cf68, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetValue(::Firebase::Firestore::FieldPath*  path, ::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetValue(::StringW  path, ::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior) ;

static inline ::Firebase::Firestore::DocumentSnapshot* New_ctor(::Firebase::Firestore::DocumentSnapshotProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method ToDictionary, addr 0x191ce88, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* ToDictionary(::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior) ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetValue(::Firebase::Firestore::FieldPath*  path, ::ByRef<T>  value, ::Firebase::Firestore::ServerTimestampBehavior  serverTimestampBehavior) ;

constexpr ::Firebase::Firestore::FirebaseFirestore* const& __cordl_internal_get__firestore() const;

constexpr ::Firebase::Firestore::FirebaseFirestore*& __cordl_internal_get__firestore() ;

constexpr ::Firebase::Firestore::DocumentSnapshotProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::DocumentSnapshotProxy*& __cordl_internal_get__proxy() ;

constexpr void __cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value) ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::DocumentSnapshotProxy*  value) ;

/// @brief Method .ctor, addr 0x191985c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::DocumentSnapshotProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method get_Exists, addr 0x191ce68, size 0x20, virtual false, abstract: false, final false
inline bool get_Exists() ;

/// @brief Method get_Id, addr 0x191ce48, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// @brief Method get_Reference, addr 0x190f038, size 0x80, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentReference* get_Reference() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocumentSnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocumentSnapshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocumentSnapshot(DocumentSnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocumentSnapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocumentSnapshot(DocumentSnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11217};

/// @brief Field _proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::DocumentSnapshotProxy*  ____proxy;

/// @brief Field _firestore, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestore*  ____firestore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::DocumentSnapshot, ____proxy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::DocumentSnapshot, ____firestore) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DocumentSnapshot, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::DocumentSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentSnapshot*, "Firebase.Firestore", "DocumentSnapshot");
