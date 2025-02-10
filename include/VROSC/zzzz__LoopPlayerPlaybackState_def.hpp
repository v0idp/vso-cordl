#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackState)
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
namespace VROSC {
struct LoopPlayerPlaybackState_Activity;
}
// Forward declare root types
namespace VROSC {
struct LoopPlayerPlaybackState_Activity;
}
namespace VROSC {
class LoopPlayerPlaybackState;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopPlayerPlaybackState_Activity);
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackState);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlayerPlaybackState/Activity
struct CORDL_TYPE LoopPlayerPlaybackState_Activity {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopPlayerPlaybackState_Activity_Unwrapped
enum struct __LoopPlayerPlaybackState_Activity_Unwrapped : int32_t {
__E_WaitingToBegin = static_cast<int32_t>(0x0),
__E_Running = static_cast<int32_t>(0x1),
__E_Ended = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopPlayerPlaybackState_Activity_Unwrapped () const noexcept {
return static_cast<__LoopPlayerPlaybackState_Activity_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackState_Activity() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopPlayerPlaybackState_Activity(int32_t  value__) noexcept;

/// @brief Field Ended value: I32(2)
static ::VROSC::LoopPlayerPlaybackState_Activity const Ended;

/// @brief Field Running value: I32(1)
static ::VROSC::LoopPlayerPlaybackState_Activity const Running;

/// @brief Field WaitingToBegin value: I32(0)
static ::VROSC::LoopPlayerPlaybackState_Activity const WaitingToBegin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{687};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackState_Activity, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackState_Activity, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.LoopPlayerPlaybackState::Activity
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackState
class CORDL_TYPE LoopPlayerPlaybackState : public ::System::Object {
public:
// Declarations
using Activity = ::VROSC::LoopPlayerPlaybackState_Activity;

 __declspec(property(get=get_CurrentActivity, put=set_CurrentActivity)) ::VROSC::LoopPlayerPlaybackState_Activity  CurrentActivity;

 __declspec(property(get=get_Fading, put=set_Fading)) bool  Fading;

 __declspec(property(get=get_HasEnded)) bool  HasEnded;

 __declspec(property(get=get_NextState, put=set_NextState)) ::VROSC::LoopPlayerPlaybackState*  NextState;

 __declspec(property(get=get_Playing)) bool  Playing;

 __declspec(property(get=get_StateBeginSample, put=set_StateBeginSample)) int32_t  StateBeginSample;

 __declspec(property(get=get_StateEndSample, put=set_StateEndSample)) int32_t  StateEndSample;

 __declspec(property(get=get_WaitingToBegin)) bool  WaitingToBegin;

/// @brief Field <CurrentActivity>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentActivity_k__BackingField, put=__cordl_internal_set__CurrentActivity_k__BackingField)) ::VROSC::LoopPlayerPlaybackState_Activity  _CurrentActivity_k__BackingField;

/// @brief Field <Fading>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__Fading_k__BackingField, put=__cordl_internal_set__Fading_k__BackingField)) bool  _Fading_k__BackingField;

/// @brief Field <NextState>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__NextState_k__BackingField, put=__cordl_internal_set__NextState_k__BackingField)) ::VROSC::LoopPlayerPlaybackState*  _NextState_k__BackingField;

/// @brief Field <StateBeginSample>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__StateBeginSample_k__BackingField, put=__cordl_internal_set__StateBeginSample_k__BackingField)) int32_t  _StateBeginSample_k__BackingField;

/// @brief Field <StateEndSample>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__StateEndSample_k__BackingField, put=__cordl_internal_set__StateEndSample_k__BackingField)) int32_t  _StateEndSample_k__BackingField;

/// @brief Method CheckActivityChangeBeforeSample, addr 0x189b2c0, size 0x24, virtual false, abstract: false, final false
inline bool CheckActivityChangeBeforeSample(int32_t  sample) ;

/// @brief Method DebugString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW DebugString() ;

/// @brief Method EvaluateRunningAndFlagActivityChangeAtSample, addr 0x189b398, size 0x44, virtual false, abstract: false, final false
inline bool EvaluateRunningAndFlagActivityChangeAtSample(int32_t  sample) ;

/// @brief Method GetBeginProgress, addr 0x18a5fd4, size 0x4c, virtual false, abstract: false, final false
inline float_t GetBeginProgress(int32_t  startSample, int32_t  currentSyncSample) ;

/// @brief Method GetCurrentFade, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetCurrentFade(int32_t  atSample) ;

static inline ::VROSC::LoopPlayerPlaybackState* New_ctor() ;

/// @brief Method SetActivity, addr 0x18a5f7c, size 0x2c, virtual false, abstract: false, final false
inline void SetActivity(int32_t  sample) ;

/// @brief Method SetExplicit, addr 0x18a5f74, size 0x8, virtual true, abstract: false, final false
inline void SetExplicit(int32_t  startSample, int32_t  stopSample) ;

/// @brief Method SetNextState, addr 0x189a654, size 0x8, virtual false, abstract: false, final false
inline void SetNextState(::VROSC::LoopPlayerPlaybackState*  nextState) ;

/// @brief Method SetStateActive, addr 0x18a5fa8, size 0x2c, virtual true, abstract: false, final false
inline void SetStateActive(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  atSample) ;

constexpr ::VROSC::LoopPlayerPlaybackState_Activity const& __cordl_internal_get__CurrentActivity_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackState_Activity& __cordl_internal_get__CurrentActivity_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Fading_k__BackingField() const;

constexpr bool& __cordl_internal_get__Fading_k__BackingField() ;

constexpr ::VROSC::LoopPlayerPlaybackState* const& __cordl_internal_get__NextState_k__BackingField() const;

constexpr ::VROSC::LoopPlayerPlaybackState*& __cordl_internal_get__NextState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StateBeginSample_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StateBeginSample_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StateEndSample_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StateEndSample_k__BackingField() ;

constexpr void __cordl_internal_set__CurrentActivity_k__BackingField(::VROSC::LoopPlayerPlaybackState_Activity  value) ;

constexpr void __cordl_internal_set__Fading_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__NextState_k__BackingField(::VROSC::LoopPlayerPlaybackState*  value) ;

constexpr void __cordl_internal_set__StateBeginSample_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__StateEndSample_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x18a6020, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentActivity, addr 0x18a5f20, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackState_Activity get_CurrentActivity() ;

/// @brief Method get_Fading, addr 0x18a5f54, size 0x8, virtual false, abstract: false, final false
inline bool get_Fading() ;

/// @brief Method get_HasEnded, addr 0x18a5f64, size 0x10, virtual true, abstract: false, final false
inline bool get_HasEnded() ;

/// @brief Method get_NextState, addr 0x18a5f10, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlayerPlaybackState* get_NextState() ;

/// @brief Method get_Playing, addr 0x18a5f5c, size 0x8, virtual true, abstract: false, final false
inline bool get_Playing() ;

/// @brief Method get_StateBeginSample, addr 0x18a5f30, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StateBeginSample() ;

/// @brief Method get_StateEndSample, addr 0x18a5f40, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StateEndSample() ;

/// @brief Method get_WaitingToBegin, addr 0x189a064, size 0x10, virtual false, abstract: false, final false
inline bool get_WaitingToBegin() ;

/// @brief Method set_CurrentActivity, addr 0x18a5f18, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentActivity(::VROSC::LoopPlayerPlaybackState_Activity  value) ;

/// @brief Method set_Fading, addr 0x18a5f48, size 0xc, virtual false, abstract: false, final false
inline void set_Fading(bool  value) ;

/// @brief Method set_NextState, addr 0x18a5f08, size 0x8, virtual false, abstract: false, final false
inline void set_NextState(::VROSC::LoopPlayerPlaybackState*  value) ;

/// @brief Method set_StateBeginSample, addr 0x18a5f28, size 0x8, virtual false, abstract: false, final false
inline void set_StateBeginSample(int32_t  value) ;

/// @brief Method set_StateEndSample, addr 0x18a5f38, size 0x8, virtual false, abstract: false, final false
inline void set_StateEndSample(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackState(LoopPlayerPlaybackState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackState(LoopPlayerPlaybackState const& ) = delete;

/// @brief Field AntiClickFadeLength offset 0xffffffff size 0x4
static constexpr int32_t  AntiClickFadeLength{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{688};

/// @brief Field <NextState>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopPlayerPlaybackState*  ____NextState_k__BackingField;

/// @brief Field <CurrentActivity>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::VROSC::LoopPlayerPlaybackState_Activity  ____CurrentActivity_k__BackingField;

/// @brief Field <StateBeginSample>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____StateBeginSample_k__BackingField;

/// @brief Field <StateEndSample>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____StateEndSample_k__BackingField;

/// @brief Field <Fading>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____Fading_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackState, ____NextState_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackState, ____CurrentActivity_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackState, ____StateBeginSample_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackState, ____StateEndSample_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackState, ____Fading_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackState, 0x28>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackState_Activity, "VROSC", "LoopPlayerPlaybackState/Activity");
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackState*, "VROSC", "LoopPlayerPlaybackState");
