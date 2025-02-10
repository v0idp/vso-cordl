#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/EnumerableConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__EnumerableConverterBase_def.hpp"
CORDL_MODULE_EXPORT(EnumerableConverter)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace Firebase::Firestore {
class FieldValueProxy;
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
class EnumerableConverter;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::EnumerableConverter);
// Dependencies Firebase.Firestore.Converters.EnumerableConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.EnumerableConverter
class CORDL_TYPE EnumerableConverter : public ::Firebase::Firestore::Converters::EnumerableConverterBase {
public:
// Declarations
/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_2<::System::Type*,bool>*  __f__am$cache0;

/// @brief Field _elementType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementType, put=__cordl_internal_set__elementType)) ::System::Type*  _elementType;

/// @brief Method DeserializeArray, addr 0x1912004, size 0x4a0, virtual true, abstract: false, final false
inline ::System::Object* DeserializeArray(::Firebase::Firestore::DeserializationContext*  context, ::Firebase::Firestore::FieldValueProxy*  arrayValue) ;

static inline ::Firebase::Firestore::Converters::EnumerableConverter* New_ctor(::System::Type*  targetType) ;

/// @brief Method <EnumerableConverter>m__0, addr 0x19124a4, size 0xc0, virtual false, abstract: false, final false
static inline bool _EnumerableConverter_m__0(::System::Type*  iface) ;

constexpr ::System::Type* const& __cordl_internal_get__elementType() const;

constexpr ::System::Type*& __cordl_internal_get__elementType() ;

constexpr void __cordl_internal_set__elementType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x1911dfc, size 0x208, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType) ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___f__am$cache0() ;

static inline void setStaticF___f__am$cache0(::System::Func_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableConverter(EnumerableConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableConverter(EnumerableConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11173};

/// @brief Field _elementType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____elementType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::Converters::EnumerableConverter, ____elementType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::EnumerableConverter, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::EnumerableConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::EnumerableConverter*, "Firebase.Firestore.Converters", "EnumerableConverter");
