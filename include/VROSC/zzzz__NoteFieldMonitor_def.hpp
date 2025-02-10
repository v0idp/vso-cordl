#pragma once
// IWYU pragma private; include "VROSC/NoteFieldMonitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteFieldMonitor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class NoteBoardPlayer;
}
namespace VROSC {
class NoteFieldMonitor_HandData;
}
namespace VROSC {
class NoteFieldMonitor_PlayData;
}
namespace VROSC {
struct PlayData_NoteFieldMonitor_State;
}
// Forward declare root types
namespace VROSC {
struct PlayData_NoteFieldMonitor_State;
}
namespace VROSC {
class NoteFieldMonitor;
}
namespace VROSC {
class NoteFieldMonitor_HandData;
}
namespace VROSC {
class NoteFieldMonitor_PlayData;
}
// Write type traits
MARK_VAL_T(::VROSC::PlayData_NoteFieldMonitor_State);
MARK_REF_PTR_T(::VROSC::NoteFieldMonitor);
MARK_REF_PTR_T(::VROSC::NoteFieldMonitor_HandData);
MARK_REF_PTR_T(::VROSC::NoteFieldMonitor_PlayData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldMonitor/HandData
class CORDL_TYPE NoteFieldMonitor_HandData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HoveredNotes, put=set_HoveredNotes)) ::ArrayW<int32_t,::Array<int32_t>*>  HoveredNotes;

 __declspec(property(get=get_MaxNotes)) int32_t  MaxNotes;

/// @brief Field OnHoveringChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHoveringChanged, put=__cordl_internal_set_OnHoveringChanged)) ::System::Action*  OnHoveringChanged;

