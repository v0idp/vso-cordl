#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/AttributedIdAssigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AttributedIdAssigner)
namespace Firebase::Firestore {
class DocumentReference;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class AttributedIdAssigner;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::AttributedIdAssigner);
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.AttributedIdAssigner
class CORDL_TYPE AttributedIdAssigner : public ::System::Object {
public:
// Declarations
/// @brief Field _idProperties, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__idProperties, put=__cordl_internal_set__idProperties)) ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  _idProperties;

/// @brief Field _referenceProperties, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__referenceProperties, put=__cordl_internal_set__referenceProperties)) ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  _referenceProperties;

/// @brief Field s_assigners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_assigners, put=setStaticF_s_assigners)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>*  s_assigners;

/// @brief Method AssignId, addr 0x19171ec, size 0x260, virtual false, abstract: false, final false
inline void AssignId(::System::Object*  value, ::Firebase::Firestore::DocumentReference*  reference) ;

/// @brief Method MaybeAssignId, addr 0x1916b70, size 0x1f4, virtual false, abstract: false, final false
static inline void MaybeAssignId(::System::Object*  value, ::Firebase::Firestore::DocumentReference*  reference) ;

/// @brief Method MaybeCreateAssigner, addr 0x191746c, size 0x6f8, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Converters::AttributedIdAssigner* MaybeCreateAssigner(::System::Type*  type) ;

static inline ::Firebase::Firestore::Converters::AttributedIdAssigner* New_ctor(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  idProperties, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  referenceProperties) ;

constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* const& __cordl_internal_get__idProperties() const;

constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*& __cordl_internal_get__idProperties() ;

constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* const& __cordl_internal_get__referenceProperties() const;

constexpr ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*& __cordl_internal_get__referenceProperties() ;

constexpr void __cordl_internal_set__idProperties(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  value) ;

constexpr void __cordl_internal_set__referenceProperties(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  value) ;

/// @brief Method .ctor, addr 0x19171c0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  idProperties, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  referenceProperties) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>* getStaticF_s_assigners() ;

static inline void setStaticF_s_assigners(::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::AttributedIdAssigner*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributedIdAssigner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributedIdAssigner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributedIdAssigner(AttributedIdAssigner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributedIdAssigner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributedIdAssigner(AttributedIdAssigner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11185};

/// @brief Field _idProperties, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  ____idProperties;

/// @brief Field _referenceProperties, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  ____referenceProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::AttributedIdAssigner, ____idProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::Converters::AttributedIdAssigner, ____referenceProperties) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::AttributedIdAssigner, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::AttributedIdAssigner);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AttributedIdAssigner*, "Firebase.Firestore.Converters", "AttributedIdAssigner");
