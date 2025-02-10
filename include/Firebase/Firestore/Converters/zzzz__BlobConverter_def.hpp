#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/BlobConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlobConverter)
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
class BlobConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::BlobConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.BlobConverter
class CORDL_TYPE BlobConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeBytes, addr 0x1910b7c, size 0x6c, virtual true, abstract: false, final false
inline ::System::Object* DeserializeBytes(::Firebase::Firestore::DeserializationContext*  context, ::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::Firebase::Firestore::Converters::BlobConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x1910a80, size 0x84, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x19109f0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlobConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlobConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlobConverter(BlobConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlobConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlobConverter(BlobConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::BlobConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::BlobConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::BlobConverter*, "Firebase.Firestore.Converters", "BlobConverter");
