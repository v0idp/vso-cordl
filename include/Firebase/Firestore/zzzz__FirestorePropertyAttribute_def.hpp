#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestorePropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirestorePropertyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirestorePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirestorePropertyAttribute);
// Dependencies System.Attribute
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestorePropertyAttribute
class CORDL_TYPE FirestorePropertyAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_ConverterType)) ::System::Type*  ConverterType;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <ConverterType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConverterType_k__BackingField, put=__cordl_internal_set__ConverterType_k__BackingField)) ::System::Type*  _ConverterType_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

constexpr ::System::Type* const& __cordl_internal_get__ConverterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ConverterType_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__ConverterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method get_ConverterType, addr 0x191a458, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ConverterType() ;

/// @brief Method get_Name, addr 0x191a450, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestorePropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestorePropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestorePropertyAttribute(FirestorePropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestorePropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestorePropertyAttribute(FirestorePropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11204};

/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field <ConverterType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____ConverterType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirestorePropertyAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirestorePropertyAttribute, ____ConverterType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestorePropertyAttribute, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirestorePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestorePropertyAttribute*, "Firebase.Firestore", "FirestorePropertyAttribute");
