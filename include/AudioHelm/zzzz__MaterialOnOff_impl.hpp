#pragma once
// IWYU pragma private; include "AudioHelm/MaterialOnOff.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__MaterialOnOff_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::AudioHelm::MaterialOnOff.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialOnOff::*)()>(&::AudioHelm::MaterialOnOff::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MaterialOnOff.On
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialOnOff::*)()>(&::AudioHelm::MaterialOnOff::On)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x181b55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "On",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MaterialOnOff.Off
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialOnOff::*)()>(&::AudioHelm::MaterialOnOff::Off)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181b5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "Off",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MaterialOnOff.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialOnOff::*)()>(&::AudioHelm::MaterialOnOff::Update)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x181b5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MaterialOnOff._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialOnOff::*)()>(&::AudioHelm::MaterialOnOff::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181b704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& AudioHelm::MaterialOnOff::__cordl_internal_get_offMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& AudioHelm::MaterialOnOff::__cordl_internal_get_offMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offMaterial;
}
constexpr void AudioHelm::MaterialOnOff::__cordl_internal_set_offMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___offMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& AudioHelm::MaterialOnOff::__cordl_internal_get_onMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& AudioHelm::MaterialOnOff::__cordl_internal_get_onMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaterial;
}
constexpr void AudioHelm::MaterialOnOff::__cordl_internal_set_onMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::RawImage>& AudioHelm::MaterialOnOff::__cordl_internal_get_rawImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawImage;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& AudioHelm::MaterialOnOff::__cordl_internal_get_rawImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawImage;
}
constexpr void AudioHelm::MaterialOnOff::__cordl_internal_set_rawImage(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::MaterialOnOff::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& AudioHelm::MaterialOnOff::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void AudioHelm::MaterialOnOff::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr bool& AudioHelm::MaterialOnOff::__cordl_internal_get_on()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___on;
}
constexpr bool const& AudioHelm::MaterialOnOff::__cordl_internal_get_on() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___on;
}
constexpr void AudioHelm::MaterialOnOff::__cordl_internal_set_on(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___on = value;
}
inline void AudioHelm::MaterialOnOff::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::MaterialOnOff::On()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "On",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::MaterialOnOff::Off()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "Off",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::MaterialOnOff::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::MaterialOnOff::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialOnOff*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::MaterialOnOff* AudioHelm::MaterialOnOff::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::MaterialOnOff*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::MaterialOnOff::MaterialOnOff()   {
}
