#pragma once
// IWYU pragma private; include "VROSC/InputManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputManager)
namespace GlobalNamespace {
class HandMover;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class InputSettings;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
struct TriggerFrame;
}
// Forward declare root types
namespace VROSC {
class InputManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputManager
class CORDL_TYPE InputManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_InputSettings)) ::UnityW<::VROSC::InputSettings>  InputSettings;

/// @brief Field OnButtonBegin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnButtonBegin, put=setStaticF_OnButtonBegin)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  OnButtonBegin;

/// @brief Field OnButtonEnd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnButtonEnd, put=setStaticF_OnButtonEnd)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  OnButtonEnd;

/// @brief Field OnButtonStay, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnButtonStay, put=setStaticF_OnButtonStay)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  OnButtonStay;

/// @brief Field OnThumbStickDirection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnThumbStickDirection, put=setStaticF_OnThumbStickDirection)) ::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>*  OnThumbStickDirection;

/// @brief Field _allTriggerButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allTriggerButtons, put=__cordl_internal_set__allTriggerButtons)) ::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*>  _allTriggerButtons;

/// @brief Field _debugHandMover, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugHandMover, put=__cordl_internal_set__debugHandMover)) ::UnityW<::GlobalNamespace::HandMover>  _debugHandMover;

/// @brief Field _inputSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputSettings, put=__cordl_internal_set__inputSettings)) ::UnityW<::VROSC::InputSettings>  _inputSettings;

/// @brief Field _setupComplete, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__setupComplete, put=__cordl_internal_set__setupComplete)) bool  _setupComplete;

/// @brief Field triggerButtonsBeginning, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerButtonsBeginning, put=__cordl_internal_set_triggerButtonsBeginning)) ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  triggerButtonsBeginning;

/// @brief Field triggerButtonsEnding, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerButtonsEnding, put=__cordl_internal_set_triggerButtonsEnding)) ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  triggerButtonsEnding;

/// @brief Field triggerButtonsStaying, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerButtonsStaying, put=__cordl_internal_set_triggerButtonsStaying)) ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  triggerButtonsStaying;

/// @brief Method ButtonIsTriggering, addr 0x188f394, size 0x380, virtual false, abstract: false, final false
inline bool ButtonIsTriggering(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  triggerButton, ::VROSC::TriggerFrame  triggerFrame) ;

/// @brief Method CheckForButtonInteractions, addr 0x188e0c4, size 0x8b4, virtual false, abstract: false, final false
inline void CheckForButtonInteractions(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method IsPlayerLookingDown, addr 0x188f7d4, size 0x1f0, virtual false, abstract: false, final false
inline bool IsPlayerLookingDown(float_t  angleThreshhold) ;

static inline ::VROSC::InputManager* New_ctor() ;

/// @brief Method Setup, addr 0x188f360, size 0x34, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ThumbStickInput, addr 0x188f714, size 0xc0, virtual false, abstract: false, final false
inline void ThumbStickInput(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method Update, addr 0x188f2e0, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*> const& __cordl_internal_get__allTriggerButtons() const;

constexpr ::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*>& __cordl_internal_get__allTriggerButtons() ;

constexpr ::UnityW<::GlobalNamespace::HandMover> const& __cordl_internal_get__debugHandMover() const;

constexpr ::UnityW<::GlobalNamespace::HandMover>& __cordl_internal_get__debugHandMover() ;

constexpr ::UnityW<::VROSC::InputSettings> const& __cordl_internal_get__inputSettings() const;

constexpr ::UnityW<::VROSC::InputSettings>& __cordl_internal_get__inputSettings() ;

constexpr bool const& __cordl_internal_get__setupComplete() const;

constexpr bool& __cordl_internal_get__setupComplete() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>* const& __cordl_internal_get_triggerButtonsBeginning() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*& __cordl_internal_get_triggerButtonsBeginning() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>* const& __cordl_internal_get_triggerButtonsEnding() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*& __cordl_internal_get_triggerButtonsEnding() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>* const& __cordl_internal_get_triggerButtonsStaying() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*& __cordl_internal_get_triggerButtonsStaying() ;

constexpr void __cordl_internal_set__allTriggerButtons(::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*>  value) ;

constexpr void __cordl_internal_set__debugHandMover(::UnityW<::GlobalNamespace::HandMover>  value) ;

constexpr void __cordl_internal_set__inputSettings(::UnityW<::VROSC::InputSettings>  value) ;

constexpr void __cordl_internal_set__setupComplete(bool  value) ;

constexpr void __cordl_internal_set_triggerButtonsBeginning(::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  value) ;

constexpr void __cordl_internal_set_triggerButtonsEnding(::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  value) ;

constexpr void __cordl_internal_set_triggerButtonsStaying(::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  value) ;

/// @brief Method .ctor, addr 0x188f9c4, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* getStaticF_OnButtonBegin() ;

static inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* getStaticF_OnButtonEnd() ;

static inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>* getStaticF_OnButtonStay() ;

static inline ::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>* getStaticF_OnThumbStickDirection() ;

/// @brief Method get_InputSettings, addr 0x188f2d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::InputSettings> get_InputSettings() ;

static inline void setStaticF_OnButtonBegin(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value) ;

static inline void setStaticF_OnButtonEnd(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value) ;

static inline void setStaticF_OnButtonStay(::System::Action_2<::UnityW<::VROSC::InputDevice>,::VROSC::TriggerButton>*  value) ;

static inline void setStaticF_OnThumbStickDirection(::System::Action_2<::UnityW<::VROSC::InputDevice>,::UnityEngine::Vector2>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputManager(InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputManager(InputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{624};

/// @brief Field _allTriggerButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::VROSC::TriggerButton,::Array<::VROSC::TriggerButton>*>  ____allTriggerButtons;

/// @brief Field _inputSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::InputSettings>  ____inputSettings;

/// @brief Field _setupComplete, offset: 0x30, size: 0x1, def value: None
 bool  ____setupComplete;

/// @brief Field _debugHandMover, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HandMover>  ____debugHandMover;

/// @brief Field triggerButtonsBeginning, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  ___triggerButtonsBeginning;

/// @brief Field triggerButtonsStaying, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  ___triggerButtonsStaying;

/// @brief Field triggerButtonsEnding, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::TriggerButton>*  ___triggerButtonsEnding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputManager, ____allTriggerButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputManager, ____inputSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputManager, ____setupComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputManager, ____debugHandMover) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputManager, ___triggerButtonsBeginning) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputManager, ___triggerButtonsStaying) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputManager, ___triggerButtonsEnding) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputManager, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputManager*, "VROSC", "InputManager");
