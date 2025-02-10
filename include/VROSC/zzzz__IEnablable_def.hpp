#pragma once
// IWYU pragma private; include "VROSC/IEnablable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEnablable)
// Forward declare root types
namespace VROSC {
class IEnablable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IEnablable);
// Dependencies 
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IEnablable
class CORDL_TYPE IEnablable {
public:
// Declarations
 __declspec(property(get=get_Enabled)) bool  Enabled;

/// @brief Method get_Enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Enabled() ;

// Ctor Parameters [CppParam { name: "", ty: "IEnablable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnablable(IEnablable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{618};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IEnablable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IEnablable*, "VROSC", "IEnablable");
