#pragma once
// IWYU pragma private; include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueType)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ValueType;
}
// Write type traits
MARK_REF_PTR_T(::System::ValueType);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ValueType
class CORDL_TYPE ValueType : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueType()   {
}
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueType(ValueType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueType(ValueType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2349};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ValueType, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::ValueType);
DEFINE_IL2CPP_ARG_TYPE(::System::ValueType*, "System", "ValueType");
