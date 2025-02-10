#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/CustomConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomConverter)
namespace Firebase::Firestore::Converters {
class IFirestoreInternalConverter;
}
namespace Firebase::Firestore {
template<typename T>
class FirestoreConverter_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class CustomConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::CustomConverter);
// Dependencies System.Object
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.CustomConverter
class CORDL_TYPE CustomConverter : public ::System::Object {
public:
// Declarations
/// @brief Field _method, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__method, put=setStaticF__method)) ::System::Reflection::MethodInfo*  _method;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* CreateInstance(::Firebase::Firestore::FirestoreConverter_1<T>*  wrappedConverter) ;

/// @brief Method ForConverterType, addr 0x1912b88, size 0x2d0, virtual false, abstract: false, final false
static inline ::Firebase::Firestore::Converters::IFirestoreInternalConverter* ForConverterType(::System::Type*  converterType, ::System::Type*  targetType) ;

static inline ::System::Reflection::MethodInfo* getStaticF__method() ;

static inline void setStaticF__method(::System::Reflection::MethodInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomConverter(CustomConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomConverter(CustomConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::CustomConverter, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::CustomConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::CustomConverter*, "Firebase.Firestore.Converters", "CustomConverter");
