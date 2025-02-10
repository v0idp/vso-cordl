#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreCpp.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FirestoreCpp)
namespace Firebase::Firestore {
class DocumentReferenceProxy;
}
namespace Firebase::Firestore {
struct DocumentSnapshotProxy_ServerTimestampBehavior;
}
namespace Firebase::Firestore {
class DocumentSnapshotProxy;
}
namespace Firebase::Firestore {
class DocumentSnapshotVector;
}
namespace Firebase::Firestore {
class FieldToValueMap;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class FieldValueVector;
}
namespace Firebase::Firestore {
class QueryProxy;
}
namespace Firebase::Firestore {
class QuerySnapshotProxy;
}
namespace Firebase::Firestore {
class SetOptionsProxy;
}
namespace Firebase::Firestore {
class WriteBatchProxy;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirestoreCpp;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreCpp);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreCpp
class CORDL_TYPE FirestoreCpp : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertFieldValueToMap, addr 0x18fd8b8, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldToValueMap* ConvertFieldValueToMap(::Firebase::Firestore::FieldValueProxy*  fieldValue) ;

/// @brief Method ConvertFieldValueToVector, addr 0x18fe790, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueVector* ConvertFieldValueToVector(::Firebase::Firestore::FieldValueProxy*  value) ;

/// @brief Method ConvertMapToFieldValue, addr 0x18fdac4, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ConvertMapToFieldValue(::Firebase::Firestore::FieldToValueMap*  wrapper) ;

/// @brief Method ConvertSnapshotToFieldValue, addr 0x18fdcd0, size 0x108, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ConvertSnapshotToFieldValue(::Firebase::Firestore::DocumentSnapshotProxy*  snapshot, ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  stb) ;

/// @brief Method ConvertVectorToFieldValue, addr 0x18fe958, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ConvertVectorToFieldValue(::Firebase::Firestore::FieldValueVector*  wrapper) ;

/// @brief Method DocumentReferenceSetAsync, addr 0x18fe054, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* DocumentReferenceSetAsync(::Firebase::Firestore::DocumentReferenceProxy*  doc, ::Firebase::Firestore::FieldValueProxy*  fieldValue, ::Firebase::Firestore::SetOptionsProxy*  options) ;

/// @brief Method DocumentReferenceUpdateAsync, addr 0x18fe490, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* DocumentReferenceUpdateAsync(::Firebase::Firestore::DocumentReferenceProxy*  doc, ::Firebase::Firestore::FieldValueProxy*  fieldValue) ;

/// @brief Method DocumentSnapshotEquals, addr 0x18fd3e0, size 0xc0, virtual false, abstract: false, final false
static inline bool DocumentSnapshotEquals(::Firebase::Firestore::DocumentSnapshotProxy*  lhs, ::Firebase::Firestore::DocumentSnapshotProxy*  rhs) ;

/// @brief Method DocumentSnapshotHashCode, addr 0x18fd7a0, size 0x9c, virtual false, abstract: false, final false
static inline int32_t DocumentSnapshotHashCode(::Firebase::Firestore::DocumentSnapshotProxy*  snapshot) ;

/// @brief Method QueryEquals, addr 0x18fcf5c, size 0xc0, virtual false, abstract: false, final false
static inline bool QueryEquals(::Firebase::Firestore::QueryProxy*  lhs, ::Firebase::Firestore::QueryProxy*  rhs) ;

/// @brief Method QueryHashCode, addr 0x18fd570, size 0x9c, virtual false, abstract: false, final false
static inline int32_t QueryHashCode(::Firebase::Firestore::QueryProxy*  query) ;

/// @brief Method QuerySnapshotDocuments, addr 0x18feb10, size 0xf8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::DocumentSnapshotVector* QuerySnapshotDocuments(::Firebase::Firestore::QuerySnapshotProxy*  snapshot) ;

/// @brief Method QuerySnapshotEquals, addr 0x18fd250, size 0xc0, virtual false, abstract: false, final false
static inline bool QuerySnapshotEquals(::Firebase::Firestore::QuerySnapshotProxy*  lhs, ::Firebase::Firestore::QuerySnapshotProxy*  rhs) ;

/// @brief Method QuerySnapshotHashCode, addr 0x18fd688, size 0x9c, virtual false, abstract: false, final false
static inline int32_t QuerySnapshotHashCode(::Firebase::Firestore::QuerySnapshotProxy*  snapshot) ;

/// @brief Method WriteBatchSet, addr 0x18fe5ec, size 0x108, virtual false, abstract: false, final false
static inline void WriteBatchSet(::Firebase::Firestore::WriteBatchProxy*  writeBatch, ::Firebase::Firestore::DocumentReferenceProxy*  document, ::Firebase::Firestore::FieldValueProxy*  data, ::Firebase::Firestore::SetOptionsProxy*  options) ;

/// @brief Method WriteBatchUpdate, addr 0x18fde5c, size 0xdc, virtual false, abstract: false, final false
static inline void WriteBatchUpdate(::Firebase::Firestore::WriteBatchProxy*  batch, ::Firebase::Firestore::DocumentReferenceProxy*  doc, ::Firebase::Firestore::FieldValueProxy*  fieldValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreCpp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCpp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreCpp(FirestoreCpp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreCpp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreCpp(FirestoreCpp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreCpp, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirestoreCpp);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreCpp*, "Firebase.Firestore", "FirestoreCpp");
