#pragma once
// IWYU pragma private; include "VROSC/TimelineInstrumentActivation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__TimelineActivation_def.hpp"
CORDL_MODULE_EXPORT(TimelineInstrumentActivation)
namespace VROSC {
class NoteBoardNoteController;
}
// Forward declare root types
namespace VROSC {
class TimelineInstrumentActivation;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TimelineInstrumentActivation);
// Dependencies VROSC.TimelineActivation
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TimelineInstrumentActivation
class CORDL_TYPE TimelineInstrumentActivation : public ::VROSC::TimelineActivation {
public:
// Declarations
/// @brief Field _hideAllNotesAtStart, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideAllNotesAtStart, put=__cordl_internal_set__hideAllNotesAtStart)) bool  _hideAllNotesAtStart;

/// @brief Field _noteboardControlller, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteboardControlller, put=__cordl_internal_set__noteboardControlller)) ::UnityW<::VROSC::NoteBoardNoteController>  _noteboardControlller;

/// @brief Method HideNotes, addr 0x1771068, size 0x1ac, virtual false, abstract: false, final false
inline void HideNotes() ;

static inline ::VROSC::TimelineInstrumentActivation* New_ctor() ;

/// @brief Method OnActivateStart, addr 0x1771064, size 0x4, virtual true, abstract: false, final false
inline void OnActivateStart() ;

constexpr bool const& __cordl_internal_get__hideAllNotesAtStart() const;

constexpr bool& __cordl_internal_get__hideAllNotesAtStart() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__noteboardControlller() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__noteboardControlller() ;

constexpr void __cordl_internal_set__hideAllNotesAtStart(bool  value) ;

constexpr void __cordl_internal_set__noteboardControlller(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

/// @brief Method .ctor, addr 0x1771214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimelineInstrumentActivation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimelineInstrumentActivation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelineInstrumentActivation(TimelineInstrumentActivation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelineInstrumentActivation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelineInstrumentActivation(TimelineInstrumentActivation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1247};

/// @brief Field _noteboardControlller, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____noteboardControlller;

/// @brief Field _hideAllNotesAtStart, offset: 0x48, size: 0x1, def value: None
 bool  ____hideAllNotesAtStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TimelineInstrumentActivation, ____noteboardControlller) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TimelineInstrumentActivation, ____hideAllNotesAtStart) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TimelineInstrumentActivation, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TimelineInstrumentActivation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TimelineInstrumentActivation*, "VROSC", "TimelineInstrumentActivation");
