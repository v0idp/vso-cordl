#pragma once
// IWYU pragma private; include "VROSC/NoteMeshChangerController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteMeshChangerController)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class NoteBoardNote;
}
namespace VROSC {
class NotefieldColorSettings;
}
// Forward declare root types
namespace VROSC {
class NoteMeshChangerController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::NoteMeshChangerController);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteMeshChangerController
class CORDL_TYPE NoteMeshChangerController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animating, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__animating, put=__cordl_internal_set__animating)) bool  _animating;

/// @brief Field _colorSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorSettings, put=__cordl_internal_set__colorSettings)) ::UnityW<::VROSC::NotefieldColorSettings>  _colorSettings;

/// @brief Field _highlightOutlineMultiplier, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightOutlineMultiplier, put=__cordl_internal_set__highlightOutlineMultiplier)) float_t  _highlightOutlineMultiplier;

/// @brief Field _isHovered, offset 0x6e, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHovered, put=__cordl_internal_set__isHovered)) bool  _isHovered;

/// @brief Field _isOctave, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOctave, put=__cordl_internal_set__isOctave)) bool  _isOctave;

/// @brief Field _isOdd, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOdd, put=__cordl_internal_set__isOdd)) bool  _isOdd;

/// @brief Field _isOulined, offset 0x6f, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOulined, put=__cordl_internal_set__isOulined)) bool  _isOulined;

/// @brief Field _needsUpdate, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsUpdate, put=__cordl_internal_set__needsUpdate)) bool  _needsUpdate;

/// @brief Field _normalMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__normalMaterial, put=__cordl_internal_set__normalMaterial)) ::UnityW<::UnityEngine::Material>  _normalMaterial;

/// @brief Field _note, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) float_t  _note;

/// @brief Field _noteBoardNote, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteBoardNote, put=__cordl_internal_set__noteBoardNote)) ::UnityW<::VROSC::NoteBoardNote>  _noteBoardNote;

/// @brief Field _propBlock, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _renderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _restingColor, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingColor, put=__cordl_internal_set__restingColor)) ::UnityEngine::Color  _restingColor;

/// @brief Field _sendMultiNoteData, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__sendMultiNoteData, put=__cordl_internal_set__sendMultiNoteData)) bool  _sendMultiNoteData;

/// @brief Field _transparentMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__transparentMaterial, put=__cordl_internal_set__transparentMaterial)) ::UnityW<::UnityEngine::Material>  _transparentMaterial;

/// @brief Method CreateBlock, addr 0x17b8694, size 0xc0, virtual false, abstract: false, final false
inline void CreateBlock() ;

static inline ::VROSC::NoteMeshChangerController* New_ctor() ;

/// @brief Method OnDisable, addr 0x17b89d0, size 0x10c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17b88b8, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetHovering, addr 0x17b0bf8, size 0x330, virtual false, abstract: false, final false
inline void SetHovering(bool  isHovering) ;

/// @brief Method SetPlayingColor, addr 0x17b8754, size 0x164, virtual false, abstract: false, final false
inline void SetPlayingColor(::UnityEngine::Vector3  power, float_t  velocity, float_t  highlight) ;

/// @brief Method SetRestingColor, addr 0x17b8adc, size 0xa0, virtual false, abstract: false, final false
inline void SetRestingColor(::UnityEngine::Color  color) ;

/// @brief Method Setup, addr 0x17b7fa4, size 0xc4, virtual false, abstract: false, final false
inline void Setup(::VROSC::NoteBoardNote*  noteField, bool  isOctave, bool  isOdd) ;

/// @brief Method UpdateRestingColors, addr 0x17b861c, size 0x78, virtual false, abstract: false, final false
inline void UpdateRestingColors() ;

/// @brief Method UpdateVisuals, addr 0x17b8090, size 0x1d0, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr bool const& __cordl_internal_get__animating() const;

constexpr bool& __cordl_internal_get__animating() ;

constexpr ::UnityW<::VROSC::NotefieldColorSettings> const& __cordl_internal_get__colorSettings() const;

constexpr ::UnityW<::VROSC::NotefieldColorSettings>& __cordl_internal_get__colorSettings() ;

constexpr float_t const& __cordl_internal_get__highlightOutlineMultiplier() const;

