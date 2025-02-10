#pragma once
// IWYU pragma private; include "VROSC/NoteFieldVisual.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldVisual)
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
class NoteMeshChangerController;
}
// Forward declare root types
namespace VROSC {
class NoteFieldVisual;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldVisual);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldVisual
class CORDL_TYPE NoteFieldVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animator)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  Animator;

 __declspec(property(get=get_MeshChangerController)) ::UnityW<::VROSC::NoteMeshChangerController>  MeshChangerController;

 __declspec(property(get=get_TextDisplay)) ::UnityW<::VROSC::NoteBoardNoteText>  TextDisplay;

/// @brief Field _animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  _animator;

/// @brief Field _materialController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialController, put=__cordl_internal_set__materialController)) ::UnityW<::VROSC::NoteMeshChangerController>  _materialController;

/// @brief Field _textDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__textDisplay, put=__cordl_internal_set__textDisplay)) ::UnityW<::VROSC::NoteBoardNoteText>  _textDisplay;

/// @brief Method FindReferences, addr 0x17b8260, size 0xac, virtual false, abstract: false, final false
inline void FindReferences() ;

/// @brief Method Init, addr 0x17b7e74, size 0x130, virtual false, abstract: false, final false
inline void Init(::VROSC::NoteBoardNote*  note, ::UnityEngine::Vector3  noteScale, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

static inline ::VROSC::NoteFieldVisual* New_ctor() ;

/// @brief Method UpdateVisuals, addr 0x17b8068, size 0x28, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteAnimator> const& __cordl_internal_get__animator() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteAnimator>& __cordl_internal_get__animator() ;

constexpr ::UnityW<::VROSC::NoteMeshChangerController> const& __cordl_internal_get__materialController() const;

constexpr ::UnityW<::VROSC::NoteMeshChangerController>& __cordl_internal_get__materialController() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteText> const& __cordl_internal_get__textDisplay() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteText>& __cordl_internal_get__textDisplay() ;

constexpr void __cordl_internal_set__animator(::UnityW<::VROSC::NoteBoardNoteAnimator>  value) ;

constexpr void __cordl_internal_set__materialController(::UnityW<::VROSC::NoteMeshChangerController>  value) ;

constexpr void __cordl_internal_set__textDisplay(::UnityW<::VROSC::NoteBoardNoteText>  value) ;

/// @brief Method .ctor, addr 0x17b830c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0x17b7e64, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteAnimator> get_Animator() ;

/// @brief Method get_MeshChangerController, addr 0x17b7e6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteMeshChangerController> get_MeshChangerController() ;

/// @brief Method get_TextDisplay, addr 0x17b7e5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteText> get_TextDisplay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisual", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldVisual(NoteFieldVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisual", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldVisual(NoteFieldVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1460};

/// @brief Field _materialController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteMeshChangerController>  ____materialController;

/// @brief Field _animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteAnimator>  ____animator;

/// @brief Field _textDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteText>  ____textDisplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldVisual, ____materialController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldVisual, ____animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldVisual, ____textDisplay) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldVisual, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldVisual);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldVisual*, "VROSC", "NoteFieldVisual");
