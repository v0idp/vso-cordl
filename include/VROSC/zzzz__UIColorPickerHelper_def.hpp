#pragma once
// IWYU pragma private; include "VROSC/UIColorPickerHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIColorPickerHelper)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC::UI::Meshes {
class ColorPickerMesh;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class ProceduralAdjustableMesh;
}
namespace VROSC {
class UIColorPickerHelper__GrabRemotely_d__22;
}
namespace VROSC {
class UIColorPickerMiniBar;
}
namespace VROSC {
class UIColorPicker;
}
namespace VROSC {
class UIHelperPositioning;
}
// Forward declare root types
namespace VROSC {
class UIColorPickerHelper;
}
namespace VROSC {
class UIColorPickerHelper__GrabRemotely_d__22;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIColorPickerHelper);
MARK_REF_PTR_T(::VROSC::UIColorPickerHelper__GrabRemotely_d__22);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPickerHelper/<GrabRemotely>d__22
class CORDL_TYPE UIColorPickerHelper__GrabRemotely_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIColorPickerHelper>  __4__this;

/// @brief Field <size>5__5, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__size_5__5, put=__cordl_internal_set__size_5__5)) ::UnityEngine::Vector3  _size_5__5;

/// @brief Field <startHue>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__startHue_5__2, put=__cordl_internal_set__startHue_5__2)) float_t  _startHue_5__2;

/// @brief Field <startSaturation>5__4, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__startSaturation_5__4, put=__cordl_internal_set__startSaturation_5__4)) float_t  _startSaturation_5__4;

/// @brief Field <startValue>5__3, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startValue_5__3, put=__cordl_internal_set__startValue_5__3)) float_t  _startValue_5__3;

/// @brief Field <startpos>5__6, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__startpos_5__6, put=__cordl_internal_set__startpos_5__6)) ::UnityEngine::Vector3  _startpos_5__6;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::VROSC::UIColorPicker>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17783d8, size 0x438, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIColorPickerHelper__GrabRemotely_d__22* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1778fd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1778fd8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1779010, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17783d4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIColorPickerHelper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIColorPickerHelper>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size_5__5() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__size_5__5() ;

constexpr float_t const& __cordl_internal_get__startHue_5__2() const;

constexpr float_t& __cordl_internal_get__startHue_5__2() ;

constexpr float_t const& __cordl_internal_get__startSaturation_5__4() const;

constexpr float_t& __cordl_internal_get__startSaturation_5__4() ;

constexpr float_t const& __cordl_internal_get__startValue_5__3() const;

constexpr float_t& __cordl_internal_get__startValue_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startpos_5__6() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startpos_5__6() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::UnityW<::VROSC::UIColorPicker> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::VROSC::UIColorPicker>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIColorPickerHelper>  value) ;

