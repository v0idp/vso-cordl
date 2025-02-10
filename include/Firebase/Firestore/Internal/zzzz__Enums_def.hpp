#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/Enums.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Enums)
namespace Firebase::Firestore {
struct SourceProxy;
}
namespace Firebase::Firestore {
struct Source;
}
// Forward declare root types
namespace Firebase::Firestore::Internal {
class Enums;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Internal::Enums);
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// Is value type: false
// CS Name: Firebase.Firestore.Internal.Enums
class CORDL_TYPE Enums : public ::System::Object {
public:
// Declarations
/// @brief Method Convert, addr 0x190e028, size 0x9c, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::SourceProxy Convert(::Firebase::Firestore::Source  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Enums() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Enums", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Enums(Enums && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Enums", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Enums(Enums const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11138};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Internal::Enums, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Internal
NEED_NO_BOX(::Firebase::Firestore::Internal::Enums);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::Enums*, "Firebase.Firestore.Internal", "Enums");
