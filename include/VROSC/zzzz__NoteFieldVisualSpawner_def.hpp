#pragma once
// IWYU pragma private; include "VROSC/NoteFieldVisualSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__NoteFieldVisualSelector_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldVisualSpawner)
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
class NoteFieldNoteData;
}
namespace VROSC {
class NoteFieldVisual;
}
namespace VROSC {
class NoteMeshChangerController;
}
// Forward declare root types
namespace VROSC {
class NoteFieldVisualSpawner;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteFieldVisualSpawner);
// Dependencies VROSC.NoteFieldVisualSelector
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldVisualSpawner
class CORDL_TYPE NoteFieldVisualSpawner : public ::VROSC::NoteFieldVisualSelector {
public:
// Declarations
 __declspec(property(get=get_Animator)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  Animator;

 __declspec(property(get=get_MeshChangerController)) ::UnityW<::VROSC::NoteMeshChangerController>  MeshChangerController;

 __declspec(property(get=get_TextDisplay)) ::UnityW<::VROSC::NoteBoardNoteText>  TextDisplay;

/// @brief Field _prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefab, put=__cordl_internal_set__prefab)) ::UnityW<::VROSC::NoteFieldVisual>  _prefab;

/// @brief Field _spawnedVisual, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedVisual, put=__cordl_internal_set__spawnedVisual)) ::UnityW<::VROSC::NoteFieldVisual>  _spawnedVisual;

/// @brief Method ClearVisual, addr 0x17b84c0, size 0xa4, virtual false, abstract: false, final false
inline void ClearVisual() ;

/// @brief Method GetVisual, addr 0x17b8614, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteFieldVisual> GetVisual(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

/// @brief Method Init, addr 0x17b8438, size 0x88, virtual true, abstract: false, final false
inline void Init(::VROSC::NoteBoardNote*  note, ::UnityEngine::Vector3  noteScale, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

static inline ::VROSC::NoteFieldVisualSpawner* New_ctor() ;

/// @brief Method SpawnVisual, addr 0x17b8564, size 0x98, virtual false, abstract: false, final false
inline void SpawnVisual(::VROSC::NoteFieldVisual*  visual) ;

/// @brief Method UpdateVisuals, addr 0x17b85fc, size 0x18, virtual true, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::UnityW<::VROSC::NoteFieldVisual> const& __cordl_internal_get__prefab() const;

constexpr ::UnityW<::VROSC::NoteFieldVisual>& __cordl_internal_get__prefab() ;

constexpr ::UnityW<::VROSC::NoteFieldVisual> const& __cordl_internal_get__spawnedVisual() const;

constexpr ::UnityW<::VROSC::NoteFieldVisual>& __cordl_internal_get__spawnedVisual() ;

constexpr void __cordl_internal_set__prefab(::UnityW<::VROSC::NoteFieldVisual>  value) ;

constexpr void __cordl_internal_set__spawnedVisual(::UnityW<::VROSC::NoteFieldVisual>  value) ;

/// @brief Method .ctor, addr 0x17b76f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0x17b8408, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteAnimator> get_Animator() ;

/// @brief Method get_MeshChangerController, addr 0x17b8420, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteMeshChangerController> get_MeshChangerController() ;

/// @brief Method get_TextDisplay, addr 0x17b83f0, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteText> get_TextDisplay() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldVisualSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisualSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldVisualSpawner(NoteFieldVisualSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldVisualSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldVisualSpawner(NoteFieldVisualSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1463};

/// @brief Field _prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldVisual>  ____prefab;

/// @brief Field _spawnedVisual, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldVisual>  ____spawnedVisual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldVisualSpawner, ____prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldVisualSpawner, ____spawnedVisual) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldVisualSpawner, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteFieldVisualSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldVisualSpawner*, "VROSC", "NoteFieldVisualSpawner");
