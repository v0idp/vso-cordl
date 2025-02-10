#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/DictionaryConverter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__MapConverterBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DictionaryConverter_1)
namespace Firebase::Firestore {
class DeserializationContext;
}
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
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
template<typename TValue>
class DictionaryConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Firestore::Converters::DictionaryConverter_1);
// Dependencies Firebase.Firestore.Converters.MapConverterBase
namespace Firebase::Firestore::Converters {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: Firebase.Firestore.Converters.DictionaryConverter`1<TValue>
class CORDL_TYPE DictionaryConverter_1 : public ::Firebase::Firestore::Converters::MapConverterBase {
public:
// Declarations
/// @brief Field _concreteType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__concreteType, put=__cordl_internal_set__concreteType)) ::System::Type*  _concreteType;

/// @brief Method DeserializeMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* DeserializeMap(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  mapValue) ;

static inline ::Firebase::Firestore::Converters::DictionaryConverter_1<TValue>* New_ctor(::System::Type*  targetType) ;

/// @brief Method SerializeMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SerializeMap(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map) ;

constexpr ::System::Type* const& __cordl_internal_get__concreteType() const;

constexpr ::System::Type*& __cordl_internal_get__concreteType() ;

constexpr void __cordl_internal_set__concreteType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionaryConverter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionaryConverter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionaryConverter_1(DictionaryConverter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryConverter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionaryConverter_1(DictionaryConverter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11175};

/// @brief Field _concreteType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____concreteType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore::Converters
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Converters::DictionaryConverter_1, "Firebase.Firestore.Converters", "DictionaryConverter`1");
