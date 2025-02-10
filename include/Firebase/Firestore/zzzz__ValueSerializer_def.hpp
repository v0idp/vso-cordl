#pragma once
// IWYU pragma private; include "Firebase/Firestore/ValueSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValueSerializer)
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
class ValueSerializer;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::ValueSerializer);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.ValueSerializer
class CORDL_TYPE ValueSerializer : public ::System::Object {
public:
// Declarations
/// @brief Method Serialize, addr 0x190e220, size 0xdc, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueSerializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueSerializer(ValueSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueSerializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueSerializer(ValueSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11141};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ValueSerializer, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::ValueSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ValueSerializer*, "Firebase.Firestore", "ValueSerializer");
