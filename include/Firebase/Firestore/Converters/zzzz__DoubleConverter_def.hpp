#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/DoubleConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleConverter)
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
class DoubleConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::DoubleConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.DoubleConverter
class CORDL_TYPE DoubleConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeDouble, addr 0x19100f0, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeDouble(::Firebase::Firestore::DeserializationContext*  context, double_t  value) ;

/// @brief Method DeserializeInteger, addr 0x1910150, size 0x5c, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value) ;

static inline ::Firebase::Firestore::Converters::DoubleConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x1910080, size 0x70, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x190fff0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoubleConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoubleConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DoubleConverter(DoubleConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoubleConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoubleConverter(DoubleConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::DoubleConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::DoubleConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::DoubleConverter*, "Firebase.Firestore.Converters", "DoubleConverter");
