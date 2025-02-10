#pragma once
// IWYU pragma private; include "VROSC/Marimba.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Marimba)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class BoxCollider;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MarimbaDataController;
}
namespace VROSC {
class MarimbaPad;
}
namespace VROSC {
class MarimbaPlayer;
}
namespace VROSC {
class Marimba_InputDeviceCooldown;
}
namespace VROSC {
class Marimba___c__DisplayClass65_0;
}
namespace VROSC {
class NoteNode;
}
namespace VROSC {
class ScaleNode;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class Marimba;
}
namespace VROSC {
class Marimba_InputDeviceCooldown;
}
namespace VROSC {
class Marimba___c__DisplayClass65_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Marimba);
MARK_REF_PTR_T(::VROSC::Marimba_InputDeviceCooldown);
MARK_REF_PTR_T(::VROSC::Marimba___c__DisplayClass65_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Marimba/InputDeviceCooldown
class CORDL_TYPE Marimba_InputDeviceCooldown : public ::System::Object {
public:
// Declarations
/// @brief Field Cooldown, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Cooldown, put=__cordl_internal_set_Cooldown)) float_t  Cooldown;

/// @brief Field InputDevice, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputDevice, put=__cordl_internal_set_InputDevice)) ::UnityW<::VROSC::InputDevice>  InputDevice;

static inline ::VROSC::Marimba_InputDeviceCooldown* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Cooldown() const;

constexpr float_t& __cordl_internal_get_Cooldown() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get_InputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get_InputDevice() ;

constexpr void __cordl_internal_set_Cooldown(float_t  value) ;

constexpr void __cordl_internal_set_InputDevice(::UnityW<::VROSC::InputDevice>  value) ;

/// @brief Method .ctor, addr 0x1793700, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marimba_InputDeviceCooldown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marimba_InputDeviceCooldown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Marimba_InputDeviceCooldown(Marimba_InputDeviceCooldown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marimba_InputDeviceCooldown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marimba_InputDeviceCooldown(Marimba_InputDeviceCooldown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1338};

/// @brief Field InputDevice, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ___InputDevice;

/// @brief Field Cooldown, offset: 0x18, size: 0x4, def value: None
 float_t  ___Cooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Marimba_InputDeviceCooldown, ___InputDevice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba_InputDeviceCooldown, ___Cooldown) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Marimba_InputDeviceCooldown, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Marimba/<>c__DisplayClass65_0
class CORDL_TYPE Marimba___c__DisplayClass65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field pad, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pad, put=__cordl_internal_set_pad)) ::UnityW<::VROSC::MarimbaPad>  pad;

static inline ::VROSC::Marimba___c__DisplayClass65_0* New_ctor() ;

/// @brief Method <SortPadsByDistanceFromPad>b__0, addr 0x1794054, size 0xd8, virtual false, abstract: false, final false
inline float_t _SortPadsByDistanceFromPad_b__0(::VROSC::MarimbaPad*  p) ;

constexpr ::UnityW<::VROSC::MarimbaPad> const& __cordl_internal_get_pad() const;

constexpr ::UnityW<::VROSC::MarimbaPad>& __cordl_internal_get_pad() ;

constexpr void __cordl_internal_set_pad(::UnityW<::VROSC::MarimbaPad>  value) ;

/// @brief Method .ctor, addr 0x1793e7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marimba___c__DisplayClass65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marimba___c__DisplayClass65_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Marimba___c__DisplayClass65_0(Marimba___c__DisplayClass65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marimba___c__DisplayClass65_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marimba___c__DisplayClass65_0(Marimba___c__DisplayClass65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1339};

/// @brief Field pad, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::MarimbaPad>  ___pad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Marimba___c__DisplayClass65_0, ___pad) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Marimba___c__DisplayClass65_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Marimba
class CORDL_TYPE Marimba : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InputDeviceCooldown = ::VROSC::Marimba_InputDeviceCooldown;

using __c__DisplayClass65_0 = ::VROSC::Marimba___c__DisplayClass65_0;

 __declspec(property(get=get_AnimationPower)) float_t  AnimationPower;

 __declspec(property(get=get_AnimationTime)) float_t  AnimationTime;

 __declspec(property(get=get_AssigningSequencerSteps, put=set_AssigningSequencerSteps)) bool  AssigningSequencerSteps;