constexpr float_t& __cordl_internal_get__highlightOutlineMultiplier() ;

constexpr bool const& __cordl_internal_get__isHovered() const;

constexpr bool& __cordl_internal_get__isHovered() ;

constexpr bool const& __cordl_internal_get__isOctave() const;

constexpr bool& __cordl_internal_get__isOctave() ;

constexpr bool const& __cordl_internal_get__isOdd() const;

constexpr bool& __cordl_internal_get__isOdd() ;

constexpr bool const& __cordl_internal_get__isOulined() const;

constexpr bool& __cordl_internal_get__isOulined() ;

constexpr bool const& __cordl_internal_get__needsUpdate() const;

constexpr bool& __cordl_internal_get__needsUpdate() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__normalMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__normalMaterial() ;

constexpr float_t const& __cordl_internal_get__note() const;

constexpr float_t& __cordl_internal_get__note() ;

constexpr ::UnityW<::VROSC::NoteBoardNote> const& __cordl_internal_get__noteBoardNote() const;

constexpr ::UnityW<::VROSC::NoteBoardNote>& __cordl_internal_get__noteBoardNote() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingColor() ;

constexpr bool const& __cordl_internal_get__sendMultiNoteData() const;

constexpr bool& __cordl_internal_get__sendMultiNoteData() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__transparentMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__transparentMaterial() ;

constexpr void __cordl_internal_set__animating(bool  value) ;

constexpr void __cordl_internal_set__colorSettings(::UnityW<::VROSC::NotefieldColorSettings>  value) ;

constexpr void __cordl_internal_set__highlightOutlineMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__isHovered(bool  value) ;

constexpr void __cordl_internal_set__isOctave(bool  value) ;

constexpr void __cordl_internal_set__isOdd(bool  value) ;

constexpr void __cordl_internal_set__isOulined(bool  value) ;

constexpr void __cordl_internal_set__needsUpdate(bool  value) ;

constexpr void __cordl_internal_set__normalMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__note(float_t  value) ;

constexpr void __cordl_internal_set__noteBoardNote(::UnityW<::VROSC::NoteBoardNote>  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__restingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__sendMultiNoteData(bool  value) ;

constexpr void __cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x17b8b7c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteMeshChangerController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteMeshChangerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteMeshChangerController(NoteMeshChangerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteMeshChangerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteMeshChangerController(NoteMeshChangerController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1464};

/// @brief Field _colorSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::NotefieldColorSettings>  ____colorSettings;

/// @brief Field _sendMultiNoteData, offset: 0x28, size: 0x1, def value: None
 bool  ____sendMultiNoteData;

/// @brief Field _transparentMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____transparentMaterial;

/// @brief Field _normalMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____normalMaterial;

/// @brief Field _highlightOutlineMultiplier, offset: 0x40, size: 0x4, def value: None
 float_t  ____highlightOutlineMultiplier;

/// @brief Field _restingColor, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingColor;

/// @brief Field _animating, offset: 0x54, size: 0x1, def value: None
 bool  ____animating;

/// @brief Field _renderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _noteBoardNote, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNote>  ____noteBoardNote;

/// @brief Field _note, offset: 0x68, size: 0x4, def value: None
 float_t  ____note;

/// @brief Field _isOdd, offset: 0x6c, size: 0x1, def value: None
 bool  ____isOdd;

/// @brief Field _isOctave, offset: 0x6d, size: 0x1, def value: None
 bool  ____isOctave;

/// @brief Field _isHovered, offset: 0x6e, size: 0x1, def value: None
 bool  ____isHovered;

/// @brief Field _isOulined, offset: 0x6f, size: 0x1, def value: None
 bool  ____isOulined;

/// @brief Field _needsUpdate, offset: 0x70, size: 0x1, def value: None
 bool  ____needsUpdate;

/// @brief Field _propBlock, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteMeshChangerController, ____colorSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____sendMultiNoteData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____transparentMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____normalMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____highlightOutlineMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____restingColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____animating) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____renderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____noteBoardNote) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____note) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____isOdd) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____isOctave) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____isHovered) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____isOulined) == 0x6f, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____needsUpdate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteMeshChangerController, ____propBlock) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteMeshChangerController, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::NoteMeshChangerController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteMeshChangerController*, "VROSC", "NoteMeshChangerController");
