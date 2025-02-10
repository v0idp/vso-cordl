#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TimeDivision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeDivision)
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class TimeDivision;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TimeDivision);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TimeDivision
class CORDL_TYPE TimeDivision : public ::System::Object {
public:
// Declarations
static inline ::Melanchall::DryWetMidi::Core::TimeDivision* New_ctor() ;

/// @brief Method ToInt16, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int16_t ToInt16() ;

/// @brief Method .ctor, addr 0x25a4c70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeDivision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeDivision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeDivision(TimeDivision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeDivision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeDivision(TimeDivision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TimeDivision, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TimeDivision);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TimeDivision*, "Melanchall.DryWetMidi.Core", "TimeDivision");
