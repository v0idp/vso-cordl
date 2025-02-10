#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreDocumentIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(FirestoreDocumentIdAttribute)
// Forward declare root types
namespace Firebase::Firestore {
class FirestoreDocumentIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreDocumentIdAttribute);
// Dependencies System.Attribute
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreDocumentIdAttribute
class CORDL_TYPE FirestoreDocumentIdAttribute : public ::System::Attribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreDocumentIdAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreDocumentIdAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreDocumentIdAttribute(FirestoreDocumentIdAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreDocumentIdAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreDocumentIdAttribute(FirestoreDocumentIdAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreDocumentIdAttribute, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirestoreDocumentIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreDocumentIdAttribute*, "Firebase.Firestore", "FirestoreDocumentIdAttribute");
