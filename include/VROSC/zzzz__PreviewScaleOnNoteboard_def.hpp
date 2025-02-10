#pragma once
// IWYU pragma private; include "VROSC/PreviewScaleOnNoteboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PreviewScaleOnNoteboard)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScaleNoteButtonUI;
}
namespace VROSC {
class ScaleRowUI;
}
namespace VROSC {
struct Scale;
}
// Forward declare root types
namespace VROSC {
class PreviewScaleOnNoteboard;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PreviewScaleOnNoteboard);
// Dependencies UnityEngine.MonoBehaviour, VROSC.NoteBoard::PlayAxis
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PreviewScaleOnNoteboard
class CORDL_TYPE PreviewScaleOnNoteboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Valid)) bool  Valid;

/// @brief Field _axis, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::VROSC::NoteBoard_PlayAxis  _axis;

/// @brief Field _highLightPower, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__highLightPower, put=__cordl_internal_set__highLightPower)) float_t  _highLightPower;

/// @brief Field _noteButtons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteButtons, put=__cordl_internal_set__noteButtons)) ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>  _noteButtons;

/// @brief Field _noteboard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteboard, put=__cordl_internal_set__noteboard)) ::UnityW<::VROSC::NoteBoardNoteController>  _noteboard;

/// @brief Field _scaleRow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleRow, put=__cordl_internal_set__scaleRow)) ::UnityW<::VROSC::ScaleRowUI>  _scaleRow;

/// @brief Method Awake, addr 0x1796ab0, size 0x1ec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HideAll, addr 0x1797490, size 0x210, virtual false, abstract: false, final false
inline void HideAll() ;

/// @brief Method HighlightColor, addr 0x179731c, size 0x174, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 HighlightColor() ;

/// @brief Method Hover, addr 0x1796e58, size 0x40, virtual false, abstract: false, final false
inline void Hover(::VROSC::Note  note, bool  hovering) ;

/// @brief Method LateUpdate, addr 0x1796e54, size 0x4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::PreviewScaleOnNoteboard* New_ctor() ;

/// @brief Method NotesChanged, addr 0x17970a4, size 0x24, virtual false, abstract: false, final false
inline void NotesChanged(int32_t  axis, ::VROSC::Scale  scale) ;

/// @brief Method OnDestroy, addr 0x1796c9c, size 0x1b8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x17976a4, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17976a0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShouldHighlight, addr 0x1797234, size 0xe8, virtual false, abstract: false, final false
inline bool ShouldHighlight(::VROSC::NoteFieldNoteData*  data, ::VROSC::Note  note) ;

/// @brief Method ShowNote, addr 0x1796e98, size 0x20c, virtual false, abstract: false, final false
inline void ShowNote(::VROSC::Note  note, bool  hovering) ;

/// @brief Method UpdateNoteTexts, addr 0x17970c8, size 0x16c, virtual false, abstract: false, final false
inline void UpdateNoteTexts() ;

constexpr ::VROSC::NoteBoard_PlayAxis const& __cordl_internal_get__axis() const;

constexpr ::VROSC::NoteBoard_PlayAxis& __cordl_internal_get__axis() ;

constexpr float_t const& __cordl_internal_get__highLightPower() const;

constexpr float_t& __cordl_internal_get__highLightPower() ;

constexpr ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*> const& __cordl_internal_get__noteButtons() const;

constexpr ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>& __cordl_internal_get__noteButtons() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__noteboard() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__noteboard() ;

constexpr ::UnityW<::VROSC::ScaleRowUI> const& __cordl_internal_get__scaleRow() const;

constexpr ::UnityW<::VROSC::ScaleRowUI>& __cordl_internal_get__scaleRow() ;

constexpr void __cordl_internal_set__axis(::VROSC::NoteBoard_PlayAxis  value) ;

constexpr void __cordl_internal_set__highLightPower(float_t  value) ;

constexpr void __cordl_internal_set__noteButtons(::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>  value) ;

constexpr void __cordl_internal_set__noteboard(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__scaleRow(::UnityW<::VROSC::ScaleRowUI>  value) ;

/// @brief Method .ctor, addr 0x17976a8, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Valid, addr 0x1796a28, size 0x88, virtual false, abstract: false, final false
inline bool get_Valid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreviewScaleOnNoteboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreviewScaleOnNoteboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PreviewScaleOnNoteboard(PreviewScaleOnNoteboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreviewScaleOnNoteboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreviewScaleOnNoteboard(PreviewScaleOnNoteboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1352};

/// @brief Field _noteboard, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____noteboard;

/// @brief Field _scaleRow, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleRowUI>  ____scaleRow;

/// @brief Field _axis, offset: 0x30, size: 0x4, def value: None
 ::VROSC::NoteBoard_PlayAxis  ____axis;

/// @brief Field _highLightPower, offset: 0x34, size: 0x4, def value: None
 float_t  ____highLightPower;

/// @brief Field _noteButtons, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::ScaleNoteButtonUI>,::Array<::UnityW<::VROSC::ScaleNoteButtonUI>>*>  ____noteButtons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PreviewScaleOnNoteboard, ____noteboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewScaleOnNoteboard, ____scaleRow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewScaleOnNoteboard, ____axis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewScaleOnNoteboard, ____highLightPower) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::PreviewScaleOnNoteboard, ____noteButtons) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PreviewScaleOnNoteboard, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PreviewScaleOnNoteboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PreviewScaleOnNoteboard*, "VROSC", "PreviewScaleOnNoteboard");
