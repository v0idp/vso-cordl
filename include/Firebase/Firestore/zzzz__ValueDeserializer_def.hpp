#pragma once
// IWYU pragma private; include "Firebase/Firestore/ValueDeserializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValueDeserializer)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore {
class ValueDeserializer;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::ValueDeserializer);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.ValueDeserializer
class CORDL_TYPE ValueDeserializer : public ::System::Object {
public:
// Declarations
/// @brief Method Deserialize, addr 0x190e3ec, size 0x2b8, virtual false, abstract: false, final false
static inline ::System::Object* Deserialize(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value, ::System::Type*  targetType) ;

/// @brief Method GetTargetType, addr 0x190e6a4, size 0x268, virtual false, abstract: false, final false
static inline ::System::Type* GetTargetType(::Firebase::Firestore::FieldValueProxy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueDeserializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueDeserializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueDeserializer(ValueDeserializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueDeserializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueDeserializer(ValueDeserializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ValueDeserializer, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::ValueDeserializer);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ValueDeserializer*, "Firebase.Firestore", "ValueDeserializer");
