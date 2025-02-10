#pragma once
// IWYU pragma private; include "VROSC/UISpinnerHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UISpinnerHelper)
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
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TextSpinner;
}
namespace VROSC {
class UIHelperPositioning;
}
namespace VROSC {
class UISpinnerHelper__GrabSpinnerRemotely_d__14;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
class UISpinnerHelper;
}
namespace VROSC {
class UISpinnerHelper__GrabSpinnerRemotely_d__14;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISpinnerHelper);
MARK_REF_PTR_T(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISpinnerHelper/<GrabSpinnerRemotely>d__14
class CORDL_TYPE UISpinnerHelper__GrabSpinnerRemotely_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UISpinnerHelper>  __4__this;

/// @brief Field <size>5__3, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__size_5__3, put=__cordl_internal_set__size_5__3)) ::UnityEngine::Vector3  _size_5__3;

/// @brief Field <startValue>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__startValue_5__2, put=__cordl_internal_set__startValue_5__2)) float_t  _startValue_5__2;

/// @brief Field <startpos>5__4, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__startpos_5__4, put=__cordl_internal_set__startpos_5__4)) ::UnityEngine::Vector3  _startpos_5__4;

/// @brief Field device, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::VROSC::UISpinner>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x177b32c, size 0x444, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x177b770, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x177b778, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x177b7b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x177b328, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UISpinnerHelper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UISpinnerHelper>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__size_5__3() ;

constexpr float_t const& __cordl_internal_get__startValue_5__2() const;

constexpr float_t& __cordl_internal_get__startValue_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startpos_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startpos_5__4() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UISpinnerHelper>  value) ;

constexpr void __cordl_internal_set__size_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startValue_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startpos_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x177b258, size 0x28, virtual false, abstract: false, final false
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
constexpr UISpinnerHelper__GrabSpinnerRemotely_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISpinnerHelper__GrabSpinnerRemotely_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISpinnerHelper__GrabSpinnerRemotely_d__14(UISpinnerHelper__GrabSpinnerRemotely_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISpinnerHelper__GrabSpinnerRemotely_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISpinnerHelper__GrabSpinnerRemotely_d__14(UISpinnerHelper__GrabSpinnerRemotely_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1289};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ___target;

/// @brief Field device, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinnerHelper>  _____4__this;

/// @brief Field <startValue>5__2, offset: 0x38, size: 0x4, def value: None
 float_t  ____startValue_5__2;

/// @brief Field <size>5__3, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____size_5__3;

/// @brief Field <startpos>5__4, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startpos_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, ___device) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, ____startValue_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, ____size_5__3) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, ____startpos_5__4) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISpinnerHelper
class CORDL_TYPE UISpinnerHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GrabSpinnerRemotely_d__14 = ::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14;

/// @brief Field _continuous, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__continuous, put=__cordl_internal_set__continuous)) bool  _continuous;

/// @brief Field _grabbingDevice, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _inputHeightPerTick, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__inputHeightPerTick, put=__cordl_internal_set__inputHeightPerTick)) float_t  _inputHeightPerTick;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _positioning, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__positioning, put=__cordl_internal_set__positioning)) ::UnityW<::VROSC::UIHelperPositioning>  _positioning;

/// @brief Field _spinner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__spinner, put=__cordl_internal_set__spinner)) ::UnityW<::VROSC::TextSpinner>  _spinner;

/// @brief Field _thumbStickInputSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__thumbStickInputSpeed, put=__cordl_internal_set__thumbStickInputSpeed)) float_t  _thumbStickInputSpeed;

/// @brief Field _thumbstickInput, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__thumbstickInput, put=__cordl_internal_set__thumbstickInput)) float_t  _thumbstickInput;

/// @brief Field _visual, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::UnityW<::UnityEngine::GameObject>  _visual;

/// @brief Method Awake, addr 0x177afd0, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EvaluateThumbstickInput, addr 0x177b280, size 0xa0, virtual false, abstract: false, final false
inline void EvaluateThumbstickInput(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  vector) ;

/// @brief Method Grab, addr 0x1776490, size 0x68, virtual false, abstract: false, final false
inline void Grab(::VROSC::UISpinner*  target, ::VROSC::InputDevice*  inputDevice) ;

/// @brief Method GrabSpinnerRemotely, addr 0x177b1e4, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabSpinnerRemotely(::VROSC::UISpinner*  target, ::VROSC::InputDevice*  device) ;

static inline ::VROSC::UISpinnerHelper* New_ctor() ;

/// @brief Method OnDisable, addr 0x177b0ec, size 0xf8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x177aff0, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StopGrab, addr 0x1775f9c, size 0x8, virtual false, abstract: false, final false
inline void StopGrab(::VROSC::InputDevice*  device) ;

constexpr bool const& __cordl_internal_get__continuous() const;

constexpr bool& __cordl_internal_get__continuous() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr float_t const& __cordl_internal_get__inputHeightPerTick() const;

constexpr float_t& __cordl_internal_get__inputHeightPerTick() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr ::UnityW<::VROSC::UIHelperPositioning> const& __cordl_internal_get__positioning() const;

constexpr ::UnityW<::VROSC::UIHelperPositioning>& __cordl_internal_get__positioning() ;

constexpr ::UnityW<::VROSC::TextSpinner> const& __cordl_internal_get__spinner() const;

constexpr ::UnityW<::VROSC::TextSpinner>& __cordl_internal_get__spinner() ;

constexpr float_t const& __cordl_internal_get__thumbStickInputSpeed() const;

constexpr float_t& __cordl_internal_get__thumbStickInputSpeed() ;

constexpr float_t const& __cordl_internal_get__thumbstickInput() const;

constexpr float_t& __cordl_internal_get__thumbstickInput() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set__continuous(bool  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__inputHeightPerTick(float_t  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__positioning(::UnityW<::VROSC::UIHelperPositioning>  value) ;

constexpr void __cordl_internal_set__spinner(::UnityW<::VROSC::TextSpinner>  value) ;

constexpr void __cordl_internal_set__thumbStickInputSpeed(float_t  value) ;

constexpr void __cordl_internal_set__thumbstickInput(float_t  value) ;

constexpr void __cordl_internal_set__visual(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x177b320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISpinnerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISpinnerHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISpinnerHelper(UISpinnerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISpinnerHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISpinnerHelper(UISpinnerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1290};

/// @brief Field _spinner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TextSpinner>  ____spinner;

/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _inputHeightPerTick, offset: 0x30, size: 0x4, def value: None
 float_t  ____inputHeightPerTick;

/// @brief Field _thumbStickInputSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____thumbStickInputSpeed;

/// @brief Field _continuous, offset: 0x38, size: 0x1, def value: None
 bool  ____continuous;

/// @brief Field _visual, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visual;

/// @brief Field _positioning, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelperPositioning>  ____positioning;

/// @brief Field _grabbingDevice, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

/// @brief Field _thumbstickInput, offset: 0x58, size: 0x4, def value: None
 float_t  ____thumbstickInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISpinnerHelper, ____spinner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____inputHeightPerTick) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____thumbStickInputSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____continuous) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____visual) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____positioning) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____grabbingDevice) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISpinnerHelper, ____thumbstickInput) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISpinnerHelper, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISpinnerHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinnerHelper*, "VROSC", "UISpinnerHelper");
NEED_NO_BOX(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISpinnerHelper__GrabSpinnerRemotely_d__14*, "VROSC", "UISpinnerHelper/<GrabSpinnerRemotely>d__14");
