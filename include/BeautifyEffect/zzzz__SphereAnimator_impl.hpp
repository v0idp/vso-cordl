#pragma once
// IWYU pragma private; include "BeautifyEffect/SphereAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeautifyEffect/zzzz__SphereAnimator_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::BeautifyEffect::SphereAnimator.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::SphereAnimator::*)()>(&::BeautifyEffect::SphereAnimator::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180f8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::SphereAnimator*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::SphereAnimator.FixedUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::SphereAnimator::*)()>(&::BeautifyEffect::SphereAnimator::FixedUpdate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x180f8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::SphereAnimator*>::get(),
                        "FixedUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::SphereAnimator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::SphereAnimator::*)()>(&::BeautifyEffect::SphereAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180f9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::SphereAnimator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& BeautifyEffect::SphereAnimator::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& BeautifyEffect::SphereAnimator::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void BeautifyEffect::SphereAnimator::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeautifyEffect::SphereAnimator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::SphereAnimator*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::SphereAnimator::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::SphereAnimator*>::get(),
                        "FixedUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::SphereAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::SphereAnimator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeautifyEffect::SphereAnimator* BeautifyEffect::SphereAnimator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeautifyEffect::SphereAnimator*>());
}
// Ctor Parameters []
constexpr ::BeautifyEffect::SphereAnimator::SphereAnimator()   {
}
