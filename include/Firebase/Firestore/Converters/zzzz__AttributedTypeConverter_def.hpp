#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/AttributedTypeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__MapConverterBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttributedTypeConverter)
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter_AttributedProperty;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2;
}
namespace Firebase::Firestore::Converters {
class IFirestoreInternalConverter;
}
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class FirestoreDataAttribute;
}
namespace Firebase::Firestore {
class FirestorePropertyAttribute;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter_AttributedProperty;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1;
}
namespace Firebase::Firestore::Converters {
class AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AttributedTypeConverter);
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty);
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0);
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1);
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2);
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AttributedTypeConverter/AttributedProperty
class CORDL_TYPE AttributedTypeConverter_AttributedProperty : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

/// @brief Field FirestoreName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FirestoreName, put=__cordl_internal_set_FirestoreName)) ::StringW  FirestoreName;

 __declspec(property(get=get_IsNullableValue)) bool  IsNullableValue;

/// @brief Field _converter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__converter, put=__cordl_internal_set__converter)) ::Firebase::Firestore::Converters::IFirestoreInternalConverter*  _converter;

/// @brief Field _propertyInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyInfo, put=__cordl_internal_set__propertyInfo)) ::System::Reflection::PropertyInfo*  _propertyInfo;

/// @brief Field _sentinelValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sentinelValue, put=__cordl_internal_set__sentinelValue)) ::Firebase::Firestore::FieldValueProxy*  _sentinelValue;

/// @brief Method GetSerializedValue, addr 0x1916f64, size 0x124, virtual false, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* GetSerializedValue(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  obj) ;

static inline ::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty* New_ctor(::System::Reflection::PropertyInfo*  property, ::Firebase::Firestore::FirestorePropertyAttribute*  attribute) ;

/// @brief Method SetValue, addr 0x1916a44, size 0x12c, virtual false, abstract: false, final false
inline void SetValue(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value, ::System::Object*  target) ;

constexpr ::StringW const& __cordl_internal_get_FirestoreName() const;

constexpr ::StringW& __cordl_internal_get_FirestoreName() ;

constexpr ::Firebase::Firestore::Converters::IFirestoreInternalConverter* const& __cordl_internal_get__converter() const;

constexpr ::Firebase::Firestore::Converters::IFirestoreInternalConverter*& __cordl_internal_get__converter() ;

constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get__propertyInfo() const;

constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get__propertyInfo() ;

constexpr ::Firebase::Firestore::FieldValueProxy* const& __cordl_internal_get__sentinelValue() const;

constexpr ::Firebase::Firestore::FieldValueProxy*& __cordl_internal_get__sentinelValue() ;

constexpr void __cordl_internal_set_FirestoreName(::StringW  value) ;

constexpr void __cordl_internal_set__converter(::Firebase::Firestore::Converters::IFirestoreInternalConverter*  value) ;

constexpr void __cordl_internal_set__propertyInfo(::System::Reflection::PropertyInfo*  value) ;

constexpr void __cordl_internal_set__sentinelValue(::Firebase::Firestore::FieldValueProxy*  value) ;

/// @brief Method .ctor, addr 0x19161ec, size 0x2d8, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::PropertyInfo*  property, ::Firebase::Firestore::FirestorePropertyAttribute*  attribute) ;

/// @brief Method get_CanRead, addr 0x19165b0, size 0x24, virtual false, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite, addr 0x19165d4, size 0x24, virtual false, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_IsNullableValue, addr 0x19164c4, size 0xec, virtual false, abstract: false, final false
inline bool get_IsNullableValue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributedTypeConverter_AttributedProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter_AttributedProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributedTypeConverter_AttributedProperty(AttributedTypeConverter_AttributedProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter_AttributedProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributedTypeConverter_AttributedProperty(AttributedTypeConverter_AttributedProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11180};

/// @brief Field _propertyInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::PropertyInfo*  ____propertyInfo;

/// @brief Field _sentinelValue, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::FieldValueProxy*  ____sentinelValue;

/// @brief Field _converter, offset: 0x20, size: 0x8, def value: None
 ::Firebase::Firestore::Converters::IFirestoreInternalConverter*  ____converter;

/// @brief Field FirestoreName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___FirestoreName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty, ____propertyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty, ____sentinelValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty, ____converter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty, ___FirestoreName) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AttributedTypeConverter/<AttributedTypeConverter>c__AnonStorey0
class CORDL_TYPE AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field firestoreName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_firestoreName, put=__cordl_internal_set_firestoreName)) ::StringW  firestoreName;

static inline ::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_firestoreName() const;

constexpr ::StringW& __cordl_internal_get_firestoreName() ;

constexpr void __cordl_internal_set_firestoreName(::StringW  value) ;

/// @brief Method <>m__0, addr 0x19170bc, size 0x24, virtual false, abstract: false, final false
inline bool __m__0(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*  p) ;

/// @brief Method .ctor, addr 0x19161e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0(AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0(AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11181};

