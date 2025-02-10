#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/GeoPointConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
CORDL_MODULE_EXPORT(GeoPointConverter)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
struct GeoPoint;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class GeoPointConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::GeoPointConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.GeoPointConverter
class CORDL_TYPE GeoPointConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeGeoPoint, addr 0x1910694, size 0x84, virtual true, abstract: false, final false
inline ::System::Object* DeserializeGeoPoint(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::GeoPoint  value) ;

static inline ::Firebase::Firestore::Converters::GeoPointConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x1910584, size 0xa8, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x19104f4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeoPointConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeoPointConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeoPointConverter(GeoPointConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeoPointConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeoPointConverter(GeoPointConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11163};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::GeoPointConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::GeoPointConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::GeoPointConverter*, "Firebase.Firestore.Converters", "GeoPointConverter");
