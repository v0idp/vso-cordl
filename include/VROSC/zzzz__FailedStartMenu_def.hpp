#pragma once
// IWYU pragma private; include "VROSC/FailedStartMenu.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FailedStartMenu)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class FailedStartMenu__Recenter_d__15;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class FailedStartMenu;
}
namespace VROSC {
class FailedStartMenu__Recenter_d__15;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FailedStartMenu);
MARK_REF_PTR_T(::VROSC::FailedStartMenu__Recenter_d__15);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FailedStartMenu/<Recenter>d__15
class CORDL_TYPE FailedStartMenu__Recenter_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::FailedStartMenu>  __4__this;

/// @brief Field <progress>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress_5__2, put=__cordl_internal_set__progress_5__2)) float_t  _progress_5__2;

/// @brief Field <startPosition>5__3, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition_5__3, put=__cordl_internal_set__startPosition_5__3)) ::UnityEngine::Vector3  _startPosition_5__3;

/// @brief Field <startRotation>5__4, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__startRotation_5__4, put=__cordl_internal_set__startRotation_5__4)) ::UnityEngine::Quaternion  _startRotation_5__4;

/// @brief Field <targetRotationNoZ>5__5, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetRotationNoZ_5__5, put=__cordl_internal_set__targetRotationNoZ_5__5)) ::UnityEngine::Quaternion  _targetRotationNoZ_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x173a8f8, size 0x1d8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::FailedStartMenu__Recenter_d__15* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x173aad0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x173aad8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x173ab10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x173a8f4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::FailedStartMenu> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::FailedStartMenu>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__progress_5__2() const;

constexpr float_t& __cordl_internal_get__progress_5__2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__3() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__startRotation_5__4() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__startRotation_5__4() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotationNoZ_5__5() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotationNoZ_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::FailedStartMenu>  value) ;

