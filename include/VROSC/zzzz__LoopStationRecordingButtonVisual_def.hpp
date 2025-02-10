#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingButtonVisual.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LoopStationRecordingButtonVisual)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
struct LoopStationLoopHandler_LooperState;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
// Forward declare root types
namespace VROSC {
class LoopStationRecordingButtonVisual;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationRecordingButtonVisual);
// Dependencies System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecordingButtonVisual
class CORDL_TYPE LoopStationRecordingButtonVisual : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_NotActiveColor)) ::UnityEngine::Color  NotActiveColor;

/// @brief Field _finishingColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__finishingColor, put=__cordl_internal_set__finishingColor)) ::UnityEngine::Color  _finishingColor;

/// @brief Field _notActiveColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__notActiveColor, put=__cordl_internal_set__notActiveColor)) ::UnityEngine::Color  _notActiveColor;

/// @brief Field _offColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _playingColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__playingColor, put=__cordl_internal_set__playingColor)) ::UnityEngine::Color  _playingColor;

/// @brief Field _recordingColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__recordingColor, put=__cordl_internal_set__recordingColor)) ::UnityEngine::Color  _recordingColor;

/// @brief Field _waitingColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__waitingColor, put=__cordl_internal_set__waitingColor)) ::UnityEngine::Color  _waitingColor;

/// @brief Method GetButtonTextByState, addr 0x18ac15c, size 0x170, virtual false, abstract: false, final false
inline ::StringW GetButtonTextByState(::VROSC::LoopStationRecorder_RecordingState  recordingState, ::VROSC::LoopStationLoopHandler_LooperState  looperstate) ;

/// @brief Method GetColorByRecordingState, addr 0x18ac2cc, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorByRecordingState(::VROSC::LoopStationRecorder_RecordingState  recordingState) ;

static inline ::VROSC::LoopStationRecordingButtonVisual* New_ctor() ;

/// @brief Method ShouldLengthSelectionBeDisabled, addr 0x18ac364, size 0x18, virtual false, abstract: false, final false
inline bool ShouldLengthSelectionBeDisabled(::VROSC::LoopStationRecorder_RecordingState  recordingState, ::VROSC::LoopStationLoopHandler_LooperState  looperstate) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__finishingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__finishingColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__notActiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__notActiveColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__playingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__playingColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__recordingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__recordingColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__waitingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__waitingColor() ;

constexpr void __cordl_internal_set__finishingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__notActiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__playingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__recordingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__waitingColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x18ac37c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NotActiveColor, addr 0x18ac150, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NotActiveColor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecordingButtonVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButtonVisual", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecordingButtonVisual(LoopStationRecordingButtonVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecordingButtonVisual", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecordingButtonVisual(LoopStationRecordingButtonVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{708};

/// @brief Field _notActiveColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____notActiveColor;

/// @brief Field _offColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _waitingColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____waitingColor;

/// @brief Field _finishingColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____finishingColor;

/// @brief Field _recordingColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____recordingColor;

/// @brief Field _playingColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____playingColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecordingButtonVisual, ____notActiveColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButtonVisual, ____offColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButtonVisual, ____waitingColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButtonVisual, ____finishingColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButtonVisual, ____recordingColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecordingButtonVisual, ____playingColor) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecordingButtonVisual, 0x70>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationRecordingButtonVisual);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingButtonVisual*, "VROSC", "LoopStationRecordingButtonVisual");
