#pragma once
// IWYU pragma private; include "VROSC/MicrophoneDeviceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MicrophoneDeviceManager)
namespace NatSuite::Devices {
class AudioDevice;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioSource;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
struct MicrophoneDeviceManager__InitializeNativeMicrophone_d__48;
}
namespace VROSC {
struct MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57;
}
namespace VROSC {
struct MicrophoneDeviceManager__Setup_d__47;
}
namespace VROSC {
class MicrophoneEffectsManager;
}
// Forward declare root types
namespace VROSC {
class MicrophoneDeviceManager;
}
namespace VROSC {
struct MicrophoneDeviceManager__InitializeNativeMicrophone_d__48;
}
namespace VROSC {
struct MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57;
}
namespace VROSC {
struct MicrophoneDeviceManager__Setup_d__47;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneDeviceManager);
MARK_VAL_T(::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48);
MARK_VAL_T(::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57);
MARK_VAL_T(::VROSC::MicrophoneDeviceManager__Setup_d__47);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace VROSC {
// Is value type: true
// CS Name: VROSC.MicrophoneDeviceManager/<InitializeNativeMicrophone>d__48
struct CORDL_TYPE MicrophoneDeviceManager__InitializeNativeMicrophone_d__48 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18c0de0, size 0xa74, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18c1854, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDeviceManager__InitializeNativeMicrophone_d__48() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::MicrophoneDeviceManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr MicrophoneDeviceManager__InitializeNativeMicrophone_d__48(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.MicrophoneDeviceManager/<InitiateInputAfterBufferReceived>d__57
struct CORDL_TYPE MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16ee608, size 0x1c0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16ee7c8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::MicrophoneDeviceManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.MicrophoneDeviceManager/<Setup>d__47
struct CORDL_TYPE MicrophoneDeviceManager__Setup_d__47 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16ee7d4, size 0x208, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16eea5c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDeviceManager__Setup_d__47() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::MicrophoneDeviceManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr MicrophoneDeviceManager__Setup_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{761};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDeviceManager__Setup_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__Setup_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__Setup_d__47, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager__Setup_d__47, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDeviceManager__Setup_d__47, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneDeviceManager
class CORDL_TYPE MicrophoneDeviceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _InitializeNativeMicrophone_d__48 = ::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48;

using _InitiateInputAfterBufferReceived_d__57 = ::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57;

using _Setup_d__47 = ::VROSC::MicrophoneDeviceManager__Setup_d__47;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_MicrophoneDevice)) ::NatSuite::Devices::AudioDevice*  MicrophoneDevice;

/// @brief Field OnInputMeasurementChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnInputMeasurementChanged, put=setStaticF_OnInputMeasurementChanged)) ::System::Action_1<float_t>*  OnInputMeasurementChanged;

/// @brief Field OnPeakLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPeakLeft, put=setStaticF_OnPeakLeft)) ::System::Action*  OnPeakLeft;

/// @brief Field OnPeakReach, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPeakReach, put=setStaticF_OnPeakReach)) ::System::Action*  OnPeakReach;

/// @brief Field OnSignal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSignal, put=setStaticF_OnSignal)) ::System::Action*  OnSignal;

 __declspec(property(get=get_StopFadeTime, put=set_StopFadeTime)) float_t  StopFadeTime;

 __declspec(property(get=get_UsesMicrophoneTakingInput)) bool  UsesMicrophoneTakingInput;

/// @brief Field <CanUseNatDevice>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__CanUseNatDevice_k__BackingField, put=setStaticF__CanUseNatDevice_k__BackingField)) bool  _CanUseNatDevice_k__BackingField;

/// @brief Field <HasWorkingMicrophone>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__HasWorkingMicrophone_k__BackingField, put=setStaticF__HasWorkingMicrophone_k__BackingField)) bool  _HasWorkingMicrophone_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <Latency>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Latency_k__BackingField, put=setStaticF__Latency_k__BackingField)) float_t  _Latency_k__BackingField;

/// @brief Field <StopFadeTime>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__StopFadeTime_k__BackingField, put=__cordl_internal_set__StopFadeTime_k__BackingField)) float_t  _StopFadeTime_k__BackingField;

