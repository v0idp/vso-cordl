#pragma once
// IWYU pragma private; include "VROSC/EnvironmentController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentController)
namespace GlobalNamespace {
class Environment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC::UI {
struct UISchemeColors;
}
namespace VROSC {
class EnvironmentController__FadeToOtherEnvironment_d__25;
}
namespace VROSC {
class EnvironmentData;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class EnvironmentController;
}
namespace VROSC {
class EnvironmentController__FadeToOtherEnvironment_d__25;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnvironmentController);
MARK_REF_PTR_T(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentController/<FadeToOtherEnvironment>d__25
class CORDL_TYPE EnvironmentController__FadeToOtherEnvironment_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::EnvironmentController>  __4__this;

/// @brief Field environment, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_environment, put=__cordl_internal_set_environment)) ::UnityW<::GlobalNamespace::Environment>  environment;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x171499c, size 0x130, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1714acc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1714ad4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1714b0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1714998, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::EnvironmentController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::EnvironmentController>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::Environment> const& __cordl_internal_get_environment() const;

constexpr ::UnityW<::GlobalNamespace::Environment>& __cordl_internal_get_environment() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::EnvironmentController>  value) ;

constexpr void __cordl_internal_set_environment(::UnityW<::GlobalNamespace::Environment>  value) ;

/// @brief Method .ctor, addr 0x1714598, size 0x28, virtual false, abstract: false, final false
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
constexpr EnvironmentController__FadeToOtherEnvironment_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentController__FadeToOtherEnvironment_d__25", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentController__FadeToOtherEnvironment_d__25(EnvironmentController__FadeToOtherEnvironment_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentController__FadeToOtherEnvironment_d__25", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentController__FadeToOtherEnvironment_d__25(EnvironmentController__FadeToOtherEnvironment_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{905};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentController>  _____4__this;

/// @brief Field environment, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Environment>  ___environment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25, ___environment) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentController
class CORDL_TYPE EnvironmentController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadeToOtherEnvironment_d__25 = ::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25;

 __declspec(property(get=get_CurrentEnvironment, put=set_CurrentEnvironment)) ::UnityW<::GlobalNamespace::Environment>  CurrentEnvironment;

/// @brief Field OnEnvironmentColorsLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEnvironmentColorsLoaded, put=setStaticF_OnEnvironmentColorsLoaded)) ::System::Action_1<::VROSC::UI::UISchemeColors>*  OnEnvironmentColorsLoaded;

/// @brief Field OnNewEnvironment, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnNewEnvironment, put=setStaticF_OnNewEnvironment)) ::System::Action_1<::UnityW<::GlobalNamespace::Environment>>*  OnNewEnvironment;

 __declspec(property(get=get_ScenesLoaded, put=set_ScenesLoaded)) bool  ScenesLoaded;

/// @brief Field <CurrentEnvironment>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentEnvironment_k__BackingField, put=__cordl_internal_set__CurrentEnvironment_k__BackingField)) ::UnityW<::GlobalNamespace::Environment>  _CurrentEnvironment_k__BackingField;

/// @brief Field <ScenesLoaded>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__ScenesLoaded_k__BackingField, put=__cordl_internal_set__ScenesLoaded_k__BackingField)) bool  _ScenesLoaded_k__BackingField;

/// @brief Field _environments, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__environments, put=__cordl_internal_set__environments)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Environment>>*  _environments;

/// @brief Field _passthroughEnvironmentData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__passthroughEnvironmentData, put=__cordl_internal_set__passthroughEnvironmentData)) ::UnityW<::VROSC::EnvironmentData>  _passthroughEnvironmentData;

/// @brief Field _scenes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__scenes, put=__cordl_internal_set__scenes)) ::System::Collections::Generic::List_1<::StringW>*  _scenes;

/// @brief Field _screenFadeCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenFadeCurve, put=__cordl_internal_set__screenFadeCurve)) ::UnityEngine::AnimationCurve*  _screenFadeCurve;

/// @brief Field _screenFadeTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenFadeTime, put=__cordl_internal_set__screenFadeTime)) float_t  _screenFadeTime;

/// @brief Field _startEnvironment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__startEnvironment, put=__cordl_internal_set__startEnvironment)) ::UnityW<::VROSC::EnvironmentData>  _startEnvironment;

/// @brief Method ActivateEnvironment, addr 0x1714134, size 0x464, virtual false, abstract: false, final false
inline void ActivateEnvironment(::GlobalNamespace::Environment*  environment) ;

/// @brief Method Awake, addr 0x17130c8, size 0x1a0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FadeToOtherEnvironment, addr 0x1713d34, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeToOtherEnvironment(::GlobalNamespace::Environment*  environment) ;

/// @brief Method GetEnvironment, addr 0x1713a2c, size 0x178, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Environment> GetEnvironment(::StringW  environmentId) ;

/// @brief Method HideCurrentEnvironment, addr 0x1714088, size 0xac, virtual false, abstract: false, final false
inline void HideCurrentEnvironment() ;

/// @brief Method LoadScenes, addr 0x1713574, size 0x218, virtual false, abstract: false, final false
inline void LoadScenes() ;

static inline ::VROSC::EnvironmentController* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x171347c, size 0xf8, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x1713268, size 0x214, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetEnvironmentColors, addr 0x1713e34, size 0x1f8, virtual false, abstract: false, final false
inline void ResetEnvironmentColors() ;

/// @brief Method SceneLoaded, addr 0x171378c, size 0x2a0, virtual false, abstract: false, final false
inline void SceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method SessionDataLoaded, addr 0x17146c0, size 0x254, virtual false, abstract: false, final false
inline void SessionDataLoaded(::VROSC::UserDataControllers*  userDataControllers) ;

/// @brief Method SetEnvironment, addr 0x1713da0, size 0x94, virtual false, abstract: false, final false
inline void SetEnvironment(::GlobalNamespace::Environment*  environment) ;

/// @brief Method SetEnvironment, addr 0x1713ba4, size 0x190, virtual false, abstract: false, final false
inline void SetEnvironment(::VROSC::EnvironmentData*  environmentData, bool  animate) ;

/// @brief Method SetEnvironmentColors, addr 0x171402c, size 0x5c, virtual false, abstract: false, final false
inline void SetEnvironmentColors(::VROSC::UI::UISchemeColors  colors) ;

/// @brief Method SetEnvironmentEffectsInput, addr 0x17145c0, size 0x1c, virtual false, abstract: false, final false
inline void SetEnvironmentEffectsInput(float_t  effectsAmount) ;

/// @brief Method UserDataLoaded, addr 0x17145dc, size 0xe4, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  userDataControllers) ;

constexpr ::UnityW<::GlobalNamespace::Environment> const& __cordl_internal_get__CurrentEnvironment_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::Environment>& __cordl_internal_get__CurrentEnvironment_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ScenesLoaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__ScenesLoaded_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Environment>>* const& __cordl_internal_get__environments() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Environment>>*& __cordl_internal_get__environments() ;

constexpr ::UnityW<::VROSC::EnvironmentData> const& __cordl_internal_get__passthroughEnvironmentData() const;

constexpr ::UnityW<::VROSC::EnvironmentData>& __cordl_internal_get__passthroughEnvironmentData() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__scenes() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__scenes() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__screenFadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__screenFadeCurve() ;

constexpr float_t const& __cordl_internal_get__screenFadeTime() const;

constexpr float_t& __cordl_internal_get__screenFadeTime() ;

constexpr ::UnityW<::VROSC::EnvironmentData> const& __cordl_internal_get__startEnvironment() const;

constexpr ::UnityW<::VROSC::EnvironmentData>& __cordl_internal_get__startEnvironment() ;

constexpr void __cordl_internal_set__CurrentEnvironment_k__BackingField(::UnityW<::GlobalNamespace::Environment>  value) ;

constexpr void __cordl_internal_set__ScenesLoaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__environments(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Environment>>*  value) ;

constexpr void __cordl_internal_set__passthroughEnvironmentData(::UnityW<::VROSC::EnvironmentData>  value) ;

constexpr void __cordl_internal_set__scenes(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__screenFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__screenFadeTime(float_t  value) ;

constexpr void __cordl_internal_set__startEnvironment(::UnityW<::VROSC::EnvironmentData>  value) ;

/// @brief Method .ctor, addr 0x1714914, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::UI::UISchemeColors>* getStaticF_OnEnvironmentColorsLoaded() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::Environment>>* getStaticF_OnNewEnvironment() ;

/// @brief Method get_CurrentEnvironment, addr 0x17130ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Environment> get_CurrentEnvironment() ;

/// @brief Method get_ScenesLoaded, addr 0x17130b4, size 0x8, virtual false, abstract: false, final false
inline bool get_ScenesLoaded() ;

static inline void setStaticF_OnEnvironmentColorsLoaded(::System::Action_1<::VROSC::UI::UISchemeColors>*  value) ;

static inline void setStaticF_OnNewEnvironment(::System::Action_1<::UnityW<::GlobalNamespace::Environment>>*  value) ;

/// @brief Method set_CurrentEnvironment, addr 0x17130a4, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentEnvironment(::GlobalNamespace::Environment*  value) ;

/// @brief Method set_ScenesLoaded, addr 0x17130bc, size 0xc, virtual false, abstract: false, final false
inline void set_ScenesLoaded(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentController(EnvironmentController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentController(EnvironmentController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{906};

/// @brief Field _startEnvironment, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentData>  ____startEnvironment;

/// @brief Field _passthroughEnvironmentData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::EnvironmentData>  ____passthroughEnvironmentData;

/// @brief Field _screenFadeCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____screenFadeCurve;

/// @brief Field _screenFadeTime, offset: 0x38, size: 0x4, def value: None
 float_t  ____screenFadeTime;

/// @brief Field _scenes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____scenes;

/// @brief Field <CurrentEnvironment>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Environment>  ____CurrentEnvironment_k__BackingField;

/// @brief Field _environments, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Environment>>*  ____environments;

/// @brief Field <ScenesLoaded>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____ScenesLoaded_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentController, ____startEnvironment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____passthroughEnvironmentData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____screenFadeCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____screenFadeTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____scenes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____CurrentEnvironment_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____environments) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentController, ____ScenesLoaded_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentController, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnvironmentController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentController*, "VROSC", "EnvironmentController");
NEED_NO_BOX(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentController__FadeToOtherEnvironment_d__25*, "VROSC", "EnvironmentController/<FadeToOtherEnvironment>d__25");
