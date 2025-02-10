#pragma once
// IWYU pragma private; include "VROSC/BoardFrameNote.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoardFrameNote)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace VROSC {
struct PlayData_NoteFieldMonitor_State;
}
// Forward declare root types
namespace VROSC {
class BoardFrameNote;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BoardFrameNote);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BoardFrameNote
class CORDL_TYPE BoardFrameNote : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fadeCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeCurve, put=__cordl_internal_set__fadeCurve)) ::UnityEngine::AnimationCurve*  _fadeCurve;

/// @brief Field _fadeTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeTime, put=__cordl_internal_set__fadeTime)) float_t  _fadeTime;

/// @brief Field _highlightScale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightScale, put=__cordl_internal_set__highlightScale)) float_t  _highlightScale;

/// @brief Field _lastFadeTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFadeTime, put=__cordl_internal_set__lastFadeTime)) float_t  _lastFadeTime;

/// @brief Field _lastPlayColor, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPlayColor, put=__cordl_internal_set__lastPlayColor)) ::UnityEngine::Vector3  _lastPlayColor;

/// @brief Field _propBlock, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__propBlock, put=__cordl_internal_set__propBlock)) ::UnityEngine::MaterialPropertyBlock*  _propBlock;

/// @brief Field _renderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field _restingColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingColor, put=__cordl_internal_set__restingColor)) ::UnityEngine::Color  _restingColor;

/// @brief Field _startScale, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__startScale, put=__cordl_internal_set__startScale)) ::UnityEngine::Vector3  _startScale;

/// @brief Method Assign, addr 0x17ace70, size 0x50, virtual false, abstract: false, final false
inline void Assign() ;

/// @brief Method CreateBlock, addr 0x17acc28, size 0x60, virtual false, abstract: false, final false
inline void CreateBlock() ;

/// @brief Method GetFadeAmount, addr 0x17acdd0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 GetFadeAmount(::UnityEngine::Vector3  power, ::VROSC::PlayData_NoteFieldMonitor_State  state) ;

static inline ::VROSC::BoardFrameNote* New_ctor() ;

/// @brief Method Setup, addr 0x17acc88, size 0x30, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateVisuals, addr 0x17accb8, size 0x118, virtual false, abstract: false, final false
inline void UpdateVisuals(::UnityEngine::Vector3  power, ::VROSC::PlayData_NoteFieldMonitor_State  state) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeCurve() ;

constexpr float_t const& __cordl_internal_get__fadeTime() const;

constexpr float_t& __cordl_internal_get__fadeTime() ;

constexpr float_t const& __cordl_internal_get__highlightScale() const;

constexpr float_t& __cordl_internal_get__highlightScale() ;

constexpr float_t const& __cordl_internal_get__lastFadeTime() const;

constexpr float_t& __cordl_internal_get__lastFadeTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPlayColor() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPlayColor() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__propBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__propBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startScale() ;

constexpr void __cordl_internal_set__fadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__fadeTime(float_t  value) ;

constexpr void __cordl_internal_set__highlightScale(float_t  value) ;

constexpr void __cordl_internal_set__lastFadeTime(float_t  value) ;

constexpr void __cordl_internal_set__lastPlayColor(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__restingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__startScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17acec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoardFrameNote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoardFrameNote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoardFrameNote(BoardFrameNote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoardFrameNote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoardFrameNote(BoardFrameNote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1422};

/// @brief Field _restingColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingColor;

/// @brief Field _renderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _highlightScale, offset: 0x38, size: 0x4, def value: None
 float_t  ____highlightScale;

/// @brief Field _propBlock, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____propBlock;

/// @brief Field _startScale, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startScale;

/// @brief Field _fadeCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____fadeCurve;

/// @brief Field _fadeTime, offset: 0x60, size: 0x4, def value: None
 float_t  ____fadeTime;

/// @brief Field _lastFadeTime, offset: 0x64, size: 0x4, def value: None
 float_t  ____lastFadeTime;

/// @brief Field _lastPlayColor, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPlayColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BoardFrameNote, ____restingColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____renderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____highlightScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____propBlock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____startScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____fadeCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____fadeTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____lastFadeTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::BoardFrameNote, ____lastPlayColor) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BoardFrameNote, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BoardFrameNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BoardFrameNote*, "VROSC", "BoardFrameNote");
