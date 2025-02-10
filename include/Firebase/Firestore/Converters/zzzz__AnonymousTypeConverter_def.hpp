#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/AnonymousTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__MapConverterBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnonymousTypeConverter)
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class AnonymousTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AnonymousTypeConverter);
// Dependencies Firebase.Firestore.Converters.MapConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AnonymousTypeConverter
class CORDL_TYPE AnonymousTypeConverter : public ::Firebase::Firestore::Converters::MapConverterBase {
public:
// Declarations
/// @brief Field _properties, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*  _properties;

static inline ::Firebase::Firestore::Converters::AnonymousTypeConverter* New_ctor(::System::Type*  targetType) ;

/// @brief Method SerializeMap, addr 0x1917ec8, size 0x3c4, virtual true, abstract: false, final false
inline void SerializeMap(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map) ;

constexpr ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>* const& __cordl_internal_get__properties() const;

constexpr ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*& __cordl_internal_get__properties() ;

constexpr void __cordl_internal_set__properties(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*  value) ;

/// @brief Method .ctor, addr 0x19136c8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnonymousTypeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnonymousTypeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnonymousTypeConverter(AnonymousTypeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnonymousTypeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnonymousTypeConverter(AnonymousTypeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11187};

/// @brief Field _properties, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*  ____properties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AnonymousTypeConverter, ____properties) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AnonymousTypeConverter, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::AnonymousTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AnonymousTypeConverter*, "Firebase.Firestore.Converters", "AnonymousTypeConverter");