/// @brief Field _audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _isInPeak, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInPeak, put=__cordl_internal_set__isInPeak)) bool  _isInPeak;

/// @brief Field _microphoneDevice, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneDevice, put=__cordl_internal_set__microphoneDevice)) ::NatSuite::Devices::AudioDevice*  _microphoneDevice;

/// @brief Field _microphoneEffectsManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneEffectsManager, put=__cordl_internal_set__microphoneEffectsManager)) ::UnityW<::VROSC::MicrophoneEffectsManager>  _microphoneEffectsManager;

/// @brief Field _microphoneEnabled, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__microphoneEnabled, put=__cordl_internal_set__microphoneEnabled)) bool  _microphoneEnabled;

/// @brief Field _microphoneProximity, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__microphoneProximity, put=__cordl_internal_set__microphoneProximity)) float_t  _microphoneProximity;

/// @brief Field _microphoneTakingInput, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__microphoneTakingInput, put=__cordl_internal_set__microphoneTakingInput)) bool  _microphoneTakingInput;

/// @brief Field _nativeMicrophoneBufferSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__nativeMicrophoneBufferSize, put=__cordl_internal_set__nativeMicrophoneBufferSize)) int32_t  _nativeMicrophoneBufferSize;

/// @brief Field _peakDisplayDuration, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__peakDisplayDuration, put=__cordl_internal_set__peakDisplayDuration)) float_t  _peakDisplayDuration;

/// @brief Field _peakTimer, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__peakTimer, put=__cordl_internal_set__peakTimer)) float_t  _peakTimer;

/// @brief Field _peakValue, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__peakValue, put=__cordl_internal_set__peakValue)) float_t  _peakValue;

/// @brief Field _preampVolume, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__preampVolume, put=__cordl_internal_set__preampVolume)) float_t  _preampVolume;

/// @brief Field _receivedBuffers, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__receivedBuffers, put=__cordl_internal_set__receivedBuffers)) int32_t  _receivedBuffers;

/// @brief Field _ringBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ringBuffer, put=__cordl_internal_set__ringBuffer)) ::ArrayW<float_t,::Array<float_t>*>  _ringBuffer;

/// @brief Field _ringBufferReadIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ringBufferReadIndex, put=__cordl_internal_set__ringBufferReadIndex)) int32_t  _ringBufferReadIndex;

/// @brief Field _ringBufferWriteIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__ringBufferWriteIndex, put=__cordl_internal_set__ringBufferWriteIndex)) int32_t  _ringBufferWriteIndex;

/// @brief Field _takingInput, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__takingInput, put=__cordl_internal_set__takingInput)) bool  _takingInput;

/// @brief Field _useProximity, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get__useProximity, put=__cordl_internal_set__useProximity)) bool  _useProximity;

/// @brief Field _writeAheadBuffers, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__writeAheadBuffers, put=__cordl_internal_set__writeAheadBuffers)) int32_t  _writeAheadBuffers;

/// @brief Method InitializeNativeMicrophone, addr 0x18bfd68, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeNativeMicrophone() ;

/// @brief Method InitiateInput, addr 0x18c06e8, size 0x128, virtual false, abstract: false, final false
inline void InitiateInput() ;

/// @brief Method InitiateInputAfterBufferReceived, addr 0x18c05b4, size 0x90, virtual false, abstract: false, final false
inline void InitiateInputAfterBufferReceived() ;

