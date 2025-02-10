#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackFadeState.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackState_impl.hpp"
#include "VROSC/zzzz__LoopPlayerPlaybackFadeState_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackFadeState.GetCurrentFade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::LoopPlayerPlaybackFadeState::*)(int32_t)>(&::VROSC::LoopPlayerPlaybackFadeState::GetCurrentFade)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x18a6034;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackFadeState.GetFadeOutLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackFadeState::*)(::VROSC::LoopPlaybackConfig_FadeDuration, int32_t)>(&::VROSC::LoopPlayerPlaybackFadeState::GetFadeOutLength)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a6098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        "GetFadeOutLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackFadeState.GetFadeInLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackFadeState::*)(::VROSC::LoopPlaybackConfig_FadeDuration)>(&::VROSC::LoopPlayerPlaybackFadeState::GetFadeInLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x189af18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        "GetFadeInLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackFadeState.GetFadeLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::LoopPlayerPlaybackFadeState::*)(::VROSC::LoopPlaybackConfig_FadeDuration)>(&::VROSC::LoopPlayerPlaybackFadeState::GetFadeLength)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x18a60ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        "GetFadeLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerPlaybackFadeState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerPlaybackFadeState::*)()>(&::VROSC::LoopPlayerPlaybackFadeState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18a6200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::LoopPlayerPlaybackFadeState::__cordl_internal_get__fadeStartValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeStartValue;
}
constexpr float_t const& VROSC::LoopPlayerPlaybackFadeState::__cordl_internal_get__fadeStartValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeStartValue;
}
constexpr void VROSC::LoopPlayerPlaybackFadeState::__cordl_internal_set__fadeStartValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeStartValue = value;
}
constexpr float_t& VROSC::LoopPlayerPlaybackFadeState::__cordl_internal_get__fadeStopValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeStopValue;
}
constexpr float_t const& VROSC::LoopPlayerPlaybackFadeState::__cordl_internal_get__fadeStopValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeStopValue;
}
constexpr void VROSC::LoopPlayerPlaybackFadeState::__cordl_internal_set__fadeStopValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeStopValue = value;
}
inline float_t VROSC::LoopPlayerPlaybackFadeState::GetCurrentFade(int32_t  atSample)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, atSample);
}
inline int32_t VROSC::LoopPlayerPlaybackFadeState::GetFadeOutLength(::VROSC::LoopPlaybackConfig_FadeDuration  fade, int32_t  tailLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        "GetFadeOutLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, fade, tailLength);
}
inline int32_t VROSC::LoopPlayerPlaybackFadeState::GetFadeInLength(::VROSC::LoopPlaybackConfig_FadeDuration  fade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        "GetFadeInLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, fade);
}
inline int32_t VROSC::LoopPlayerPlaybackFadeState::GetFadeLength(::VROSC::LoopPlaybackConfig_FadeDuration  fade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        "GetFadeLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoopPlaybackConfig_FadeDuration>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, fade);
}
inline void VROSC::LoopPlayerPlaybackFadeState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerPlaybackFadeState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerPlaybackFadeState* VROSC::LoopPlayerPlaybackFadeState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerPlaybackFadeState*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerPlaybackFadeState::LoopPlayerPlaybackFadeState()   {
}
