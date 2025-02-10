#pragma once
// IWYU pragma private; include "AudioHelm/ControlJump.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "AudioHelm/zzzz__ControlJump_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::AudioHelm::ControlJump.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ControlJump::*)()>(&::AudioHelm::ControlJump::Update)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1819f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlJump*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::ControlJump.OnCollisionStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ControlJump::*)(::UnityEngine::Collision*)>(&::AudioHelm::ControlJump::OnCollisionStay)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x181a014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlJump*>::get(),
                        "OnCollisionStay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::ControlJump._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ControlJump::*)()>(&::AudioHelm::ControlJump::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x181a0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlJump*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& AudioHelm::ControlJump::__cordl_internal_get_jumpForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpForce;
}
constexpr float_t const& AudioHelm::ControlJump::__cordl_internal_get_jumpForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpForce;
}
constexpr void AudioHelm::ControlJump::__cordl_internal_set_jumpForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpForce = value;
}
constexpr ::UnityEngine::KeyCode& AudioHelm::ControlJump::__cordl_internal_get_key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr ::UnityEngine::KeyCode const& AudioHelm::ControlJump::__cordl_internal_get_key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___key;
}
constexpr void AudioHelm::ControlJump::__cordl_internal_set_key(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___key = value;
}
constexpr ::UnityEngine::Vector3& AudioHelm::ControlJump::__cordl_internal_get_surface_normal_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surface_normal_;
}
constexpr ::UnityEngine::Vector3 const& AudioHelm::ControlJump::__cordl_internal_get_surface_normal_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surface_normal_;
}
constexpr void AudioHelm::ControlJump::__cordl_internal_set_surface_normal_(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surface_normal_ = value;
}
inline void AudioHelm::ControlJump::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlJump*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::ControlJump::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlJump*>::get(),
                        "OnCollisionStay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collision*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collision);
}
inline void AudioHelm::ControlJump::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlJump*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::ControlJump* AudioHelm::ControlJump::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::ControlJump*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::ControlJump::ControlJump()   {
}
