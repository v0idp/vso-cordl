#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastTouchscreen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Touchscreen_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FastTouchscreen)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastTouchscreen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::FastTouchscreen);
// Dependencies UnityEngine.InputSystem.Touchscreen
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.FastTouchscreen
class CORDL_TYPE FastTouchscreen : public ::UnityEngine::InputSystem::Touchscreen {
public:
// Declarations
/// @brief Method Initialize_ctrlTouchscreendelta, addr 0x2dfe778, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreendelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltadown, addr 0x2e03520, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaleft, addr 0x2e03714, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaright, addr 0x2e03908, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltaup, addr 0x2e03334, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltax, addr 0x2e03af4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendeltay, addr 0x2e03cb8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreendeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreendisplayIndex, addr 0x2dfff5c, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreendisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenposition, addr 0x2dfe5a8, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositionx, addr 0x2e02f74, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpositiony, addr 0x2e03154, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpress, addr 0x2dfecbc, size 0x1e8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenpress(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenpressure, addr 0x2dfe930, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenpressure(::UnityEngine::InputSystem::Utilities::InternedString  kAnalogLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouch, addr 0x2dfe3f4, size 0x1b4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreenprimaryTouch(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdelta, addr 0x2e004d8, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreenprimaryTouchdelta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltadown, addr 0x2e01f08, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaleft, addr 0x2e020fc, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaright, addr 0x2e022f0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltaup, addr 0x2e01d1c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltax, addr 0x2e024dc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdeltay, addr 0x2e026a0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchdeltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchdisplayIndex, addr 0x2e00fd0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchdisplayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchindirectTouch, addr 0x2e01194, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchindirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchphase, addr 0x2e00a3c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreenprimaryTouchphase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchposition, addr 0x2e002ec, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchposition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositionx, addr 0x2e0195c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpositiony, addr 0x2e01b3c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpress, addr 0x2e00c10, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreenprimaryTouchpress(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchpressure, addr 0x2e006a8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchpressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradius, addr 0x2e0086c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusx, addr 0x2e02864, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchradiusy, addr 0x2e02a28, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPosition, addr 0x2e0177c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenprimaryTouchstartPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositionx, addr 0x2e02bec, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartPositiony, addr 0x2e02db0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenprimaryTouchstartPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchstartTime, addr 0x2e015a8, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreenprimaryTouchstartTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtap, addr 0x2e013a0, size 0x208, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreenprimaryTouchtap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtapCount, addr 0x2e00e0c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenprimaryTouchtouchId, addr 0x2e000fc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreenprimaryTouchtouchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradius, addr 0x2dfeb04, size 0x1b8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreenradius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusx, addr 0x2e03e7c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreenradiusy, addr 0x2e04040, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreenradiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0, addr 0x2dfeea4, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch0(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0delta, addr 0x2e045e0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch0delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltadown, addr 0x2e06004, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaleft, addr 0x2e061f8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaright, addr 0x2e063ec, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltaup, addr 0x2e05e18, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltax, addr 0x2e065d8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0deltay, addr 0x2e0679c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0displayIndex, addr 0x2e050d8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0indirectTouch, addr 0x2e0529c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0phase, addr 0x2e04b44, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch0phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0position, addr 0x2e043f4, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positionx, addr 0x2e05a58, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0positiony, addr 0x2e05c38, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0press, addr 0x2e04d18, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch0press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0pressure, addr 0x2e047b0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radius, addr 0x2e04974, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusx, addr 0x2e06960, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0radiusy, addr 0x2e06b24, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPosition, addr 0x2e05878, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch0startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositionx, addr 0x2e06ce8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startPositiony, addr 0x2e06eac, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch0startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0startTime, addr 0x2e056a4, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch0startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tap, addr 0x2e054a8, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch0tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0tapCount, addr 0x2e04f14, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch0touchId, addr 0x2e04204, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch0touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1, addr 0x2dff050, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch1(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1delta, addr 0x2e0744c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch1delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltadown, addr 0x2e08e70, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaleft, addr 0x2e09064, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaright, addr 0x2e09258, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltaup, addr 0x2e08c84, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltax, addr 0x2e09444, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1deltay, addr 0x2e09608, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1displayIndex, addr 0x2e07f44, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1indirectTouch, addr 0x2e08108, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1phase, addr 0x2e079b0, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch1phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1position, addr 0x2e07260, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positionx, addr 0x2e088c4, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1positiony, addr 0x2e08aa4, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1press, addr 0x2e07b84, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch1press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1pressure, addr 0x2e0761c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radius, addr 0x2e077e0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusx, addr 0x2e097cc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1radiusy, addr 0x2e09990, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPosition, addr 0x2e086e4, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch1startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositionx, addr 0x2e09b54, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startPositiony, addr 0x2e09d18, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch1startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1startTime, addr 0x2e08510, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch1startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tap, addr 0x2e08314, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch1tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1tapCount, addr 0x2e07d80, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch1touchId, addr 0x2e07070, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch1touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2, addr 0x2dff1fc, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch2(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2delta, addr 0x2e0a2b8, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch2delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltadown, addr 0x2e0bcdc, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaleft, addr 0x2e0bed0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaright, addr 0x2e0c0c4, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltaup, addr 0x2e0baf0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltax, addr 0x2e0c2b0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2deltay, addr 0x2e0c474, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2displayIndex, addr 0x2e0adb0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2indirectTouch, addr 0x2e0af74, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2phase, addr 0x2e0a81c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch2phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2position, addr 0x2e0a0cc, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positionx, addr 0x2e0b730, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2positiony, addr 0x2e0b910, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2press, addr 0x2e0a9f0, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch2press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2pressure, addr 0x2e0a488, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radius, addr 0x2e0a64c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusx, addr 0x2e0c638, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2radiusy, addr 0x2e0c7fc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPosition, addr 0x2e0b550, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch2startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositionx, addr 0x2e0c9c0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startPositiony, addr 0x2e0cb84, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch2startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2startTime, addr 0x2e0b37c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch2startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tap, addr 0x2e0b180, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch2tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2tapCount, addr 0x2e0abec, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch2touchId, addr 0x2e09edc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch2touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3, addr 0x2dff3a8, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch3(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3delta, addr 0x2e0d124, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch3delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltadown, addr 0x2e0eb48, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaleft, addr 0x2e0ed3c, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaright, addr 0x2e0ef30, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltaup, addr 0x2e0e95c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltax, addr 0x2e0f11c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3deltay, addr 0x2e0f2e0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3displayIndex, addr 0x2e0dc1c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3indirectTouch, addr 0x2e0dde0, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3phase, addr 0x2e0d688, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch3phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3position, addr 0x2e0cf38, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positionx, addr 0x2e0e59c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3positiony, addr 0x2e0e77c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3press, addr 0x2e0d85c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch3press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3pressure, addr 0x2e0d2f4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radius, addr 0x2e0d4b8, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusx, addr 0x2e0f4a4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3radiusy, addr 0x2e0f668, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPosition, addr 0x2e0e3bc, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch3startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositionx, addr 0x2e0f82c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startPositiony, addr 0x2e0f9f0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch3startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3startTime, addr 0x2e0e1e8, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch3startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tap, addr 0x2e0dfec, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch3tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3tapCount, addr 0x2e0da58, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch3touchId, addr 0x2e0cd48, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch3touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4, addr 0x2dff554, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch4(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4delta, addr 0x2e0ff90, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch4delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltadown, addr 0x2e119b4, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaleft, addr 0x2e11ba8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaright, addr 0x2e11d9c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltaup, addr 0x2e117c8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltax, addr 0x2e11f88, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4deltay, addr 0x2e1214c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4displayIndex, addr 0x2e10a88, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4indirectTouch, addr 0x2e10c4c, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4phase, addr 0x2e104f4, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch4phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4position, addr 0x2e0fda4, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positionx, addr 0x2e11408, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4positiony, addr 0x2e115e8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4press, addr 0x2e106c8, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch4press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4pressure, addr 0x2e10160, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radius, addr 0x2e10324, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusx, addr 0x2e12310, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4radiusy, addr 0x2e124d4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPosition, addr 0x2e11228, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch4startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositionx, addr 0x2e12698, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startPositiony, addr 0x2e1285c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch4startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4startTime, addr 0x2e11054, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch4startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tap, addr 0x2e10e58, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch4tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4tapCount, addr 0x2e108c4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch4touchId, addr 0x2e0fbb4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch4touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5, addr 0x2dff700, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch5(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5delta, addr 0x2e12dfc, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch5delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltadown, addr 0x2e14820, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaleft, addr 0x2e14a14, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaright, addr 0x2e14c08, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltaup, addr 0x2e14634, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltax, addr 0x2e14df4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5deltay, addr 0x2e14fb8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5displayIndex, addr 0x2e138f4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5indirectTouch, addr 0x2e13ab8, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5phase, addr 0x2e13360, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch5phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5position, addr 0x2e12c10, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positionx, addr 0x2e14274, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5positiony, addr 0x2e14454, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5press, addr 0x2e13534, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch5press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5pressure, addr 0x2e12fcc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radius, addr 0x2e13190, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusx, addr 0x2e1517c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5radiusy, addr 0x2e15340, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPosition, addr 0x2e14094, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch5startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositionx, addr 0x2e15504, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startPositiony, addr 0x2e156c8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch5startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5startTime, addr 0x2e13ec0, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch5startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tap, addr 0x2e13cc4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch5tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5tapCount, addr 0x2e13730, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch5touchId, addr 0x2e12a20, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch5touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6, addr 0x2dff8ac, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch6(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6delta, addr 0x2e15c68, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch6delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltadown, addr 0x2e1768c, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaleft, addr 0x2e17880, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaright, addr 0x2e17a74, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltaup, addr 0x2e174a0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltax, addr 0x2e17c60, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6deltay, addr 0x2e17e24, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6displayIndex, addr 0x2e16760, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6indirectTouch, addr 0x2e16924, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6phase, addr 0x2e161cc, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch6phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6position, addr 0x2e15a7c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positionx, addr 0x2e170e0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6positiony, addr 0x2e172c0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6press, addr 0x2e163a0, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch6press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6pressure, addr 0x2e15e38, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radius, addr 0x2e15ffc, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusx, addr 0x2e17fe8, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6radiusy, addr 0x2e181ac, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPosition, addr 0x2e16f00, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch6startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositionx, addr 0x2e18370, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startPositiony, addr 0x2e18534, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch6startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6startTime, addr 0x2e16d2c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch6startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tap, addr 0x2e16b30, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch6tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6tapCount, addr 0x2e1659c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch6touchId, addr 0x2e1588c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch6touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7, addr 0x2dffa58, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch7(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7delta, addr 0x2e18ad4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch7delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltadown, addr 0x2e1a4f8, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaleft, addr 0x2e1a6ec, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaright, addr 0x2e1a8e0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltaup, addr 0x2e1a30c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltax, addr 0x2e1aacc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7deltay, addr 0x2e1ac90, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7displayIndex, addr 0x2e195cc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7indirectTouch, addr 0x2e19790, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7phase, addr 0x2e19038, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch7phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7position, addr 0x2e188e8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positionx, addr 0x2e19f4c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7positiony, addr 0x2e1a12c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7press, addr 0x2e1920c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch7press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7pressure, addr 0x2e18ca4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radius, addr 0x2e18e68, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusx, addr 0x2e1ae54, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7radiusy, addr 0x2e1b018, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPosition, addr 0x2e19d6c, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch7startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositionx, addr 0x2e1b1dc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startPositiony, addr 0x2e1b3a0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch7startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7startTime, addr 0x2e19b98, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch7startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tap, addr 0x2e1999c, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch7tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7tapCount, addr 0x2e19408, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch7touchId, addr 0x2e186f8, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch7touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8, addr 0x2dffc04, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch8(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8delta, addr 0x2e1b940, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch8delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltadown, addr 0x2e1d364, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaleft, addr 0x2e1d558, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaright, addr 0x2e1d74c, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltaup, addr 0x2e1d178, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltax, addr 0x2e1d938, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8deltay, addr 0x2e1dafc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8displayIndex, addr 0x2e1c438, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8indirectTouch, addr 0x2e1c5fc, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8phase, addr 0x2e1bea4, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch8phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8position, addr 0x2e1b754, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positionx, addr 0x2e1cdb8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8positiony, addr 0x2e1cf98, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8press, addr 0x2e1c078, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch8press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8pressure, addr 0x2e1bb10, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radius, addr 0x2e1bcd4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusx, addr 0x2e1dcc0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8radiusy, addr 0x2e1de84, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPosition, addr 0x2e1cbd8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch8startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositionx, addr 0x2e1e048, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startPositiony, addr 0x2e1e20c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch8startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8startTime, addr 0x2e1ca04, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch8startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tap, addr 0x2e1c808, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch8tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8tapCount, addr 0x2e1c274, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch8touchId, addr 0x2e1b564, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch8touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9, addr 0x2dffdb0, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchControl* Initialize_ctrlTouchscreentouch9(::UnityEngine::InputSystem::Utilities::InternedString  kTouchLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9delta, addr 0x2e1e7ac, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DeltaControl* Initialize_ctrlTouchscreentouch9delta(::UnityEngine::InputSystem::Utilities::InternedString  kDeltaLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltadown, addr 0x2e201d0, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltadown(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaleft, addr 0x2e203c4, size 0x1f4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaleft(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaright, addr 0x2e205b8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaright(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltaup, addr 0x2e1ffe4, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltaup(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltax, addr 0x2e207a4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltax(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9deltay, addr 0x2e20968, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9deltay(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9displayIndex, addr 0x2e1f2a4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9displayIndex(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9indirectTouch, addr 0x2e1f468, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9indirectTouch(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9phase, addr 0x2e1ed10, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* Initialize_ctrlTouchscreentouch9phase(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPhaseLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9position, addr 0x2e1e5c0, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9position(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positionx, addr 0x2e1fc24, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9positiony, addr 0x2e1fe04, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9positiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9press, addr 0x2e1eee4, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::TouchPressControl* Initialize_ctrlTouchscreentouch9press(::UnityEngine::InputSystem::Utilities::InternedString  kTouchPressLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9pressure, addr 0x2e1e97c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9pressure(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radius, addr 0x2e1eb40, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9radius(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusx, addr 0x2e20b2c, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9radiusy, addr 0x2e20cf0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9radiusy(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPosition, addr 0x2e1fa44, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::Vector2Control* Initialize_ctrlTouchscreentouch9startPosition(::UnityEngine::InputSystem::Utilities::InternedString  kVector2Layout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositionx, addr 0x2e20eb4, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositionx(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startPositiony, addr 0x2e21078, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AxisControl* Initialize_ctrlTouchscreentouch9startPositiony(::UnityEngine::InputSystem::Utilities::InternedString  kAxisLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9startTime, addr 0x2e1f870, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DoubleControl* Initialize_ctrlTouchscreentouch9startTime(::UnityEngine::InputSystem::Utilities::InternedString  kDoubleLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tap, addr 0x2e1f674, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlTouchscreentouch9tap(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9tapCount, addr 0x2e1f0e0, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9tapCount(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlTouchscreentouch9touchId, addr 0x2e1e3d0, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::IntegerControl* Initialize_ctrlTouchscreentouch9touchId(::UnityEngine::InputSystem::Utilities::InternedString  kIntegerLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

static inline ::UnityEngine::InputSystem::FastTouchscreen* New_ctor() ;

/// @brief Method .ctor, addr 0x2dfb5e0, size 0x2e14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastTouchscreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastTouchscreen(FastTouchscreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastTouchscreen", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastTouchscreen(FastTouchscreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4840};

/// @brief Field metadata offset 0xffffffff size 0x8
static constexpr ::ConstString  metadata{u"AutoWindowSpace;Touch;Vector2;Delta;Analog;TouchPress;Button;Axis;Integer;TouchPhase;Double;Touchscreen;Pointer"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::FastTouchscreen, 0x1d0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::FastTouchscreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::FastTouchscreen*, "UnityEngine.InputSystem", "FastTouchscreen");
