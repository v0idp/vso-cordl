#pragma once
// IWYU pragma private; include "VROSC/NoteBoardNote.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteBoardNote)
namespace UnityEngine {
class Material;
}
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
struct NoteBoardNote_Coloring;
}
namespace VROSC {
class NoteFieldNoteData;
}
namespace VROSC {
class NoteFieldParameters;
}
namespace VROSC {
class NoteFieldVisualSelector;
}
namespace VROSC {
class NoteMeshChangerController;
}
namespace VROSC {
struct PlayData;
}
// Forward declare root types
namespace VROSC {
struct NoteBoardNote_Coloring;
}
namespace VROSC {
class NoteBoardNote;
}
// Write type traits
MARK_VAL_T(::VROSC::NoteBoardNote_Coloring);
MARK_REF_PTR_T(::VROSC::NoteBoardNote);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteBoardNote/Coloring
struct CORDL_TYPE NoteBoardNote_Coloring {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoteBoardNote_Coloring_Unwrapped
enum struct __NoteBoardNote_Coloring_Unwrapped : int32_t {
__E_AsPlayed = static_cast<int32_t>(0x0),
__E_AlwaysX = static_cast<int32_t>(0x1),
__E_AlwaysY = static_cast<int32_t>(0x2),
__E_AlwaysZ = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteBoardNote_Coloring_Unwrapped () const noexcept {
return static_cast<__NoteBoardNote_Coloring_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNote_Coloring() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteBoardNote_Coloring(int32_t  value__) noexcept;

/// @brief Field AlwaysX value: I32(1)
static ::VROSC::NoteBoardNote_Coloring const AlwaysX;

/// @brief Field AlwaysY value: I32(2)
static ::VROSC::NoteBoardNote_Coloring const AlwaysY;

/// @brief Field AlwaysZ value: I32(3)
static ::VROSC::NoteBoardNote_Coloring const AlwaysZ;

/// @brief Field AsPlayed value: I32(0)
static ::VROSC::NoteBoardNote_Coloring const AsPlayed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNote_Coloring, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNote_Coloring, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteBoardNote
class CORDL_TYPE NoteBoardNote : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Coloring = ::VROSC::NoteBoardNote_Coloring;

 __declspec(property(get=get_Animator)) ::UnityW<::VROSC::NoteBoardNoteAnimator>  Animator;

 __declspec(property(get=get_Data, put=set_Data)) ::VROSC::NoteFieldNoteData*  Data;

 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_LocalPositionForAnimation, put=set_LocalPositionForAnimation)) ::UnityEngine::Vector3  LocalPositionForAnimation;

 __declspec(property(get=get_MeshChangerController)) ::UnityW<::VROSC::NoteMeshChangerController>  MeshChangerController;

 __declspec(property(get=get_TextDisplay)) ::UnityW<::VROSC::NoteBoardNoteText>  TextDisplay;

