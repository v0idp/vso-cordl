#pragma once
// IWYU pragma private; include "VROSC/SyncAnimationToBeat.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SyncAnimationToBeat_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::VROSC::SyncAnimationToBeat.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SyncAnimationToBeat::*)()>(&::VROSC::SyncAnimationToBeat::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1714b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SyncAnimationToBeat.SyncAnimator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SyncAnimationToBeat::*)()>(&::VROSC::SyncAnimationToBeat::SyncAnimator)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1714c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "SyncAnimator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SyncAnimationToBeat.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SyncAnimationToBeat::*)()>(&::VROSC::SyncAnimationToBeat::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1714df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SyncAnimationToBeat.BPMChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SyncAnimationToBeat::*)(double_t)>(&::VROSC::SyncAnimationToBeat::BPMChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1714ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "BPMChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SyncAnimationToBeat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SyncAnimationToBeat::*)()>(&::VROSC::SyncAnimationToBeat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1714eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::SyncAnimationToBeat::__cordl_internal_get__animationMatchesBPM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationMatchesBPM;
}
constexpr float_t const& VROSC::SyncAnimationToBeat::__cordl_internal_get__animationMatchesBPM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationMatchesBPM;
}
constexpr void VROSC::SyncAnimationToBeat::__cordl_internal_set__animationMatchesBPM(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationMatchesBPM = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& VROSC::SyncAnimationToBeat::__cordl_internal_get__animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& VROSC::SyncAnimationToBeat::__cordl_internal_get__animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animator;
}
constexpr void VROSC::SyncAnimationToBeat::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SyncAnimationToBeat::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SyncAnimationToBeat::SyncAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "SyncAnimator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SyncAnimationToBeat::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SyncAnimationToBeat::BPMChanged(double_t  newBPM)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        "BPMChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newBPM);
}
inline void VROSC::SyncAnimationToBeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SyncAnimationToBeat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SyncAnimationToBeat* VROSC::SyncAnimationToBeat::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SyncAnimationToBeat*>());
}
// Ctor Parameters []
constexpr ::VROSC::SyncAnimationToBeat::SyncAnimationToBeat()   {
}
