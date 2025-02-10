#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__SoundSource_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationRecorder)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC {
class CurrentlyRecordingLoop;
}
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
struct LoopStationRecorder__ConcludeRecording_d__37;
}
namespace VROSC {
struct LoopStationRecorder__ScheduleButtonPress_d__29;
}
namespace VROSC {
struct LoopStationRecorder__StartRecording_d__34;
}
namespace VROSC {
class LoopStationRecorder___c__DisplayClass37_0;
}
namespace VROSC {
class LoopStationRecordingUI;
}
namespace VROSC {
class LoopStation;
}
namespace VROSC {
class MicrophoneDeviceManager;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
class Signal;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
struct __c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d;
}
// Forward declare root types
namespace VROSC {
struct LoopStationRecorder_RecordingState;
}
namespace VROSC {
class LoopStationRecorder;
}
namespace VROSC {
class LoopStationRecorder___c__DisplayClass37_0;
}
namespace VROSC {
struct LoopStationRecorder__ConcludeRecording_d__37;
}
namespace VROSC {
struct LoopStationRecorder__ScheduleButtonPress_d__29;
}
namespace VROSC {
struct LoopStationRecorder__StartRecording_d__34;
}
namespace VROSC {
struct __c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopStationRecorder_RecordingState);
MARK_REF_PTR_T(::VROSC::LoopStationRecorder);
MARK_REF_PTR_T(::VROSC::LoopStationRecorder___c__DisplayClass37_0);
MARK_VAL_T(::VROSC::LoopStationRecorder__ConcludeRecording_d__37);
MARK_VAL_T(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29);
MARK_VAL_T(::VROSC::LoopStationRecorder__StartRecording_d__34);
MARK_VAL_T(::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationRecorder/RecordingState
struct CORDL_TYPE LoopStationRecorder_RecordingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopStationRecorder_RecordingState_Unwrapped
enum struct __LoopStationRecorder_RecordingState_Unwrapped : int32_t {
__E_Stopped = static_cast<int32_t>(0x0),
__E_WaitingForNotes = static_cast<int32_t>(0x1),
__E_Recording = static_cast<int32_t>(0x2),
__E_FinishingUp = static_cast<int32_t>(0x3),
__E_Playing = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopStationRecorder_RecordingState_Unwrapped () const noexcept {
return static_cast<__LoopStationRecorder_RecordingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecorder_RecordingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopStationRecorder_RecordingState(int32_t  value__) noexcept;

/// @brief Field FinishingUp value: I32(3)
static ::VROSC::LoopStationRecorder_RecordingState const FinishingUp;

/// @brief Field Playing value: I32(4)
static ::VROSC::LoopStationRecorder_RecordingState const Playing;

/// @brief Field Recording value: I32(2)
static ::VROSC::LoopStationRecorder_RecordingState const Recording;

/// @brief Field Stopped value: I32(0)
static ::VROSC::LoopStationRecorder_RecordingState const Stopped;

/// @brief Field WaitingForNotes value: I32(1)
static ::VROSC::LoopStationRecorder_RecordingState const WaitingForNotes;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecorder_RecordingState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecorder_RecordingState, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationRecorder/<>c__DisplayClass37_0/<<ConcludeRecording>b__0>d
struct CORDL_TYPE __c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a8d38, size 0x2c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18a8ffc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopStationRecorder___c__DisplayClass37_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::LoopStationRecorder___c__DisplayClass37_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationRecorder___c__DisplayClass37_0*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecorder/<>c__DisplayClass37_0
class CORDL_TYPE LoopStationRecorder___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
using __ConcludeRecording_b__0_d = ::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::LoopStationRecorder>  __4__this;

/// @brief Field audioData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioData, put=__cordl_internal_set_audioData)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field fullRecordingWithTail, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullRecordingWithTail, put=__cordl_internal_set_fullRecordingWithTail)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fullRecordingWithTail;

/// @brief Field instrumentEvents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_instrumentEvents, put=__cordl_internal_set_instrumentEvents)) ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEvents;

/// @brief Field playbackLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_playbackLength, put=__cordl_internal_set_playbackLength)) int32_t  playbackLength;

/// @brief Field tailIsDoneRecording, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_tailIsDoneRecording, put=__cordl_internal_set_tailIsDoneRecording)) bool  tailIsDoneRecording;

static inline ::VROSC::LoopStationRecorder___c__DisplayClass37_0* New_ctor() ;

/// @brief Method <ConcludeRecording>b__0, addr 0x18a8ca8, size 0x90, virtual false, abstract: false, final false
inline void _ConcludeRecording_b__0() ;

constexpr ::UnityW<::VROSC::LoopStationRecorder> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::LoopStationRecorder>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_audioData() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_audioData() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_fullRecordingWithTail() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_fullRecordingWithTail() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_instrumentEvents() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_instrumentEvents() ;

constexpr int32_t const& __cordl_internal_get_playbackLength() const;

constexpr int32_t& __cordl_internal_get_playbackLength() ;

constexpr bool const& __cordl_internal_get_tailIsDoneRecording() const;

constexpr bool& __cordl_internal_get_tailIsDoneRecording() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::LoopStationRecorder>  value) ;

constexpr void __cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_fullRecordingWithTail(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_instrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_playbackLength(int32_t  value) ;

constexpr void __cordl_internal_set_tailIsDoneRecording(bool  value) ;

/// @brief Method .ctor, addr 0x18a8ca0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecorder___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecorder___c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecorder___c__DisplayClass37_0(LoopStationRecorder___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecorder___c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecorder___c__DisplayClass37_0(LoopStationRecorder___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{700};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  _____4__this;

/// @brief Field tailIsDoneRecording, offset: 0x18, size: 0x1, def value: None
 bool  ___tailIsDoneRecording;

/// @brief Field instrumentEvents, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___instrumentEvents;

/// @brief Field fullRecordingWithTail, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___fullRecordingWithTail;

/// @brief Field audioData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___audioData;

/// @brief Field playbackLength, offset: 0x38, size: 0x4, def value: None
 int32_t  ___playbackLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecorder___c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder___c__DisplayClass37_0, ___tailIsDoneRecording) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder___c__DisplayClass37_0, ___instrumentEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder___c__DisplayClass37_0, ___fullRecordingWithTail) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder___c__DisplayClass37_0, ___audioData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder___c__DisplayClass37_0, ___playbackLength) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecorder___c__DisplayClass37_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationRecorder/<ConcludeRecording>d__37
