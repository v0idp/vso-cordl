#pragma once
// IWYU pragma private; include "RSG/IRejectable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRejectable)
namespace System {
class Exception;
}
// Forward declare root types
namespace RSG {
class IRejectable;
}
// Write type traits
MARK_REF_PTR_T(::RSG::IRejectable);
// Dependencies 
namespace RSG {
// Is value type: false
// CS Name: RSG.IRejectable
class CORDL_TYPE IRejectable {
public:
// Declarations
/// @brief Method Reject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reject(::System::Exception*  ex) ;

// Ctor Parameters [CppParam { name: "", ty: "IRejectable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRejectable(IRejectable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RSG
NEED_NO_BOX(::RSG::IRejectable);
DEFINE_IL2CPP_ARG_TYPE(::RSG::IRejectable*, "RSG", "IRejectable");
