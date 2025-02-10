#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeOfDayType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentManager)
namespace GlobalNamespace {
class EnvironmentManager__AnimateLight_d__14;
}
namespace GlobalNamespace {
class TimeOfDayPreset;
}
namespace GlobalNamespace {
struct TimeOfDayType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentManager;
}
namespace GlobalNamespace {
class EnvironmentManager__AnimateLight_d__14;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentManager);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, TimeOfDayType, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentManager/<AnimateLight>d__14
class CORDL_TYPE EnvironmentManager__AnimateLight_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EnvironmentManager>  __4__this;

/// @brief Field <currentDirLight>5__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDirLight_5__4, put=__cordl_internal_set__currentDirLight_5__4)) ::UnityW<::UnityEngine::Light>  _currentDirLight_5__4;

/// @brief Field <currentSkybox>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSkybox_5__2, put=__cordl_internal_set__currentSkybox_5__2)) ::UnityW<::UnityEngine::Material>  _currentSkybox_5__2;

/// @brief Field <currentSunTransform>5__6, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSunTransform_5__6, put=__cordl_internal_set__currentSunTransform_5__6)) ::UnityW<::UnityEngine::Transform>  _currentSunTransform_5__6;

/// @brief Field <elapsedTime>5__10, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedTime_5__10, put=__cordl_internal_set__elapsedTime_5__10)) float_t  _elapsedTime_5__10;

/// @brief Field <sourceColor>5__8, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__sourceColor_5__8, put=__cordl_internal_set__sourceColor_5__8)) ::UnityEngine::Color  _sourceColor_5__8;

/// @brief Field <targetColor>5__9, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetColor_5__9, put=__cordl_internal_set__targetColor_5__9)) ::UnityEngine::Color  _targetColor_5__9;

/// @brief Field <targetDirLight>5__5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetDirLight_5__5, put=__cordl_internal_set__targetDirLight_5__5)) ::UnityW<::UnityEngine::Light>  _targetDirLight_5__5;

/// @brief Field <targetSkybox>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetSkybox_5__3, put=__cordl_internal_set__targetSkybox_5__3)) ::UnityW<::UnityEngine::Material>  _targetSkybox_5__3;

/// @brief Field <targetSunTransform>5__7, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetSunTransform_5__7, put=__cordl_internal_set__targetSunTransform_5__7)) ::UnityW<::UnityEngine::Transform>  _targetSunTransform_5__7;

/// @brief Field animationTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationTime, put=__cordl_internal_set_animationTime)) float_t  animationTime;

/// @brief Field timeOfDay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOfDay, put=__cordl_internal_set_timeOfDay)) ::GlobalNamespace::TimeOfDayType  timeOfDay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x16c174c, size 0x5a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::EnvironmentManager__AnimateLight_d__14* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x16c1cf0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x16c1cf8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x16c1d30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x16c1748, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::EnvironmentManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EnvironmentManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__currentDirLight_5__4() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__currentDirLight_5__4() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__currentSkybox_5__2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__currentSkybox_5__2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__currentSunTransform_5__6() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__currentSunTransform_5__6() ;

constexpr float_t const& __cordl_internal_get__elapsedTime_5__10() const;

constexpr float_t& __cordl_internal_get__elapsedTime_5__10() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__sourceColor_5__8() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__sourceColor_5__8() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__targetColor_5__9() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__targetColor_5__9() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__targetDirLight_5__5() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__targetDirLight_5__5() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__targetSkybox_5__3() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__targetSkybox_5__3() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetSunTransform_5__7() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetSunTransform_5__7() ;

constexpr float_t const& __cordl_internal_get_animationTime() const;

constexpr float_t& __cordl_internal_get_animationTime() ;

constexpr ::GlobalNamespace::TimeOfDayType const& __cordl_internal_get_timeOfDay() const;

constexpr ::GlobalNamespace::TimeOfDayType& __cordl_internal_get_timeOfDay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EnvironmentManager>  value) ;