struct CORDL_TYPE LoopStationRecorder__ConcludeRecording_d__37 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a9008, size 0xa3c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18a9a44, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecorder__ConcludeRecording_d__37() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopStationRecorder>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopStationRecorder___c__DisplayClass37_0*", modifiers: "", def_value: None }, CppParam { name: "_concludeTime_5__2", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_tailInSeconds_5__3", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopStationRecorder__ConcludeRecording_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopStationRecorder>  __4__this, ::VROSC::LoopStationRecorder___c__DisplayClass37_0*  __8__1, double_t  _concludeTime_5__2, double_t  _tailInSeconds_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  __4__this;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopStationRecorder___c__DisplayClass37_0*  __8__1;

/// @brief Field <concludeTime>5__2, offset: 0x38, size: 0x8, def value: None
 double_t  _concludeTime_5__2;

/// @brief Field <tailInSeconds>5__3, offset: 0x40, size: 0x8, def value: None
 double_t  _tailInSeconds_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, _concludeTime_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, _tailInSeconds_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecorder__ConcludeRecording_d__37, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationRecorder/<ScheduleButtonPress>d__29
struct CORDL_TYPE LoopStationRecorder__ScheduleButtonPress_d__29 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a9a50, size 0x2dc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18a9d2c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecorder__ScheduleButtonPress_d__29() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopStationRecorder>", modifiers: "", def_value: None }, CppParam { name: "dspTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopStationRecorder__ScheduleButtonPress_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopStationRecorder>  __4__this, double_t  dspTime, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  __4__this;

/// @brief Field dspTime, offset: 0x30, size: 0x8, def value: None
 double_t  dspTime;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, dspTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationRecorder/<StartRecording>d__34
