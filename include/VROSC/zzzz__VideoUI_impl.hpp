#pragma once
// IWYU pragma private; include "VROSC/VideoUI.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__VideoUI_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__TimeSlider_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
#include "VROSC/zzzz__VideoUI_def.hpp"
//  Writing Method size for method: ::VROSC::VideoUI__Play_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI__Play_d__19::*)()>(&::VROSC::VideoUI__Play_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x177defc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI__Play_d__19>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI__Play_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI__Play_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::VideoUI__Play_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x177e210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI__Play_d__19>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::VideoUI__Play_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI__Play_d__19>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI__Play_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI__Play_d__19>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::VideoUI__Play_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::VideoUI__Play_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::VideoUI>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::VideoUI__Play_d__19::VideoUI__Play_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::VideoUI>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::VideoUI__Play_d__19::VideoUI__Play_d__19()   {
}
//  Writing Method size for method: ::VROSC::VideoUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x177d4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::Setup)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x177d5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)(::VROSC::UserDataControllers*)>(&::VROSC::VideoUI::UserDataLoaded)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x177da54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.TogglePlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::TogglePlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x177dab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "TogglePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.Play
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::Play)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x177dac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.Pause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::Pause)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x177db58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Pause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.Stop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::Stop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x177dbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.Open
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)(::StringW, ::StringW)>(&::VROSC::VideoUI::Open)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x177dc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Open",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::Close)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x177d9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.VolumeChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)(float_t)>(&::VROSC::VideoUI::VolumeChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x177de6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "VolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI.EndReached
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)(::UnityEngine::Video::VideoPlayer*)>(&::VROSC::VideoUI::EndReached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x177def0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "EndReached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoUI::*)()>(&::VROSC::VideoUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177def4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& VROSC::VideoUI::__cordl_internal_get__videoPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoPlayer;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& VROSC::VideoUI::__cordl_internal_get__videoPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoPlayer;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__videoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::VideoUI::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::VideoUI::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::VideoUI::__cordl_internal_get__playPauseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playPauseButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::VideoUI::__cordl_internal_get__playPauseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playPauseButton;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__playPauseButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playPauseButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::VideoUI::__cordl_internal_get__videoAreaButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoAreaButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::VideoUI::__cordl_internal_get__videoAreaButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoAreaButton;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__videoAreaButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoAreaButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideoUI::__cordl_internal_get__playIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideoUI::__cordl_internal_get__playIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playIcon;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__playIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideoUI::__cordl_internal_get__pauseIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideoUI::__cordl_internal_get__pauseIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseIcon;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__pauseIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideoUI::__cordl_internal_get__loadingIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideoUI::__cordl_internal_get__loadingIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingIcon;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__loadingIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideoUI::__cordl_internal_get__videoSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoSurface;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideoUI::__cordl_internal_get__videoSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoSurface;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__videoSurface(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoSurface)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::VideoUI::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::VideoUI::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__header(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____header)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::VideoUI::__cordl_internal_get__timeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::VideoUI::__cordl_internal_get__timeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeText;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__timeText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& VROSC::VideoUI::__cordl_internal_get__audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& VROSC::VideoUI::__cordl_internal_get__audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioSource;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::VideoUI::__cordl_internal_get__volumeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::VideoUI::__cordl_internal_get__volumeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeSlider;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__volumeSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TimeSlider>& VROSC::VideoUI::__cordl_internal_get__timeSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSlider;
}
constexpr ::UnityW<::VROSC::TimeSlider> const& VROSC::VideoUI::__cordl_internal_get__timeSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSlider;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__timeSlider(::UnityW<::VROSC::TimeSlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::VideoUI::__cordl_internal_get__shouldPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldPlay;
}
constexpr bool const& VROSC::VideoUI::__cordl_internal_get__shouldPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldPlay;
}
constexpr void VROSC::VideoUI::__cordl_internal_set__shouldPlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldPlay = value;
}
inline void VROSC::VideoUI::setStaticF_OnClose(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnClose", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::VideoUI::getStaticF_OnClose()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnClose", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get>();
}
inline void VROSC::VideoUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "UserDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::VideoUI::TogglePlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "TogglePlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::Play()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Play",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::Pause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Pause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Stop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::Open(::StringW  videoPath, ::StringW  title)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Open",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, videoPath, title);
}
inline void VROSC::VideoUI::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoUI::VolumeChanged(float_t  newVolume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "VolumeChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newVolume);
}
inline void VROSC::VideoUI::EndReached(::UnityEngine::Video::VideoPlayer*  videoPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        "EndReached",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Video::VideoPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, videoPlayer);
}
inline void VROSC::VideoUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VideoUI* VROSC::VideoUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VideoUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::VideoUI::VideoUI()   {
}
