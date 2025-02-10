#pragma once
// IWYU pragma private; include "Firebase/Firestore/ServerTimestampAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ServerTimestampAttribute)
// Forward declare root types
namespace Firebase::Firestore {
class ServerTimestampAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::ServerTimestampAttribute);
// Dependencies System.Attribute
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.ServerTimestampAttribute
class CORDL_TYPE ServerTimestampAttribute : public ::System::Attribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerTimestampAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerTimestampAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerTimestampAttribute(ServerTimestampAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerTimestampAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerTimestampAttribute(ServerTimestampAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ServerTimestampAttribute, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::ServerTimestampAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ServerTimestampAttribute*, "Firebase.Firestore", "ServerTimestampAttribute");