struct CORDL_TYPE LoopStationRecorder__StartRecording_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a9d38, size 0xa14, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18aa74c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecorder__StartRecording_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::LoopStationRecorder>", modifiers: "", def_value: None }, CppParam { name: "instrumentId", ty: "::VROSC::WidgetSettings_Identifier", modifiers: "", def_value: None }, CppParam { name: "patchSettings", ty: "::VROSC::PatchSettings*", modifiers: "", def_value: None }, CppParam { name: "predictedDspTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_usingOverdub_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_loopLength_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_audioData_5__4", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "_trackID_5__5", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopStationRecorder__StartRecording_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::LoopStationRecorder>  __4__this, ::VROSC::WidgetSettings_Identifier  instrumentId, ::VROSC::PatchSettings*  patchSettings, double_t  predictedDspTime, bool  _usingOverdub_5__2, int32_t  _loopLength_5__3, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _audioData_5__4, ::StringW  _trackID_5__5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecorder>  __4__this;

/// @brief Field instrumentId, offset: 0x30, size: 0x4, def value: None
 ::VROSC::WidgetSettings_Identifier  instrumentId;

/// @brief Field patchSettings, offset: 0x38, size: 0x8, def value: None
 ::VROSC::PatchSettings*  patchSettings;

/// @brief Field predictedDspTime, offset: 0x40, size: 0x8, def value: None
 double_t  predictedDspTime;

/// @brief Field <usingOverdub>5__2, offset: 0x48, size: 0x1, def value: None
 bool  _usingOverdub_5__2;

/// @brief Field <loopLength>5__3, offset: 0x4c, size: 0x4, def value: None
 int32_t  _loopLength_5__3;

/// @brief Field <audioData>5__4, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _audioData_5__4;

/// @brief Field <trackID>5__5, offset: 0x58, size: 0x8, def value: None
 ::StringW  _trackID_5__5;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, instrumentId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, patchSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, predictedDspTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, _usingOverdub_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, _loopLength_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, _audioData_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, _trackID_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder__StartRecording_d__34, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecorder__StartRecording_d__34, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.LoopStationRecorder::RecordingState, VROSC.SoundSource
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationRecorder
class CORDL_TYPE LoopStationRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RecordingState = ::VROSC::LoopStationRecorder_RecordingState;

using _ConcludeRecording_d__37 = ::VROSC::LoopStationRecorder__ConcludeRecording_d__37;

using _ScheduleButtonPress_d__29 = ::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29;

using _StartRecording_d__34 = ::VROSC::LoopStationRecorder__StartRecording_d__34;

using __c__DisplayClass37_0 = ::VROSC::LoopStationRecorder___c__DisplayClass37_0;

 __declspec(property(get=get_CurrentlyRecording)) ::UnityW<::VROSC::CurrentlyRecordingLoop>  CurrentlyRecording;

 __declspec(property(get=get_LoopStation, put=set_LoopStation)) ::UnityW<::VROSC::LoopStation>  LoopStation;

/// @brief Field OnRerecord, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRerecord, put=__cordl_internal_set_OnRerecord)) ::System::Action*  OnRerecord;

/// @brief Field OnStateChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnStateChanged, put=setStaticF_OnStateChanged)) ::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>*  OnStateChanged;

 __declspec(property(get=get_State, put=set_State)) ::VROSC::LoopStationRecorder_RecordingState  State;

/// @brief Field <LoopStation>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopStation_k__BackingField, put=__cordl_internal_set__LoopStation_k__BackingField)) ::UnityW<::VROSC::LoopStation>  _LoopStation_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::VROSC::LoopStationRecorder_RecordingState  _State_k__BackingField;

/// @brief Field _buttonPressScheduled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__buttonPressScheduled, put=__cordl_internal_set__buttonPressScheduled)) bool  _buttonPressScheduled;

/// @brief Field _currentRecording, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentRecording, put=__cordl_internal_set__currentRecording)) ::UnityW<::VROSC::CurrentlyRecordingLoop>  _currentRecording;

/// @brief Field _currentRecordingSoundSource, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentRecordingSoundSource, put=__cordl_internal_set__currentRecordingSoundSource)) ::VROSC::SoundSource  _currentRecordingSoundSource;

/// @brief Field _currentlyRecordingPatchSettings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentlyRecordingPatchSettings, put=__cordl_internal_set__currentlyRecordingPatchSettings)) ::VROSC::PatchSettings*  _currentlyRecordingPatchSettings;

/// @brief Field _microphoneDeviceManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneDeviceManager, put=__cordl_internal_set__microphoneDeviceManager)) ::UnityW<::VROSC::MicrophoneDeviceManager>  _microphoneDeviceManager;

/// @brief Field _recordingStartSample, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingStartSample, put=__cordl_internal_set__recordingStartSample)) int32_t  _recordingStartSample;