/// @brief Field firestoreName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___firestoreName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0, ___firestoreName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AttributedTypeConverter/<CreateObjectCreator>c__AnonStorey1
class CORDL_TYPE AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1 : public ::System::Object {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1* New_ctor() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method <>m__0, addr 0x19170e0, size 0xc, virtual false, abstract: false, final false
inline ::System::Object* __m__0() ;

/// @brief Method .ctor, addr 0x19165f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1(AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1(AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11182};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AttributedTypeConverter/<CreateObjectCreator>c__AnonStorey2
class CORDL_TYPE AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2 : public ::System::Object {
public:
// Declarations
/// @brief Field ctor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ctor, put=__cordl_internal_set_ctor)) ::System::Reflection::ConstructorInfo*  ctor;

static inline ::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2* New_ctor() ;

constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get_ctor() const;

constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get_ctor() ;

constexpr void __cordl_internal_set_ctor(::System::Reflection::ConstructorInfo*  value) ;

/// @brief Method <>m__0, addr 0x19170ec, size 0xd4, virtual false, abstract: false, final false
inline ::System::Object* __m__0() ;

/// @brief Method .ctor, addr 0x1916600, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2(AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2(AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11183};

/// @brief Field ctor, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::ConstructorInfo*  ___ctor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2, ___ctor) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
// Dependencies Firebase.Firestore.Converters.MapConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AttributedTypeConverter
class CORDL_TYPE AttributedTypeConverter : public ::Firebase::Firestore::Converters::MapConverterBase {
public:
// Declarations
using AttributedProperty = ::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty;

using _AttributedTypeConverter_c__AnonStorey0 = ::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0;

using _CreateObjectCreator_c__AnonStorey1 = ::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1;

using _CreateObjectCreator_c__AnonStorey2 = ::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*  __f__am$cache0;

/// @brief Field _attribute, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__attribute, put=__cordl_internal_set__attribute)) ::Firebase::Firestore::FirestoreDataAttribute*  _attribute;

/// @brief Field _createInstance, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__createInstance, put=__cordl_internal_set__createInstance)) ::System::Func_1<::System::Object*>*  _createInstance;

/// @brief Field _readableProperties, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__readableProperties, put=__cordl_internal_set__readableProperties)) ::System::Collections::Generic::List_1<::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*  _readableProperties;

/// @brief Field _writableProperties, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__writableProperties, put=__cordl_internal_set__writableProperties)) ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*  _writableProperties;

/// @brief Method CreateObjectCreator, addr 0x1915f94, size 0x250, virtual false, abstract: false, final false
static inline ::System::Func_1<::System::Object*>* CreateObjectCreator(::System::Type*  type) ;

/// @brief Method DeserializeMap, addr 0x1916608, size 0x43c, virtual true, abstract: false, final false
inline ::System::Object* DeserializeMap(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  mapValue) ;

/// @brief Method ForType, addr 0x1913518, size 0x1b0, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* ForType(::System::Type*  targetType) ;

static inline ::Firebase::Firestore::Converters::AttributedTypeConverter* New_ctor(::System::Type*  targetType, ::Firebase::Firestore::FirestoreDataAttribute*  attribute) ;

/// @brief Method SerializeMap, addr 0x1916d64, size 0x200, virtual true, abstract: false, final false
inline void SerializeMap(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value, ::System::Collections::Generic::IDictionary_2<::StringW,::Firebase::Firestore::FieldValueProxy*>*  map) ;

/// @brief Method <CreateObjectCreator>m__0, addr 0x1917088, size 0x34, virtual false, abstract: false, final false
static inline bool _CreateObjectCreator_m__0(::System::Reflection::ConstructorInfo*  c) ;

constexpr ::Firebase::Firestore::FirestoreDataAttribute* const& __cordl_internal_get__attribute() const;

constexpr ::Firebase::Firestore::FirestoreDataAttribute*& __cordl_internal_get__attribute() ;

constexpr ::System::Func_1<::System::Object*>* const& __cordl_internal_get__createInstance() const;

constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get__createInstance() ;

constexpr ::System::Collections::Generic::List_1<::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>* const& __cordl_internal_get__readableProperties() const;

constexpr ::System::Collections::Generic::List_1<::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*& __cordl_internal_get__readableProperties() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>* const& __cordl_internal_get__writableProperties() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*& __cordl_internal_get__writableProperties() ;

constexpr void __cordl_internal_set__attribute(::Firebase::Firestore::FirestoreDataAttribute*  value) ;

constexpr void __cordl_internal_set__createInstance(::System::Func_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__readableProperties(::System::Collections::Generic::List_1<::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*  value) ;

constexpr void __cordl_internal_set__writableProperties(::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*  value) ;

/// @brief Method .ctor, addr 0x1915984, size 0x610, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType, ::Firebase::Firestore::FirestoreDataAttribute*  attribute) ;

static inline ::System::Func_2<::System::Reflection::ConstructorInfo*,bool>* getStaticF___f__am$cache0() ;

static inline void setStaticF___f__am$cache0(::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributedTypeConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributedTypeConverter(AttributedTypeConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributedTypeConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributedTypeConverter(AttributedTypeConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11184};

/// @brief Field _writableProperties, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*  ____writableProperties;

/// @brief Field _readableProperties, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*>*  ____readableProperties;

/// @brief Field _createInstance, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<::System::Object*>*  ____createInstance;

/// @brief Field _attribute, offset: 0x30, size: 0x8, def value: None
 ::Firebase::Firestore::FirestoreDataAttribute*  ____attribute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter, ____writableProperties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter, ____readableProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter, ____createInstance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedTypeConverter, ____attribute) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AttributedTypeConverter, 0x38>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedTypeConverter*, "Firebase.Firestore.Converters", "AttributedTypeConverter");
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedTypeConverter_AttributedProperty*, "Firebase.Firestore.Converters", "AttributedTypeConverter/AttributedProperty");
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedTypeConverter__AttributedTypeConverter_c__AnonStorey0*, "Firebase.Firestore.Converters", "AttributedTypeConverter/<AttributedTypeConverter>c__AnonStorey0");
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey1*, "Firebase.Firestore.Converters", "AttributedTypeConverter/<CreateObjectCreator>c__AnonStorey1");
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedTypeConverter__CreateObjectCreator_c__AnonStorey2*, "Firebase.Firestore.Converters", "AttributedTypeConverter/<CreateObjectCreator>c__AnonStorey2");