/// @brief Field OnInstrumentLoaded, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnInstrumentLoaded, put=__cordl_internal_set_OnInstrumentLoaded)) ::System::Action*  OnInstrumentLoaded;

 __declspec(property(get=get_SpawnedPads, put=set_SpawnedPads)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  SpawnedPads;

 __declspec(property(get=get_SustainedPlayers)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*  SustainedPlayers;

/// @brief Field <AssigningSequencerSteps>k__BackingField, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__AssigningSequencerSteps_k__BackingField, put=__cordl_internal_set__AssigningSequencerSteps_k__BackingField)) bool  _AssigningSequencerSteps_k__BackingField;

/// @brief Field <SpawnedPads>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__SpawnedPads_k__BackingField, put=__cordl_internal_set__SpawnedPads_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  _SpawnedPads_k__BackingField;

/// @brief Field _animationPower, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationPower, put=__cordl_internal_set__animationPower)) float_t  _animationPower;

/// @brief Field _animationTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationTime, put=__cordl_internal_set__animationTime)) float_t  _animationTime;

/// @brief Field _currentAssignStep, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAssignStep, put=__cordl_internal_set__currentAssignStep)) int32_t  _currentAssignStep;

/// @brief Field _currentSequenceStep, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSequenceStep, put=__cordl_internal_set__currentSequenceStep)) int32_t  _currentSequenceStep;

 __declspec(property(get=get__dataController)) ::VROSC::MarimbaDataController*  _dataController;

/// @brief Field _distanceSortedPads, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__distanceSortedPads, put=__cordl_internal_set__distanceSortedPads)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  _distanceSortedPads;

/// @brief Field _holdingXADevices, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__holdingXADevices, put=__cordl_internal_set__holdingXADevices)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  _holdingXADevices;

/// @brief Field _horizontalPadDistance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__horizontalPadDistance, put=__cordl_internal_set__horizontalPadDistance)) float_t  _horizontalPadDistance;

/// @brief Field _inputDeviceCooldowns, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDeviceCooldowns, put=__cordl_internal_set__inputDeviceCooldowns)) ::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>*  _inputDeviceCooldowns;

/// @brief Field _instrument, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::SynthController>  _instrument;

/// @brief Field _lastHitPlayers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastHitPlayers, put=__cordl_internal_set__lastHitPlayers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>*  _lastHitPlayers;

/// @brief Field _numRows, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__numRows, put=__cordl_internal_set__numRows)) int32_t  _numRows;

/// @brief Field _padDiameter, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__padDiameter, put=__cordl_internal_set__padDiameter)) float_t  _padDiameter;

/// @brief Field _padsPerRow, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__padsPerRow, put=__cordl_internal_set__padsPerRow)) int32_t  _padsPerRow;

/// @brief Field _prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prefab, put=__cordl_internal_set__prefab)) ::UnityW<::VROSC::MarimbaPad>  _prefab;

/// @brief Field _scaleNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleNode, put=__cordl_internal_set__scaleNode)) ::UnityW<::VROSC::ScaleNode>  _scaleNode;

/// @brief Field _startNote, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__startNote, put=__cordl_internal_set__startNote)) ::UnityW<::VROSC::NoteNode>  _startNote;

/// @brief Field _sustainCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sustainCollider, put=__cordl_internal_set__sustainCollider)) ::UnityW<::UnityEngine::BoxCollider>  _sustainCollider;

/// @brief Field _sustainedPlayers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sustainedPlayers, put=__cordl_internal_set__sustainedPlayers)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*  _sustainedPlayers;

/// @brief Field _verticalPadDistance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__verticalPadDistance, put=__cordl_internal_set__verticalPadDistance)) float_t  _verticalPadDistance;

/// @brief Method AssignSequenceStep, addr 0x179263c, size 0x35c, virtual false, abstract: false, final false
inline void AssignSequenceStep(::VROSC::MarimbaPad*  pad) ;

/// @brief Method Awake, addr 0x1790b68, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonBegin, addr 0x17922ec, size 0xe8, virtual false, abstract: false, final false
inline void ButtonBegin(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method ButtonEnd, addr 0x17923d4, size 0xa8, virtual false, abstract: false, final false
inline void ButtonEnd(::VROSC::InputDevice*  inputDevice, ::VROSC::TriggerButton  triggerButton) ;

/// @brief Method CalculateNote, addr 0x1791c80, size 0xcc, virtual false, abstract: false, final false
inline int32_t CalculateNote(int32_t  row, int32_t  pad) ;

/// @brief Method CalculatePadDistances, addr 0x1791b58, size 0x18, virtual false, abstract: false, final false
inline void CalculatePadDistances() ;

/// @brief Method CountDownCooldowns, addr 0x179196c, size 0xf8, virtual false, abstract: false, final false
inline void CountDownCooldowns() ;

/// @brief Method CountUpSequenceStep, addr 0x17931e0, size 0x90, virtual false, abstract: false, final false
inline void CountUpSequenceStep() ;

/// @brief Method DestroyPads, addr 0x1791fc4, size 0x1b4, virtual false, abstract: false, final false
inline void DestroyPads() ;

/// @brief Method DisableSequencerAssigning, addr 0x179129c, size 0x150, virtual false, abstract: false, final false
inline void DisableSequencerAssigning() ;

/// @brief Method EnableSequencerAssigning, addr 0x179247c, size 0x154, virtual false, abstract: false, final false
inline void EnableSequencerAssigning() ;

/// @brief Method GetLastHitPlayer, addr 0x1793708, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::MarimbaPlayer> GetLastHitPlayer(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method GetNotes, addr 0x1793270, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<int32_t,::Array<int32_t>*> GetNotes(int32_t  referenceNote) ;

/// @brief Method IsInCooldown, addr 0x17933b0, size 0x1a8, virtual false, abstract: false, final false
inline bool IsInCooldown(::VROSC::InputDevice*  inputDevice) ;

/// @brief Method LateUpdate, addr 0x1791a64, size 0x70, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LoadSequenceSteps, addr 0x1792a98, size 0x748, virtual false, abstract: false, final false
inline void LoadSequenceSteps() ;

static inline ::VROSC::Marimba* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17913ec, size 0x214, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1791794, size 0x1d4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1791600, size 0x194, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PadPlayed, addr 0x1793558, size 0x1a8, virtual false, abstract: false, final false
inline void PadPlayed(::VROSC::MarimbaPlayer*  marimbaPlayer, ::VROSC::InputDevice*  inputDevice) ;

/// @brief Method ReassignNotes, addr 0x1792178, size 0x174, virtual false, abstract: false, final false
inline void ReassignNotes(int32_t  newScale) ;

/// @brief Method SortPadsByDistanceFromPad, addr 0x1793a1c, size 0x100, virtual false, abstract: false, final false
inline void SortPadsByDistanceFromPad(::VROSC::MarimbaPad*  pad) ;

/// @brief Method SpawnPads, addr 0x1790de8, size 0x4b4, virtual false, abstract: false, final false
inline void SpawnPads() ;

/// @brief Method Start, addr 0x1790c60, size 0x188, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartAnimatingSecondaryNote, addr 0x179388c, size 0x190, virtual false, abstract: false, final false
inline void StartAnimatingSecondaryNote(::VROSC::InputDevice*  device, ::VROSC::MarimbaPad*  pad, int32_t  noteNumber, float_t  power, double_t  predictedDspTime) ;

/// @brief Method StopAnimatingSecondaryNote, addr 0x1793c3c, size 0x178, virtual false, abstract: false, final false
inline void StopAnimatingSecondaryNote(::VROSC::InputDevice*  device, ::VROSC::MarimbaPad*  pad, int32_t  noteNumber) ;

/// @brief Method Update, addr 0x1791968, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSequencerAssignState, addr 0x1791ad4, size 0x84, virtual false, abstract: false, final false
inline void UpdateSequencerAssignState() ;

/// @brief Method UserDataLoaded, addr 0x179379c, size 0xf0, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  userDataControllers) ;

constexpr ::System::Action* const& __cordl_internal_get_OnInstrumentLoaded() const;

constexpr ::System::Action*& __cordl_internal_get_OnInstrumentLoaded() ;

constexpr bool const& __cordl_internal_get__AssigningSequencerSteps_k__BackingField() const;

constexpr bool& __cordl_internal_get__AssigningSequencerSteps_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* const& __cordl_internal_get__SpawnedPads_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*& __cordl_internal_get__SpawnedPads_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__animationPower() const;

constexpr float_t& __cordl_internal_get__animationPower() ;

constexpr float_t const& __cordl_internal_get__animationTime() const;

constexpr float_t& __cordl_internal_get__animationTime() ;

constexpr int32_t const& __cordl_internal_get__currentAssignStep() const;

constexpr int32_t& __cordl_internal_get__currentAssignStep() ;

constexpr int32_t const& __cordl_internal_get__currentSequenceStep() const;

constexpr int32_t& __cordl_internal_get__currentSequenceStep() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* const& __cordl_internal_get__distanceSortedPads() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*& __cordl_internal_get__distanceSortedPads() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>* const& __cordl_internal_get__holdingXADevices() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*& __cordl_internal_get__holdingXADevices() ;

constexpr float_t const& __cordl_internal_get__horizontalPadDistance() const;

constexpr float_t& __cordl_internal_get__horizontalPadDistance() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>* const& __cordl_internal_get__inputDeviceCooldowns() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>*& __cordl_internal_get__inputDeviceCooldowns() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrument() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>* const& __cordl_internal_get__lastHitPlayers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>*& __cordl_internal_get__lastHitPlayers() ;

constexpr int32_t const& __cordl_internal_get__numRows() const;

constexpr int32_t& __cordl_internal_get__numRows() ;

constexpr float_t const& __cordl_internal_get__padDiameter() const;

constexpr float_t& __cordl_internal_get__padDiameter() ;

constexpr int32_t const& __cordl_internal_get__padsPerRow() const;

constexpr int32_t& __cordl_internal_get__padsPerRow() ;

constexpr ::UnityW<::VROSC::MarimbaPad> const& __cordl_internal_get__prefab() const;

constexpr ::UnityW<::VROSC::MarimbaPad>& __cordl_internal_get__prefab() ;

constexpr ::UnityW<::VROSC::ScaleNode> const& __cordl_internal_get__scaleNode() const;

constexpr ::UnityW<::VROSC::ScaleNode>& __cordl_internal_get__scaleNode() ;

constexpr ::UnityW<::VROSC::NoteNode> const& __cordl_internal_get__startNote() const;

constexpr ::UnityW<::VROSC::NoteNode>& __cordl_internal_get__startNote() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get__sustainCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get__sustainCollider() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>* const& __cordl_internal_get__sustainedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*& __cordl_internal_get__sustainedPlayers() ;

constexpr float_t const& __cordl_internal_get__verticalPadDistance() const;

constexpr float_t& __cordl_internal_get__verticalPadDistance() ;

constexpr void __cordl_internal_set_OnInstrumentLoaded(::System::Action*  value) ;

constexpr void __cordl_internal_set__AssigningSequencerSteps_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SpawnedPads_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value) ;

constexpr void __cordl_internal_set__animationPower(float_t  value) ;

constexpr void __cordl_internal_set__animationTime(float_t  value) ;

constexpr void __cordl_internal_set__currentAssignStep(int32_t  value) ;

constexpr void __cordl_internal_set__currentSequenceStep(int32_t  value) ;

constexpr void __cordl_internal_set__distanceSortedPads(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value) ;

constexpr void __cordl_internal_set__holdingXADevices(::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  value) ;

constexpr void __cordl_internal_set__horizontalPadDistance(float_t  value) ;

constexpr void __cordl_internal_set__inputDeviceCooldowns(::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>*  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__lastHitPlayers(::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>*  value) ;

constexpr void __cordl_internal_set__numRows(int32_t  value) ;

constexpr void __cordl_internal_set__padDiameter(float_t  value) ;

constexpr void __cordl_internal_set__padsPerRow(int32_t  value) ;

constexpr void __cordl_internal_set__prefab(::UnityW<::VROSC::MarimbaPad>  value) ;

constexpr void __cordl_internal_set__scaleNode(::UnityW<::VROSC::ScaleNode>  value) ;

constexpr void __cordl_internal_set__startNote(::UnityW<::VROSC::NoteNode>  value) ;

constexpr void __cordl_internal_set__sustainCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set__sustainedPlayers(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*  value) ;

constexpr void __cordl_internal_set__verticalPadDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x1793e84, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AnimationPower, addr 0x1790a34, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimationPower() ;

/// @brief Method get_AnimationTime, addr 0x1790a3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_AnimationTime() ;

/// @brief Method get_AssigningSequencerSteps, addr 0x1790b4c, size 0x8, virtual false, abstract: false, final false
inline bool get_AssigningSequencerSteps() ;

/// @brief Method get_SpawnedPads, addr 0x1790a44, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>* get_SpawnedPads() ;

/// @brief Method get_SustainedPlayers, addr 0x1790b60, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>* get_SustainedPlayers() ;

/// @brief Method get__dataController, addr 0x1790a54, size 0x7c, virtual false, abstract: false, final false
inline ::VROSC::MarimbaDataController* get__dataController() ;

/// @brief Method set_AssigningSequencerSteps, addr 0x1790b54, size 0xc, virtual false, abstract: false, final false
inline void set_AssigningSequencerSteps(bool  value) ;

/// @brief Method set_SpawnedPads, addr 0x1790a4c, size 0x8, virtual false, abstract: false, final false
inline void set_SpawnedPads(::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marimba() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marimba", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Marimba(Marimba && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marimba", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marimba(Marimba const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1340};

/// @brief Field _prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::MarimbaPad>  ____prefab;

/// @brief Field _instrument, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrument;

/// @brief Field _scaleNode, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::ScaleNode>  ____scaleNode;

/// @brief Field _startNote, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteNode>  ____startNote;

/// @brief Field _sustainCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ____sustainCollider;

/// @brief Field _animationPower, offset: 0x48, size: 0x4, def value: None
 float_t  ____animationPower;

/// @brief Field _animationTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ____animationTime;

/// @brief Field <SpawnedPads>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  ____SpawnedPads_k__BackingField;

/// @brief Field _numRows, offset: 0x58, size: 0x4, def value: None
 int32_t  ____numRows;

/// @brief Field _padsPerRow, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____padsPerRow;

/// @brief Field _padDiameter, offset: 0x60, size: 0x4, def value: None
 float_t  ____padDiameter;

/// @brief Field _horizontalPadDistance, offset: 0x64, size: 0x4, def value: None
 float_t  ____horizontalPadDistance;

/// @brief Field _verticalPadDistance, offset: 0x68, size: 0x4, def value: None
 float_t  ____verticalPadDistance;

/// @brief Field _distanceSortedPads, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPad>>*  ____distanceSortedPads;

/// @brief Field _holdingXADevices, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  ____holdingXADevices;

/// @brief Field <AssigningSequencerSteps>k__BackingField, offset: 0x80, size: 0x1, def value: None
 bool  ____AssigningSequencerSteps_k__BackingField;

/// @brief Field _currentSequenceStep, offset: 0x84, size: 0x4, def value: None
 int32_t  ____currentSequenceStep;

/// @brief Field _currentAssignStep, offset: 0x88, size: 0x4, def value: None
 int32_t  ____currentAssignStep;

/// @brief Field _lastHitPlayers, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::VROSC::InputDevice>,::UnityW<::VROSC::MarimbaPlayer>>*  ____lastHitPlayers;

/// @brief Field _inputDeviceCooldowns, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::Marimba_InputDeviceCooldown*>*  ____inputDeviceCooldowns;

/// @brief Field _sustainedPlayers, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::MarimbaPlayer>>*  ____sustainedPlayers;

/// @brief Field OnInstrumentLoaded, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___OnInstrumentLoaded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Marimba, ____prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____instrument) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____scaleNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____startNote) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____sustainCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____animationPower) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____animationTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____SpawnedPads_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____numRows) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____padsPerRow) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____padDiameter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____horizontalPadDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____verticalPadDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____distanceSortedPads) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____holdingXADevices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____AssigningSequencerSteps_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____currentSequenceStep) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____currentAssignStep) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____lastHitPlayers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____inputDeviceCooldowns) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ____sustainedPlayers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::Marimba, ___OnInstrumentLoaded) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Marimba, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Marimba);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Marimba*, "VROSC", "Marimba");
NEED_NO_BOX(::VROSC::Marimba_InputDeviceCooldown);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Marimba_InputDeviceCooldown*, "VROSC", "Marimba/InputDeviceCooldown");
NEED_NO_BOX(::VROSC::Marimba___c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Marimba___c__DisplayClass65_0*, "VROSC", "Marimba/<>c__DisplayClass65_0");