/// @brief Field _silenceCutoff, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__silenceCutoff, put=__cordl_internal_set__silenceCutoff)) float_t  _silenceCutoff;

/// @brief Field _tailInSeconds, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__tailInSeconds, put=__cordl_internal_set__tailInSeconds)) float_t  _tailInSeconds;

/// @brief Field _tailLength, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__tailLength, put=__cordl_internal_set__tailLength)) int32_t  _tailLength;

/// @brief Field _ui, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ui, put=__cordl_internal_set__ui)) ::UnityW<::VROSC::LoopStationRecordingUI>  _ui;

/// @brief Method CalculateGlobalSyncOffset, addr 0x18a88ac, size 0x14, virtual false, abstract: false, final false
inline int32_t CalculateGlobalSyncOffset(int32_t  recordingLengthInSamples, int32_t  offset) ;

/// @brief Method CancelPreparingForRecording, addr 0x18a7fb8, size 0x1bc, virtual false, abstract: false, final false
inline void CancelPreparingForRecording() ;

/// @brief Method CancelRecording, addr 0x18a7c68, size 0x2d0, virtual false, abstract: false, final false
inline void CancelRecording() ;

/// @brief Method CancelRecording, addr 0x18a2c18, size 0x28, virtual false, abstract: false, final false
inline void CancelRecording(bool  restart) ;

/// @brief Method ConcludeRecording, addr 0x18a7a70, size 0x90, virtual false, abstract: false, final false
inline void ConcludeRecording() ;

/// @brief Method CopyAudioDataToLoopTrack, addr 0x18a8698, size 0x114, virtual false, abstract: false, final false
inline void CopyAudioDataToLoopTrack(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  sourceData, ::ByRef<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  targetData) ;

/// @brief Method Finish, addr 0x18a8660, size 0x38, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method GetLatencyOffset, addr 0x18a87ac, size 0x100, virtual false, abstract: false, final false
inline int32_t GetLatencyOffset() ;

/// @brief Method GetLengthOfSilentStartOfRecording, addr 0x18a84d0, size 0x108, virtual false, abstract: false, final false
inline int32_t GetLengthOfSilentStartOfRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData) ;

/// @brief Method GetMinimumRecordingLength, addr 0x18a8c0c, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetMinimumRecordingLength() ;

static inline ::VROSC::LoopStationRecorder* New_ctor() ;

/// @brief Method OnActivePatchChanged, addr 0x18a7a5c, size 0x14, virtual false, abstract: false, final false
inline void OnActivePatchChanged(::VROSC::PatchSettings*  patchSettings) ;

/// @brief Method OnBPMChange, addr 0x18a84b0, size 0x20, virtual false, abstract: false, final false
inline void OnBPMChange(double_t  newBPM) ;

/// @brief Method OnDestroy, addr 0x18a7724, size 0x338, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayAll, addr 0x18a88c0, size 0x2c, virtual false, abstract: false, final false
inline void PlayAll() ;

/// @brief Method PrepareForRecording, addr 0x18a8174, size 0x1f0, virtual false, abstract: false, final false
inline void PrepareForRecording() ;

/// @brief Method ReceiveRecording, addr 0x18a85d8, size 0x88, virtual false, abstract: false, final false
inline void ReceiveRecording(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData) ;

/// @brief Method RecordOrStop, addr 0x18a7bc4, size 0x14, virtual false, abstract: false, final false
inline void RecordOrStop() ;

/// @brief Method RecordOrStop, addr 0x18a7b00, size 0x28, virtual false, abstract: false, final false
inline void RecordOrStop(::VROSC::Signal*  signal) ;

/// @brief Method Rerecord, addr 0x18a2bd8, size 0x40, virtual false, abstract: false, final false
inline void Rerecord() ;

/// @brief Method RoundRecordingLengthToBars, addr 0x18a8aac, size 0x160, virtual false, abstract: false, final false
inline float_t RoundRecordingLengthToBars(int32_t  recordingFullLength) ;

/// @brief Method ScheduleButtonPress, addr 0x18a7b28, size 0x9c, virtual false, abstract: false, final false
inline void ScheduleButtonPress(double_t  dspTime) ;

/// @brief Method SetBPMUsingRecording, addr 0x18a88ec, size 0x1c0, virtual false, abstract: false, final false
inline int32_t SetBPMUsingRecording(int32_t  playbackLength) ;

