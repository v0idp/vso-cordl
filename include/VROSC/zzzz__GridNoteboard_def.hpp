#pragma once
// IWYU pragma private; include "VROSC/GridNoteboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__NoteBoardNoteController_def.hpp"
CORDL_MODULE_EXPORT(GridNoteboard)
namespace System {
class Object;
}
namespace VROSC {
class NoteFieldParameters;
}
// Forward declare root types
namespace VROSC {
class GridNoteboard;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GridNoteboard);
// Dependencies VROSC.NoteBoardNoteController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GridNoteboard
class CORDL_TYPE GridNoteboard : public ::VROSC::NoteBoardNoteController {
public:
// Declarations
 __declspec(property(get=get_NoteBoardNotes, put=set_NoteBoardNotes)) ::System::Object*  NoteBoardNotes;

/// @brief Field <NoteBoardNotes>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__NoteBoardNotes_k__BackingField, put=__cordl_internal_set__NoteBoardNotes_k__BackingField)) ::System::Object*  _NoteBoardNotes_k__BackingField;

/// @brief Method ClearNotefield, addr 0x17b26b0, size 0x68, virtual true, abstract: false, final false
inline void ClearNotefield() ;

static inline ::VROSC::GridNoteboard* New_ctor() ;

/// @brief Method SetupNoteNeighbours, addr 0x17b2e30, size 0x118, virtual false, abstract: false, final false
inline void SetupNoteNeighbours() ;

/// @brief Method UpdateNoteboard, addr 0x17b2910, size 0x3f8, virtual true, abstract: false, final false
inline void UpdateNoteboard(::VROSC::NoteFieldParameters*  parameters) ;

constexpr ::System::Object* const& __cordl_internal_get__NoteBoardNotes_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__NoteBoardNotes_k__BackingField() ;

constexpr void __cordl_internal_set__NoteBoardNotes_k__BackingField(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x17b374c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NoteBoardNotes, addr 0x17b26a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_NoteBoardNotes() ;

/// @brief Method set_NoteBoardNotes, addr 0x17b26a0, size 0x8, virtual false, abstract: false, final false
inline void set_NoteBoardNotes(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridNoteboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridNoteboard(GridNoteboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridNoteboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridNoteboard(GridNoteboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1444};

/// @brief Field <NoteBoardNotes>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  ____NoteBoardNotes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GridNoteboard, ____NoteBoardNotes_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GridNoteboard, 0x88>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GridNoteboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GridNoteboard*, "VROSC", "GridNoteboard");
