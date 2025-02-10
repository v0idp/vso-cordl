#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoPlayer)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Video {
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine::Video {
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_ErrorEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_EventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_TimeEventHandler);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/EventHandler
class CORDL_TYPE VideoPlayer_EventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x3199d84, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source) ;

static inline ::UnityEngine::Video::VideoPlayer_EventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3199ce8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_EventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_EventHandler(VideoPlayer_EventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_EventHandler(VideoPlayer_EventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_EventHandler, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/ErrorEventHandler
class CORDL_TYPE VideoPlayer_ErrorEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x3199e38, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, ::StringW  message) ;

static inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3199d98, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_ErrorEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12402};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_ErrorEventHandler, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
class CORDL_TYPE VideoPlayer_FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x3199eec, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx) ;

static inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3199e4c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_FrameReadyEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12403};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/TimeEventHandler
class CORDL_TYPE VideoPlayer_TimeEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x3199fa0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds) ;

static inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x3199f00, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer_TimeEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12404};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_TimeEventHandler, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::Video
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
// Declarations
using ErrorEventHandler = ::UnityEngine::Video::VideoPlayer_ErrorEventHandler;

using EventHandler = ::UnityEngine::Video::VideoPlayer_EventHandler;

using FrameReadyEventHandler = ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler;

using TimeEventHandler = ::UnityEngine::Video::VideoPlayer_TimeEventHandler;

/// @brief Field clockResyncOccurred, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_clockResyncOccurred, put=__cordl_internal_set_clockResyncOccurred)) ::UnityEngine::Video::VideoPlayer_TimeEventHandler*  clockResyncOccurred;

/// @brief Field errorReceived, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorReceived, put=__cordl_internal_set_errorReceived)) ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  errorReceived;

/// @brief Field frameDropped, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameDropped, put=__cordl_internal_set_frameDropped)) ::UnityEngine::Video::VideoPlayer_EventHandler*  frameDropped;

/// @brief Field frameReady, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameReady, put=__cordl_internal_set_frameReady)) ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  frameReady;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_isPrepared)) bool  isPrepared;

 __declspec(property(get=get_length)) double_t  length;

/// @brief Field loopPointReached, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopPointReached, put=__cordl_internal_set_loopPointReached)) ::UnityEngine::Video::VideoPlayer_EventHandler*  loopPointReached;

/// @brief Field prepareCompleted, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prepareCompleted, put=__cordl_internal_set_prepareCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler*  prepareCompleted;

/// @brief Field seekCompleted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_seekCompleted, put=__cordl_internal_set_seekCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler*  seekCompleted;

/// @brief Field started, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_started, put=__cordl_internal_set_started)) ::UnityEngine::Video::VideoPlayer_EventHandler*  started;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

 __declspec(property(put=set_url)) ::StringW  url;

/// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x3199cb4, size 0x34, virtual false, abstract: false, final false
static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds) ;

/// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x3199c48, size 0x38, virtual false, abstract: false, final false
static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, ::StringW  errorStr) ;

/// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x3199c14, size 0x34, virtual false, abstract: false, final false
static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokeFrameReadyCallback_Internal, addr 0x3199b74, size 0x38, virtual false, abstract: false, final false
static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx) ;

/// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x3199bac, size 0x34, virtual false, abstract: false, final false
static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x3199b40, size 0x34, virtual false, abstract: false, final false
static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x3199c80, size 0x34, virtual false, abstract: false, final false
static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method InvokeStartedCallback_Internal, addr 0x3199be0, size 0x34, virtual false, abstract: false, final false
static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method Pause, addr 0x3199704, size 0x3c, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x31996c8, size 0x3c, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Prepare, addr 0x3199650, size 0x3c, virtual false, abstract: false, final false
inline void Prepare() ;

/// @brief Method SetTargetAudioSource, addr 0x319987c, size 0x54, virtual false, abstract: false, final false
inline void SetTargetAudioSource(uint16_t  trackIndex, ::UnityEngine::AudioSource*  source) ;

/// @brief Method Stop, addr 0x3199740, size 0x3c, virtual false, abstract: false, final false
inline void Stop() ;

constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler* const& __cordl_internal_get_clockResyncOccurred() const;

constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler*& __cordl_internal_get_clockResyncOccurred() ;

constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* const& __cordl_internal_get_errorReceived() const;

constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*& __cordl_internal_get_errorReceived() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_frameDropped() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_frameDropped() ;

constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* const& __cordl_internal_get_frameReady() const;

constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*& __cordl_internal_get_frameReady() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_loopPointReached() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_loopPointReached() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_prepareCompleted() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_prepareCompleted() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_seekCompleted() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_seekCompleted() ;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_started() const;

constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_started() ;

constexpr void __cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler*  value) ;

constexpr void __cordl_internal_set_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  value) ;

constexpr void __cordl_internal_set_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  value) ;

constexpr void __cordl_internal_set_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

constexpr void __cordl_internal_set_started(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method add_loopPointReached, addr 0x31998d0, size 0x9c, virtual false, abstract: false, final false
inline void add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method add_seekCompleted, addr 0x3199a08, size 0x9c, virtual false, abstract: false, final false
inline void add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method get_isPlaying, addr 0x319977c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPrepared, addr 0x319968c, size 0x3c, virtual false, abstract: false, final false
inline bool get_isPrepared() ;

/// @brief Method get_length, addr 0x3199840, size 0x3c, virtual false, abstract: false, final false
inline double_t get_length() ;

/// @brief Method get_time, addr 0x31997b8, size 0x3c, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method remove_loopPointReached, addr 0x319996c, size 0x9c, virtual false, abstract: false, final false
inline void remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method remove_seekCompleted, addr 0x3199aa4, size 0x9c, virtual false, abstract: false, final false
inline void remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value) ;

/// @brief Method set_time, addr 0x31997f4, size 0x4c, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

/// @brief Method set_url, addr 0x319960c, size 0x44, virtual false, abstract: false, final false
inline void set_url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoPlayer(VideoPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoPlayer(VideoPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12405};

/// @brief Field prepareCompleted, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___prepareCompleted;

/// @brief Field loopPointReached, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___loopPointReached;

/// @brief Field started, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___started;

/// @brief Field frameDropped, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___frameDropped;

/// @brief Field errorReceived, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  ___errorReceived;

/// @brief Field seekCompleted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_EventHandler*  ___seekCompleted;

/// @brief Field clockResyncOccurred, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_TimeEventHandler*  ___clockResyncOccurred;

/// @brief Field frameReady, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  ___frameReady;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___prepareCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___loopPointReached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___errorReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___seekCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___clockResyncOccurred) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameReady) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_ErrorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_TimeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
