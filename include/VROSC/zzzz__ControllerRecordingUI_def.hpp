#pragma once
// IWYU pragma private; include "VROSC/ControllerRecordingUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerRecordingUI)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC::UI::Meshes {
class ProceduralArc;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStationRecorder;
}
namespace VROSC {
class LoopStationRecordingProgress;
}
// Forward declare root types
namespace VROSC {
class ControllerRecordingUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerRecordingUI);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerRecordingUI
class CORDL_TYPE ControllerRecordingUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _arc, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__arc, put=__cordl_internal_set__arc)) ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  _arc;

/// @brief Field _arcBackground, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__arcBackground, put=__cordl_internal_set__arcBackground)) ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  _arcBackground;

/// @brief Field _arcRotator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__arcRotator, put=__cordl_internal_set__arcRotator)) ::UnityW<::UnityEngine::Transform>  _arcRotator;

/// @brief Field _loopStationRecorder, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStationRecorder, put=__cordl_internal_set__loopStationRecorder)) ::UnityW<::VROSC::LoopStationRecorder>  _loopStationRecorder;

/// @brief Field _offColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__offColor, put=__cordl_internal_set__offColor)) ::UnityEngine::Color  _offColor;

/// @brief Field _offset, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) float_t  _offset;

/// @brief Field _recIndicator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__recIndicator, put=__cordl_internal_set__recIndicator)) ::UnityW<::VROSC::AdjustableMesh>  _recIndicator;

/// @brief Field _recText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__recText, put=__cordl_internal_set__recText)) ::UnityW<::TMPro::TextMeshPro>  _recText;

/// @brief Field _recording, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__recording, put=__cordl_internal_set__recording)) bool  _recording;

/// @brief Field _recordingColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__recordingColor, put=__cordl_internal_set__recordingColor)) ::UnityEngine::Color  _recordingColor;

/// @brief Field _recordingProgress, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingProgress, put=__cordl_internal_set__recordingProgress)) ::VROSC::LoopStationRecordingProgress*  _recordingProgress;

/// @brief Field _waiting, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__waiting, put=__cordl_internal_set__waiting)) bool  _waiting;

/// @brief Field _waitingColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__waitingColor, put=__cordl_internal_set__waitingColor)) ::UnityEngine::Color  _waitingColor;

/// @brief Method Awake, addr 0x1732c6c, size 0x4c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LinkToRecorder, addr 0x1732cb8, size 0x110, virtual false, abstract: false, final false
inline void LinkToRecorder(::VROSC::LoopStationRecorder*  loopStationRecorder) ;

static inline ::VROSC::ControllerRecordingUI* New_ctor() ;

/// @brief Method RecorderStateChanged, addr 0x1732fdc, size 0x10, virtual false, abstract: false, final false
inline void RecorderStateChanged(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method SetRecording, addr 0x1732dc8, size 0x214, virtual false, abstract: false, final false
inline void SetRecording(bool  recording) ;

/// @brief Method Update, addr 0x1732fec, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc> const& __cordl_internal_get__arc() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc>& __cordl_internal_get__arc() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc> const& __cordl_internal_get__arcBackground() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ProceduralArc>& __cordl_internal_get__arcBackground() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__arcRotator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__arcRotator() ;

constexpr ::UnityW<::VROSC::LoopStationRecorder> const& __cordl_internal_get__loopStationRecorder() const;

constexpr ::UnityW<::VROSC::LoopStationRecorder>& __cordl_internal_get__loopStationRecorder() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__offColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__offColor() ;

constexpr float_t const& __cordl_internal_get__offset() const;

constexpr float_t& __cordl_internal_get__offset() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__recIndicator() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__recIndicator() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__recText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__recText() ;

constexpr bool const& __cordl_internal_get__recording() const;

constexpr bool& __cordl_internal_get__recording() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__recordingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__recordingColor() ;

constexpr ::VROSC::LoopStationRecordingProgress* const& __cordl_internal_get__recordingProgress() const;

constexpr ::VROSC::LoopStationRecordingProgress*& __cordl_internal_get__recordingProgress() ;

constexpr bool const& __cordl_internal_get__waiting() const;

constexpr bool& __cordl_internal_get__waiting() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__waitingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__waitingColor() ;

constexpr void __cordl_internal_set__arc(::UnityW<::VROSC::UI::Meshes::ProceduralArc>  value) ;

constexpr void __cordl_internal_set__arcBackground(::UnityW<::VROSC::UI::Meshes::ProceduralArc>  value) ;

constexpr void __cordl_internal_set__arcRotator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__loopStationRecorder(::UnityW<::VROSC::LoopStationRecorder>  value) ;

constexpr void __cordl_internal_set__offColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__offset(float_t  value) ;

constexpr void __cordl_internal_set__recIndicator(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__recText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__recording(bool  value) ;

constexpr void __cordl_internal_set__recordingColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__recordingProgress(::VROSC::LoopStationRecordingProgress*  value) ;

constexpr void __cordl_internal_set__waiting(bool  value) ;

constexpr void __cordl_internal_set__waitingColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x173308c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerRecordingUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerRecordingUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerRecordingUI(ControllerRecordingUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerRecordingUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerRecordingUI(ControllerRecordingUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1068};

/// @brief Field _recText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____recText;

/// @brief Field _recIndicator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____recIndicator;

/// @brief Field _recordingColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____recordingColor;

/// @brief Field _waitingColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____waitingColor;

/// @brief Field _offColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____offColor;

/// @brief Field _arc, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  ____arc;

/// @brief Field _arcBackground, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ProceduralArc>  ____arcBackground;

/// @brief Field _arcRotator, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____arcRotator;

/// @brief Field _recordingProgress, offset: 0x78, size: 0x8, def value: None
 ::VROSC::LoopStationRecordingProgress*  ____recordingProgress;

/// @brief Field _recording, offset: 0x80, size: 0x1, def value: None
 bool  ____recording;

/// @brief Field _waiting, offset: 0x81, size: 0x1, def value: None
 bool  ____waiting;

/// @brief Field _offset, offset: 0x84, size: 0x4, def value: None
 float_t  ____offset;

/// @brief Field _loopStationRecorder, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  ____loopStationRecorder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerRecordingUI, ____recText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____recIndicator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____recordingColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____waitingColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____offColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____arc) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____arcBackground) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____arcRotator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____recordingProgress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____recording) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____waiting) == 0x81, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____offset) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerRecordingUI, ____loopStationRecorder) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerRecordingUI, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerRecordingUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerRecordingUI*, "VROSC", "ControllerRecordingUI");