/// @brief Method SetState, addr 0x18a8364, size 0x80, virtual false, abstract: false, final false
inline void SetState(::VROSC::LoopStationRecorder_RecordingState  state) ;

/// @brief Method SetToIdle, addr 0x18a7f38, size 0x80, virtual false, abstract: false, final false
inline void SetToIdle() ;

/// @brief Method Setup, addr 0x18a7500, size 0x224, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation) ;

/// @brief Method StartRecording, addr 0x18a83f4, size 0xbc, virtual false, abstract: false, final false
inline void StartRecording(::VROSC::WidgetSettings_Identifier  instrumentId, ::VROSC::PatchSettings*  patchSettings, double_t  predictedDspTime) ;

/// @brief Method StartRecordingMicrophone, addr 0x18a83e4, size 0x10, virtual false, abstract: false, final false
inline void StartRecordingMicrophone() ;

/// @brief Method StopRecordingByUser, addr 0x18a7bd8, size 0x90, virtual false, abstract: false, final false
inline void StopRecordingByUser(bool  restart) ;

/// @brief Method UpdateLooperState, addr 0x18a6a88, size 0x1c, virtual false, abstract: false, final false
inline void UpdateLooperState() ;

constexpr ::System::Action* const& __cordl_internal_get_OnRerecord() const;

constexpr ::System::Action*& __cordl_internal_get_OnRerecord() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__LoopStation_k__BackingField() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__LoopStation_k__BackingField() ;

constexpr ::VROSC::LoopStationRecorder_RecordingState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::VROSC::LoopStationRecorder_RecordingState& __cordl_internal_get__State_k__BackingField() ;

constexpr bool const& __cordl_internal_get__buttonPressScheduled() const;

constexpr bool& __cordl_internal_get__buttonPressScheduled() ;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop> const& __cordl_internal_get__currentRecording() const;

constexpr ::UnityW<::VROSC::CurrentlyRecordingLoop>& __cordl_internal_get__currentRecording() ;

constexpr ::VROSC::SoundSource const& __cordl_internal_get__currentRecordingSoundSource() const;

constexpr ::VROSC::SoundSource& __cordl_internal_get__currentRecordingSoundSource() ;

constexpr ::VROSC::PatchSettings* const& __cordl_internal_get__currentlyRecordingPatchSettings() const;

constexpr ::VROSC::PatchSettings*& __cordl_internal_get__currentlyRecordingPatchSettings() ;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager> const& __cordl_internal_get__microphoneDeviceManager() const;

constexpr ::UnityW<::VROSC::MicrophoneDeviceManager>& __cordl_internal_get__microphoneDeviceManager() ;

constexpr int32_t const& __cordl_internal_get__recordingStartSample() const;

constexpr int32_t& __cordl_internal_get__recordingStartSample() ;

constexpr float_t const& __cordl_internal_get__silenceCutoff() const;

constexpr float_t& __cordl_internal_get__silenceCutoff() ;

constexpr float_t const& __cordl_internal_get__tailInSeconds() const;

constexpr float_t& __cordl_internal_get__tailInSeconds() ;

constexpr int32_t const& __cordl_internal_get__tailLength() const;

constexpr int32_t& __cordl_internal_get__tailLength() ;

constexpr ::UnityW<::VROSC::LoopStationRecordingUI> const& __cordl_internal_get__ui() const;

constexpr ::UnityW<::VROSC::LoopStationRecordingUI>& __cordl_internal_get__ui() ;

constexpr void __cordl_internal_set_OnRerecord(::System::Action*  value) ;

constexpr void __cordl_internal_set__LoopStation_k__BackingField(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::VROSC::LoopStationRecorder_RecordingState  value) ;

constexpr void __cordl_internal_set__buttonPressScheduled(bool  value) ;

constexpr void __cordl_internal_set__currentRecording(::UnityW<::VROSC::CurrentlyRecordingLoop>  value) ;

constexpr void __cordl_internal_set__currentRecordingSoundSource(::VROSC::SoundSource  value) ;

constexpr void __cordl_internal_set__currentlyRecordingPatchSettings(::VROSC::PatchSettings*  value) ;

constexpr void __cordl_internal_set__microphoneDeviceManager(::UnityW<::VROSC::MicrophoneDeviceManager>  value) ;

