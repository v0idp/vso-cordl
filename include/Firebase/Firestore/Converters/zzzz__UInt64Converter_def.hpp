#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/UInt64Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__IntegerConverterBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt64Converter)
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
class UInt64Converter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::UInt64Converter);
// Dependencies Firebase.Firestore.Converters.IntegerConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.UInt64Converter
class CORDL_TYPE UInt64Converter : public ::Firebase::Firestore::Converters::IntegerConverterBase {
public:
// Declarations
/// @brief Method DeserializeInteger, addr 0x190fdc8, size 0x64, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value) ;

static inline ::Firebase::Firestore::Converters::UInt64Converter* New_ctor() ;

/// @brief Method Serialize, addr 0x190fd58, size 0x70, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x190fcc8, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UInt64Converter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UInt64Converter(UInt64Converter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UInt64Converter(UInt64Converter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::UInt64Converter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::UInt64Converter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::UInt64Converter*, "Firebase.Firestore.Converters", "UInt64Converter");
