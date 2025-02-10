#pragma once
// IWYU pragma private; include "VROSC/DrumpadPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrumpadPlayer)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class DrumPadEffectOnSignal;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class IntNode;
}
namespace VROSC {
class NotePlayer;
}
namespace VROSC {
class PredictiveHittable;
}
namespace VROSC {
class ValueSourceSelector;
}
// Forward declare root types
namespace VROSC {
class DrumpadPlayer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadPlayer);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadPlayer
class CORDL_TYPE DrumpadPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _drumpad, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumpad, put=__cordl_internal_set__drumpad)) ::UnityW<::VROSC::DrumPadEffectOnSignal>  _drumpad;

/// @brief Field _hittable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__hittable, put=__cordl_internal_set__hittable)) ::UnityW<::VROSC::PredictiveHittable>  _hittable;

/// @brief Field _instrumentController, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::InstrumentController>  _instrumentController;

/// @brief Field _noteNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteNode, put=__cordl_internal_set__noteNode)) ::UnityW<::VROSC::IntNode>  _noteNode;

/// @brief Field _notePlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__notePlayer, put=__cordl_internal_set__notePlayer)) ::UnityW<::VROSC::NotePlayer>  _notePlayer;

/// @brief Field _previewAudioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewAudioSource, put=__cordl_internal_set__previewAudioSource)) ::UnityW<::UnityEngine::AudioSource>  _previewAudioSource;

/// @brief Field _untilFadeTimer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__untilFadeTimer, put=__cordl_internal_set__untilFadeTimer)) float_t  _untilFadeTimer;

/// @brief Field _valueSourceSelector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueSourceSelector, put=__cordl_internal_set__valueSourceSelector)) ::UnityW<::VROSC::ValueSourceSelector>  _valueSourceSelector;

/// @brief Method Colorize, addr 0x170a5e8, size 0x74, virtual false, abstract: false, final false
inline void Colorize(::UnityEngine::Color  color) ;

static inline ::VROSC::DrumpadPlayer* New_ctor() ;

/// @brief Method OnClicked, addr 0x170a738, size 0x20, virtual false, abstract: false, final false
inline void OnClicked(::VROSC::ClickData*  obj) ;

/// @brief Method PlayPreview, addr 0x170a65c, size 0xdc, virtual false, abstract: false, final false
inline void PlayPreview(int32_t  id) ;

/// @brief Method SetPitch, addr 0x1709724, size 0xe8, virtual false, abstract: false, final false
inline void SetPitch(int32_t  pitch, bool  preview) ;

/// @brief Method SetSampleIdOrNoteNumber, addr 0x1709d88, size 0xa8, virtual false, abstract: false, final false
inline void SetSampleIdOrNoteNumber(int32_t  sampleIdOrNoteNumber, bool  preview) ;

/// @brief Method SetVelocityDependant, addr 0x17096d8, size 0x24, virtual false, abstract: false, final false
inline void SetVelocityDependant(bool  shouldBeVelocityDependant) ;

/// @brief Method SetVolume, addr 0x17096fc, size 0x28, virtual false, abstract: false, final false
inline void SetVolume(float_t  volume) ;

/// @brief Method Setup, addr 0x1709660, size 0x78, virtual false, abstract: false, final false
inline void Setup(int32_t  sampleId, ::UnityEngine::Color  groupColor, ::VROSC::InstrumentController*  instrumentController) ;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& __cordl_internal_get__drumpad() const;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& __cordl_internal_get__drumpad() ;

constexpr ::UnityW<::VROSC::PredictiveHittable> const& __cordl_internal_get__hittable() const;

constexpr ::UnityW<::VROSC::PredictiveHittable>& __cordl_internal_get__hittable() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__noteNode() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__noteNode() ;

constexpr ::UnityW<::VROSC::NotePlayer> const& __cordl_internal_get__notePlayer() const;

constexpr ::UnityW<::VROSC::NotePlayer>& __cordl_internal_get__notePlayer() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__previewAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__previewAudioSource() ;

constexpr float_t const& __cordl_internal_get__untilFadeTimer() const;

constexpr float_t& __cordl_internal_get__untilFadeTimer() ;

constexpr ::UnityW<::VROSC::ValueSourceSelector> const& __cordl_internal_get__valueSourceSelector() const;

constexpr ::UnityW<::VROSC::ValueSourceSelector>& __cordl_internal_get__valueSourceSelector() ;

constexpr void __cordl_internal_set__drumpad(::UnityW<::VROSC::DrumPadEffectOnSignal>  value) ;

constexpr void __cordl_internal_set__hittable(::UnityW<::VROSC::PredictiveHittable>  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__noteNode(::UnityW<::VROSC::IntNode>  value) ;

constexpr void __cordl_internal_set__notePlayer(::UnityW<::VROSC::NotePlayer>  value) ;

constexpr void __cordl_internal_set__previewAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__untilFadeTimer(float_t  value) ;

constexpr void __cordl_internal_set__valueSourceSelector(::UnityW<::VROSC::ValueSourceSelector>  value) ;

/// @brief Method .ctor, addr 0x170a758, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadPlayer(DrumpadPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadPlayer(DrumpadPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{869};

/// @brief Field _noteNode, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____noteNode;

/// @brief Field _notePlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::NotePlayer>  ____notePlayer;

/// @brief Field _valueSourceSelector, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ValueSourceSelector>  ____valueSourceSelector;

/// @brief Field _hittable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::PredictiveHittable>  ____hittable;

/// @brief Field _drumpad, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumPadEffectOnSignal>  ____drumpad;

/// @brief Field _previewAudioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____previewAudioSource;

/// @brief Field _untilFadeTimer, offset: 0x50, size: 0x4, def value: None
 float_t  ____untilFadeTimer;

/// @brief Field _instrumentController, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrumentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadPlayer, ____noteNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____notePlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____valueSourceSelector) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____hittable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____drumpad) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____previewAudioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____untilFadeTimer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadPlayer, ____instrumentController) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadPlayer, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadPlayer*, "VROSC", "DrumpadPlayer");
