#pragma once
// IWYU pragma private; include "VROSC/ShowSplashScreenState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__IState_impl.hpp"
#include "VROSC/zzzz__ShowSplashScreenState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__FullScreenFxController_def.hpp"
#include "VROSC/zzzz__IntroVideoPlayer_def.hpp"
#include "VROSC/zzzz__PlatformSelector_def.hpp"
//  Writing Method size for method: ::VROSC::ShowSplashScreenState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ShowSplashScreenState::*)(::VROSC::FullScreenFxController*, ::VROSC::IntroVideoPlayer*, ::VROSC::PlatformSelector*)>(&::VROSC::ShowSplashScreenState::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x16fa6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::FullScreenFxController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IntroVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlatformSelector*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ShowSplashScreenState.OnEnter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ShowSplashScreenState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::ShowSplashScreenState::OnEnter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16fa704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ShowSplashScreenState.OnExit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ShowSplashScreenState::*)()>(&::VROSC::ShowSplashScreenState::OnExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ShowSplashScreenState.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ShowSplashScreenState::*)()>(&::VROSC::ShowSplashScreenState::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ShowSplashScreenState.UpdateData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ShowSplashScreenState::*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::VROSC::ShowSplashScreenState::UpdateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16fa74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::FullScreenFxController>& VROSC::ShowSplashScreenState::__cordl_internal_get__fullScreenFxController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullScreenFxController;
}
constexpr ::UnityW<::VROSC::FullScreenFxController> const& VROSC::ShowSplashScreenState::__cordl_internal_get__fullScreenFxController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullScreenFxController;
}
constexpr void VROSC::ShowSplashScreenState::__cordl_internal_set__fullScreenFxController(::UnityW<::VROSC::FullScreenFxController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fullScreenFxController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::IntroVideoPlayer>& VROSC::ShowSplashScreenState::__cordl_internal_get__introVideoPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____introVideoPlayer;
}
constexpr ::UnityW<::VROSC::IntroVideoPlayer> const& VROSC::ShowSplashScreenState::__cordl_internal_get__introVideoPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____introVideoPlayer;
}
constexpr void VROSC::ShowSplashScreenState::__cordl_internal_set__introVideoPlayer(::UnityW<::VROSC::IntroVideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introVideoPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PlatformSelector>& VROSC::ShowSplashScreenState::__cordl_internal_get__platformSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformSelector;
}
constexpr ::UnityW<::VROSC::PlatformSelector> const& VROSC::ShowSplashScreenState::__cordl_internal_get__platformSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformSelector;
}
constexpr void VROSC::ShowSplashScreenState::__cordl_internal_set__platformSelector(::UnityW<::VROSC::PlatformSelector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ShowSplashScreenState::_ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::IntroVideoPlayer*  introVideoPlayer, ::VROSC::PlatformSelector*  platformSelector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::FullScreenFxController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::IntroVideoPlayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PlatformSelector*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullScreenFxController, introVideoPlayer, platformSelector);
}
inline void VROSC::ShowSplashScreenState::OnEnter(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "OnEnter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline void VROSC::ShowSplashScreenState::OnExit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "OnExit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ShowSplashScreenState::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ShowSplashScreenState::UpdateData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  values)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ShowSplashScreenState*>::get(),
                        "UpdateData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
inline ::VROSC::ShowSplashScreenState* VROSC::ShowSplashScreenState::New_ctor(::VROSC::FullScreenFxController*  fullScreenFxController, ::VROSC::IntroVideoPlayer*  introVideoPlayer, ::VROSC::PlatformSelector*  platformSelector)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ShowSplashScreenState*>(fullScreenFxController, introVideoPlayer, platformSelector));
}
/// @brief Convert operator to "::VROSC::IState"
constexpr  VROSC::ShowSplashScreenState::operator ::VROSC::IState*() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::IState"
constexpr ::VROSC::IState* VROSC::ShowSplashScreenState::i___VROSC__IState() noexcept {
return static_cast<::VROSC::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::ShowSplashScreenState::ShowSplashScreenState()   {
}
