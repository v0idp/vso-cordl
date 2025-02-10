#pragma once
// IWYU pragma private; include "Firebase/Firestore/CollectionReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/zzzz__Query_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionReference)
namespace Firebase::Firestore {
class CollectionReferenceProxy;
}
namespace Firebase::Firestore {
class DocumentReference;
}
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class CollectionReference;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::CollectionReference);
// Dependencies Firebase.Firestore.Query, System.IEquatable`1<T>
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.CollectionReference
class CORDL_TYPE CollectionReference : public ::Firebase::Firestore::Query {
public:
// Declarations
 __declspec(property(get=get_Path)) ::StringW  Path;

 __declspec(property(get=get_Proxy)) ::Firebase::Firestore::CollectionReferenceProxy*  Proxy;

/// @brief Convert operator to "::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>"
constexpr operator  ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>*() noexcept;

/// @brief Method AddAsync, addr 0x191db90, size 0xac, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>* AddAsync(::System::Object*  documentData) ;

/// @brief Method Document, addr 0x191da58, size 0x84, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentReference* Document() ;

/// @brief Method Document, addr 0x191dadc, size 0xb4, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentReference* Document(::StringW  path) ;

/// @brief Method Equals, addr 0x191dc80, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x191dcf0, size 0x18, virtual true, abstract: false, final true
inline bool Equals(::Firebase::Firestore::CollectionReference*  other) ;

/// @brief Method GetHashCode, addr 0x191dc3c, size 0x44, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Firebase::Firestore::CollectionReference* New_ctor(::Firebase::Firestore::CollectionReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method ToString, addr 0x191dd08, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x191c3d4, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::CollectionReferenceProxy*  proxy, ::Firebase::Firestore::FirebaseFirestore*  firestore) ;

/// @brief Method get_Path, addr 0x191da38, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_Proxy, addr 0x191d9c0, size 0x78, virtual false, abstract: false, final false
inline ::Firebase::Firestore::CollectionReferenceProxy* get_Proxy() ;

/// @brief Convert to "::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>"
constexpr ::System::IEquatable_1<::Firebase::Firestore::CollectionReference*>* i___System__IEquatable_1___Firebase__Firestore__CollectionReference__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionReference(CollectionReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionReference(CollectionReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::CollectionReference, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::CollectionReference);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::CollectionReference*, "Firebase.Firestore", "CollectionReference");
