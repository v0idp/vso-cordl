#pragma once
// IWYU pragma private; include "VROSC/NoteFieldVisualSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldVisualSelector)
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
class NoteFieldVisualSelector;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldVisualSelector);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldVisualSelector
class CORDL_TYPE NoteFieldVisualSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animator)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  Animator;

 __declspec(property(get=get_MeshChangerController)) ::UnityW<::VROSC::NoteMeshChangerController>  MeshChangerController;

 __declspec(property(get=get_TextDisplay)) ::UnityW<::VROSC::NoteBoardNoteText>  TextDisplay;

/// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(::VROSC::NoteBoardNote*  note, ::UnityEngine::Vector3  noteScale, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

static inline ::VROSC::NoteFieldVisualSelector* New_ctor() ;

/// @brief Method UpdateVisuals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateVisuals() ;

/// @brief Method .ctor, addr 0x17b83e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteAnimator> get_Animator() ;

/// @brief Method get_MeshChangerController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteMeshChangerController> get_MeshChangerController() ;

/// @brief Method get_TextDisplay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteText> get_TextDisplay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldVisualSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisualSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldVisualSelector(NoteFieldVisualSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisualSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldVisualSelector(NoteFieldVisualSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldVisualSelector, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldVisualSelector);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldVisualSelector*, "VROSC", "NoteFieldVisualSelector");
