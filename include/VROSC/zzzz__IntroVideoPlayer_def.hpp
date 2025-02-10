#pragma once
// IWYU pragma private; include "VROSC/IntroVideoPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntroVideoPlayer)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct IntroVideoPlayer__PlayVideo_d__11;
}
namespace VROSC {
struct TriggerButton;
}
namespace VROSC {
class VRPlayer;
}
// Forward declare root types
namespace VROSC {
class IntroVideoPlayer;
}
namespace VROSC {
struct IntroVideoPlayer__PlayVideo_d__11;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IntroVideoPlayer);
MARK_VAL_T(::VROSC::IntroVideoPlayer__PlayVideo_d__11);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.IntroVideoPlayer/<PlayVideo>d__11
struct CORDL_TYPE IntroVideoPlayer__PlayVideo_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1740610, size 0xd94, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17413a4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr IntroVideoPlayer__PlayVideo_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::IntroVideoPlayer>", modifiers: "", def_value: None }, CppParam { name: "vrPlayer", ty: "::UnityW<::VROSC::VRPlayer>", modifiers: "", def_value: None }, CppParam { name: "_videoPlayer_5__2", ty: "::UnityW<::UnityEngine::Video::VideoPlayer>", modifiers: "", def_value: None }, CppParam { name: "_startTime_5__3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr IntroVideoPlayer__PlayVideo_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::IntroVideoPlayer>  __4__this, ::UnityW<::VROSC::VRPlayer>  vrPlayer, ::UnityW<::UnityEngine::Video::VideoPlayer>  _videoPlayer_5__2, float_t  _startTime_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::IntroVideoPlayer>  __4__this;

/// @brief Field vrPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::VRPlayer>  vrPlayer;

/// @brief Field <videoPlayer>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  _videoPlayer_5__2;

/// @brief Field <startTime>5__3, offset: 0x38, size: 0x4, def value: None
 float_t  _startTime_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, vrPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, _videoPlayer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, _startTime_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer__PlayVideo_d__11, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntroVideoPlayer__PlayVideo_d__11, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IntroVideoPlayer
class CORDL_TYPE IntroVideoPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayVideo_d__11 = ::VROSC::IntroVideoPlayer__PlayVideo_d__11;

 __declspec(property(get=get_HasPlaybackFinished, put=set_HasPlaybackFinished)) bool  HasPlaybackFinished;

/// @brief Field OnIntroVideoPlaybackFinished, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnIntroVideoPlaybackFinished, put=setStaticF_OnIntroVideoPlaybackFinished)) ::System::Action*  OnIntroVideoPlaybackFinished;

/// @brief Field <HasPlaybackFinished>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasPlaybackFinished_k__BackingField, put=__cordl_internal_set__HasPlaybackFinished_k__BackingField)) bool  _HasPlaybackFinished_k__BackingField;

/// @brief Field _introAudio, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__introAudio, put=__cordl_internal_set__introAudio)) ::UnityW<::UnityEngine::AudioSource>  _introAudio;

/// @brief Field _skip, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__skip, put=__cordl_internal_set__skip)) bool  _skip;

/// @brief Field _videoCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoCamera, put=__cordl_internal_set__videoCamera)) ::UnityW<::UnityEngine::Camera>  _videoCamera;

/// @brief Field _videoPlane, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoPlane, put=__cordl_internal_set__videoPlane)) ::UnityW<::UnityEngine::Transform>  _videoPlane;

static inline ::VROSC::IntroVideoPlayer* New_ctor() ;

/// @brief Method PlayVideo, addr 0x17404c8, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* PlayVideo(::VROSC::VRPlayer*  vrPlayer) ;

/// @brief Method SkipVideo, addr 0x174059c, size 0x6c, virtual false, abstract: false, final false
inline void SkipVideo(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button) ;

constexpr bool const& __cordl_internal_get__HasPlaybackFinished_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasPlaybackFinished_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__introAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__introAudio() ;

constexpr bool const& __cordl_internal_get__skip() const;

constexpr bool& __cordl_internal_get__skip() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__videoCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__videoCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__videoPlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__videoPlane() ;

constexpr void __cordl_internal_set__HasPlaybackFinished_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__introAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__skip(bool  value) ;

constexpr void __cordl_internal_set__videoCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__videoPlane(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1740608, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnIntroVideoPlaybackFinished() ;

/// @brief Method get_HasPlaybackFinished, addr 0x17404b4, size 0x8, virtual false, abstract: false, final false
inline bool get_HasPlaybackFinished() ;

static inline void setStaticF_OnIntroVideoPlaybackFinished(::System::Action*  value) ;

/// @brief Method set_HasPlaybackFinished, addr 0x17404bc, size 0xc, virtual false, abstract: false, final false
inline void set_HasPlaybackFinished(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntroVideoPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntroVideoPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntroVideoPlayer(IntroVideoPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntroVideoPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntroVideoPlayer(IntroVideoPlayer const& ) = delete;

/// @brief Field SkipIntroPlayerPrefsString offset 0xffffffff size 0x8
static constexpr ::ConstString  SkipIntroPlayerPrefsString{u"SkipIntroVideo"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1114};

/// @brief Field timeOutInSeconds offset 0xffffffff size 0x4
static constexpr float_t  timeOutInSeconds{static_cast<float_t>(1.5f)};

/// @brief Field _introAudio, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____introAudio;

/// @brief Field _videoCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____videoCamera;

/// @brief Field _videoPlane, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____videoPlane;

/// @brief Field _skip, offset: 0x38, size: 0x1, def value: None
 bool  ____skip;

/// @brief Field <HasPlaybackFinished>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____HasPlaybackFinished_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IntroVideoPlayer, ____introAudio) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer, ____videoCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer, ____videoPlane) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer, ____skip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::IntroVideoPlayer, ____HasPlaybackFinished_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IntroVideoPlayer, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IntroVideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntroVideoPlayer*, "VROSC", "IntroVideoPlayer");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntroVideoPlayer__PlayVideo_d__11, "VROSC", "IntroVideoPlayer/<PlayVideo>d__11");
