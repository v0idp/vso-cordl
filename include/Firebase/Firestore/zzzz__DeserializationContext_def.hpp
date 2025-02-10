#pragma once
// IWYU pragma private; include "Firebase/Firestore/DeserializationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeserializationContext)
namespace Firebase::Firestore::Converters {
class IFirestoreInternalConverter;
}
namespace Firebase::Firestore {
class DocumentReference;
}
namespace Firebase::Firestore {
class DocumentSnapshot;
}
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore {
class DeserializationContext;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::DeserializationContext);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.DeserializationContext
class CORDL_TYPE DeserializationContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DocumentReference)) ::Firebase::Firestore::DocumentReference*  DocumentReference;

 __declspec(property(get=get_Firestore)) ::Firebase::Firestore::FirebaseFirestore*  Firestore;

/// @brief Field Snapshot, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Snapshot, put=__cordl_internal_set_Snapshot)) ::Firebase::Firestore::DocumentSnapshot*  Snapshot;

/// @brief Method GetConverter, addr 0x190e90c, size 0x98, virtual false, abstract: false, final false
inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* GetConverter(::System::Type*  targetType) ;

static inline ::Firebase::Firestore::DeserializationContext* New_ctor(::Firebase::Firestore::DocumentSnapshot*  snapshot) ;

constexpr ::Firebase::Firestore::DocumentSnapshot* const& __cordl_internal_get_Snapshot() const;

constexpr ::Firebase::Firestore::DocumentSnapshot*& __cordl_internal_get_Snapshot() ;

constexpr void __cordl_internal_set_Snapshot(::Firebase::Firestore::DocumentSnapshot*  value) ;

/// @brief Method .ctor, addr 0x190ef7c, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::DocumentSnapshot*  snapshot) ;

/// @brief Method get_DocumentReference, addr 0x190f020, size 0x18, virtual false, abstract: false, final false
inline ::Firebase::Firestore::DocumentReference* get_DocumentReference() ;

/// @brief Method get_Firestore, addr 0x190effc, size 0x24, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FirebaseFirestore* get_Firestore() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeserializationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeserializationContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeserializationContext(DeserializationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeserializationContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeserializationContext(DeserializationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11148};

/// @brief Field Snapshot, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::DocumentSnapshot*  ___Snapshot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::DeserializationContext, ___Snapshot) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DeserializationContext, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::DeserializationContext);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DeserializationContext*, "Firebase.Firestore", "DeserializationContext");
