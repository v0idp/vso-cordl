#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreDataAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/zzzz__UnknownPropertyHandling_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(FirestoreDataAttribute)
namespace Firebase::Firestore {
struct UnknownPropertyHandling;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore {
class FirestoreDataAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::FirestoreDataAttribute);
// Dependencies Firebase.Firestore.UnknownPropertyHandling, System.Attribute
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreDataAttribute
class CORDL_TYPE FirestoreDataAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_ConverterType)) ::System::Type*  ConverterType;

 __declspec(property(get=get_UnknownPropertyHandling)) ::Firebase::Firestore::UnknownPropertyHandling  UnknownPropertyHandling;

/// @brief Field <ConverterType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConverterType_k__BackingField, put=__cordl_internal_set__ConverterType_k__BackingField)) ::System::Type*  _ConverterType_k__BackingField;

/// @brief Field <UnknownPropertyHandling>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__UnknownPropertyHandling_k__BackingField, put=__cordl_internal_set__UnknownPropertyHandling_k__BackingField)) ::Firebase::Firestore::UnknownPropertyHandling  _UnknownPropertyHandling_k__BackingField;

constexpr ::System::Type* const& __cordl_internal_get__ConverterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ConverterType_k__BackingField() ;

constexpr ::Firebase::Firestore::UnknownPropertyHandling const& __cordl_internal_get__UnknownPropertyHandling_k__BackingField() const;

constexpr ::Firebase::Firestore::UnknownPropertyHandling& __cordl_internal_get__UnknownPropertyHandling_k__BackingField() ;

constexpr void __cordl_internal_set__ConverterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__UnknownPropertyHandling_k__BackingField(::Firebase::Firestore::UnknownPropertyHandling  value) ;

/// @brief Method get_ConverterType, addr 0x191a470, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ConverterType() ;

/// @brief Method get_UnknownPropertyHandling, addr 0x191a468, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Firestore::UnknownPropertyHandling get_UnknownPropertyHandling() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreDataAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreDataAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreDataAttribute(FirestoreDataAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreDataAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreDataAttribute(FirestoreDataAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11208};

/// @brief Field <UnknownPropertyHandling>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Firebase::Firestore::UnknownPropertyHandling  ____UnknownPropertyHandling_k__BackingField;

/// @brief Field <ConverterType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____ConverterType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirestoreDataAttribute, ____UnknownPropertyHandling_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::FirestoreDataAttribute, ____ConverterType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreDataAttribute, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::FirestoreDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreDataAttribute*, "Firebase.Firestore", "FirestoreDataAttribute");
