#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SmfConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SmfConstants)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class SmfConstants;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::SmfConstants);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.SmfConstants
class CORDL_TYPE SmfConstants : public ::System::Object {
public:
// Declarations
/// @brief Method get_DefaultTextEncoding, addr 0x25a4aa4, size 0x8, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_DefaultTextEncoding() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmfConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmfConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmfConstants(SmfConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmfConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmfConstants(SmfConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::SmfConstants, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::SmfConstants);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::SmfConstants*, "Melanchall.DryWetMidi.Core", "SmfConstants");
