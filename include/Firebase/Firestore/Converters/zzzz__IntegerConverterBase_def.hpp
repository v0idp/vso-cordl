#pragma once
// IWYU pragma private; include "Firebase/Firestore/Converters/IntegerConverterBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/Converters/zzzz__ConverterBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IntegerConverterBase)
namespace Firebase::Firestore {
class DeserializationContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Firebase::Firestore::Converters {
class IntegerConverterBase;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Converters::IntegerConverterBase);
// Dependencies Firebase.Firestore.Converters.ConverterBase
namespace Firebase::Firestore::Converters {
// Is value type: false
// CS Name: Firebase.Firestore.Converters.IntegerConverterBase
class CORDL_TYPE IntegerConverterBase : public ::Firebase::Firestore::Converters::ConverterBase {
public:
// Declarations
/// @brief Method DeserializeDouble, addr 0x190f200, size 0x98, virtual true, abstract: false, final false
inline ::System::Object* DeserializeDouble(::Firebase::Firestore::DeserializationContext*  context, double_t  value) ;

static inline ::Firebase::Firestore::Converters::IntegerConverterBase* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor, addr 0x190f1d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntegerConverterBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntegerConverterBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntegerConverterBase(IntegerConverterBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntegerConverterBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntegerConverterBase(IntegerConverterBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Converters::IntegerConverterBase, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Converters
NEED_NO_BOX(::Firebase::Firestore::Converters::IntegerConverterBase);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::IntegerConverterBase*, "Firebase.Firestore.Converters", "IntegerConverterBase");
