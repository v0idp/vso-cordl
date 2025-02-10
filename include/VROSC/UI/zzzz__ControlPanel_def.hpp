#pragma once
// IWYU pragma private; include "VROSC/UI/ControlPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlPanel)
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
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::UI {
class ControlPanel__ModifyPosition_d__9;
}
// Forward declare root types
namespace VROSC::UI {
class ControlPanel;
}
namespace VROSC::UI {
class ControlPanel__ModifyPosition_d__9;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::ControlPanel);
MARK_REF_PTR_T(::VROSC::UI::ControlPanel__ModifyPosition_d__9);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.ControlPanel/<ModifyPosition>d__9
class CORDL_TYPE ControlPanel__ModifyPosition_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UI::ControlPanel>  __4__this;

/// @brief Field <startPosition>5__2, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPosition_5__2, put=__cordl_internal_set__startPosition_5__2)) ::UnityEngine::Vector3  _startPosition_5__2;

/// @brief Field <time>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__3, put=__cordl_internal_set__time_5__3)) float_t  _time_5__3;

/// @brief Field correctPosition, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_correctPosition, put=__cordl_internal_set_correctPosition)) ::UnityEngine::Vector3  correctPosition;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x17e2e08, size 0x1a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UI::ControlPanel__ModifyPosition_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17e2fac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17e2fb4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x17e2fec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x17e2e04, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UI::ControlPanel> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UI::ControlPanel>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPosition_5__2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPosition_5__2() ;

constexpr float_t const& __cordl_internal_get__time_5__3() const;

constexpr float_t& __cordl_internal_get__time_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_correctPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_correctPosition() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UI::ControlPanel>  value) ;

constexpr void __cordl_internal_set__startPosition_5__2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__time_5__3(float_t  value) ;

constexpr void __cordl_internal_set_correctPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17e2dbc, size 0x28, virtual false, abstract: false, final false
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
constexpr ControlPanel__ModifyPosition_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlPanel__ModifyPosition_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlPanel__ModifyPosition_d__9(ControlPanel__ModifyPosition_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlPanel__ModifyPosition_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlPanel__ModifyPosition_d__9(ControlPanel__ModifyPosition_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1596};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::ControlPanel>  _____4__this;

/// @brief Field correctPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___correctPosition;

/// @brief Field <startPosition>5__2, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPosition_5__2;

/// @brief Field <time>5__3, offset: 0x40, size: 0x4, def value: None
 float_t  ____time_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::ControlPanel__ModifyPosition_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel__ModifyPosition_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel__ModifyPosition_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel__ModifyPosition_d__9, ___correctPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel__ModifyPosition_d__9, ____startPosition_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel__ModifyPosition_d__9, ____time_5__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::ControlPanel__ModifyPosition_d__9, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.ControlPanel
class CORDL_TYPE ControlPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ModifyPosition_d__9 = ::VROSC::UI::ControlPanel__ModifyPosition_d__9;

/// @brief Field _currentPosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentPosition, put=__cordl_internal_set__currentPosition)) ::UnityEngine::Vector3  _currentPosition;

/// @brief Field _distanceTolerance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceTolerance, put=__cordl_internal_set__distanceTolerance)) float_t  _distanceTolerance;

/// @brief Field _heightPercentage, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__heightPercentage, put=__cordl_internal_set__heightPercentage)) float_t  _heightPercentage;

/// @brief Field _mainCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainCamera, put=__cordl_internal_set__mainCamera)) ::UnityW<::UnityEngine::Camera>  _mainCamera;

/// @brief Field _moveCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__moveCurve, put=__cordl_internal_set__moveCurve)) ::UnityEngine::AnimationCurve*  _moveCurve;

/// @brief Field _moveSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSpeed, put=__cordl_internal_set__moveSpeed)) float_t  _moveSpeed;

/// @brief Field _targetPosition, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Method GetCorrectPosition, addr 0x17e2b60, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCorrectPosition() ;

/// @brief Method ModifyPosition, addr 0x17e2d38, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ModifyPosition(::UnityEngine::Vector3  correctPosition) ;

static inline ::VROSC::UI::ControlPanel* New_ctor() ;

/// @brief Method Update, addr 0x17e2c38, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentPosition() ;

constexpr float_t const& __cordl_internal_get__distanceTolerance() const;

constexpr float_t& __cordl_internal_get__distanceTolerance() ;

constexpr float_t const& __cordl_internal_get__heightPercentage() const;

constexpr float_t& __cordl_internal_get__heightPercentage() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mainCamera() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__moveCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__moveCurve() ;

constexpr float_t const& __cordl_internal_get__moveSpeed() const;

constexpr float_t& __cordl_internal_get__moveSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr void __cordl_internal_set__currentPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__distanceTolerance(float_t  value) ;

constexpr void __cordl_internal_set__heightPercentage(float_t  value) ;

constexpr void __cordl_internal_set__mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__moveCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17e2de4, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControlPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControlPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControlPanel(ControlPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControlPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControlPanel(ControlPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1597};

/// @brief Field _heightPercentage, offset: 0x20, size: 0x4, def value: None
 float_t  ____heightPercentage;

/// @brief Field _distanceTolerance, offset: 0x24, size: 0x4, def value: None
 float_t  ____distanceTolerance;

/// @brief Field _moveSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ____moveSpeed;

/// @brief Field _moveCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____moveCurve;

/// @brief Field _mainCamera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____mainCamera;

/// @brief Field _currentPosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentPosition;

/// @brief Field _targetPosition, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::ControlPanel, ____heightPercentage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel, ____distanceTolerance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel, ____moveSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel, ____moveCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel, ____mainCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel, ____currentPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControlPanel, ____targetPosition) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::ControlPanel, 0x58>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::ControlPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::ControlPanel*, "VROSC.UI", "ControlPanel");
NEED_NO_BOX(::VROSC::UI::ControlPanel__ModifyPosition_d__9);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::ControlPanel__ModifyPosition_d__9*, "VROSC.UI", "ControlPanel/<ModifyPosition>d__9");