constexpr void __cordl_internal_set__recordingStartSample(int32_t  value) ;

constexpr void __cordl_internal_set__silenceCutoff(float_t  value) ;

constexpr void __cordl_internal_set__tailInSeconds(float_t  value) ;

constexpr void __cordl_internal_set__tailLength(int32_t  value) ;

constexpr void __cordl_internal_set__ui(::UnityW<::VROSC::LoopStationRecordingUI>  value) ;

/// @brief Method .ctor, addr 0x18a8c8c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>* getStaticF_OnStateChanged() ;

/// @brief Method get_CurrentlyRecording, addr 0x18a74e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::CurrentlyRecordingLoop> get_CurrentlyRecording() ;

/// @brief Method get_LoopStation, addr 0x18a74d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStation> get_LoopStation() ;

/// @brief Method get_State, addr 0x18a74f0, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopStationRecorder_RecordingState get_State() ;

static inline void setStaticF_OnStateChanged(::System::Action_1<::VROSC::LoopStationRecorder_RecordingState>*  value) ;

/// @brief Method set_LoopStation, addr 0x18a74e0, size 0x8, virtual false, abstract: false, final false
inline void set_LoopStation(::VROSC::LoopStation*  value) ;

/// @brief Method set_State, addr 0x18a74f8, size 0x8, virtual false, abstract: false, final false
inline void set_State(::VROSC::LoopStationRecorder_RecordingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationRecorder(LoopStationRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationRecorder(LoopStationRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{704};

/// @brief Field OnRerecord, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnRerecord;

/// @brief Field <LoopStation>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____LoopStation_k__BackingField;

/// @brief Field <State>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::VROSC::LoopStationRecorder_RecordingState  ____State_k__BackingField;

/// @brief Field _ui, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationRecordingUI>  ____ui;

/// @brief Field _currentRecording, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::CurrentlyRecordingLoop>  ____currentRecording;

/// @brief Field _buttonPressScheduled, offset: 0x48, size: 0x1, def value: None
 bool  ____buttonPressScheduled;

/// @brief Field _currentRecordingSoundSource, offset: 0x4c, size: 0x4, def value: None
 ::VROSC::SoundSource  ____currentRecordingSoundSource;

/// @brief Field _recordingStartSample, offset: 0x50, size: 0x4, def value: None
 int32_t  ____recordingStartSample;

/// @brief Field _microphoneDeviceManager, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::MicrophoneDeviceManager>  ____microphoneDeviceManager;

/// @brief Field _silenceCutoff, offset: 0x60, size: 0x4, def value: None
 float_t  ____silenceCutoff;

/// @brief Field _tailInSeconds, offset: 0x64, size: 0x4, def value: None
 float_t  ____tailInSeconds;

/// @brief Field _tailLength, offset: 0x68, size: 0x4, def value: None
 int32_t  ____tailLength;

/// @brief Field _currentlyRecordingPatchSettings, offset: 0x70, size: 0x8, def value: None
 ::VROSC::PatchSettings*  ____currentlyRecordingPatchSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationRecorder, ___OnRerecord) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____LoopStation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____State_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____ui) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____currentRecording) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____buttonPressScheduled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____currentRecordingSoundSource) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____recordingStartSample) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____microphoneDeviceManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____silenceCutoff) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____tailInSeconds) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____tailLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationRecorder, ____currentlyRecordingPatchSettings) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationRecorder, 0x78>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecorder_RecordingState, "VROSC", "LoopStationRecorder/RecordingState");
NEED_NO_BOX(::VROSC::LoopStationRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecorder*, "VROSC", "LoopStationRecorder");
NEED_NO_BOX(::VROSC::LoopStationRecorder___c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecorder___c__DisplayClass37_0*, "VROSC", "LoopStationRecorder/<>c__DisplayClass37_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecorder__ConcludeRecording_d__37, "VROSC", "LoopStationRecorder/<ConcludeRecording>d__37");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecorder__ScheduleButtonPress_d__29, "VROSC", "LoopStationRecorder/<ScheduleButtonPress>d__29");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecorder__StartRecording_d__34, "VROSC", "LoopStationRecorder/<StartRecording>d__34");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass37_0_LoopStationRecorder___ConcludeRecording_b__0_d, "VROSC", "LoopStationRecorder/<>c__DisplayClass37_0/<<ConcludeRecording>b__0>d");
