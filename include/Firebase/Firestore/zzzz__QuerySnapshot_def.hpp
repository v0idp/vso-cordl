#pragma once
// IWYU pragma private; include "Firebase/Firestore/QuerySnapshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuerySnapshot)
namespace Firebase::Firestore {
class DocumentSnapshot;
}
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace Firebase::Firestore {
class QuerySnapshotProxy;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class QuerySnapshot;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::QuerySnapshot);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.QuerySnapshot
class CORDL_TYPE QuerySnapshot : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Documents)) ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  Documents;

/// @brief Field _documentsCached, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__documentsCached, put=__cordl_internal_set__documentsCached)) ::ArrayW<::Firebase::Firestore::DocumentSnapshot*,::Array<::Firebase::Firestore::DocumentSnapshot*>*>  _documentsCached;

/// @brief Field _firestore, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__firestore, put=__cordl_internal_set__firestore)) ::Firebase::Firestore::FirebaseFirestore*  _firestore;

/// @brief Field _proxy, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::Firebase::Firestore::QuerySnapshotProxy*  _proxy;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Equals, addr 0x1919720, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1919790, size 0x18, virtual false, abstract: false, final false
inline bool Equals(::Firebase::Firestore::QuerySnapshot*  other) ;

/// @brief Method GetEnumerator, addr 0x19197b0, size 0xa8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Firebase::Firestore::DocumentSnapshot*>* GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x19197a8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method LoadDocumentsCached, addr 0x191955c, size 0x120, virtual false, abstract: false, final false
inline void LoadDocumentsCached() ;

static inline ::Firebase::Firestore::QuerySnapshot* New_ctor(::Firebase::Firestore::QuerySnapshotProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1919858, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::ArrayW<::Firebase::Firestore::DocumentSnapshot*,::Array<::Firebase::Firestore::DocumentSnapshot*>*> const& __cordl_internal_get__documentsCached() const;

constexpr ::ArrayW<::Firebase::Firestore::DocumentSnapshot*,::Array<::Firebase::Firestore::DocumentSnapshot*>*>& __cordl_internal_get__documentsCached() ;

constexpr ::Firebase::Firestore::FirebaseFirestore* const& __cordl_internal_get__firestore() const;

constexpr ::Firebase::Firestore::FirebaseFirestore*& __cordl_internal_get__firestore() ;

constexpr ::Firebase::Firestore::QuerySnapshotProxy* const& __cordl_internal_get__proxy() const;

constexpr ::Firebase::Firestore::QuerySnapshotProxy*& __cordl_internal_get__proxy() ;

constexpr void __cordl_internal_set__documentsCached(::ArrayW<::Firebase::Firestore::DocumentSnapshot*,::Array<::Firebase::Firestore::DocumentSnapshot*>*>  value) ;

constexpr void __cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value) ;

constexpr void __cordl_internal_set__proxy(::Firebase::Firestore::QuerySnapshotProxy*  value) ;

/// @brief Method .ctor, addr 0x19194a4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::QuerySnapshotProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method get_Count, addr 0x191967c, size 0xa4, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Documents, addr 0x1919544, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* get_Documents() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* i___System__Collections__Generic__IEnumerable_1___Firebase__Firestore__DocumentSnapshot__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuerySnapshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuerySnapshot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuerySnapshot(QuerySnapshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuerySnapshot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuerySnapshot(QuerySnapshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11198};

/// @brief Field _proxy, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::QuerySnapshotProxy*  ____proxy;

/// @brief Field _firestore, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestore*  ____firestore;

/// @brief Field _documentsCached, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Firebase::Firestore::DocumentSnapshot*,::Array<::Firebase::Firestore::DocumentSnapshot*>*>  ____documentsCached;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::QuerySnapshot, ____proxy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::QuerySnapshot, ____firestore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::QuerySnapshot, ____documentsCached) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::QuerySnapshot, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::QuerySnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::QuerySnapshot*, "Firebase.Firestore", "QuerySnapshot");
