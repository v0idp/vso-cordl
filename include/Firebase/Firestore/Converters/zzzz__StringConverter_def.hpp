#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/StringConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringConverter)
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
class StringConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::StringConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.StringConverter
class CORDL_TYPE StringConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeString, addr 0x190f1d0, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* DeserializeString(::Firebase::Firestore::DeserializationContext*  context, ::StringW  value) ;

static inline ::Firebase::Firestore::Converters::StringConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x190f170, size 0x60, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x190f0b8, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringConverter(StringConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringConverter(StringConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::StringConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::StringConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::StringConverter*, "Firebase.Firestore.Converters", "StringConverter");
