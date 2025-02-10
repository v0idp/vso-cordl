#pragma once
// IWYU pragma private; include "VROSC/OorganFramePipeRow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OorganFramePipeRow)
// Forward declare root types
namespace VROSC {
class OorganFramePipeRow;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OorganFramePipeRow);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OorganFramePipeRow
class CORDL_TYPE OorganFramePipeRow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::VROSC::OorganFramePipeRow* New_ctor() ;

/// @brief Method .ctor, addr 0x17ae8bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OorganFramePipeRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OorganFramePipeRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OorganFramePipeRow(OorganFramePipeRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OorganFramePipeRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OorganFramePipeRow(OorganFramePipeRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1428};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::OorganFramePipeRow, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OorganFramePipeRow);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OorganFramePipeRow*, "VROSC", "OorganFramePipeRow");
