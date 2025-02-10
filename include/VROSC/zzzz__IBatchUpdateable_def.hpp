#pragma once
// IWYU pragma private; include "VROSC/IBatchUpdateable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBatchUpdateable)
// Forward declare root types
namespace VROSC {
class IBatchUpdateable;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IBatchUpdateable);
// Dependencies 
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IBatchUpdateable
class CORDL_TYPE IBatchUpdateable {
public:
// Declarations
/// @brief Method UpdateObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool UpdateObject() ;

// Ctor Parameters [CppParam { name: "", ty: "IBatchUpdateable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBatchUpdateable(IBatchUpdateable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IBatchUpdateable);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IBatchUpdateable*, "VROSC", "IBatchUpdateable");
