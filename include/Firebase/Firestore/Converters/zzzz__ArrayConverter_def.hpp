#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/ArrayConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__EnumerableConverterBase_def.hpp"
CORDL_MODULE_EXPORT(ArrayConverter)
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
namespace Firebase::Firestore::Converters {
class ArrayConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::ArrayConverter);
// Dependencies Firebase.Firestore.Converters.EnumerableConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.ArrayConverter
class CORDL_TYPE ArrayConverter : public ::Firebase::Firestore::Converters::EnumerableConverterBase {
public:
// Declarations
/// @brief Field _elementType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::System::Type*  _elementType;

/// @brief Method DeserializeArray, addr 0x1917bf0, size 0x2d8, virtual true, abstract: false, final false
inline ::System::Object* DeserializeArray(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  arrayValue) ;

static inline ::Firebase::Firestore::Converters::ArrayConverter* New_ctor(::System::Type*  elementType) ;

constexpr ::System::Type* const& __cordl_internal_get__elementType() const;

constexpr ::System::Type*& __cordl_internal_get__elementType() ;

constexpr void __cordl_internal_set__elementType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x19134cc, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  elementType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayConverter(ArrayConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayConverter(ArrayConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11186};

/// @brief Field _elementType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____elementType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::ArrayConverter, ____elementType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::ArrayConverter, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::ArrayConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::ArrayConverter*, "Firebase.Firestore.Converters", "ArrayConverter");
