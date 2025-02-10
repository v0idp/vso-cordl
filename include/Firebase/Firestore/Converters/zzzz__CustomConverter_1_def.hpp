#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/CustomConverter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__IFirestoreInternalConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomConverter_1)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
template<typename T>
class FirestoreConverter_1;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
template<typename T>
class CustomConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Firestore::Converters::CustomConverter_1);
// Dependencies Firebase.Firestore.Converters.IFirestoreInternalConverter, System.Object
namespace Firebase::Firestore::Converters {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Firestore.Converters.CustomConverter`1<T>
class CORDL_TYPE CustomConverter_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _wrappedConverter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__wrappedConverter, put=__cordl_internal_set__wrappedConverter)) ::Firebase::Firestore::FirestoreConverter_1<T>*  _wrappedConverter;

/// @brief Convert operator to "::Firebase::Firestore::Converters::IFirestoreInternalConverter"
constexpr operator  ::Firebase::Firestore::Converters::IFirestoreInternalConverter*() noexcept;

/// @brief Method DeserializeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* DeserializeValue(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  value) ;

static inline ::Firebase::Firestore::Converters::CustomConverter_1<T>* New_ctor(::Firebase::Firestore::FirestoreConverter_1<T>*  wrappedConverter) ;

/// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

constexpr ::Firebase::Firestore::FirestoreConverter_1<T>* const& __cordl_internal_get__wrappedConverter() const;

constexpr ::Firebase::Firestore::FirestoreConverter_1<T>*& __cordl_internal_get__wrappedConverter() ;

constexpr void __cordl_internal_set__wrappedConverter(::Firebase::Firestore::FirestoreConverter_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::FirestoreConverter_1<T>*  wrappedConverter) ;

/// @brief Convert to "::Firebase::Firestore::Converters::IFirestoreInternalConverter"
constexpr ::Firebase::Firestore::Converters::IFirestoreInternalConverter* i___Firebase__Firestore__Converters__IFirestoreInternalConverter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomConverter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomConverter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomConverter_1(CustomConverter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomConverter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomConverter_1(CustomConverter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11177};

/// @brief Field _wrappedConverter, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::FirestoreConverter_1<T>*  ____wrappedConverter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore::Converters
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Converters::CustomConverter_1, "Firebase.Firestore.Converters", "CustomConverter`1");
