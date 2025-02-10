#pragma once
// IWYU pragma private; include "VROSC/LoopStation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStation)
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
struct BeatCounter_SyncSource;
}
namespace VROSC {
class LoopMovingHandler;
}
namespace VROSC {
class LoopPlaybackConfigData;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationButtons;
}
namespace VROSC {
class LoopStationDataController;
}
namespace VROSC {
class LoopStationDropZoneHandler;
}
namespace VROSC {
class LoopStationGroupCore;
}
namespace VROSC {
class LoopStationLoopHandler;
}
namespace VROSC {
class LoopStationRecorder;
}
namespace VROSC {
class LoopStationRecordingButton;
}
namespace VROSC {
class LoopStationSoloHandler;
}
namespace VROSC {
class LoopStation__LoopStationDataLoadedFlow_d__66;
}
namespace VROSC {
class MovementPlane;
}
namespace VROSC {
class SelectionBar;
}
namespace VROSC {
class TransformMover;
}
// Forward declare root types
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class LoopStation__LoopStationDataLoadedFlow_d__66;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStation);
MARK_REF_PTR_T(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStation/<LoopStationDataLoadedFlow>d__66
class CORDL_TYPE LoopStation__LoopStationDataLoadedFlow_d__66 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStation>  __4__this;

/// @brief Field <beatLengthInSamples>5__3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__beatLengthInSamples_5__3, put=__cordl_internal_set__beatLengthInSamples_5__3)) int32_t  _beatLengthInSamples_5__3;

/// @brief Field <cachedPlaybackConfigData>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedPlaybackConfigData_5__2, put=__cordl_internal_set__cachedPlaybackConfigData_5__2)) ::VROSC::LoopPlaybackConfigData*  _cachedPlaybackConfigData_5__2;

/// @brief Field dataController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataController, put=__cordl_internal_set_dataController)) ::VROSC::LoopStationDataController*  dataController;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18af988, size 0x2f0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x18b0034, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x18b003c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18b0074, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18af984, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__beatLengthInSamples_5__3() const;

constexpr int32_t& __cordl_internal_get__beatLengthInSamples_5__3() ;

constexpr ::VROSC::LoopPlaybackConfigData* const& __cordl_internal_get__cachedPlaybackConfigData_5__2() const;

constexpr ::VROSC::LoopPlaybackConfigData*& __cordl_internal_get__cachedPlaybackConfigData_5__2() ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get_dataController() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get_dataController() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__beatLengthInSamples_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__cachedPlaybackConfigData_5__2(::VROSC::LoopPlaybackConfigData*  value) ;

constexpr void __cordl_internal_set_dataController(::VROSC::LoopStationDataController*  value) ;

/// @brief Method .ctor, addr 0x18af1e0, size 0x28, virtual false, abstract: false, final false
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
constexpr LoopStation__LoopStationDataLoadedFlow_d__66() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStation__LoopStationDataLoadedFlow_d__66", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStation__LoopStationDataLoadedFlow_d__66(LoopStation__LoopStationDataLoadedFlow_d__66 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStation__LoopStationDataLoadedFlow_d__66", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStation__LoopStationDataLoadedFlow_d__66(LoopStation__LoopStationDataLoadedFlow_d__66 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{711};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  _____4__this;

/// @brief Field dataController, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  ___dataController;

/// @brief Field <cachedPlaybackConfigData>5__2, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigData*  ____cachedPlaybackConfigData_5__2;

/// @brief Field <beatLengthInSamples>5__3, offset: 0x38, size: 0x4, def value: None
 int32_t  ____beatLengthInSamples_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, ___dataController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, ____cachedPlaybackConfigData_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, ____beatLengthInSamples_5__3) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStation
class CORDL_TYPE LoopStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoopStationDataLoadedFlow_d__66 = ::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66;

 __declspec(property(get=get_Data, put=set_Data)) ::VROSC::LoopStationDataController*  Data;

 __declspec(property(get=get_DropZoneHandler)) ::UnityW<::VROSC::LoopStationDropZoneHandler>  DropZoneHandler;

 __declspec(property(get=get_Groups)) ::UnityW<::VROSC::LoopStationGroupCore>  Groups;

 __declspec(property(get=get_IsSetup, put=set_IsSetup)) bool  IsSetup;

 __declspec(property(get=get_LaunchPadParent)) ::UnityW<::UnityEngine::Transform>  LaunchPadParent;

 __declspec(property(get=get_LongestLoopLengthSamples, put=set_LongestLoopLengthSamples)) int32_t  LongestLoopLengthSamples;

 __declspec(property(get=get_LoopHandler)) ::UnityW<::VROSC::LoopStationLoopHandler>  LoopHandler;

 __declspec(property(get=get_LoopMovingHandler, put=set_LoopMovingHandler)) ::VROSC::LoopMovingHandler*  LoopMovingHandler;

 __declspec(property(get=get_MovementPlane)) ::UnityW<::VROSC::MovementPlane>  MovementPlane;

 __declspec(property(get=get_Mover)) ::UnityW<::VROSC::TransformMover>  Mover;

/// @brief Field OnBPMSet, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBPMSet, put=__cordl_internal_set_OnBPMSet)) ::System::Action_1<float_t>*  OnBPMSet;

/// @brief Field OnVolumeChanged, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnVolumeChanged, put=__cordl_internal_set_OnVolumeChanged)) ::System::Action_1<float_t>*  OnVolumeChanged;

 __declspec(property(get=get_Recorder)) ::UnityW<::VROSC::LoopStationRecorder>  Recorder;

 __declspec(property(get=get_RecordingButton)) ::UnityW<::VROSC::LoopStationRecordingButton>  RecordingButton;

/// @brief Field <Data>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::VROSC::LoopStationDataController*  _Data_k__BackingField;

/// @brief Field <IsSetup>k__BackingField, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSetup_k__BackingField, put=__cordl_internal_set__IsSetup_k__BackingField)) bool  _IsSetup_k__BackingField;

/// @brief Field <LongestLoopLengthSamples>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__LongestLoopLengthSamples_k__BackingField, put=__cordl_internal_set__LongestLoopLengthSamples_k__BackingField)) int32_t  _LongestLoopLengthSamples_k__BackingField;

/// @brief Field <LoopMovingHandler>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopMovingHandler_k__BackingField, put=__cordl_internal_set__LoopMovingHandler_k__BackingField)) ::VROSC::LoopMovingHandler*  _LoopMovingHandler_k__BackingField;

/// @brief Field _buttons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttons, put=__cordl_internal_set__buttons)) ::UnityW<::VROSC::LoopStationButtons>  _buttons;

/// @brief Field _dropzoneHandler, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dropzoneHandler, put=__cordl_internal_set__dropzoneHandler)) ::UnityW<::VROSC::LoopStationDropZoneHandler>  _dropzoneHandler;

/// @brief Field _groups, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__groups, put=__cordl_internal_set__groups)) ::UnityW<::VROSC::LoopStationGroupCore>  _groups;

/// @brief Field _launchpadParent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchpadParent, put=__cordl_internal_set__launchpadParent)) ::UnityW<::UnityEngine::Transform>  _launchpadParent;

/// @brief Field _loopHandler, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopHandler, put=__cordl_internal_set__loopHandler)) ::UnityW<::VROSC::LoopStationLoopHandler>  _loopHandler;

/// @brief Field _loopLengthSelectionBar, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLengthSelectionBar, put=__cordl_internal_set__loopLengthSelectionBar)) ::UnityW<::VROSC::SelectionBar>  _loopLengthSelectionBar;

/// @brief Field _loopLengthUIParent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLengthUIParent, put=__cordl_internal_set__loopLengthUIParent)) ::UnityW<::UnityEngine::GameObject>  _loopLengthUIParent;

/// @brief Field _loopLocation, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopLocation, put=__cordl_internal_set__loopLocation)) ::UnityW<::UnityEngine::Transform>  _loopLocation;

/// @brief Field _movementPlane, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__movementPlane, put=__cordl_internal_set__movementPlane)) ::UnityW<::VROSC::MovementPlane>  _movementPlane;

/// @brief Field _mover, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mover, put=__cordl_internal_set__mover)) ::UnityW<::VROSC::TransformMover>  _mover;

/// @brief Field _recorder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::UnityW<::VROSC::LoopStationRecorder>  _recorder;

/// @brief Field _recordingButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingButton, put=__cordl_internal_set__recordingButton)) ::UnityW<::VROSC::LoopStationRecordingButton>  _recordingButton;

/// @brief Field _soloHandler, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__soloHandler, put=__cordl_internal_set__soloHandler)) ::VROSC::LoopStationSoloHandler*  _soloHandler;

/// @brief Method Awake, addr 0x18acf48, size 0x4e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteAll, addr 0x18aec0c, size 0x198, virtual false, abstract: false, final false
inline void DeleteAll() ;

/// @brief Method GetLoopLengthSetting, addr 0x18aee18, size 0xd0, virtual false, abstract: false, final false
inline float_t GetLoopLengthSetting() ;

/// @brief Method IsEmpty, addr 0x18ae428, size 0x2c, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method LoadLaunchPads, addr 0x18af408, size 0x2d8, virtual false, abstract: false, final false
inline void LoadLaunchPads() ;

/// @brief Method LoopStationDataLoaded, addr 0x18af0b8, size 0xbc, virtual false, abstract: false, final false
inline void LoopStationDataLoaded(::VROSC::LoopStationDataController*  dataController) ;

/// @brief Method LoopStationDataLoadedFlow, addr 0x18af174, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoopStationDataLoadedFlow(::VROSC::LoopStationDataController*  dataController) ;

static inline ::VROSC::LoopStation* New_ctor() ;

/// @brief Method OnAllLoopsLoopsLoaded, addr 0x18af208, size 0x94, virtual false, abstract: false, final false
inline void OnAllLoopsLoopsLoaded() ;

/// @brief Method OnDestroy, addr 0x18ad428, size 0x444, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18ad924, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18ad86c, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayAll, addr 0x18ae7cc, size 0x18, virtual false, abstract: false, final false
inline void PlayAll() ;

/// @brief Method RemoveLoop, addr 0x18ae278, size 0x1b0, virtual false, abstract: false, final false
inline void RemoveLoop(::VROSC::LoopPlayer*  loopToRemove, bool  fromReset) ;

/// @brief Method ResetLoopStation, addr 0x18ae454, size 0x24c, virtual false, abstract: false, final false
inline void ResetLoopStation(bool  keepPlaybackSettings, bool  keepLoopLength) ;

/// @brief Method SetAutoRecordingLength, addr 0x18aedf8, size 0x20, virtual false, abstract: false, final false
inline void SetAutoRecordingLength() ;

/// @brief Method SetRecordingLength, addr 0x18aeee8, size 0x108, virtual false, abstract: false, final false
inline void SetRecordingLength(float_t  lengthInBars) ;

/// @brief Method Setup, addr 0x18ad940, size 0x158, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStationDataController*  dataController) ;

/// @brief Method ShowAsPlaying, addr 0x18ad8a0, size 0x84, virtual false, abstract: false, final false
inline void ShowAsPlaying() ;

/// @brief Method StopAll, addr 0x18aeaa4, size 0x18, virtual false, abstract: false, final false
inline void StopAll() ;

/// @brief Method SyncSourceChanged, addr 0x18ae76c, size 0x60, virtual false, abstract: false, final false
inline void SyncSourceChanged(::VROSC::BeatCounter_SyncSource  syncSource) ;

/// @brief Method UpdateLongestLoopInSamples, addr 0x18ae264, size 0x14, virtual false, abstract: false, final false
inline void UpdateLongestLoopInSamples(int32_t  loopLengthInSamples, bool  force) ;

/// @brief Method VolumeChanged, addr 0x18aeda4, size 0x54, virtual false, abstract: false, final false
inline void VolumeChanged(float_t  volume) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnBPMSet() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnBPMSet() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnVolumeChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnVolumeChanged() ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get__Data_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSetup_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSetup_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LongestLoopLengthSamples_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LongestLoopLengthSamples_k__BackingField() ;

constexpr ::VROSC::LoopMovingHandler* const& __cordl_internal_get__LoopMovingHandler_k__BackingField() const;

constexpr ::VROSC::LoopMovingHandler*& __cordl_internal_get__LoopMovingHandler_k__BackingField() ;

constexpr ::UnityW<::VROSC::LoopStationButtons> const& __cordl_internal_get__buttons() const;

constexpr ::UnityW<::VROSC::LoopStationButtons>& __cordl_internal_get__buttons() ;

constexpr ::UnityW<::VROSC::LoopStationDropZoneHandler> const& __cordl_internal_get__dropzoneHandler() const;

constexpr ::UnityW<::VROSC::LoopStationDropZoneHandler>& __cordl_internal_get__dropzoneHandler() ;

constexpr ::UnityW<::VROSC::LoopStationGroupCore> const& __cordl_internal_get__groups() const;

constexpr ::UnityW<::VROSC::LoopStationGroupCore>& __cordl_internal_get__groups() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__launchpadParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__launchpadParent() ;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler> const& __cordl_internal_get__loopHandler() const;

constexpr ::UnityW<::VROSC::LoopStationLoopHandler>& __cordl_internal_get__loopHandler() ;

constexpr ::UnityW<::VROSC::SelectionBar> const& __cordl_internal_get__loopLengthSelectionBar() const;

constexpr ::UnityW<::VROSC::SelectionBar>& __cordl_internal_get__loopLengthSelectionBar() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loopLengthUIParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loopLengthUIParent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__loopLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__loopLocation() ;

constexpr ::UnityW<::VROSC::MovementPlane> const& __cordl_internal_get__movementPlane() const;

constexpr ::UnityW<::VROSC::MovementPlane>& __cordl_internal_get__movementPlane() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__mover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__mover() ;

constexpr ::UnityW<::VROSC::LoopStationRecorder> const& __cordl_internal_get__recorder() const;

constexpr ::UnityW<::VROSC::LoopStationRecorder>& __cordl_internal_get__recorder() ;

constexpr ::UnityW<::VROSC::LoopStationRecordingButton> const& __cordl_internal_get__recordingButton() const;

constexpr ::UnityW<::VROSC::LoopStationRecordingButton>& __cordl_internal_get__recordingButton() ;

constexpr ::VROSC::LoopStationSoloHandler* const& __cordl_internal_get__soloHandler() const;

constexpr ::VROSC::LoopStationSoloHandler*& __cordl_internal_get__soloHandler() ;

constexpr void __cordl_internal_set_OnBPMSet(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_OnVolumeChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::VROSC::LoopStationDataController*  value) ;

constexpr void __cordl_internal_set__IsSetup_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LongestLoopLengthSamples_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__LoopMovingHandler_k__BackingField(::VROSC::LoopMovingHandler*  value) ;

constexpr void __cordl_internal_set__buttons(::UnityW<::VROSC::LoopStationButtons>  value) ;

constexpr void __cordl_internal_set__dropzoneHandler(::UnityW<::VROSC::LoopStationDropZoneHandler>  value) ;

constexpr void __cordl_internal_set__groups(::UnityW<::VROSC::LoopStationGroupCore>  value) ;

constexpr void __cordl_internal_set__launchpadParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__loopHandler(::UnityW<::VROSC::LoopStationLoopHandler>  value) ;

constexpr void __cordl_internal_set__loopLengthSelectionBar(::UnityW<::VROSC::SelectionBar>  value) ;

constexpr void __cordl_internal_set__loopLengthUIParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loopLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__movementPlane(::UnityW<::VROSC::MovementPlane>  value) ;

constexpr void __cordl_internal_set__mover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__recorder(::UnityW<::VROSC::LoopStationRecorder>  value) ;

constexpr void __cordl_internal_set__recordingButton(::UnityW<::VROSC::LoopStationRecordingButton>  value) ;

constexpr void __cordl_internal_set__soloHandler(::VROSC::LoopStationSoloHandler*  value) ;

/// @brief Method .ctor, addr 0x18af97c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x18acf0c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopStationDataController* get_Data() ;

/// @brief Method get_DropZoneHandler, addr 0x18acf2c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationDropZoneHandler> get_DropZoneHandler() ;

/// @brief Method get_Groups, addr 0x18acecc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroupCore> get_Groups() ;

/// @brief Method get_IsSetup, addr 0x18acf34, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSetup() ;

/// @brief Method get_LaunchPadParent, addr 0x18acef4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LaunchPadParent() ;

/// @brief Method get_LongestLoopLengthSamples, addr 0x18acefc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LongestLoopLengthSamples() ;

/// @brief Method get_LoopHandler, addr 0x18aced4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationLoopHandler> get_LoopHandler() ;

/// @brief Method get_LoopMovingHandler, addr 0x18acf1c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopMovingHandler* get_LoopMovingHandler() ;

/// @brief Method get_MovementPlane, addr 0x18acec4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::MovementPlane> get_MovementPlane() ;

/// @brief Method get_Mover, addr 0x18aceec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::TransformMover> get_Mover() ;

/// @brief Method get_Recorder, addr 0x18acee4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationRecorder> get_Recorder() ;

/// @brief Method get_RecordingButton, addr 0x18acedc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationRecordingButton> get_RecordingButton() ;

/// @brief Method set_Data, addr 0x18acf14, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::VROSC::LoopStationDataController*  value) ;

/// @brief Method set_IsSetup, addr 0x18acf3c, size 0xc, virtual false, abstract: false, final false
inline void set_IsSetup(bool  value) ;

/// @brief Method set_LongestLoopLengthSamples, addr 0x18acf04, size 0x8, virtual false, abstract: false, final false
inline void set_LongestLoopLengthSamples(int32_t  value) ;

/// @brief Method set_LoopMovingHandler, addr 0x18acf24, size 0x8, virtual false, abstract: false, final false
inline void set_LoopMovingHandler(::VROSC::LoopMovingHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStation(LoopStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStation(LoopStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{712};

/// @brief Field _movementPlane, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::MovementPlane>  ____movementPlane;

/// @brief Field _buttons, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationButtons>  ____buttons;

/// @brief Field _loopHandler, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationLoopHandler>  ____loopHandler;

/// @brief Field _recorder, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  ____recorder;

/// @brief Field _recordingButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecordingButton>  ____recordingButton;

/// @brief Field _groups, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroupCore>  ____groups;

/// @brief Field _dropzoneHandler, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationDropZoneHandler>  ____dropzoneHandler;

/// @brief Field _mover, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____mover;

/// @brief Field _loopLocation, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____loopLocation;

/// @brief Field _launchpadParent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____launchpadParent;

/// @brief Field _loopLengthSelectionBar, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::VROSC::SelectionBar>  ____loopLengthSelectionBar;

/// @brief Field _loopLengthUIParent, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loopLengthUIParent;

/// @brief Field _soloHandler, offset: 0x80, size: 0x8, def value: None
 ::VROSC::LoopStationSoloHandler*  ____soloHandler;

/// @brief Field OnBPMSet, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnBPMSet;

/// @brief Field OnVolumeChanged, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnVolumeChanged;

/// @brief Field <LongestLoopLengthSamples>k__BackingField, offset: 0x98, size: 0x4, def value: None
 int32_t  ____LongestLoopLengthSamples_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  ____Data_k__BackingField;

/// @brief Field <LoopMovingHandler>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::VROSC::LoopMovingHandler*  ____LoopMovingHandler_k__BackingField;

/// @brief Field <IsSetup>k__BackingField, offset: 0xb0, size: 0x1, def value: None
 bool  ____IsSetup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStation, ____movementPlane) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____buttons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____loopHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____recorder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____recordingButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____groups) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____dropzoneHandler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____mover) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____loopLocation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____launchpadParent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____loopLengthSelectionBar) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____loopLengthUIParent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____soloHandler) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ___OnBPMSet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ___OnVolumeChanged) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____LongestLoopLengthSamples_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____Data_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____LoopMovingHandler_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStation, ____IsSetup_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStation, 0xb8>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStation*, "VROSC", "LoopStation");
NEED_NO_BOX(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStation__LoopStationDataLoadedFlow_d__66*, "VROSC", "LoopStation/<LoopStationDataLoadedFlow>d__66");
