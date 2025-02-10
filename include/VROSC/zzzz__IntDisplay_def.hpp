#pragma once
// IWYU pragma private; include "VROSC/IntDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TextDisplay_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntDisplay)
namespace VROSC {
class IntNode;
}
// Forward declare root types
namespace VROSC {
class IntDisplay;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IntDisplay);
// Dependencies VROSC.TextDisplay
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IntDisplay
class CORDL_TYPE IntDisplay : public ::VROSC::TextDisplay {
public:
// Declarations
/// @brief Field _intNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__intNode, put=__cordl_internal_set__intNode)) ::UnityW<::VROSC::IntNode>  _intNode;

/// @brief Method InitDisplay, addr 0x1725fcc, size 0x110, virtual true, abstract: false, final false
inline void InitDisplay() ;

static inline ::VROSC::IntDisplay* New_ctor() ;

/// @brief Method UpdateDisplayInt, addr 0x17260dc, size 0x34, virtual false, abstract: false, final false
inline void UpdateDisplayInt(int32_t  value) ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__intNode() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__intNode() ;

constexpr void __cordl_internal_set__intNode(::UnityW<::VROSC::IntNode>  value) ;

/// @brief Method .ctor, addr 0x1726110, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntDisplay(IntDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntDisplay(IntDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1017};

/// @brief Field _intNode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____intNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntDisplay, ____intNode) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntDisplay, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IntDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntDisplay*, "VROSC", "IntDisplay");
