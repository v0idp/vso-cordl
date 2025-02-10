#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/ConverterBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConverterBase)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class DocumentReference;
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
namespace Firebase::Firestore {
struct Timestamp;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class ConverterBase;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::ConverterBase);
// Dependencies Firebase.Firestore.Converters.IFirestoreInternalConverter, System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.ConverterBase
class CORDL_TYPE ConverterBase : public ::System::Object {
public:
// Declarations
/// @brief Field TargetType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetType, put=__cordl_internal_set_TargetType)) ::System::Type*  TargetType;

/// @brief Convert operator to "::Firebase::Firestore::Converters::IFirestoreInternalConverter"
constexpr operator  ::Firebase::Firestore::Converters::IFirestoreInternalConverter*() noexcept;

/// @brief Method ConvertFromProxyBlob, addr 0x1915388, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ConvertFromProxyBlob(::Firebase::Firestore::FieldValueProxy*  internalValue) ;

/// @brief Method ConvertToProxyArray, addr 0x1911c98, size 0x164, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ConvertToProxyArray(::System::Collections::Generic::IList_1<::Firebase::Firestore::FieldValueProxy*>*  list) ;

/// @brief Method ConvertToProxyBlob, addr 0x1910810, size 0x1d8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ConvertToProxyBlob(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method ConvertToProxyMap, addr 0x191156c, size 0x320, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::FieldValueProxy* ConvertToProxyMap(::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map) ;

/// @brief Method DeserializeArray, addr 0x1915624, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeArray(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  arrayValue) ;

/// @brief Method DeserializeBoolean, addr 0x1915684, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeBoolean(::Firebase::Firestore::DeserializationContext*  context, bool  value) ;

/// @brief Method DeserializeBytes, addr 0x19156e4, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeBytes(::Firebase::Firestore::DeserializationContext*  context, ::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method DeserializeDouble, addr 0x1915744, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeDouble(::Firebase::Firestore::DeserializationContext*  context, double_t  value) ;

/// @brief Method DeserializeGeoPoint, addr 0x19157a4, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeGeoPoint(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::GeoPoint  value) ;

/// @brief Method DeserializeInteger, addr 0x1915804, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeInteger(::Firebase::Firestore::DeserializationContext*  context, int64_t  value) ;

/// @brief Method DeserializeMap, addr 0x191506c, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeMap(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  mapValue) ;

/// @brief Method DeserializeReference, addr 0x1915864, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeReference(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::DocumentReference*  value) ;

/// @brief Method DeserializeString, addr 0x19158c4, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeString(::Firebase::Firestore::DeserializationContext*  context, ::StringW  value) ;

/// @brief Method DeserializeTimestamp, addr 0x1915924, size 0x60, virtual true, abstract: false, final false
inline ::System::Object* DeserializeTimestamp(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::Timestamp  value) ;

/// @brief Method DeserializeValue, addr 0x19150cc, size 0x2bc, virtual true, abstract: false, final false
inline ::System::Object* DeserializeValue(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value) ;

static inline ::Firebase::Firestore::Converters::ConverterBase* New_ctor(::System::Type*  targetType) ;

/// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method SerializeMap, addr 0x19155c4, size 0x60, virtual true, abstract: false, final false
inline void SerializeMap(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map) ;

constexpr ::System::Type* const& __cordl_internal_get_TargetType() const;

constexpr ::System::Type*& __cordl_internal_get_TargetType() ;

constexpr void __cordl_internal_set_TargetType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x190f148, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType) ;

/// @brief Convert to "::Firebase::Firestore::Converters::IFirestoreInternalConverter"
constexpr ::Firebase::Firestore::Converters::IFirestoreInternalConverter* i___Firebase__Firestore__Converters__IFirestoreInternalConverter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterBase(ConverterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterBase(ConverterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11179};

/// @brief Field TargetType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___TargetType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::ConverterBase, ___TargetType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::ConverterBase, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::ConverterBase);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::ConverterBase*, "Firebase.Firestore.Converters", "ConverterBase");
