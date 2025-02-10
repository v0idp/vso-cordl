#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/EnumConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumConverter)
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
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class EnumConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::EnumConverter);
// Dependencies Firebase.Firestore.Converters.ConverterBase, System.TypeCode
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.EnumConverter
class CORDL_TYPE EnumConverter : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Field _typeCode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeCode, put=__cordl_internal_set__typeCode)) ::System::TypeCode  _typeCode;

/// @brief Method DeserializeInteger, addr 0x19125e0, size 0x80, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value) ;

/// @brief Method EnumToInt64, addr 0x1912880, size 0x308, virtual false, abstract: false, final false
inline int64_t EnumToInt64(::System::Object*  value) ;

/// @brief Method Int64ToEnumBaseType, addr 0x1912660, size 0x20c, virtual false, abstract: false, final false
inline ::System::Object* Int64ToEnumBaseType(int64_t  value) ;

static inline ::Firebase::Firestore::Converters::EnumConverter* New_ctor(::System::Type*  targetType) ;

/// @brief Method Serialize, addr 0x191286c, size 0x14, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

constexpr ::System::TypeCode const& __cordl_internal_get__typeCode() const;

constexpr ::System::TypeCode& __cordl_internal_get__typeCode() ;

constexpr void __cordl_internal_set__typeCode(::System::TypeCode  value) ;

/// @brief Method .ctor, addr 0x1912564, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumConverter(EnumConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumConverter(EnumConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11174};

/// @brief Field _typeCode, offset: 0x18, size: 0x4, def value: None
 ::System::TypeCode  ____typeCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::EnumConverter, ____typeCode) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::EnumConverter, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::EnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::EnumConverter*, "Firebase.Firestore.Converters", "EnumConverter");
