#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNoteText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteBoardNoteText)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class TextMesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
struct NoteBoard_PlayAxis;
}
// Forward declare root types
namespace VROSC {
class NoteBoardNoteText;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteBoardNoteText);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNoteText
class CORDL_TYPE NoteBoardNoteText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _normalized, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__normalized, put=__cordl_internal_set__normalized)) bool  _normalized;

/// @brief Field _note, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::UnityW<::VROSC::NoteBoardNote>  _note;

/// @brief Field _size, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

/// @brief Field _text, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::UnityEngine::TextMesh>  _text;

/// @brief Field _textStartPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__textStartPosition, put=__cordl_internal_set__textStartPosition)) ::UnityEngine::Vector3  _textStartPosition;

/// @brief Field _textTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__textTransform, put=__cordl_internal_set__textTransform)) ::UnityW<::UnityEngine::Transform>  _textTransform;

/// @brief Method Awake, addr 0x17b1ac4, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetTextByAxis, addr 0x17b1e30, size 0x11c, virtual false, abstract: false, final false
inline ::StringW GetTextByAxis(::VROSC::NoteBoard_PlayAxis  axis) ;

/// @brief Method GetTextColor, addr 0x17b1f4c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetTextColor(::VROSC::NoteBoard_PlayAxis  axis) ;

static inline ::VROSC::NoteBoardNoteText* New_ctor() ;

/// @brief Method Normalize, addr 0x17b1d68, size 0xc8, virtual false, abstract: false, final false
inline void Normalize() ;

/// @brief Method OnDrawGizmosSelected, addr 0x17b1fa4, size 0x5c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x17b1b14, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetText, addr 0x17b1ba0, size 0x70, virtual false, abstract: false, final false
inline void SetText(bool  active, ::VROSC::NoteBoard_PlayAxis  axis, bool  colorize) ;

/// @brief Method Setup, addr 0x17b1b40, size 0x60, virtual false, abstract: false, final false
inline void Setup(::VROSC::NoteBoardNote*  note, ::UnityEngine::Vector3  noteScale) ;

/// @brief Method UpdateText, addr 0x17b1c10, size 0x158, virtual false, abstract: false, final false
inline void UpdateText(::VROSC::NoteBoard_PlayAxis  axis, bool  colorize) ;

constexpr bool const& __cordl_internal_get__normalized() const;

constexpr bool& __cordl_internal_get__normalized() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__note() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__note() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get__text() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__textStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__textStartPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__textTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__textTransform() ;

constexpr void __cordl_internal_set__normalized(bool  value) ;

constexpr void __cordl_internal_set__note(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::UnityEngine::TextMesh>  value) ;

constexpr void __cordl_internal_set__textStartPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__textTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x17b2000, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNoteText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNoteText(NoteBoardNoteText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNoteText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNoteText(NoteBoardNoteText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1440};

/// @brief Field _text, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ____text;

/// @brief Field _size, offset: 0x28, size: 0x4, def value: None
 float_t  ____size;

/// @brief Field _normalized, offset: 0x2c, size: 0x1, def value: None
 bool  ____normalized;

/// @brief Field _note, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____note;

/// @brief Field _textStartPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____textStartPosition;

/// @brief Field _textTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____textTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNoteText, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteText, ____size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteText, ____normalized) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteText, ____note) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteText, ____textStartPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNoteText, ____textTransform) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNoteText, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteBoardNoteText);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteText*, "VROSC", "NoteBoardNoteText");
