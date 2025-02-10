#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/FieldValueProxyConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
CORDL_MODULE_EXPORT(FieldValueProxyConverter)
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
class FieldValueProxyConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::FieldValueProxyConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.FieldValueProxyConverter
class CORDL_TYPE FieldValueProxyConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
static inline ::Firebase::Firestore::Converters::FieldValueProxyConverter* New_ctor() ;

/// @brief Method Serialize, addr 0x1910ca0, size 0x7c, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1910c10, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldValueProxyConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldValueProxyConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldValueProxyConverter(FieldValueProxyConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldValueProxyConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldValueProxyConverter(FieldValueProxyConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11166};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::FieldValueProxyConverter, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::FieldValueProxyConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::FieldValueProxyConverter*, "Firebase.Firestore.Converters", "FieldValueProxyConverter");
