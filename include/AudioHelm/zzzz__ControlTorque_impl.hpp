#pragma once
// IWYU pragma private; include "AudioHelm/ControlTorque.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "AudioHelm/zzzz__ControlTorque_def.hpp"
//  Writing Method size for method: ::AudioHelm::ControlTorque.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ControlTorque::*)()>(&::AudioHelm::ControlTorque::Start)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x181a128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlTorque*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::ControlTorque.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ControlTorque::*)()>(&::AudioHelm::ControlTorque::Update)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x181a184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlTorque*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::ControlTorque._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::ControlTorque::*)()>(&::AudioHelm::ControlTorque::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181a3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlTorque*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& AudioHelm::ControlTorque::__cordl_internal_get_torque()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torque;
}
constexpr float_t const& AudioHelm::ControlTorque::__cordl_internal_get_torque() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___torque;
}
constexpr void AudioHelm::ControlTorque::__cordl_internal_set_torque(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___torque = value;
}
constexpr float_t& AudioHelm::ControlTorque::__cordl_internal_get_maxAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngularVelocity;
}
constexpr float_t const& AudioHelm::ControlTorque::__cordl_internal_get_maxAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngularVelocity;
}
constexpr void AudioHelm::ControlTorque::__cordl_internal_set_maxAngularVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAngularVelocity = value;
}
constexpr ::UnityEngine::Vector3& AudioHelm::ControlTorque::__cordl_internal_get_forward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr ::UnityEngine::Vector3 const& AudioHelm::ControlTorque::__cordl_internal_get_forward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forward;
}
constexpr void AudioHelm::ControlTorque::__cordl_internal_set_forward(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forward = value;
}
constexpr ::UnityEngine::Vector3& AudioHelm::ControlTorque::__cordl_internal_get_right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr ::UnityEngine::Vector3 const& AudioHelm::ControlTorque::__cordl_internal_get_right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___right;
}
constexpr void AudioHelm::ControlTorque::__cordl_internal_set_right(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___right = value;
}
inline void AudioHelm::ControlTorque::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlTorque*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::ControlTorque::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlTorque*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::ControlTorque::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::ControlTorque*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::ControlTorque* AudioHelm::ControlTorque::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::ControlTorque*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::ControlTorque::ControlTorque()   {
}
