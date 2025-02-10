#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/EnumerableConverterBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
CORDL_MODULE_EXPORT(EnumerableConverterBase)
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace Firebase::Firestore {
class SerializationContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class EnumerableConverterBase;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::EnumerableConverterBase);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.EnumerableConverterBase
class CORDL_TYPE EnumerableConverterBase : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
static inline ::Firebase::Firestore::Converters::EnumerableConverterBase* New_ctor(::System::Type*  targetType) ;

/// @brief Method Serialize, addr 0x19118b4, size 0x3e4, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext*  context, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x191188c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  targetType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumerableConverterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumerableConverterBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumerableConverterBase(EnumerableConverterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableConverterBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumerableConverterBase(EnumerableConverterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::EnumerableConverterBase, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::EnumerableConverterBase);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::EnumerableConverterBase*, "Firebase.Firestore.Converters", "EnumerableConverterBase");