/// @brief Method LoopStationStateChanged, addr 0x18c0644, size 0xa4, virtual false, abstract: false, final false
inline void LoopStationStateChanged(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method MicrophoneEnabled, addr 0x18bfedc, size 0x2ec, virtual false, abstract: false, final false
inline void MicrophoneEnabled(bool  enabled) ;

/// @brief Method MicrophoneTakingInput, addr 0x18c084c, size 0xa4, virtual false, abstract: false, final false
inline void MicrophoneTakingInput(bool  takingInput) ;

static inline ::VROSC::MicrophoneDeviceManager* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x18c0a88, size 0x298, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method ReceiveMicrophoneSamples, addr 0x18c08f0, size 0x154, virtual false, abstract: false, final false
inline void ReceiveMicrophoneSamples(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp) ;

/// @brief Method ResetLatency, addr 0x18c04d0, size 0xe4, virtual false, abstract: false, final false
inline void ResetLatency() ;

/// @brief Method ResetReadIndex, addr 0x18c0810, size 0x3c, virtual false, abstract: false, final false
inline void ResetReadIndex() ;

/// @brief Method SetLatencyCompensation, addr 0x18c043c, size 0x94, virtual false, abstract: false, final false
inline void SetLatencyCompensation(float_t  latency) ;

/// @brief Method SetMicrophoneDevice, addr 0x18bfe28, size 0xb4, virtual false, abstract: false, final false
inline void SetMicrophoneDevice(::NatSuite::Devices::AudioDevice*  device) ;

/// @brief Method SetMicrophoneProximity, addr 0x18c0418, size 0x24, virtual false, abstract: false, final false
inline void SetMicrophoneProximity(float_t  proximity) ;

/// @brief Method SetPreampReverb, addr 0x18c0a4c, size 0x1c, virtual false, abstract: false, final false
inline void SetPreampReverb(float_t  reverb) ;

/// @brief Method SetPreampVolume, addr 0x18c0a44, size 0x8, virtual false, abstract: false, final false
inline void SetPreampVolume(float_t  volume) ;

/// @brief Method SetPreviewReverb, addr 0x18c0a68, size 0x20, virtual false, abstract: false, final false
inline void SetPreviewReverb(bool  state) ;

/// @brief Method SetUseProximity, addr 0x18c03f4, size 0x24, virtual false, abstract: false, final false
inline void SetUseProximity(bool  state) ;

/// @brief Method Setup, addr 0x18bfcd8, size 0x90, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Update, addr 0x18c01c8, size 0x22c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__StopFadeTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__StopFadeTime_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr bool const& __cordl_internal_get__isInPeak() const;

constexpr bool& __cordl_internal_get__isInPeak() ;

constexpr ::NatSuite::Devices::AudioDevice* const& __cordl_internal_get__microphoneDevice() const;

constexpr ::NatSuite::Devices::AudioDevice*& __cordl_internal_get__microphoneDevice() ;

constexpr ::UnityW<::VROSC::MicrophoneEffectsManager> const& __cordl_internal_get__microphoneEffectsManager() const;

constexpr ::UnityW<::VROSC::MicrophoneEffectsManager>& __cordl_internal_get__microphoneEffectsManager() ;

constexpr bool const& __cordl_internal_get__microphoneEnabled() const;

constexpr bool& __cordl_internal_get__microphoneEnabled() ;

constexpr float_t const& __cordl_internal_get__microphoneProximity() const;

constexpr float_t& __cordl_internal_get__microphoneProximity() ;

constexpr bool const& __cordl_internal_get__microphoneTakingInput() const;

constexpr bool& __cordl_internal_get__microphoneTakingInput() ;

constexpr int32_t const& __cordl_internal_get__nativeMicrophoneBufferSize() const;

constexpr int32_t& __cordl_internal_get__nativeMicrophoneBufferSize() ;

constexpr float_t const& __cordl_internal_get__peakDisplayDuration() const;

constexpr float_t& __cordl_internal_get__peakDisplayDuration() ;

constexpr float_t const& __cordl_internal_get__peakTimer() const;

constexpr float_t& __cordl_internal_get__peakTimer() ;

constexpr float_t const& __cordl_internal_get__peakValue() const;

constexpr float_t& __cordl_internal_get__peakValue() ;

constexpr float_t const& __cordl_internal_get__preampVolume() const;

constexpr float_t& __cordl_internal_get__preampVolume() ;

constexpr int32_t const& __cordl_internal_get__receivedBuffers() const;

constexpr int32_t& __cordl_internal_get__receivedBuffers() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__ringBuffer() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__ringBuffer() ;

constexpr int32_t const& __cordl_internal_get__ringBufferReadIndex() const;

constexpr int32_t& __cordl_internal_get__ringBufferReadIndex() ;

constexpr int32_t const& __cordl_internal_get__ringBufferWriteIndex() const;

constexpr int32_t& __cordl_internal_get__ringBufferWriteIndex() ;

constexpr bool const& __cordl_internal_get__takingInput() const;

constexpr bool& __cordl_internal_get__takingInput() ;

constexpr bool const& __cordl_internal_get__useProximity() const;

constexpr bool& __cordl_internal_get__useProximity() ;

constexpr int32_t const& __cordl_internal_get__writeAheadBuffers() const;

constexpr int32_t& __cordl_internal_get__writeAheadBuffers() ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StopFadeTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__isInPeak(bool  value) ;

constexpr void __cordl_internal_set__microphoneDevice(::NatSuite::Devices::AudioDevice*  value) ;

constexpr void __cordl_internal_set__microphoneEffectsManager(::UnityW<::VROSC::MicrophoneEffectsManager>  value) ;

constexpr void __cordl_internal_set__microphoneEnabled(bool  value) ;

constexpr void __cordl_internal_set__microphoneProximity(float_t  value) ;

constexpr void __cordl_internal_set__microphoneTakingInput(bool  value) ;

constexpr void __cordl_internal_set__nativeMicrophoneBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__peakDisplayDuration(float_t  value) ;

constexpr void __cordl_internal_set__peakTimer(float_t  value) ;

constexpr void __cordl_internal_set__peakValue(float_t  value) ;

constexpr void __cordl_internal_set__preampVolume(float_t  value) ;

constexpr void __cordl_internal_set__receivedBuffers(int32_t  value) ;

constexpr void __cordl_internal_set__ringBuffer(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__ringBufferReadIndex(int32_t  value) ;

constexpr void __cordl_internal_set__ringBufferWriteIndex(int32_t  value) ;

constexpr void __cordl_internal_set__takingInput(bool  value) ;

constexpr void __cordl_internal_set__useProximity(bool  value) ;

constexpr void __cordl_internal_set__writeAheadBuffers(int32_t  value) ;

/// @brief Method .ctor, addr 0x18c0d20, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<float_t>* getStaticF_OnInputMeasurementChanged() ;

static inline ::System::Action* getStaticF_OnPeakLeft() ;

static inline ::System::Action* getStaticF_OnPeakReach() ;

static inline ::System::Action* getStaticF_OnSignal() ;

static inline bool getStaticF__CanUseNatDevice_k__BackingField() ;

static inline bool getStaticF__HasWorkingMicrophone_k__BackingField() ;

static inline float_t getStaticF__Latency_k__BackingField() ;

/// @brief Method get_CanUseNatDevice, addr 0x18bfc20, size 0x58, virtual false, abstract: false, final false
static inline bool get_CanUseNatDevice() ;

/// @brief Method get_HasWorkingMicrophone, addr 0x18bfb68, size 0x58, virtual false, abstract: false, final false
static inline bool get_HasWorkingMicrophone() ;

/// @brief Method get_IsInitialized, addr 0x18bfb4c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_Latency, addr 0x18bfa80, size 0x58, virtual false, abstract: false, final false
static inline float_t get_Latency() ;

/// @brief Method get_MicrophoneDevice, addr 0x18bfa78, size 0x8, virtual false, abstract: false, final false
inline ::NatSuite::Devices::AudioDevice* get_MicrophoneDevice() ;

/// @brief Method get_StopFadeTime, addr 0x18bfb3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_StopFadeTime() ;

/// @brief Method get_UsesMicrophoneTakingInput, addr 0x18bfb60, size 0x8, virtual false, abstract: false, final false
inline bool get_UsesMicrophoneTakingInput() ;

static inline void setStaticF_OnInputMeasurementChanged(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_OnPeakLeft(::System::Action*  value) ;

static inline void setStaticF_OnPeakReach(::System::Action*  value) ;

static inline void setStaticF_OnSignal(::System::Action*  value) ;

static inline void setStaticF__CanUseNatDevice_k__BackingField(bool  value) ;

static inline void setStaticF__HasWorkingMicrophone_k__BackingField(bool  value) ;

static inline void setStaticF__Latency_k__BackingField(float_t  value) ;

/// @brief Method set_CanUseNatDevice, addr 0x18bfc78, size 0x60, virtual false, abstract: false, final false
static inline void set_CanUseNatDevice(bool  value) ;

/// @brief Method set_HasWorkingMicrophone, addr 0x18bfbc0, size 0x60, virtual false, abstract: false, final false
static inline void set_HasWorkingMicrophone(bool  value) ;

/// @brief Method set_IsInitialized, addr 0x18bfb54, size 0xc, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method set_Latency, addr 0x18bfad8, size 0x64, virtual false, abstract: false, final false
static inline void set_Latency(float_t  value) ;

/// @brief Method set_StopFadeTime, addr 0x18bfb44, size 0x8, virtual false, abstract: false, final false
inline void set_StopFadeTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneDeviceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDeviceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneDeviceManager(MicrophoneDeviceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneDeviceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneDeviceManager(MicrophoneDeviceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{762};

/// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// @brief Field _microphoneEffectsManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneEffectsManager>  ____microphoneEffectsManager;

/// @brief Field _nativeMicrophoneBufferSize, offset: 0x30, size: 0x4, def value: None
 int32_t  ____nativeMicrophoneBufferSize;

/// @brief Field _microphoneDevice, offset: 0x38, size: 0x8, def value: None
 ::NatSuite::Devices::AudioDevice*  ____microphoneDevice;

/// @brief Field _ringBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____ringBuffer;

/// @brief Field _ringBufferWriteIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____ringBufferWriteIndex;

/// @brief Field _ringBufferReadIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____ringBufferReadIndex;

/// @brief Field _takingInput, offset: 0x50, size: 0x1, def value: None
 bool  ____takingInput;

/// @brief Field _microphoneEnabled, offset: 0x51, size: 0x1, def value: None
 bool  ____microphoneEnabled;

/// @brief Field _microphoneTakingInput, offset: 0x52, size: 0x1, def value: None
 bool  ____microphoneTakingInput;

/// @brief Field _useProximity, offset: 0x53, size: 0x1, def value: None
 bool  ____useProximity;

/// @brief Field _microphoneProximity, offset: 0x54, size: 0x4, def value: None
 float_t  ____microphoneProximity;

/// @brief Field <StopFadeTime>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____StopFadeTime_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset: 0x5c, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

/// @brief Field _preampVolume, offset: 0x60, size: 0x4, def value: None
 float_t  ____preampVolume;

/// @brief Field _peakDisplayDuration, offset: 0x64, size: 0x4, def value: None
 float_t  ____peakDisplayDuration;

/// @brief Field _peakValue, offset: 0x68, size: 0x4, def value: None
 float_t  ____peakValue;

/// @brief Field _peakTimer, offset: 0x6c, size: 0x4, def value: None
 float_t  ____peakTimer;

/// @brief Field _isInPeak, offset: 0x70, size: 0x1, def value: None
 bool  ____isInPeak;

/// @brief Field _writeAheadBuffers, offset: 0x74, size: 0x4, def value: None
 int32_t  ____writeAheadBuffers;

/// @brief Field _receivedBuffers, offset: 0x78, size: 0x4, def value: None
 int32_t  ____receivedBuffers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____microphoneEffectsManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____nativeMicrophoneBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____microphoneDevice) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____ringBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____ringBufferWriteIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____ringBufferReadIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____takingInput) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____microphoneEnabled) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____microphoneTakingInput) == 0x52, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____useProximity) == 0x53, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____microphoneProximity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____StopFadeTime_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____IsInitialized_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____preampVolume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____peakDisplayDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____peakValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____peakTimer) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____isInPeak) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____writeAheadBuffers) == 0x74, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneDeviceManager, ____receivedBuffers) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneDeviceManager, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneDeviceManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDeviceManager*, "VROSC", "MicrophoneDeviceManager");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDeviceManager__InitializeNativeMicrophone_d__48, "VROSC", "MicrophoneDeviceManager/<InitializeNativeMicrophone>d__48");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDeviceManager__InitiateInputAfterBufferReceived_d__57, "VROSC", "MicrophoneDeviceManager/<InitiateInputAfterBufferReceived>d__57");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneDeviceManager__Setup_d__47, "VROSC", "MicrophoneDeviceManager/<Setup>d__47");
