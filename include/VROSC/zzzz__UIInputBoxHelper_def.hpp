#pragma once
// IWYU pragma private; include "VROSC/UIInputBoxHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIInputBoxHelper)
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
class Transform;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIHelperPositioning;
}
namespace VROSC {
class UIInputBoxHelper__GrabRemotely_d__11;
}
namespace VROSC {
class UIInputBox;
}
// Forward declare root types
namespace VROSC {
class UIInputBoxHelper;
}
namespace VROSC {
class UIInputBoxHelper__GrabRemotely_d__11;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIInputBoxHelper);
MARK_REF_PTR_T(::VROSC::UIInputBoxHelper__GrabRemotely_d__11);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBoxHelper/<GrabRemotely>d__11
class CORDL_TYPE UIInputBoxHelper__GrabRemotely_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIInputBoxHelper>  __4__this;

/// @brief Field <size>5__2, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__size_5__2, put=__cordl_internal_set__size_5__2)) ::UnityEngine::Vector3  _size_5__2;

/// @brief Field device, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::UnityW<::VROSC::InputDevice>  device;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::VROSC::UIInputBox>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17796fc, size 0x3a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIInputBoxHelper__GrabRemotely_d__11* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1779a9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1779aa4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1779adc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17796f8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIInputBoxHelper> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIInputBoxHelper>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__size_5__2() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_device() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_device() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIInputBoxHelper>  value) ;

constexpr void __cordl_internal_set__size_5__2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_device(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::VROSC::UIInputBox>  value) ;

/// @brief Method .ctor, addr 0x17796c8, size 0x28, virtual false, abstract: false, final false
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
constexpr UIInputBoxHelper__GrabRemotely_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBoxHelper__GrabRemotely_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBoxHelper__GrabRemotely_d__11(UIInputBoxHelper__GrabRemotely_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBoxHelper__GrabRemotely_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBoxHelper__GrabRemotely_d__11(UIInputBoxHelper__GrabRemotely_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1284};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ___target;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBoxHelper>  _____4__this;

/// @brief Field device, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___device;

/// @brief Field <size>5__2, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____size_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBoxHelper__GrabRemotely_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper__GrabRemotely_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper__GrabRemotely_d__11, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper__GrabRemotely_d__11, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper__GrabRemotely_d__11, ___device) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper__GrabRemotely_d__11, ____size_5__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBoxHelper__GrabRemotely_d__11, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIInputBoxHelper
class CORDL_TYPE UIInputBoxHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GrabRemotely_d__11 = ::VROSC::UIInputBoxHelper__GrabRemotely_d__11;

/// @brief Field _centerSphere, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__centerSphere, put=__cordl_internal_set__centerSphere)) bool  _centerSphere;

/// @brief Field _grabbingDevice, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbingDevice, put=__cordl_internal_set__grabbingDevice)) ::UnityW<::VROSC::InputDevice>  _grabbingDevice;

/// @brief Field _hideControllers, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideControllers, put=__cordl_internal_set__hideControllers)) bool  _hideControllers;

/// @brief Field _inputSensitivity, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__inputSensitivity, put=__cordl_internal_set__inputSensitivity)) ::UnityEngine::Vector3  _inputSensitivity;

/// @brief Field _name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _positioning, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__positioning, put=__cordl_internal_set__positioning)) ::UnityW<::VROSC::UIHelperPositioning>  _positioning;

/// @brief Field _valueDot, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueDot, put=__cordl_internal_set__valueDot)) ::UnityW<::UnityEngine::Transform>  _valueDot;

/// @brief Field _visual, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__visual, put=__cordl_internal_set__visual)) ::UnityW<::UnityEngine::GameObject>  _visual;

/// @brief Method Awake, addr 0x1779470, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Grab, addr 0x1779490, size 0x150, virtual false, abstract: false, final false
inline void Grab(::VROSC::UIInputBox*  target, ::VROSC::InputDevice*  inputDevice) ;

/// @brief Method GrabRemotely, addr 0x17795e0, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GrabRemotely(::VROSC::UIInputBox*  target, ::VROSC::InputDevice*  device) ;

static inline ::VROSC::UIInputBoxHelper* New_ctor() ;

/// @brief Method StopGrab, addr 0x1779654, size 0x74, virtual false, abstract: false, final false
inline void StopGrab(::VROSC::InputDevice*  device) ;

constexpr bool const& __cordl_internal_get__centerSphere() const;

constexpr bool& __cordl_internal_get__centerSphere() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__grabbingDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__grabbingDevice() ;

constexpr bool const& __cordl_internal_get__hideControllers() const;

constexpr bool& __cordl_internal_get__hideControllers() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__inputSensitivity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__inputSensitivity() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr ::UnityW<::VROSC::UIHelperPositioning> const& __cordl_internal_get__positioning() const;

constexpr ::UnityW<::VROSC::UIHelperPositioning>& __cordl_internal_get__positioning() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__valueDot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__valueDot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__visual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__visual() ;

constexpr void __cordl_internal_set__centerSphere(bool  value) ;

constexpr void __cordl_internal_set__grabbingDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__hideControllers(bool  value) ;

constexpr void __cordl_internal_set__inputSensitivity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__positioning(::UnityW<::VROSC::UIHelperPositioning>  value) ;

constexpr void __cordl_internal_set__valueDot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__visual(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x17796f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputBoxHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputBoxHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputBoxHelper(UIInputBoxHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputBoxHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputBoxHelper(UIInputBoxHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1285};

/// @brief Field _name, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _valueDot, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____valueDot;

/// @brief Field _inputSensitivity, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____inputSensitivity;

/// @brief Field _visual, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____visual;

/// @brief Field _positioning, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelperPositioning>  ____positioning;

/// @brief Field _hideControllers, offset: 0x50, size: 0x1, def value: None
 bool  ____hideControllers;

/// @brief Field _centerSphere, offset: 0x51, size: 0x1, def value: None
 bool  ____centerSphere;

/// @brief Field _grabbingDevice, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____grabbingDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIInputBoxHelper, ____name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____valueDot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____inputSensitivity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____visual) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____positioning) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____hideControllers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____centerSphere) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIInputBoxHelper, ____grabbingDevice) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIInputBoxHelper, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIInputBoxHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBoxHelper*, "VROSC", "UIInputBoxHelper");
NEED_NO_BOX(::VROSC::UIInputBoxHelper__GrabRemotely_d__11);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIInputBoxHelper__GrabRemotely_d__11*, "VROSC", "UIInputBoxHelper/<GrabRemotely>d__11");