constexpr void __cordl_internal_set__progress_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startPosition_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startRotation_5__4(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__targetRotationNoZ_5__5(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x173a834, size 0x28, virtual false, abstract: false, final false
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
constexpr FailedStartMenu__Recenter_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FailedStartMenu__Recenter_d__15", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FailedStartMenu__Recenter_d__15(FailedStartMenu__Recenter_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FailedStartMenu__Recenter_d__15", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FailedStartMenu__Recenter_d__15(FailedStartMenu__Recenter_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1094};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::FailedStartMenu>  _____4__this;

/// @brief Field <progress>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____progress_5__2;

/// @brief Field <startPosition>5__3, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition_5__3;

/// @brief Field <startRotation>5__4, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____startRotation_5__4;

/// @brief Field <targetRotationNoZ>5__5, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____targetRotationNoZ_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, ____progress_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, ____startPosition_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, ____startRotation_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu__Recenter_d__15, ____targetRotationNoZ_5__5) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FailedStartMenu__Recenter_d__15, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FailedStartMenu
class CORDL_TYPE FailedStartMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Recenter_d__15 = ::VROSC::FailedStartMenu__Recenter_d__15;

/// @brief Field _alwaysUpright, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpright, put=__cordl_internal_set__alwaysUpright)) bool  _alwaysUpright;

/// @brief Field _angleTolereance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__angleTolereance, put=__cordl_internal_set__angleTolereance)) float_t  _angleTolereance;

/// @brief Field _distanceTolerance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceTolerance, put=__cordl_internal_set__distanceTolerance)) float_t  _distanceTolerance;

/// @brief Field _menuTransform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuTransform, put=__cordl_internal_set__menuTransform)) ::UnityW<::UnityEngine::Transform>  _menuTransform;

/// @brief Field _quitButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__quitButton, put=__cordl_internal_set__quitButton)) ::UnityW<::VROSC::UIButton>  _quitButton;

/// @brief Field _recenterCoroutine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__recenterCoroutine, put=__cordl_internal_set__recenterCoroutine)) ::UnityEngine::Coroutine*  _recenterCoroutine;

/// @brief Field _recenterCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__recenterCurve, put=__cordl_internal_set__recenterCurve)) ::UnityEngine::AnimationCurve*  _recenterCurve;

/// @brief Field _recenterTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__recenterTime, put=__cordl_internal_set__recenterTime)) float_t  _recenterTime;

/// @brief Field _targetPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Field _targetRotation, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetRotation, put=__cordl_internal_set__targetRotation)) ::UnityEngine::Quaternion  _targetRotation;

/// @brief Field _vrCameraTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrCameraTransform, put=__cordl_internal_set__vrCameraTransform)) ::UnityW<::UnityEngine::Transform>  _vrCameraTransform;

/// @brief Method GetRotationWithoutZ, addr 0x173a468, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotationWithoutZ(::UnityEngine::Quaternion  rotation) ;

static inline ::VROSC::FailedStartMenu* New_ctor() ;

/// @brief Method OnDestroy, addr 0x173a5ac, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method QuitButtonPressed, addr 0x173a85c, size 0x50, virtual false, abstract: false, final false
inline void QuitButtonPressed() ;

/// @brief Method Recenter, addr 0x173a7d4, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Recenter() ;

/// @brief Method Setup, addr 0x173a2dc, size 0x18c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Start, addr 0x173a524, size 0x88, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x173a670, size 0x164, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__alwaysUpright() const;

constexpr bool& __cordl_internal_get__alwaysUpright() ;

constexpr float_t const& __cordl_internal_get__angleTolereance() const;

constexpr float_t& __cordl_internal_get__angleTolereance() ;

constexpr float_t const& __cordl_internal_get__distanceTolerance() const;

constexpr float_t& __cordl_internal_get__distanceTolerance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__menuTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__menuTransform() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__quitButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__quitButton() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__recenterCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__recenterCoroutine() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__recenterCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__recenterCurve() ;

constexpr float_t const& __cordl_internal_get__recenterTime() const;

constexpr float_t& __cordl_internal_get__recenterTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__vrCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__vrCameraTransform() ;

constexpr void __cordl_internal_set__alwaysUpright(bool  value) ;

constexpr void __cordl_internal_set__angleTolereance(float_t  value) ;

constexpr void __cordl_internal_set__distanceTolerance(float_t  value) ;

constexpr void __cordl_internal_set__menuTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__quitButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__recenterCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__recenterCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__recenterTime(float_t  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__vrCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x173a8ac, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FailedStartMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FailedStartMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FailedStartMenu(FailedStartMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FailedStartMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FailedStartMenu(FailedStartMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1095};

/// @brief Field _recenterCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____recenterCurve;

/// @brief Field _vrCameraTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____vrCameraTransform;

/// @brief Field _recenterTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____recenterTime;

/// @brief Field _distanceTolerance, offset: 0x34, size: 0x4, def value: None
 float_t  ____distanceTolerance;

/// @brief Field _angleTolereance, offset: 0x38, size: 0x4, def value: None
 float_t  ____angleTolereance;

/// @brief Field _targetPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _targetRotation, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____targetRotation;

/// @brief Field _recenterCoroutine, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____recenterCoroutine;

/// @brief Field _quitButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____quitButton;

/// @brief Field _menuTransform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____menuTransform;

/// @brief Field _alwaysUpright, offset: 0x70, size: 0x1, def value: None
 bool  ____alwaysUpright;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FailedStartMenu, ____recenterCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____vrCameraTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____recenterTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____distanceTolerance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____angleTolereance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____targetPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____targetRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____recenterCoroutine) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____quitButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____menuTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::FailedStartMenu, ____alwaysUpright) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FailedStartMenu, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FailedStartMenu);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FailedStartMenu*, "VROSC", "FailedStartMenu");
NEED_NO_BOX(::VROSC::FailedStartMenu__Recenter_d__15);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FailedStartMenu__Recenter_d__15*, "VROSC", "FailedStartMenu/<Recenter>d__15");