constexpr void __cordl_internal_set__currentDirLight_5__4(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__currentSkybox_5__2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__currentSunTransform_5__6(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__elapsedTime_5__10(float_t  value) ;

constexpr void __cordl_internal_set__sourceColor_5__8(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__targetColor_5__9(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__targetDirLight_5__5(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__targetSkybox_5__3(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__targetSunTransform_5__7(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_animationTime(float_t  value) ;

constexpr void __cordl_internal_set_timeOfDay(::GlobalNamespace::TimeOfDayType  value) ;

/// @brief Method .ctor, addr 0x16c15d0, size 0x28, virtual false, abstract: false, final false
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
constexpr EnvironmentManager__AnimateLight_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentManager__AnimateLight_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentManager__AnimateLight_d__14(EnvironmentManager__AnimateLight_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentManager__AnimateLight_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentManager__AnimateLight_d__14(EnvironmentManager__AnimateLight_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{35};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EnvironmentManager>  _____4__this;

/// @brief Field timeOfDay, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::TimeOfDayType  ___timeOfDay;

/// @brief Field animationTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___animationTime;

/// @brief Field <currentSkybox>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____currentSkybox_5__2;

/// @brief Field <targetSkybox>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____targetSkybox_5__3;

/// @brief Field <currentDirLight>5__4, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____currentDirLight_5__4;

/// @brief Field <targetDirLight>5__5, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____targetDirLight_5__5;

/// @brief Field <currentSunTransform>5__6, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____currentSunTransform_5__6;

/// @brief Field <targetSunTransform>5__7, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetSunTransform_5__7;

/// @brief Field <sourceColor>5__8, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____sourceColor_5__8;

/// @brief Field <targetColor>5__9, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ____targetColor_5__9;

/// @brief Field <elapsedTime>5__10, offset: 0x80, size: 0x4, def value: None
 float_t  ____elapsedTime_5__10;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ___timeOfDay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ___animationTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____currentSkybox_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____targetSkybox_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____currentDirLight_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____targetDirLight_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____currentSunTransform_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____targetSunTransform_5__7) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____sourceColor_5__8) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____targetColor_5__9) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, ____elapsedTime_5__10) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentManager__AnimateLight_d__14, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentManager
class CORDL_TYPE EnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimateLight_d__14 = ::GlobalNamespace::EnvironmentManager__AnimateLight_d__14;

/// @brief Field AnimationPivot, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnimationPivot, put=__cordl_internal_set_AnimationPivot)) ::UnityW<::UnityEngine::GameObject>  AnimationPivot;

/// @brief Field DirLightObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DirLightObject, put=__cordl_internal_set_DirLightObject)) ::UnityW<::UnityEngine::GameObject>  DirLightObject;

/// @brief Field SunMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SunMaterial, put=__cordl_internal_set_SunMaterial)) ::UnityW<::UnityEngine::Material>  SunMaterial;

/// @brief Field SunObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SunObject, put=__cordl_internal_set_SunObject)) ::UnityW<::UnityEngine::GameObject>  SunObject;

/// @brief Field TimeOfDayPresets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TimeOfDayPresets, put=__cordl_internal_set_TimeOfDayPresets)) ::ArrayW<::UnityW<::GlobalNamespace::TimeOfDayPreset>,::Array<::UnityW<::GlobalNamespace::TimeOfDayPreset>>*>  TimeOfDayPresets;

/// @brief Field _activeCoroutine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeCoroutine, put=__cordl_internal_set__activeCoroutine)) ::UnityEngine::Coroutine*  _activeCoroutine;

/// @brief Field _activeLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeLight, put=__cordl_internal_set__activeLight)) ::UnityW<::UnityEngine::Light>  _activeLight;

/// @brief Field _currentLighting, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentLighting, put=__cordl_internal_set__currentLighting)) ::UnityW<::GlobalNamespace::TimeOfDayPreset>  _currentLighting;

/// @brief Field _presetsMap, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__presetsMap, put=__cordl_internal_set__presetsMap)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TimeOfDayType,::UnityW<::GlobalNamespace::TimeOfDayPreset>>*  _presetsMap;

/// @brief Field _skyboxMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__skyboxMaterial, put=__cordl_internal_set__skyboxMaterial)) ::UnityW<::UnityEngine::Material>  _skyboxMaterial;

/// @brief Field _sunMaterial, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sunMaterial, put=__cordl_internal_set__sunMaterial)) ::UnityW<::UnityEngine::Material>  _sunMaterial;

/// @brief Field cycleIndex, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_cycleIndex, put=__cordl_internal_set_cycleIndex)) int32_t  cycleIndex;

/// @brief Method AnimateLight, addr 0x16c1550, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnimateLight(::GlobalNamespace::TimeOfDayType  timeOfDay, float_t  animationTime) ;

/// @brief Method CycleTimeOfDay, addr 0x16c15f8, size 0x7c, virtual false, abstract: false, final false
inline void CycleTimeOfDay() ;

/// @brief Method CycleTimeOfDayTransition, addr 0x16c1674, size 0x80, virtual false, abstract: false, final false
inline void CycleTimeOfDayTransition() ;

static inline ::GlobalNamespace::EnvironmentManager* New_ctor() ;

/// @brief Method SetTimeOfDay, addr 0x16c13a4, size 0x148, virtual false, abstract: false, final false
inline void SetTimeOfDay(::GlobalNamespace::TimeOfDayType  timeOfDay) ;

/// @brief Method Start, addr 0x16c11cc, size 0x1d8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TransitionTimeOfDay, addr 0x16c14ec, size 0x64, virtual false, abstract: false, final false
inline void TransitionTimeOfDay(::GlobalNamespace::TimeOfDayType  timeOfDay, float_t  animationTime) ;

/// @brief Method Update, addr 0x16c16f4, size 0x4c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_AnimationPivot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_AnimationPivot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_DirLightObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_DirLightObject() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_SunMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_SunMaterial() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_SunObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_SunObject() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TimeOfDayPreset>,::Array<::UnityW<::GlobalNamespace::TimeOfDayPreset>>*> const& __cordl_internal_get_TimeOfDayPresets() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::TimeOfDayPreset>,::Array<::UnityW<::GlobalNamespace::TimeOfDayPreset>>*>& __cordl_internal_get_TimeOfDayPresets() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__activeCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__activeCoroutine() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__activeLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__activeLight() ;

constexpr ::UnityW<::GlobalNamespace::TimeOfDayPreset> const& __cordl_internal_get__currentLighting() const;

constexpr ::UnityW<::GlobalNamespace::TimeOfDayPreset>& __cordl_internal_get__currentLighting() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TimeOfDayType,::UnityW<::GlobalNamespace::TimeOfDayPreset>>* const& __cordl_internal_get__presetsMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TimeOfDayType,::UnityW<::GlobalNamespace::TimeOfDayPreset>>*& __cordl_internal_get__presetsMap() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__skyboxMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__skyboxMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__sunMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__sunMaterial() ;

constexpr int32_t const& __cordl_internal_get_cycleIndex() const;

constexpr int32_t& __cordl_internal_get_cycleIndex() ;

constexpr void __cordl_internal_set_AnimationPivot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_DirLightObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_SunMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_SunObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_TimeOfDayPresets(::ArrayW<::UnityW<::GlobalNamespace::TimeOfDayPreset>,::Array<::UnityW<::GlobalNamespace::TimeOfDayPreset>>*>  value) ;

constexpr void __cordl_internal_set__activeCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__activeLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__currentLighting(::UnityW<::GlobalNamespace::TimeOfDayPreset>  value) ;

constexpr void __cordl_internal_set__presetsMap(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TimeOfDayType,::UnityW<::GlobalNamespace::TimeOfDayPreset>>*  value) ;

constexpr void __cordl_internal_set__skyboxMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__sunMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_cycleIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x16c1740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentManager(EnvironmentManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentManager(EnvironmentManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{36};

/// @brief Field TimeOfDayPresets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::TimeOfDayPreset>,::Array<::UnityW<::GlobalNamespace::TimeOfDayPreset>>*>  ___TimeOfDayPresets;

/// @brief Field DirLightObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___DirLightObject;

/// @brief Field _activeCoroutine, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____activeCoroutine;

/// @brief Field _activeLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____activeLight;

/// @brief Field _skyboxMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____skyboxMaterial;

/// @brief Field SunMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___SunMaterial;

/// @brief Field SunObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___SunObject;

/// @brief Field AnimationPivot, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___AnimationPivot;

/// @brief Field _sunMaterial, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____sunMaterial;

/// @brief Field _currentLighting, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TimeOfDayPreset>  ____currentLighting;

/// @brief Field _presetsMap, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TimeOfDayType,::UnityW<::GlobalNamespace::TimeOfDayPreset>>*  ____presetsMap;

/// @brief Field cycleIndex, offset: 0x78, size: 0x4, def value: None
 int32_t  ___cycleIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ___TimeOfDayPresets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ___DirLightObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ____activeCoroutine) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ____activeLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ____skyboxMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ___SunMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ___SunObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ___AnimationPivot) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ____sunMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ____currentLighting) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ____presetsMap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentManager, ___cycleIndex) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentManager, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentManager*, "", "EnvironmentManager");
NEED_NO_BOX(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentManager__AnimateLight_d__14*, "", "EnvironmentManager/<AnimateLight>d__14");
