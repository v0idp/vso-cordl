#pragma once
// IWYU pragma private; include "VROSC/StartMenu.hpp"
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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StartMenu)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
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
class BasicEnvironmentPanelUI;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class StartMenu__Recenter_d__22;
}
namespace VROSC {
class TutorialBlinkingUIElement;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class StartMenu;
}
namespace VROSC {
class StartMenu__Recenter_d__22;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::StartMenu);
MARK_REF_PTR_T(::VROSC::StartMenu__Recenter_d__22);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StartMenu/<Recenter>d__22
class CORDL_TYPE StartMenu__Recenter_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::StartMenu>  __4__this;

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

/// @brief Method MoveNext, addr 0x1765d28, size 0x1d8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::StartMenu__Recenter_d__22* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1765f00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1765f08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1765f40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1765d24, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::StartMenu> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::StartMenu>& __cordl_internal_get___4__this() ;

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

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::StartMenu>  value) ;

constexpr void __cordl_internal_set__progress_5__2(float_t  value) ;

constexpr void __cordl_internal_set__startPosition_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__startRotation_5__4(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__targetRotationNoZ_5__5(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x17653c4, size 0x28, virtual false, abstract: false, final false
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
constexpr StartMenu__Recenter_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartMenu__Recenter_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StartMenu__Recenter_d__22(StartMenu__Recenter_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartMenu__Recenter_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartMenu__Recenter_d__22(StartMenu__Recenter_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1181};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::StartMenu>  _____4__this;

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
static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, ____progress_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, ____startPosition_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, ____startRotation_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu__Recenter_d__22, ____targetRotationNoZ_5__5) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StartMenu__Recenter_d__22, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StartMenu
class CORDL_TYPE StartMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Recenter_d__22 = ::VROSC::StartMenu__Recenter_d__22;

/// @brief Field OnStartMenuClosed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnStartMenuClosed, put=setStaticF_OnStartMenuClosed)) ::System::Action*  OnStartMenuClosed;

/// @brief Field _alwaysUpright, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__alwaysUpright, put=__cordl_internal_set__alwaysUpright)) bool  _alwaysUpright;

/// @brief Field _angleTolerance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__angleTolerance, put=__cordl_internal_set__angleTolerance)) float_t  _angleTolerance;

/// @brief Field _creatingBlink, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__creatingBlink, put=__cordl_internal_set__creatingBlink)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _creatingBlink;

/// @brief Field _distanceTolerance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceTolerance, put=__cordl_internal_set__distanceTolerance)) float_t  _distanceTolerance;

/// @brief Field _environmentPanel, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__environmentPanel, put=__cordl_internal_set__environmentPanel)) ::UnityW<::VROSC::BasicEnvironmentPanelUI>  _environmentPanel;

/// @brief Field _isSetup, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSetup, put=__cordl_internal_set__isSetup)) bool  _isSetup;

/// @brief Field _loadingProgressText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingProgressText, put=__cordl_internal_set__loadingProgressText)) ::UnityW<::TMPro::TextMeshPro>  _loadingProgressText;

/// @brief Field _menuTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__menuTransform, put=__cordl_internal_set__menuTransform)) ::UnityW<::UnityEngine::Transform>  _menuTransform;

/// @brief Field _recenterCoroutine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__recenterCoroutine, put=__cordl_internal_set__recenterCoroutine)) ::UnityEngine::Coroutine*  _recenterCoroutine;

/// @brief Field _recenterCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__recenterCurve, put=__cordl_internal_set__recenterCurve)) ::UnityEngine::AnimationCurve*  _recenterCurve;

/// @brief Field _recenterTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__recenterTime, put=__cordl_internal_set__recenterTime)) float_t  _recenterTime;

/// @brief Field _startCreatingButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__startCreatingButton, put=__cordl_internal_set__startCreatingButton)) ::UnityW<::VROSC::UIButton>  _startCreatingButton;

/// @brief Field _startTutorialButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__startTutorialButton, put=__cordl_internal_set__startTutorialButton)) ::UnityW<::VROSC::UIButton>  _startTutorialButton;

/// @brief Field _targetPosition, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPosition, put=__cordl_internal_set__targetPosition)) ::UnityEngine::Vector3  _targetPosition;

/// @brief Field _targetRotation, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__targetRotation, put=__cordl_internal_set__targetRotation)) ::UnityEngine::Quaternion  _targetRotation;

/// @brief Field _tutorialBlink, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__tutorialBlink, put=__cordl_internal_set__tutorialBlink)) ::UnityW<::VROSC::TutorialBlinkingUIElement>  _tutorialBlink;

/// @brief Field _vrCameraTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrCameraTransform, put=__cordl_internal_set__vrCameraTransform)) ::UnityW<::UnityEngine::Transform>  _vrCameraTransform;

/// @brief Method Awake, addr 0x1764ae0, size 0x5c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetRotationWithoutZ, addr 0x1764dd0, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotationWithoutZ(::UnityEngine::Quaternion  rotation) ;

/// @brief Method LoadSessionProgressed, addr 0x1765c14, size 0xc8, virtual false, abstract: false, final false
inline void LoadSessionProgressed(::StringW  sessionId, float_t  progress) ;

static inline ::VROSC::StartMenu* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1764e8c, size 0x36c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Recenter, addr 0x1765364, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Recenter() ;

/// @brief Method Setup, addr 0x1764b3c, size 0x294, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StartCreating, addr 0x1765ad8, size 0x10c, virtual false, abstract: false, final false
inline void StartCreating() ;

/// @brief Method StartCreatingPressed, addr 0x1765524, size 0x350, virtual false, abstract: false, final false
inline void StartCreatingPressed() ;

/// @brief Method StartTutorialPressed, addr 0x17653ec, size 0x138, virtual false, abstract: false, final false
inline void StartTutorialPressed() ;

/// @brief Method TemplateSessionLoadFailed, addr 0x1765bfc, size 0x18, virtual false, abstract: false, final false
inline void TemplateSessionLoadFailed(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error) ;

/// @brief Method TemplateSessionLoadSucceeded, addr 0x1765be4, size 0x18, virtual false, abstract: false, final false
inline void TemplateSessionLoadSucceeded(::StringW  sessionId, bool  isDefaultSession) ;

/// @brief Method UnsubscribeFromSessionLoad, addr 0x1765874, size 0x264, virtual false, abstract: false, final false
inline void UnsubscribeFromSessionLoad() ;

/// @brief Method Update, addr 0x17651f8, size 0x16c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__alwaysUpright() const;

constexpr bool& __cordl_internal_get__alwaysUpright() ;

constexpr float_t const& __cordl_internal_get__angleTolerance() const;

constexpr float_t& __cordl_internal_get__angleTolerance() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__creatingBlink() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__creatingBlink() ;

constexpr float_t const& __cordl_internal_get__distanceTolerance() const;

constexpr float_t& __cordl_internal_get__distanceTolerance() ;

constexpr ::UnityW<::VROSC::BasicEnvironmentPanelUI> const& __cordl_internal_get__environmentPanel() const;

constexpr ::UnityW<::VROSC::BasicEnvironmentPanelUI>& __cordl_internal_get__environmentPanel() ;

constexpr bool const& __cordl_internal_get__isSetup() const;

constexpr bool& __cordl_internal_get__isSetup() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__loadingProgressText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__loadingProgressText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__menuTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__menuTransform() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__recenterCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__recenterCoroutine() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__recenterCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__recenterCurve() ;

constexpr float_t const& __cordl_internal_get__recenterTime() const;

constexpr float_t& __cordl_internal_get__recenterTime() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__startCreatingButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__startCreatingButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__startTutorialButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__startTutorialButton() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__targetRotation() ;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement> const& __cordl_internal_get__tutorialBlink() const;

constexpr ::UnityW<::VROSC::TutorialBlinkingUIElement>& __cordl_internal_get__tutorialBlink() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__vrCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__vrCameraTransform() ;

constexpr void __cordl_internal_set__alwaysUpright(bool  value) ;

constexpr void __cordl_internal_set__angleTolerance(float_t  value) ;

constexpr void __cordl_internal_set__creatingBlink(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__distanceTolerance(float_t  value) ;

constexpr void __cordl_internal_set__environmentPanel(::UnityW<::VROSC::BasicEnvironmentPanelUI>  value) ;

constexpr void __cordl_internal_set__isSetup(bool  value) ;

constexpr void __cordl_internal_set__loadingProgressText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__menuTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__recenterCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__recenterCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__recenterTime(float_t  value) ;

constexpr void __cordl_internal_set__startCreatingButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__startTutorialButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__tutorialBlink(::UnityW<::VROSC::TutorialBlinkingUIElement>  value) ;

constexpr void __cordl_internal_set__vrCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1765cdc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnStartMenuClosed() ;

static inline void setStaticF_OnStartMenuClosed(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StartMenu(StartMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartMenu(StartMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1182};

/// @brief Field _recenterCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____recenterCurve;

/// @brief Field _vrCameraTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____vrCameraTransform;

/// @brief Field _recenterTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____recenterTime;

/// @brief Field _distanceTolerance, offset: 0x34, size: 0x4, def value: None
 float_t  ____distanceTolerance;

/// @brief Field _angleTolerance, offset: 0x38, size: 0x4, def value: None
 float_t  ____angleTolerance;

/// @brief Field _targetPosition, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPosition;

/// @brief Field _targetRotation, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____targetRotation;

/// @brief Field _recenterCoroutine, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____recenterCoroutine;

/// @brief Field _startTutorialButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____startTutorialButton;

/// @brief Field _startCreatingButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____startCreatingButton;

/// @brief Field _loadingProgressText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____loadingProgressText;

/// @brief Field _menuTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____menuTransform;

/// @brief Field _environmentPanel, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::BasicEnvironmentPanelUI>  ____environmentPanel;

/// @brief Field _tutorialBlink, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____tutorialBlink;

/// @brief Field _creatingBlink, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::TutorialBlinkingUIElement>  ____creatingBlink;

/// @brief Field _alwaysUpright, offset: 0x98, size: 0x1, def value: None
 bool  ____alwaysUpright;

/// @brief Field _isSetup, offset: 0x99, size: 0x1, def value: None
 bool  ____isSetup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::StartMenu, ____recenterCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____vrCameraTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____recenterTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____distanceTolerance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____angleTolerance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____targetPosition) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____targetRotation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____recenterCoroutine) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____startTutorialButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____startCreatingButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____loadingProgressText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____menuTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____environmentPanel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____tutorialBlink) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____creatingBlink) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____alwaysUpright) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::StartMenu, ____isSetup) == 0x99, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StartMenu, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::StartMenu);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StartMenu*, "VROSC", "StartMenu");
NEED_NO_BOX(::VROSC::StartMenu__Recenter_d__22);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StartMenu__Recenter_d__22*, "VROSC", "StartMenu/<Recenter>d__22");
