#pragma once
// IWYU pragma private; include "DG/Tweening/EaseFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/zzzz__EaseFactory_def.hpp"
#include "DG/Tweening/zzzz__EaseFactory_def.hpp"
#include "DG/Tweening/zzzz__EaseFunction_def.hpp"
#include "DG/Tweening/zzzz__Ease_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::DG::Tweening::EaseFactory___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::EaseFactory___c__DisplayClass2_0::*)()>(&::DG::Tweening::EaseFactory___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18c631c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFactory___c__DisplayClass2_0._StopMotion_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::DG::Tweening::EaseFactory___c__DisplayClass2_0::*)(float_t, float_t, float_t, float_t)>(&::DG::Tweening::EaseFactory___c__DisplayClass2_0::_StopMotion_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18c632c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory___c__DisplayClass2_0*>::get(),
                        "<StopMotion>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& DG::Tweening::EaseFactory___c__DisplayClass2_0::__cordl_internal_get_motionDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionDelay;
}
constexpr float_t const& DG::Tweening::EaseFactory___c__DisplayClass2_0::__cordl_internal_get_motionDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionDelay;
}
constexpr void DG::Tweening::EaseFactory___c__DisplayClass2_0::__cordl_internal_set_motionDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionDelay = value;
}
constexpr ::DG::Tweening::EaseFunction*& DG::Tweening::EaseFactory___c__DisplayClass2_0::__cordl_internal_get_customEase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customEase;
}
constexpr ::DG::Tweening::EaseFunction* const& DG::Tweening::EaseFactory___c__DisplayClass2_0::__cordl_internal_get_customEase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customEase;
}
constexpr void DG::Tweening::EaseFactory___c__DisplayClass2_0::__cordl_internal_set_customEase(::DG::Tweening::EaseFunction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customEase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DG::Tweening::EaseFactory___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t DG::Tweening::EaseFactory___c__DisplayClass2_0::_StopMotion_b__0(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory___c__DisplayClass2_0*>::get(),
                        "<StopMotion>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time, duration, overshootOrAmplitude, period);
}
inline ::DG::Tweening::EaseFactory___c__DisplayClass2_0* DG::Tweening::EaseFactory___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::EaseFactory___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::EaseFactory___c__DisplayClass2_0::EaseFactory___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::DG::Tweening::EaseFactory.StopMotion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::EaseFunction* (*)(int32_t, ::System::Nullable_1<::DG::Tweening::Ease>)>(&::DG::Tweening::EaseFactory::StopMotion)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x18c60f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        "StopMotion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::DG::Tweening::Ease>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFactory.StopMotion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::EaseFunction* (*)(int32_t, ::UnityEngine::AnimationCurve*)>(&::DG::Tweening::EaseFactory::StopMotion)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18c6268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        "StopMotion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFactory.StopMotion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::EaseFunction* (*)(int32_t, ::DG::Tweening::EaseFunction*)>(&::DG::Tweening::EaseFactory::StopMotion)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18c61a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        "StopMotion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::EaseFunction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DG::Tweening::EaseFactory._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::EaseFactory::*)()>(&::DG::Tweening::EaseFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18c6324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::DG::Tweening::EaseFunction* DG::Tweening::EaseFactory::StopMotion(int32_t  motionFps, ::System::Nullable_1<::DG::Tweening::Ease>  ease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        "StopMotion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::DG::Tweening::Ease>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::EaseFunction*, false>(nullptr, ___internal_method, motionFps, ease);
}
inline ::DG::Tweening::EaseFunction* DG::Tweening::EaseFactory::StopMotion(int32_t  motionFps, ::UnityEngine::AnimationCurve*  animCurve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        "StopMotion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::EaseFunction*, false>(nullptr, ___internal_method, motionFps, animCurve);
}
inline ::DG::Tweening::EaseFunction* DG::Tweening::EaseFactory::StopMotion(int32_t  motionFps, ::DG::Tweening::EaseFunction*  customEase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        "StopMotion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::EaseFunction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::EaseFunction*, false>(nullptr, ___internal_method, motionFps, customEase);
}
inline void DG::Tweening::EaseFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::EaseFactory*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DG::Tweening::EaseFactory* DG::Tweening::EaseFactory::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::EaseFactory*>());
}
// Ctor Parameters []
constexpr ::DG::Tweening::EaseFactory::EaseFactory()   {
}
