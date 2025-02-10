#pragma once
// IWYU pragma private; include "AudioHelm/AudioHelmClock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioHelmClock)
namespace AudioHelm {
class AudioHelmClock_ResetAction;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace AudioHelm {
class AudioHelmClock;
}
namespace AudioHelm {
class AudioHelmClock_ResetAction;
}
// Write type traits
MARK_REF_PTR_T(::AudioHelm::AudioHelmClock);
MARK_REF_PTR_T(::AudioHelm::AudioHelmClock_ResetAction);
// Dependencies System.MulticastDelegate
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.AudioHelmClock/ResetAction
class CORDL_TYPE AudioHelmClock_ResetAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181dc68, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x181dc88, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181dc54, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::AudioHelm::AudioHelmClock_ResetAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181dbcc, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioHelmClock_ResetAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioHelmClock_ResetAction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioHelmClock_ResetAction(AudioHelmClock_ResetAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioHelmClock_ResetAction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioHelmClock_ResetAction(AudioHelmClock_ResetAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1869};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::AudioHelm::AudioHelmClock_ResetAction, 0x80>, "Size mismatch!");

} // namespace end def AudioHelm
// Dependencies UnityEngine.MonoBehaviour
namespace AudioHelm {
// Is value type: false
// CS Name: AudioHelm.AudioHelmClock
class CORDL_TYPE AudioHelmClock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ResetAction = ::AudioHelm::AudioHelmClock_ResetAction;

/// @brief Field OnReset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReset, put=__cordl_internal_set_OnReset)) ::AudioHelm::AudioHelmClock_ResetAction*  OnReset;

 __declspec(property(get=get_bpm, put=set_bpm)) float_t  bpm;

/// @brief Field bpm_, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_bpm_, put=__cordl_internal_set_bpm_)) float_t  bpm_;

/// @brief Field globalBeatTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalBeatTime, put=setStaticF_globalBeatTime)) double_t  globalBeatTime;

/// @brief Field globalBpm, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_globalBpm, put=setStaticF_globalBpm)) float_t  globalBpm;

/// @brief Field globalPause, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_globalPause, put=setStaticF_globalPause)) bool  globalPause;

/// @brief Field lastSampledTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lastSampledTime, put=setStaticF_lastSampledTime)) double_t  lastSampledTime;