 __declspec(property(get=get_TransparentMaterial)) ::UnityW<::UnityEngine::Material>  TransparentMaterial;

/// @brief Field <Data>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::VROSC::NoteFieldNoteData*  _Data_k__BackingField;

/// @brief Field <IsPlaying>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying_k__BackingField, put=__cordl_internal_set__IsPlaying_k__BackingField)) bool  _IsPlaying_k__BackingField;

/// @brief Field <LocalPositionForAnimation>k__BackingField, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__LocalPositionForAnimation_k__BackingField, put=__cordl_internal_set__LocalPositionForAnimation_k__BackingField)) ::UnityEngine::Vector3  _LocalPositionForAnimation_k__BackingField;

/// @brief Field _noteFieldVisualSwitcher, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteFieldVisualSwitcher, put=__cordl_internal_set__noteFieldVisualSwitcher)) ::UnityW<::VROSC::NoteFieldVisualSelector>  _noteFieldVisualSwitcher;

/// @brief Field _transparentMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparentMaterial, put=__cordl_internal_set__transparentMaterial)) ::UnityW<::UnityEngine::Material>  _transparentMaterial;

/// @brief Method FindReferences, addr 0x17b1028, size 0x54, virtual false, abstract: false, final false
inline void FindReferences() ;

/// @brief Method Init, addr 0x17b085c, size 0x50, virtual false, abstract: false, final false
inline void Init(::VROSC::NoteFieldNoteData*  data, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields, ::UnityEngine::Vector3  noteScale) ;

/// @brief Method Init, addr 0x17b0a68, size 0xf0, virtual false, abstract: false, final false
inline void Init(::VROSC::NoteFieldParameters*  parameters, ::VROSC::NoteFieldNoteData*  data, ::UnityEngine::Vector3  noteScale) ;

/// @brief Method InitShared, addr 0x17b0a30, size 0x38, virtual false, abstract: false, final false
inline void InitShared(::VROSC::NoteFieldNoteData*  data, ::UnityEngine::Vector3  noteScale, ::ArrayW<int32_t,::Array<int32_t>*>  numberOfFields) ;

static inline ::VROSC::NoteBoardNote* New_ctor() ;

/// @brief Method SetData, addr 0x17b08ac, size 0x184, virtual false, abstract: false, final false
inline void SetData(::VROSC::NoteFieldNoteData*  data) ;

/// @brief Method SetHovering, addr 0x17b0b78, size 0x68, virtual false, abstract: false, final false
inline void SetHovering(bool  isHovering, bool  isPlaying) ;

/// @brief Method SetLocalPosition, addr 0x17b0f28, size 0x50, virtual false, abstract: false, final false
inline void SetLocalPosition(::UnityEngine::Vector3  position) ;

/// @brief Method SetPlaying, addr 0x17b0f78, size 0x80, virtual false, abstract: false, final false
inline void SetPlaying(bool  isPlaying, ::VROSC::PlayData  playData) ;

/// @brief Method UpdateVisuals, addr 0x17b0b58, size 0x20, virtual true, abstract: false, final false
inline void UpdateVisuals() ;

constexpr ::VROSC::NoteFieldNoteData* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::VROSC::NoteFieldNoteData*& __cordl_internal_get__Data_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPlaying_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__LocalPositionForAnimation_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__LocalPositionForAnimation_k__BackingField() ;

constexpr ::UnityW<::VROSC::NoteFieldVisualSelector> const& __cordl_internal_get__noteFieldVisualSwitcher() const;

constexpr ::UnityW<::VROSC::NoteFieldVisualSelector>& __cordl_internal_get__noteFieldVisualSwitcher() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__transparentMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__transparentMaterial() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::VROSC::NoteFieldNoteData*  value) ;

constexpr void __cordl_internal_set__IsPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LocalPositionForAnimation_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__noteFieldVisualSwitcher(::UnityW<::VROSC::NoteFieldVisualSelector>  value) ;

constexpr void __cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x17b107c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0x17ae4ac, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteAnimator> get_Animator() ;

/// @brief Method get_Data, addr 0x17b0828, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldNoteData* get_Data() ;

/// @brief Method get_IsPlaying, addr 0x17b0854, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_LocalPositionForAnimation, addr 0x17b083c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalPositionForAnimation() ;

/// @brief Method get_MeshChangerController, addr 0x17b07f8, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteMeshChangerController> get_MeshChangerController() ;

/// @brief Method get_TextDisplay, addr 0x17b07d8, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::NoteBoardNoteText> get_TextDisplay() ;

/// @brief Method get_TransparentMaterial, addr 0x17b0818, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_TransparentMaterial() ;

/// @brief Method set_Data, addr 0x17b0820, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::VROSC::NoteFieldNoteData*  value) ;

/// @brief Method set_IsPlaying, addr 0x17b0848, size 0xc, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

/// @brief Method set_LocalPositionForAnimation, addr 0x17b0830, size 0xc, virtual false, abstract: false, final false
inline void set_LocalPositionForAnimation(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteBoardNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteBoardNote(NoteBoardNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteBoardNote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteBoardNote(NoteBoardNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1435};

/// @brief Field _noteFieldVisualSwitcher, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteFieldVisualSelector>  ____noteFieldVisualSwitcher;

/// @brief Field _transparentMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____transparentMaterial;

/// @brief Field <Data>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::VROSC::NoteFieldNoteData*  ____Data_k__BackingField;

/// @brief Field <LocalPositionForAnimation>k__BackingField, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____LocalPositionForAnimation_k__BackingField;

/// @brief Field <IsPlaying>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____IsPlaying_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteBoardNote, ____noteFieldVisualSwitcher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNote, ____transparentMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNote, ____Data_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNote, ____LocalPositionForAnimation_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteBoardNote, ____IsPlaying_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteBoardNote, 0x48>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNote_Coloring, "VROSC", "NoteBoardNote/Coloring");
NEED_NO_BOX(::VROSC::NoteBoardNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNote*, "VROSC", "NoteBoardNote");
