#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonContainerAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(JsonContainerAttribute)
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonContainerAttribute);
// Dependencies Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.TypeNameHandling, System.Attribute, System.Nullable`1<T>
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonContainerAttribute
class CORDL_TYPE JsonContainerAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_ItemConverterParameters)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  ItemConverterParameters;

 __declspec(property(get=get_ItemConverterType)) ::System::Type*  ItemConverterType;

 __declspec(property(get=get_NamingStrategyInstance, put=set_NamingStrategyInstance)) ::Newtonsoft::Json::Serialization::NamingStrategy*  NamingStrategyInstance;

 __declspec(property(get=get_NamingStrategyParameters)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  NamingStrategyParameters;

 __declspec(property(get=get_NamingStrategyType)) ::System::Type*  NamingStrategyType;

/// @brief Field <ItemConverterParameters>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ItemConverterParameters_k__BackingField, put=__cordl_internal_set__ItemConverterParameters_k__BackingField)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _ItemConverterParameters_k__BackingField;

/// @brief Field <ItemConverterType>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ItemConverterType_k__BackingField, put=__cordl_internal_set__ItemConverterType_k__BackingField)) ::System::Type*  _ItemConverterType_k__BackingField;

/// @brief Field <NamingStrategyInstance>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__NamingStrategyInstance_k__BackingField, put=__cordl_internal_set__NamingStrategyInstance_k__BackingField)) ::Newtonsoft::Json::Serialization::NamingStrategy*  _NamingStrategyInstance_k__BackingField;

/// @brief Field _isReference, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get__isReference, put=__cordl_internal_set__isReference)) ::System::Nullable_1<bool>  _isReference;

/// @brief Field _itemIsReference, offset 0x2a, size 0x2 
 __declspec(property(get=__cordl_internal_get__itemIsReference, put=__cordl_internal_set__itemIsReference)) ::System::Nullable_1<bool>  _itemIsReference;

/// @brief Field _itemReferenceLoopHandling, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemReferenceLoopHandling, put=__cordl_internal_set__itemReferenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  _itemReferenceLoopHandling;

/// @brief Field _itemTypeNameHandling, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemTypeNameHandling, put=__cordl_internal_set__itemTypeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  _itemTypeNameHandling;

/// @brief Field _namingStrategyParameters, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__namingStrategyParameters, put=__cordl_internal_set__namingStrategyParameters)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _namingStrategyParameters;

/// @brief Field _namingStrategyType, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__namingStrategyType, put=__cordl_internal_set__namingStrategyType)) ::System::Type*  _namingStrategyType;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __cordl_internal_get__ItemConverterParameters_k__BackingField() const;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __cordl_internal_get__ItemConverterParameters_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ItemConverterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ItemConverterType_k__BackingField() ;

constexpr ::Newtonsoft::Json::Serialization::NamingStrategy* const& __cordl_internal_get__NamingStrategyInstance_k__BackingField() const;

constexpr ::Newtonsoft::Json::Serialization::NamingStrategy*& __cordl_internal_get__NamingStrategyInstance_k__BackingField() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__isReference() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__isReference() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__itemIsReference() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__itemIsReference() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__itemReferenceLoopHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__itemReferenceLoopHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__itemTypeNameHandling() const;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__itemTypeNameHandling() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __cordl_internal_get__namingStrategyParameters() const;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __cordl_internal_get__namingStrategyParameters() ;

constexpr ::System::Type* const& __cordl_internal_get__namingStrategyType() const;

constexpr ::System::Type*& __cordl_internal_get__namingStrategyType() ;

constexpr void __cordl_internal_set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr void __cordl_internal_set__ItemConverterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__NamingStrategyInstance_k__BackingField(::Newtonsoft::Json::Serialization::NamingStrategy*  value) ;

constexpr void __cordl_internal_set__isReference(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__itemIsReference(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  value) ;

constexpr void __cordl_internal_set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  value) ;

constexpr void __cordl_internal_set__namingStrategyParameters(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr void __cordl_internal_set__namingStrategyType(::System::Type*  value) ;

/// @brief Method get_ItemConverterParameters, addr 0x27cbec0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> get_ItemConverterParameters() ;

/// @brief Method get_ItemConverterType, addr 0x27cbeb8, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ItemConverterType() ;

/// @brief Method get_NamingStrategyInstance, addr 0x27cbed8, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategyInstance() ;

/// @brief Method get_NamingStrategyParameters, addr 0x27cbed0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> get_NamingStrategyParameters() ;

/// @brief Method get_NamingStrategyType, addr 0x27cbec8, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_NamingStrategyType() ;

/// @brief Method set_NamingStrategyInstance, addr 0x27cbee0, size 0x8, virtual false, abstract: false, final false
inline void set_NamingStrategyInstance(::Newtonsoft::Json::Serialization::NamingStrategy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonContainerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonContainerAttribute(JsonContainerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonContainerAttribute(JsonContainerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9661};

/// @brief Field <ItemConverterType>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ____ItemConverterType_k__BackingField;

/// @brief Field <ItemConverterParameters>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Object*,::Array<::System::Object*>*>  ____ItemConverterParameters_k__BackingField;

/// @brief Field <NamingStrategyInstance>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Serialization::NamingStrategy*  ____NamingStrategyInstance_k__BackingField;

/// @brief Field _isReference, offset: 0x28, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____isReference;

/// @brief Field _itemIsReference, offset: 0x2a, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____itemIsReference;

/// @brief Field _itemReferenceLoopHandling, offset: 0x2c, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  ____itemReferenceLoopHandling;

/// @brief Field _itemTypeNameHandling, offset: 0x34, size: 0x8, def value: None
 ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  ____itemTypeNameHandling;

/// @brief Field _namingStrategyType, offset: 0x40, size: 0x8, def value: None
 ::System::Type*  ____namingStrategyType;

/// @brief Field _namingStrategyParameters, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::System::Object*,::Array<::System::Object*>*>  ____namingStrategyParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____ItemConverterParameters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____NamingStrategyInstance_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____isReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemIsReference) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemReferenceLoopHandling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____itemTypeNameHandling) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____namingStrategyType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonContainerAttribute, ____namingStrategyParameters) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonContainerAttribute, 0x50>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonContainerAttribute*, "Newtonsoft.Json", "JsonContainerAttribute");
