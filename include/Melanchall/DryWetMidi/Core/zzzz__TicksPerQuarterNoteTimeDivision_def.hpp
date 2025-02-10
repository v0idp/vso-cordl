#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TicksPerQuarterNoteTimeDivision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__TimeDivision_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TicksPerQuarterNoteTimeDivision)
namespace System {
class Object;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class TicksPerQuarterNoteTimeDivision;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision);
// Dependencies Melanchall.DryWetMidi.Core.TimeDivision
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.TicksPerQuarterNoteTimeDivision
class CORDL_TYPE TicksPerQuarterNoteTimeDivision : public ::Melanchall::DryWetMidi::Core::TimeDivision {
public:
// Declarations
 __declspec(property(get=get_TicksPerQuarterNote)) int16_t  TicksPerQuarterNote;

/// @brief Field <TicksPerQuarterNote>k__BackingField, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get__TicksPerQuarterNote_k__BackingField, put=__cordl_internal_set__TicksPerQuarterNote_k__BackingField)) int16_t  _TicksPerQuarterNote_k__BackingField;

/// @brief Method Equals, addr 0x25a4de0, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x25a4e6c, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision* New_ctor() ;

static inline ::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision* New_ctor(int16_t  ticksPerQuarterNote) ;

/// @brief Method ToInt16, addr 0x25a4d54, size 0x8, virtual true, abstract: false, final false
inline int16_t ToInt16() ;

/// @brief Method ToString, addr 0x25a4d5c, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int16_t const& __cordl_internal_get__TicksPerQuarterNote_k__BackingField() const;

constexpr int16_t& __cordl_internal_get__TicksPerQuarterNote_k__BackingField() ;

constexpr void __cordl_internal_set__TicksPerQuarterNote_k__BackingField(int16_t  value) ;

/// @brief Method .ctor, addr 0x25a3c44, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x25a4c78, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int16_t  ticksPerQuarterNote) ;

/// @brief Method get_TicksPerQuarterNote, addr 0x25a4d18, size 0x8, virtual false, abstract: false, final false
inline int16_t get_TicksPerQuarterNote() ;

/// @brief Method op_Equality, addr 0x25a4d20, size 0x34, virtual false, abstract: false, final false
static inline bool op_Equality(::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision*  timeDivision1, ::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision*  timeDivision2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TicksPerQuarterNoteTimeDivision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TicksPerQuarterNoteTimeDivision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TicksPerQuarterNoteTimeDivision(TicksPerQuarterNoteTimeDivision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TicksPerQuarterNoteTimeDivision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TicksPerQuarterNoteTimeDivision(TicksPerQuarterNoteTimeDivision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11655};

/// @brief Field <TicksPerQuarterNote>k__BackingField, offset: 0x10, size: 0x2, def value: None
 int16_t  ____TicksPerQuarterNote_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision, ____TicksPerQuarterNote_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::TicksPerQuarterNoteTimeDivision*, "Melanchall.DryWetMidi.Core", "TicksPerQuarterNoteTimeDivision");
