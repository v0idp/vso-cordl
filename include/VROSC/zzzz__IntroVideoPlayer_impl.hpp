#pragma once
// IWYU pragma private; include "VROSC/IntroVideoPlayer.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__IntroVideoPlayer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__IntroVideoPlayer_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
#include "VROSC/zzzz__VRPlayer_def.hpp"
//  Writing Method size for method: ::VROSC::IntroVideoPlayer__PlayVideo_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntroVideoPlayer__PlayVideo_d__11::*)()>(&::VROSC::IntroVideoPlayer__PlayVideo_d__11::MoveNext)> {
  constexpr static std::size_t size = 0xd94;
  constexpr static std::size_t addrs = 0x1740610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer__PlayVideo_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntroVideoPlayer__PlayVideo_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntroVideoPlayer__PlayVideo_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::IntroVideoPlayer__PlayVideo_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17413a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer__PlayVideo_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::IntroVideoPlayer__PlayVideo_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer__PlayVideo_d__11>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::IntroVideoPlayer__PlayVideo_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer__PlayVideo_d__11>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::IntroVideoPlayer__PlayVideo_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::IntroVideoPlayer__PlayVideo_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::IntroVideoPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "vrPlayer", ty: "::UnityW<::VROSC::VRPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_videoPlayer_5__2", ty: "::UnityW<::UnityEngine::Video::VideoPlayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_startTime_5__3", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::IntroVideoPlayer__PlayVideo_d__11::IntroVideoPlayer__PlayVideo_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::IntroVideoPlayer>  __4__this, ::UnityW<::VROSC::VRPlayer>  vrPlayer, ::UnityW<::UnityEngine::Video::VideoPlayer>  _videoPlayer_5__2, float_t  _startTime_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->vrPlayer = vrPlayer;
this->_videoPlayer_5__2 = _videoPlayer_5__2;
this->_startTime_5__3 = _startTime_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::IntroVideoPlayer__PlayVideo_d__11::IntroVideoPlayer__PlayVideo_d__11()   {
}
//  Writing Method size for method: ::VROSC::IntroVideoPlayer.get_HasPlaybackFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::IntroVideoPlayer::*)()>(&::VROSC::IntroVideoPlayer::get_HasPlaybackFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17404b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "get_HasPlaybackFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntroVideoPlayer.set_HasPlaybackFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntroVideoPlayer::*)(bool)>(&::VROSC::IntroVideoPlayer::set_HasPlaybackFinished)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17404bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "set_HasPlaybackFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntroVideoPlayer.PlayVideo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::VROSC::IntroVideoPlayer::*)(::VROSC::VRPlayer*)>(&::VROSC::IntroVideoPlayer::PlayVideo)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17404c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "PlayVideo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VRPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntroVideoPlayer.SkipVideo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntroVideoPlayer::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::IntroVideoPlayer::SkipVideo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x174059c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "SkipVideo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntroVideoPlayer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntroVideoPlayer::*)()>(&::VROSC::IntroVideoPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1740608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::IntroVideoPlayer::__cordl_internal_get__introAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____introAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::IntroVideoPlayer::__cordl_internal_get__introAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____introAudio;
}
constexpr void VROSC::IntroVideoPlayer::__cordl_internal_set__introAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introAudio)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& VROSC::IntroVideoPlayer::__cordl_internal_get__videoCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& VROSC::IntroVideoPlayer::__cordl_internal_get__videoCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoCamera;
}
constexpr void VROSC::IntroVideoPlayer::__cordl_internal_set__videoCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::IntroVideoPlayer::__cordl_internal_get__videoPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoPlane;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::IntroVideoPlayer::__cordl_internal_get__videoPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoPlane;
}
constexpr void VROSC::IntroVideoPlayer::__cordl_internal_set__videoPlane(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoPlane)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::IntroVideoPlayer::__cordl_internal_get__skip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skip;
}
constexpr bool const& VROSC::IntroVideoPlayer::__cordl_internal_get__skip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skip;
}
constexpr void VROSC::IntroVideoPlayer::__cordl_internal_set__skip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skip = value;
}
constexpr bool& VROSC::IntroVideoPlayer::__cordl_internal_get__HasPlaybackFinished_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasPlaybackFinished_k__BackingField;
}
constexpr bool const& VROSC::IntroVideoPlayer::__cordl_internal_get__HasPlaybackFinished_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasPlaybackFinished_k__BackingField;
}
constexpr void VROSC::IntroVideoPlayer::__cordl_internal_set__HasPlaybackFinished_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasPlaybackFinished_k__BackingField = value;
}
inline void VROSC::IntroVideoPlayer::setStaticF_OnIntroVideoPlaybackFinished(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnIntroVideoPlaybackFinished", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::IntroVideoPlayer::getStaticF_OnIntroVideoPlaybackFinished()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnIntroVideoPlaybackFinished", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get>();
}
inline bool VROSC::IntroVideoPlayer::get_HasPlaybackFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "get_HasPlaybackFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::IntroVideoPlayer::set_HasPlaybackFinished(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "set_HasPlaybackFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* VROSC::IntroVideoPlayer::PlayVideo(::VROSC::VRPlayer*  vrPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "PlayVideo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VRPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, vrPlayer);
}
inline void VROSC::IntroVideoPlayer::SkipVideo(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        "SkipVideo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, button);
}
inline void VROSC::IntroVideoPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntroVideoPlayer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IntroVideoPlayer* VROSC::IntroVideoPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IntroVideoPlayer*>());
}
// Ctor Parameters []
constexpr ::VROSC::IntroVideoPlayer::IntroVideoPlayer()   {
}
