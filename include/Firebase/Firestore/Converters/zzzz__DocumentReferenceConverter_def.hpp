#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/DocumentReferenceConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
CORDL_MODULE_EXPORT(DocumentReferenceConverter)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class DocumentReference;
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
class DocumentReferenceConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::DocumentReferenceConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.DocumentReferenceConverter
class CORDL_TYPE DocumentReferenceConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeReference, addr 0x191149c, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* DeserializeReference(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::DocumentReference*  value) ;

static inline ::Firebase::Firestore::Converters::DocumentReferenceConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x1911438, size 0x64, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x19113a8, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocumentReferenceConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocumentReferenceConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocumentReferenceConverter(DocumentReferenceConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocumentReferenceConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocumentReferenceConverter(DocumentReferenceConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11169};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::DocumentReferenceConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::DocumentReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::DocumentReferenceConverter*, "Firebase.Firestore.Converters", "DocumentReferenceConverter");
