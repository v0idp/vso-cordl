#pragma once
// IWYU pragma private; include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICloneable)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class ICloneable;
}
// Write type traits
MARK_REF_PTR_T(::System::ICloneable);
// Dependencies 
namespace System {
// Is value type: false
// CS Name: System.ICloneable
class CORDL_TYPE ICloneable {
public:
// Declarations
/// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

// Ctor Parameters [CppParam { name: "", ty: "ICloneable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICloneable(ICloneable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(::System::ICloneable);
DEFINE_IL2CPP_ARG_TYPE(::System::ICloneable*, "System", "ICloneable");
