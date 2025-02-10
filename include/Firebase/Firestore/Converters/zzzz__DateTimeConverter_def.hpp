#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/DateTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConverter)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace Firebase::Firestore {
struct Timestamp;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class DateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::DateTimeConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.DateTimeConverter
class CORDL_TYPE DateTimeConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeTimestamp, addr 0x1910f3c, size 0x88, virtual true, abstract: false, final false
inline ::System::Object* DeserializeTimestamp(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::Timestamp  value) ;

static inline ::Firebase::Firestore::Converters::DateTimeConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x1910dac, size 0xac, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1910d1c, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeConverter(DateTimeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeConverter(DateTimeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11167};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::DateTimeConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::DateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::DateTimeConverter*, "Firebase.Firestore.Converters", "DateTimeConverter");
