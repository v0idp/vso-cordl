#pragma once
// IWYU pragma private; include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IFormattable)
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class IFormattable;
}
// Write type traits
MARK_REF_PTR_T(::System::IFormattable);
// Dependencies 
namespace System {
// Is value type: false
// CS Name: System.IFormattable
class CORDL_TYPE IFormattable {
public:
// Declarations
/// @brief Method ToString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

// Ctor Parameters [CppParam { name: "", ty: "IFormattable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFormattable(IFormattable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(::System::IFormattable);
DEFINE_IL2CPP_ARG_TYPE(::System::IFormattable*, "System", "IFormattable");
