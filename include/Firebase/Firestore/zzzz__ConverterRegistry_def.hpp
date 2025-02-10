#pragma once
// IWYU pragma private; include "Firebase/Firestore/ConverterRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConverterRegistry)
namespace Firebase::Firestore::Converters {
class IFirestoreInternalConverter;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore {
class ConverterRegistry;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::ConverterRegistry);
// Dependencies System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.ConverterRegistry
class CORDL_TYPE ConverterRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field _converters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__converters, put=__cordl_internal_set__converters)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  _converters;

/// @brief Method ToConverterDictionary, addr 0x190ec94, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* ToConverterDictionary() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* const& __cordl_internal_get__converters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*& __cordl_internal_get__converters() ;

constexpr void __cordl_internal_set__converters(::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterRegistry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterRegistry(ConverterRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterRegistry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterRegistry(ConverterRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11188};

/// @brief Field _converters, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*  ____converters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::ConverterRegistry, ____converters) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::ConverterRegistry, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::ConverterRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ConverterRegistry*, "Firebase.Firestore", "ConverterRegistry");
