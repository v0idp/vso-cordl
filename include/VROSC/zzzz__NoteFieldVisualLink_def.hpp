#pragma once
// IWYU pragma private; include "VROSC/NoteFieldVisualLink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__NoteFieldVisualSelector_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldVisualLink)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteBoardNoteAnimator;
}
namespace VROSC {
class NoteBoardNoteText;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
class NoteFieldVisual;
}
namespace VROSC {
class NoteMeshChangerController;
}
// Forward declare root types
namespace VROSC {
class NoteFieldVisualLink;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldVisualLink);
// Dependencies VROSC.NoteFieldVisualSelector
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldVisualLink
class CORDL_TYPE NoteFieldVisualLink : public ::VROSC::NoteFieldVisualSelector {
public:
// Declarations
 __declspec(property(get=get_Animator)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  Animator;

 __declspec(property(get=get_MeshChangerController)) ::UnityW<::VROSC::NoteMeshChangerController>  MeshChangerController;

 __declspec(property(get=get_TextDisplay)) ::UnityW<::VROSC::NoteBoardNoteText>  TextDisplay;

/// @brief Field _visual, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::UnityW<::VROSC::NoteFieldVisual>  _visual;

/// @brief Method FindReferences, addr 0x17b838c, size 0x54, virtual false, abstract: false, final false
inline void FindReferences() ;

/// @brief Method Init, addr 0x17b835c, size 0x18, virtual true, abstract: false, final false
inline void Init(::VROSC::NoteBoardNote*  note, ::UnityEngine::Vector3  noteScale, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

static inline ::VROSC::NoteFieldVisualLink* New_ctor() ;

/// @brief Method UpdateVisuals, addr 0x17b8374, size 0x18, virtual true, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::UnityW<::VROSC::NoteFieldVisual> const& __cordl_internal_get__visual() const;

constexpr ::UnityW<::VROSC::NoteFieldVisual>& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set__visual(::UnityW<::VROSC::NoteFieldVisual>  value) ;

/// @brief Method .ctor, addr 0x17b83e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0x17b832c, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteAnimator> get_Animator() ;

/// @brief Method get_MeshChangerController, addr 0x17b8344, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteMeshChangerController> get_MeshChangerController() ;

/// @brief Method get_TextDisplay, addr 0x17b8314, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteText> get_TextDisplay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldVisualLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisualLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldVisualLink(NoteFieldVisualLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisualLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldVisualLink(NoteFieldVisualLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1461};

/// @brief Field _visual, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldVisual>  ____visual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldVisualLink, ____visual) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldVisualLink, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldVisualLink);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldVisualLink*, "VROSC", "NoteFieldVisualLink");