constexpr void __cordl_internal_set__size_5__5(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startHue_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startSaturation_5__4(float_t  value) ;

constexpr void __cordl_internal_set__startValue_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startpos_5__6(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::VROSC::UIColorPicker>  value) ;

/// @brief Method .ctor, addr 0x17780bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorPickerHelper__GrabRemotely_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerHelper__GrabRemotely_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPickerHelper__GrabRemotely_d__22(UIColorPickerHelper__GrabRemotely_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerHelper__GrabRemotely_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPickerHelper__GrabRemotely_d__22(UIColorPickerHelper__GrabRemotely_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1275};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPicker>  ___target;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPickerHelper>  _____4__this;

/// @brief Field <startHue>5__2, offset: 0x38, size: 0x4, def value: None
 float_t  ____startHue_5__2;

/// @brief Field <startValue>5__3, offset: 0x3c, size: 0x4, def value: None
 float_t  ____startValue_5__3;

/// @brief Field <startSaturation>5__4, offset: 0x40, size: 0x4, def value: None
 float_t  ____startSaturation_5__4;

/// @brief Field <size>5__5, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____size_5__5;

/// @brief Field <startpos>5__6, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startpos_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ____startHue_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ____startValue_5__3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ____startSaturation_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ____size_5__5) == 0x44, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper__GrabRemotely_d__22, ____startpos_5__6) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPickerHelper__GrabRemotely_d__22, 0x60>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPickerHelper
class CORDL_TYPE UIColorPickerHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GrabRemotely_d__22 = ::VROSC::UIColorPickerHelper__GrabRemotely_d__22;

/// @brief Field _colorDisplay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorDisplay, put=__cordl_internal_set__colorDisplay)) ::UnityW<::VROSC::ProceduralAdjustableMesh>  _colorDisplay;

/// @brief Field _grabbingDevice, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _hueDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hueDisplay, put=__cordl_internal_set__hueDisplay)) ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  _hueDisplay;

/// @brief Field _hueRange, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__hueRange, put=__cordl_internal_set__hueRange)) float_t  _hueRange;

/// @brief Field _inputSensitivity, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get__inputSensitivity, put=__cordl_internal_set__inputSensitivity)) ::UnityEngine::Vector3  _inputSensitivity;

/// @brief Field _miniHue, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__miniHue, put=__cordl_internal_set__miniHue)) ::UnityW<::VROSC::UIColorPickerMiniBar>  _miniHue;

/// @brief Field _miniSaturation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__miniSaturation, put=__cordl_internal_set__miniSaturation)) ::UnityW<::VROSC::UIColorPickerMiniBar>  _miniSaturation;

/// @brief Field _miniValue, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__miniValue, put=__cordl_internal_set__miniValue)) ::UnityW<::VROSC::UIColorPickerMiniBar>  _miniValue;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _positioning, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__positioning, put=__cordl_internal_set__positioning)) ::UnityW<::VROSC::UIHelperPositioning>  _positioning;

/// @brief Field _saturationDisplay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__saturationDisplay, put=__cordl_internal_set__saturationDisplay)) ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  _saturationDisplay;

/// @brief Field _saturationDot, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__saturationDot, put=__cordl_internal_set__saturationDot)) ::UnityW<::UnityEngine::Transform>  _saturationDot;

/// @brief Field _saturationHeight, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__saturationHeight, put=__cordl_internal_set__saturationHeight)) float_t  _saturationHeight;

/// @brief Field _testColor, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__testColor, put=__cordl_internal_set__testColor)) ::UnityEngine::Color  _testColor;

/// @brief Field _valueDot, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueDot, put=__cordl_internal_set__valueDot)) ::UnityW<::UnityEngine::Transform>  _valueDot;

/// @brief Field _valueHeight, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueHeight, put=__cordl_internal_set__valueHeight)) float_t  _valueHeight;

/// @brief Field _valueSphere, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueSphere, put=__cordl_internal_set__valueSphere)) ::UnityW<::VROSC::AdjustableMesh>  _valueSphere;

/// @brief Field _valueSphereScaleAdjust, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueSphereScaleAdjust, put=__cordl_internal_set__valueSphereScaleAdjust)) float_t  _valueSphereScaleAdjust;

/// @brief Field _visual, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::UnityW<::UnityEngine::GameObject>  _visual;

/// @brief Method Awake, addr 0x1777ee8, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Grab, addr 0x1777fd8, size 0x68, virtual false, abstract: false, final false
inline void Grab(::VROSC::UIColorPicker*  target, ::VROSC::InputDevice*  inputDevice) ;

/// @brief Method GrabRemotely, addr 0x1778040, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabRemotely(::VROSC::UIColorPicker*  target, ::VROSC::InputDevice*  device) ;

static inline ::VROSC::UIColorPickerHelper* New_ctor() ;

/// @brief Method SetColor, addr 0x1778150, size 0x1a0, virtual false, abstract: false, final false
inline void SetColor(float_t  hue, float_t  saturation, float_t  value, ::UnityEngine::Color  color) ;

/// @brief Method StopGrab, addr 0x17780b4, size 0x8, virtual false, abstract: false, final false
inline void StopGrab(::VROSC::InputDevice*  device) ;

/// @brief Method Verify, addr 0x1777f18, size 0xc0, virtual false, abstract: false, final false
inline void Verify(bool  forceUpdate) ;

constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh> const& __cordl_internal_get__colorDisplay() const;

constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh>& __cordl_internal_get__colorDisplay() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh> const& __cordl_internal_get__hueDisplay() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>& __cordl_internal_get__hueDisplay() ;

constexpr float_t const& __cordl_internal_get__hueRange() const;

constexpr float_t& __cordl_internal_get__hueRange() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__inputSensitivity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__inputSensitivity() ;

constexpr ::UnityW<::VROSC::UIColorPickerMiniBar> const& __cordl_internal_get__miniHue() const;

constexpr ::UnityW<::VROSC::UIColorPickerMiniBar>& __cordl_internal_get__miniHue() ;

constexpr ::UnityW<::VROSC::UIColorPickerMiniBar> const& __cordl_internal_get__miniSaturation() const;

constexpr ::UnityW<::VROSC::UIColorPickerMiniBar>& __cordl_internal_get__miniSaturation() ;

constexpr ::UnityW<::VROSC::UIColorPickerMiniBar> const& __cordl_internal_get__miniValue() const;

constexpr ::UnityW<::VROSC::UIColorPickerMiniBar>& __cordl_internal_get__miniValue() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr ::UnityW<::VROSC::UIHelperPositioning> const& __cordl_internal_get__positioning() const;

constexpr ::UnityW<::VROSC::UIHelperPositioning>& __cordl_internal_get__positioning() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh> const& __cordl_internal_get__saturationDisplay() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>& __cordl_internal_get__saturationDisplay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__saturationDot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__saturationDot() ;

constexpr float_t const& __cordl_internal_get__saturationHeight() const;

constexpr float_t& __cordl_internal_get__saturationHeight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__testColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__testColor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__valueDot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__valueDot() ;

constexpr float_t const& __cordl_internal_get__valueHeight() const;

constexpr float_t& __cordl_internal_get__valueHeight() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__valueSphere() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__valueSphere() ;

constexpr float_t const& __cordl_internal_get__valueSphereScaleAdjust() const;

constexpr float_t& __cordl_internal_get__valueSphereScaleAdjust() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set__colorDisplay(::UnityW<::VROSC::ProceduralAdjustableMesh>  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__hueDisplay(::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  value) ;

constexpr void __cordl_internal_set__hueRange(float_t  value) ;

constexpr void __cordl_internal_set__inputSensitivity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__miniHue(::UnityW<::VROSC::UIColorPickerMiniBar>  value) ;

constexpr void __cordl_internal_set__miniSaturation(::UnityW<::VROSC::UIColorPickerMiniBar>  value) ;

constexpr void __cordl_internal_set__miniValue(::UnityW<::VROSC::UIColorPickerMiniBar>  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__positioning(::UnityW<::VROSC::UIHelperPositioning>  value) ;

constexpr void __cordl_internal_set__saturationDisplay(::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  value) ;

constexpr void __cordl_internal_set__saturationDot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__saturationHeight(float_t  value) ;

constexpr void __cordl_internal_set__testColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__valueDot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__valueHeight(float_t  value) ;

constexpr void __cordl_internal_set__valueSphere(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__valueSphereScaleAdjust(float_t  value) ;

constexpr void __cordl_internal_set__visual(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x17783c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorPickerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPickerHelper(UIColorPickerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPickerHelper(UIColorPickerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1276};

/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _colorDisplay, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ProceduralAdjustableMesh>  ____colorDisplay;

/// @brief Field _hueDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  ____hueDisplay;

/// @brief Field _saturationDisplay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  ____saturationDisplay;

/// @brief Field _miniHue, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPickerMiniBar>  ____miniHue;

/// @brief Field _miniSaturation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPickerMiniBar>  ____miniSaturation;

/// @brief Field _miniValue, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPickerMiniBar>  ____miniValue;

/// @brief Field _saturationDot, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____saturationDot;

/// @brief Field _saturationHeight, offset: 0x60, size: 0x4, def value: None
 float_t  ____saturationHeight;

/// @brief Field _valueDot, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____valueDot;

/// @brief Field _valueHeight, offset: 0x70, size: 0x4, def value: None
 float_t  ____valueHeight;

/// @brief Field _hueRange, offset: 0x74, size: 0x4, def value: None
 float_t  ____hueRange;

/// @brief Field _valueSphere, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____valueSphere;

/// @brief Field _valueSphereScaleAdjust, offset: 0x80, size: 0x4, def value: None
 float_t  ____valueSphereScaleAdjust;

/// @brief Field _inputSensitivity, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____inputSensitivity;

/// @brief Field _visual, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visual;

/// @brief Field _positioning, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelperPositioning>  ____positioning;

/// @brief Field _testColor, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Color  ____testColor;

/// @brief Field _grabbingDevice, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPickerHelper, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____colorDisplay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____hueDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____saturationDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____miniHue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____miniSaturation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____miniValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____saturationDot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____saturationHeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____valueDot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____valueHeight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____hueRange) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____valueSphere) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____valueSphereScaleAdjust) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____inputSensitivity) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____visual) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____positioning) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____testColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerHelper, ____grabbingDevice) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPickerHelper, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIColorPickerHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerHelper*, "VROSC", "UIColorPickerHelper");
NEED_NO_BOX(::VROSC::UIColorPickerHelper__GrabRemotely_d__22);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerHelper__GrabRemotely_d__22*, "VROSC", "UIColorPickerHelper/<GrabRemotely>d__22");