 __declspec(property(get=get_pause, put=set_pause)) bool  pause;

/// @brief Field pause_, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_pause_, put=__cordl_internal_set_pause_)) bool  pause_;

/// @brief Field singleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_singleton, put=setStaticF_singleton)) ::UnityW<::AudioHelm::AudioHelmClock>  singleton;

/// @brief Method Awake, addr 0x181d6d4, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x181dabc, size 0xac, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetGlobalBeatTime, addr 0x181d9b4, size 0x58, virtual false, abstract: false, final false
static inline double_t GetGlobalBeatTime() ;

/// @brief Method GetGlobalBpm, addr 0x181d95c, size 0x58, virtual false, abstract: false, final false
static inline float_t GetGlobalBpm() ;

/// @brief Method GetGlobalPause, addr 0x181da0c, size 0x58, virtual false, abstract: false, final false
static inline bool GetGlobalPause() ;

/// @brief Method GetInstance, addr 0x181d67c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::AudioHelm::AudioHelmClock> GetInstance() ;

/// @brief Method GetLastSampledTime, addr 0x181da64, size 0x58, virtual false, abstract: false, final false
static inline double_t GetLastSampledTime() ;

static inline ::AudioHelm::AudioHelmClock* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181d864, size 0x8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Reset, addr 0x181d74c, size 0x9c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetGlobalBpm, addr 0x181d56c, size 0x78, virtual false, abstract: false, final false
inline void SetGlobalBpm() ;

/// @brief Method SetGlobalPause, addr 0x181d5f8, size 0x84, virtual false, abstract: false, final false
inline void SetGlobalPause() ;

/// @brief Method StartScheduled, addr 0x181d04c, size 0x8c, virtual false, abstract: false, final false
inline void StartScheduled(double_t  timeToStart) ;

constexpr ::AudioHelm::AudioHelmClock_ResetAction* const& __cordl_internal_get_OnReset() const;

constexpr ::AudioHelm::AudioHelmClock_ResetAction*& __cordl_internal_get_OnReset() ;

constexpr float_t const& __cordl_internal_get_bpm_() const;

constexpr float_t& __cordl_internal_get_bpm_() ;

constexpr bool const& __cordl_internal_get_pause_() const;

constexpr bool& __cordl_internal_get_pause_() ;

constexpr void __cordl_internal_set_OnReset(::AudioHelm::AudioHelmClock_ResetAction*  value) ;

constexpr void __cordl_internal_set_bpm_(float_t  value) ;

constexpr void __cordl_internal_set_pause_(bool  value) ;

/// @brief Method .ctor, addr 0x181db68, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnReset, addr 0x181d424, size 0x9c, virtual false, abstract: false, final false
inline void add_OnReset(::AudioHelm::AudioHelmClock_ResetAction*  value) ;

static inline double_t getStaticF_globalBeatTime() ;

static inline float_t getStaticF_globalBpm() ;

static inline bool getStaticF_globalPause() ;

static inline double_t getStaticF_lastSampledTime() ;

static inline ::UnityW<::AudioHelm::AudioHelmClock> getStaticF_singleton() ;

/// @brief Method get_bpm, addr 0x181d55c, size 0x8, virtual false, abstract: false, final false
inline float_t get_bpm() ;

/// @brief Method get_pause, addr 0x181d5e4, size 0x8, virtual false, abstract: false, final false
inline bool get_pause() ;

/// @brief Method remove_OnReset, addr 0x181d4c0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnReset(::AudioHelm::AudioHelmClock_ResetAction*  value) ;

static inline void setStaticF_globalBeatTime(double_t  value) ;

static inline void setStaticF_globalBpm(float_t  value) ;

static inline void setStaticF_globalPause(bool  value) ;

static inline void setStaticF_lastSampledTime(double_t  value) ;

static inline void setStaticF_singleton(::UnityW<::AudioHelm::AudioHelmClock>  value) ;

/// @brief Method set_bpm, addr 0x181d564, size 0x8, virtual false, abstract: false, final false
inline void set_bpm(float_t  value) ;

/// @brief Method set_pause, addr 0x181d5ec, size 0xc, virtual false, abstract: false, final false
inline void set_pause(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioHelmClock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioHelmClock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioHelmClock(AudioHelmClock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioHelmClock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioHelmClock(AudioHelmClock const& ) = delete;

/// @brief Field SECONDS_PER_MIN offset 0xffffffff size 0x8
static constexpr double_t  SECONDS_PER_MIN{static_cast<double_t>(60.0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1870};

/// @brief Field waitToSync offset 0xffffffff size 0x8
static constexpr double_t  waitToSync{static_cast<double_t>(1.0)};

/// @brief Field OnReset, offset: 0x20, size: 0x8, def value: None
 ::AudioHelm::AudioHelmClock_ResetAction*  ___OnReset;

/// @brief Field bpm_, offset: 0x28, size: 0x4, def value: None
 float_t  ___bpm_;

/// @brief Field pause_, offset: 0x2c, size: 0x1, def value: None
 bool  ___pause_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AudioHelm::AudioHelmClock, ___OnReset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::AudioHelmClock, ___bpm_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::AudioHelm::AudioHelmClock, ___pause_) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AudioHelm::AudioHelmClock, 0x30>, "Size mismatch!");

} // namespace end def AudioHelm
NEED_NO_BOX(::AudioHelm::AudioHelmClock);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::AudioHelmClock*, "AudioHelm", "AudioHelmClock");
NEED_NO_BOX(::AudioHelm::AudioHelmClock_ResetAction);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::AudioHelmClock_ResetAction*, "AudioHelm", "AudioHelmClock/ResetAction");
