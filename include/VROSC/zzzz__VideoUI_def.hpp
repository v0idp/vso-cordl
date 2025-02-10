#pragma once
// IWYU pragma private; include "VROSC/VideoUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoUI)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class TimeSlider;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UserDataControllers;
}
namespace VROSC {
struct VideoUI__Play_d__19;
}
// Forward declare root types
namespace VROSC {
class VideoUI;
}
namespace VROSC {
struct VideoUI__Play_d__19;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VideoUI);
MARK_VAL_T(::VROSC::VideoUI__Play_d__19);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.VideoUI/<Play>d__19
struct CORDL_TYPE VideoUI__Play_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x177defc, size 0x314, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x177e210, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VideoUI__Play_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::VideoUI>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr VideoUI__Play_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::VideoUI>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::VideoUI>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideoUI__Play_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI__Play_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI__Play_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI__Play_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideoUI__Play_d__19, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VideoUI
class CORDL_TYPE VideoUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Play_d__19 = ::VROSC::VideoUI__Play_d__19;

/// @brief Field OnClose, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnClose, put=setStaticF_OnClose)) ::System::Action*  OnClose;

/// @brief Field _audioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _closeButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _header, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::UnityW<::TMPro::TextMeshPro>  _header;

/// @brief Field _loadingIcon, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingIcon, put=__cordl_internal_set__loadingIcon)) ::UnityW<::UnityEngine::GameObject>  _loadingIcon;

/// @brief Field _pauseIcon, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__pauseIcon, put=__cordl_internal_set__pauseIcon)) ::UnityW<::UnityEngine::GameObject>  _pauseIcon;

/// @brief Field _playIcon, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playIcon, put=__cordl_internal_set__playIcon)) ::UnityW<::UnityEngine::GameObject>  _playIcon;

/// @brief Field _playPauseButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__playPauseButton, put=__cordl_internal_set__playPauseButton)) ::UnityW<::VROSC::UIButton>  _playPauseButton;

/// @brief Field _shouldPlay, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldPlay, put=__cordl_internal_set__shouldPlay)) bool  _shouldPlay;

/// @brief Field _timeSlider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSlider, put=__cordl_internal_set__timeSlider)) ::UnityW<::VROSC::TimeSlider>  _timeSlider;

/// @brief Field _timeText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeText, put=__cordl_internal_set__timeText)) ::UnityW<::TMPro::TextMeshPro>  _timeText;

/// @brief Field _videoAreaButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoAreaButton, put=__cordl_internal_set__videoAreaButton)) ::UnityW<::VROSC::UIButton>  _videoAreaButton;

/// @brief Field _videoPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoPlayer, put=__cordl_internal_set__videoPlayer)) ::UnityW<::UnityEngine::Video::VideoPlayer>  _videoPlayer;

/// @brief Field _videoSurface, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoSurface, put=__cordl_internal_set__videoSurface)) ::UnityW<::UnityEngine::GameObject>  _videoSurface;

/// @brief Field _volumeSlider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeSlider, put=__cordl_internal_set__volumeSlider)) ::UnityW<::VROSC::UISlider>  _volumeSlider;

/// @brief Method Awake, addr 0x177d4d8, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x177d9c4, size 0x90, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method EndReached, addr 0x177def0, size 0x4, virtual false, abstract: false, final false
inline void EndReached(::UnityEngine::Video::VideoPlayer*  videoPlayer) ;

static inline ::VROSC::VideoUI* New_ctor() ;

/// @brief Method Open, addr 0x177dc58, size 0x214, virtual false, abstract: false, final false
inline void Open(::StringW  videoPath, ::StringW  title) ;

/// @brief Method Pause, addr 0x177db58, size 0x6c, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x177dac8, size 0x90, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Setup, addr 0x177d5d0, size 0x3f4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Stop, addr 0x177dbc4, size 0x94, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method TogglePlay, addr 0x177dab8, size 0x10, virtual false, abstract: false, final false
inline void TogglePlay() ;

/// @brief Method UserDataLoaded, addr 0x177da54, size 0x64, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

/// @brief Method VolumeChanged, addr 0x177de6c, size 0x84, virtual false, abstract: false, final false
inline void VolumeChanged(float_t  newVolume) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__header() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__header() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingIcon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pauseIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pauseIcon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playIcon() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__playPauseButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__playPauseButton() ;

constexpr bool const& __cordl_internal_get__shouldPlay() const;

constexpr bool& __cordl_internal_get__shouldPlay() ;

constexpr ::UnityW<::VROSC::TimeSlider> const& __cordl_internal_get__timeSlider() const;

constexpr ::UnityW<::VROSC::TimeSlider>& __cordl_internal_get__timeSlider() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__timeText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__timeText() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__videoAreaButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__videoAreaButton() ;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get__videoPlayer() const;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get__videoPlayer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__videoSurface() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__videoSurface() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__volumeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__volumeSlider() ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__header(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__loadingIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__pauseIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__playIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__playPauseButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__shouldPlay(bool  value) ;

constexpr void __cordl_internal_set__timeSlider(::UnityW<::VROSC::TimeSlider>  value) ;

constexpr void __cordl_internal_set__timeText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__videoAreaButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value) ;

constexpr void __cordl_internal_set__videoSurface(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x177def4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnClose() ;

static inline void setStaticF_OnClose(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoUI(VideoUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoUI(VideoUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1299};

/// @brief Field _videoPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  ____videoPlayer;

/// @brief Field _closeButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _playPauseButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____playPauseButton;

/// @brief Field _videoAreaButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____videoAreaButton;

/// @brief Field _playIcon, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playIcon;

/// @brief Field _pauseIcon, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pauseIcon;

/// @brief Field _loadingIcon, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____loadingIcon;

/// @brief Field _videoSurface, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____videoSurface;

/// @brief Field _header, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____header;

/// @brief Field _timeText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____timeText;

/// @brief Field _audioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// @brief Field _volumeSlider, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____volumeSlider;

/// @brief Field _timeSlider, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::VROSC::TimeSlider>  ____timeSlider;

/// @brief Field _shouldPlay, offset: 0x88, size: 0x1, def value: None
 bool  ____shouldPlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideoUI, ____videoPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____closeButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____playPauseButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____videoAreaButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____playIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____pauseIcon) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____loadingIcon) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____videoSurface) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____header) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____timeText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____volumeSlider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____timeSlider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoUI, ____shouldPlay) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideoUI, 0x90>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VideoUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoUI*, "VROSC", "VideoUI");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoUI__Play_d__19, "VROSC", "VideoUI/<Play>d__19");
