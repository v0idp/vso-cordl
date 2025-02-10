#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/IFirestoreInternalConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFirestoreInternalConverter)
namespace Firebase::Firestore {
class DeserializationContext;
}
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
namespace Firebase::Firestore::Converters {
class IFirestoreInternalConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::IFirestoreInternalConverter);
// Dependencies 
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.IFirestoreInternalConverter
class CORDL_TYPE IFirestoreInternalConverter {
public:
// Declarations
/// @brief Method DeserializeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* DeserializeValue(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value) ;

/// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IFirestoreInternalConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFirestoreInternalConverter(IFirestoreInternalConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::IFirestoreInternalConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::IFirestoreInternalConverter*, "Firebase.Firestore.Converters", "IFirestoreInternalConverter");
