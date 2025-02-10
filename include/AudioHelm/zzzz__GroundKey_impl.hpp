#pragma once
// IWYU pragma private; include "AudioHelm/GroundKey.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__GroundKey_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::AudioHelm::GroundKey.IsInside
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::GroundKey::*)(::UnityEngine::Vector3)>(&::AudioHelm::GroundKey::IsInside)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x181a5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "IsInside",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::GroundKey.IsOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::GroundKey::*)()>(&::AudioHelm::GroundKey::IsOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181a610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "IsOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::GroundKey.SetOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::GroundKey::*)(bool)>(&::AudioHelm::GroundKey::SetOn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x181a618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "SetOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::GroundKey.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::GroundKey::*)()>(&::AudioHelm::GroundKey::Update)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x181a624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::GroundKey._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::GroundKey::*)()>(&::AudioHelm::GroundKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181a6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& AudioHelm::GroundKey::__cordl_internal_get_keyLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyLight;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& AudioHelm::GroundKey::__cordl_internal_get_keyLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyLight;
}
constexpr void AudioHelm::GroundKey::__cordl_internal_set_keyLight(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& AudioHelm::GroundKey::__cordl_internal_get_noteOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteOn;
}
constexpr bool const& AudioHelm::GroundKey::__cordl_internal_get_noteOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noteOn;
}
constexpr void AudioHelm::GroundKey::__cordl_internal_set_noteOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noteOn = value;
}
inline bool AudioHelm::GroundKey::IsInside(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "IsInside",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline bool AudioHelm::GroundKey::IsOn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "IsOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void AudioHelm::GroundKey::SetOn(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "SetOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isOn);
}
inline void AudioHelm::GroundKey::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::GroundKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::GroundKey*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::GroundKey* AudioHelm::GroundKey::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::GroundKey*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::GroundKey::GroundKey()   {
}