/// @brief Field OnPlayingChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayingChanged, put=__cordl_internal_set_OnPlayingChanged)) ::System::Action*  OnPlayingChanged;

 __declspec(property(get=get_PlayingColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  PlayingColors;

 __declspec(property(get=get_PlayingNotes, put=set_PlayingNotes)) ::ArrayW<int32_t,::Array<int32_t>*>  PlayingNotes;

/// @brief Field <HoveredNotes>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__HoveredNotes_k__BackingField, put=__cordl_internal_set__HoveredNotes_k__BackingField)) ::ArrayW<int32_t,::Array<int32_t>*>  _HoveredNotes_k__BackingField;

/// @brief Field <PlayingNotes>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayingNotes_k__BackingField, put=__cordl_internal_set__PlayingNotes_k__BackingField)) ::ArrayW<int32_t,::Array<int32_t>*>  _PlayingNotes_k__BackingField;

/// @brief Field _handIsInsideInstrument, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__handIsInsideInstrument, put=__cordl_internal_set__handIsInsideInstrument)) bool  _handIsInsideInstrument;

/// @brief Field _inputDevice, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDevice, put=__cordl_internal_set__inputDevice)) ::UnityW<::VROSC::InputDevice>  _inputDevice;

/// @brief Field _maxNotes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxNotes, put=__cordl_internal_set__maxNotes)) int32_t  _maxNotes;

/// @brief Field _notePlayers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__notePlayers, put=__cordl_internal_set__notePlayers)) ::ArrayW<::UnityW<::VROSC::NoteBoardPlayer>,::Array<::UnityW<::VROSC::NoteBoardPlayer>>*>  _notePlayers;

/// @brief Field _playingColors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__playingColors, put=__cordl_internal_set__playingColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _playingColors;

/// @brief Method CheckNotePlayers, addr 0x1795ef4, size 0x1bc, virtual false, abstract: false, final false
inline void CheckNotePlayers() ;

static inline ::VROSC::NoteFieldMonitor_HandData* New_ctor() ;

/// @brief Method SetHandInsideInstrument, addr 0x1795478, size 0x60, virtual false, abstract: false, final false
inline void SetHandInsideInstrument(bool  isInside) ;

/// @brief Method Setup, addr 0x1795360, size 0xb4, virtual false, abstract: false, final false
inline void Setup(::VROSC::InputDevice*  inputDevice) ;

constexpr ::System::Action* const& __cordl_internal_get_OnHoveringChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnHoveringChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayingChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayingChanged() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__HoveredNotes_k__BackingField() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__HoveredNotes_k__BackingField() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __cordl_internal_get__PlayingNotes_k__BackingField() const;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __cordl_internal_get__PlayingNotes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__handIsInsideInstrument() const;

constexpr bool& __cordl_internal_get__handIsInsideInstrument() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__inputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__inputDevice() ;

constexpr int32_t const& __cordl_internal_get__maxNotes() const;

constexpr int32_t& __cordl_internal_get__maxNotes() ;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardPlayer>,::Array<::UnityW<::VROSC::NoteBoardPlayer>>*> const& __cordl_internal_get__notePlayers() const;

constexpr ::ArrayW<::UnityW<::VROSC::NoteBoardPlayer>,::Array<::UnityW<::VROSC::NoteBoardPlayer>>*>& __cordl_internal_get__notePlayers() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__playingColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__playingColors() ;

constexpr void __cordl_internal_set_OnHoveringChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPlayingChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set__HoveredNotes_k__BackingField(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__PlayingNotes_k__BackingField(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr void __cordl_internal_set__handIsInsideInstrument(bool  value) ;

constexpr void __cordl_internal_set__inputDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__maxNotes(int32_t  value) ;

constexpr void __cordl_internal_set__notePlayers(::ArrayW<::UnityW<::VROSC::NoteBoardPlayer>,::Array<::UnityW<::VROSC::NoteBoardPlayer>>*>  value) ;

constexpr void __cordl_internal_set__playingColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

/// @brief Method .ctor, addr 0x17960e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HoveredNotes, addr 0x17960c8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_HoveredNotes() ;

/// @brief Method get_MaxNotes, addr 0x17960b8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxNotes() ;

/// @brief Method get_PlayingColors, addr 0x17960e0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> get_PlayingColors() ;

/// @brief Method get_PlayingNotes, addr 0x17960d8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_PlayingNotes() ;

/// @brief Method set_HoveredNotes, addr 0x17960c0, size 0x8, virtual false, abstract: false, final false
inline void set_HoveredNotes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

/// @brief Method set_PlayingNotes, addr 0x17960d0, size 0x8, virtual false, abstract: false, final false
inline void set_PlayingNotes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldMonitor_HandData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldMonitor_HandData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldMonitor_HandData(NoteFieldMonitor_HandData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldMonitor_HandData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldMonitor_HandData(NoteFieldMonitor_HandData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1345};

/// @brief Field _notePlayers, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::NoteBoardPlayer>,::Array<::UnityW<::VROSC::NoteBoardPlayer>>*>  ____notePlayers;

/// @brief Field _playingColors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____playingColors;

/// @brief Field _maxNotes, offset: 0x20, size: 0x4, def value: None
 int32_t  ____maxNotes;

/// @brief Field <HoveredNotes>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____HoveredNotes_k__BackingField;

/// @brief Field <PlayingNotes>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t,::Array<int32_t>*>  ____PlayingNotes_k__BackingField;

/// @brief Field OnPlayingChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnPlayingChanged;

/// @brief Field OnHoveringChanged, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnHoveringChanged;

/// @brief Field _inputDevice, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____inputDevice;

/// @brief Field _handIsInsideInstrument, offset: 0x50, size: 0x1, def value: None
 bool  ____handIsInsideInstrument;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____notePlayers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____playingColors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____maxNotes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____HoveredNotes_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____PlayingNotes_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ___OnPlayingChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ___OnHoveringChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____inputDevice) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_HandData, ____handIsInsideInstrument) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldMonitor_HandData, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.NoteFieldMonitor/PlayData/State
struct CORDL_TYPE PlayData_NoteFieldMonitor_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayData_NoteFieldMonitor_State_Unwrapped
enum struct __PlayData_NoteFieldMonitor_State_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Hovering = static_cast<int32_t>(0x1),
__E_Playing = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayData_NoteFieldMonitor_State_Unwrapped () const noexcept {
return static_cast<__PlayData_NoteFieldMonitor_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayData_NoteFieldMonitor_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayData_NoteFieldMonitor_State(int32_t  value__) noexcept;

/// @brief Field Hovering value: I32(1)
static ::VROSC::PlayData_NoteFieldMonitor_State const Hovering;

/// @brief Field Off value: I32(0)
static ::VROSC::PlayData_NoteFieldMonitor_State const Off;

/// @brief Field Playing value: I32(2)
static ::VROSC::PlayData_NoteFieldMonitor_State const Playing;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlayData_NoteFieldMonitor_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlayData_NoteFieldMonitor_State, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, UnityEngine.Color, VROSC.NoteFieldMonitor::PlayData::State
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldMonitor/PlayData
class CORDL_TYPE NoteFieldMonitor_PlayData : public ::System::Object {
public:
// Declarations
using State = ::VROSC::PlayData_NoteFieldMonitor_State;

 __declspec(property(get=get_Color, put=set_Color)) ::UnityEngine::Color  Color;

 __declspec(property(get=get_CurrentState)) ::VROSC::PlayData_NoteFieldMonitor_State  CurrentState;

 __declspec(property(get=get_Note)) int32_t  Note;

 __declspec(property(get=get_Playing)) bool  Playing;

/// @brief Field <Color>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__Color_k__BackingField, put=__cordl_internal_set__Color_k__BackingField)) ::UnityEngine::Color  _Color_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) ::VROSC::PlayData_NoteFieldMonitor_State  _CurrentState_k__BackingField;

/// @brief Field <Note>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Note_k__BackingField, put=__cordl_internal_set__Note_k__BackingField)) int32_t  _Note_k__BackingField;

/// @brief Method AddColor, addr 0x1795e50, size 0x28, virtual false, abstract: false, final false
inline void AddColor(::UnityEngine::Color  color) ;

static inline ::VROSC::NoteFieldMonitor_PlayData* New_ctor(int32_t  note, ::VROSC::PlayData_NoteFieldMonitor_State  state, ::UnityEngine::Color  color) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__Color_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__Color_k__BackingField() ;

constexpr ::VROSC::PlayData_NoteFieldMonitor_State const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr ::VROSC::PlayData_NoteFieldMonitor_State& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Note_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Note_k__BackingField() ;

constexpr void __cordl_internal_set__Color_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(::VROSC::PlayData_NoteFieldMonitor_State  value) ;

constexpr void __cordl_internal_set__Note_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x1795e78, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int32_t  note, ::VROSC::PlayData_NoteFieldMonitor_State  state, ::UnityEngine::Color  color) ;

/// @brief Method get_Color, addr 0x179610c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

/// @brief Method get_CurrentState, addr 0x17960f8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::PlayData_NoteFieldMonitor_State get_CurrentState() ;

/// @brief Method get_Note, addr 0x17960f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Note() ;

/// @brief Method get_Playing, addr 0x1796118, size 0x10, virtual false, abstract: false, final false
inline bool get_Playing() ;

/// @brief Method set_Color, addr 0x1796100, size 0xc, virtual false, abstract: false, final false
inline void set_Color(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldMonitor_PlayData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldMonitor_PlayData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldMonitor_PlayData(NoteFieldMonitor_PlayData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldMonitor_PlayData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldMonitor_PlayData(NoteFieldMonitor_PlayData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1347};

/// @brief Field <Note>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Note_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::VROSC::PlayData_NoteFieldMonitor_State  ____CurrentState_k__BackingField;

/// @brief Field <Color>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ____Color_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldMonitor_PlayData, ____Note_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_PlayData, ____CurrentState_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor_PlayData, ____Color_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldMonitor_PlayData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.NoteFieldMonitor
class CORDL_TYPE NoteFieldMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandData = ::VROSC::NoteFieldMonitor_HandData;

using PlayData = ::VROSC::NoteFieldMonitor_PlayData;

 __declspec(property(get=get_Left)) ::VROSC::NoteFieldMonitor_HandData*  Left;

 __declspec(property(get=get_Right)) ::VROSC::NoteFieldMonitor_HandData*  Right;

/// @brief Field _inputNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputNode, put=__cordl_internal_set__inputNode)) ::UnityW<::VROSC::ControllerInputNode>  _inputNode;

/// @brief Field _leftHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::VROSC::NoteFieldMonitor_HandData*  _leftHand;

/// @brief Field _righthand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__righthand, put=__cordl_internal_set__righthand)) ::VROSC::NoteFieldMonitor_HandData*  _righthand;

/// @brief Method Awake, addr 0x17951b0, size 0x1b0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetHandDataByInputDevice, addr 0x179544c, size 0x2c, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldMonitor_HandData* GetHandDataByInputDevice(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method GetPlayData, addr 0x179550c, size 0x944, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::NoteFieldMonitor_PlayData*>* GetPlayData() ;

/// @brief Method HoverBegin, addr 0x1795414, size 0x38, virtual false, abstract: false, final false
inline void HoverBegin(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method HoverEnd, addr 0x17954d8, size 0x34, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  inputDevice) ;

static inline ::VROSC::NoteFieldMonitor* New_ctor() ;

/// @brief Method Update, addr 0x1795ecc, size 0x28, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__inputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__inputNode() ;

constexpr ::VROSC::NoteFieldMonitor_HandData* const& __cordl_internal_get__leftHand() const;

constexpr ::VROSC::NoteFieldMonitor_HandData*& __cordl_internal_get__leftHand() ;

constexpr ::VROSC::NoteFieldMonitor_HandData* const& __cordl_internal_get__righthand() const;

constexpr ::VROSC::NoteFieldMonitor_HandData*& __cordl_internal_get__righthand() ;

constexpr void __cordl_internal_set__inputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

constexpr void __cordl_internal_set__leftHand(::VROSC::NoteFieldMonitor_HandData*  value) ;

constexpr void __cordl_internal_set__righthand(::VROSC::NoteFieldMonitor_HandData*  value) ;

/// @brief Method .ctor, addr 0x17960b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Left, addr 0x17951a0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldMonitor_HandData* get_Left() ;

/// @brief Method get_Right, addr 0x17951a8, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::NoteFieldMonitor_HandData* get_Right() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoteFieldMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteFieldMonitor(NoteFieldMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteFieldMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteFieldMonitor(NoteFieldMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1348};

/// @brief Field _inputNode, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____inputNode;

/// @brief Field _leftHand, offset: 0x28, size: 0x8, def value: None
 ::VROSC::NoteFieldMonitor_HandData*  ____leftHand;

/// @brief Field _righthand, offset: 0x30, size: 0x8, def value: None
 ::VROSC::NoteFieldMonitor_HandData*  ____righthand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::NoteFieldMonitor, ____inputNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor, ____leftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::NoteFieldMonitor, ____righthand) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::NoteFieldMonitor, 0x38>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayData_NoteFieldMonitor_State, "VROSC", "NoteFieldMonitor/PlayData/State");
NEED_NO_BOX(::VROSC::NoteFieldMonitor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldMonitor*, "VROSC", "NoteFieldMonitor");
NEED_NO_BOX(::VROSC::NoteFieldMonitor_HandData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldMonitor_HandData*, "VROSC", "NoteFieldMonitor/HandData");
NEED_NO_BOX(::VROSC::NoteFieldMonitor_PlayData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteFieldMonitor_PlayData*, "VROSC", "NoteFieldMonitor/PlayData");
