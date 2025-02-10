#pragma once
// IWYU pragma private; include "AudioHelm/MaterialPulse.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__MaterialPulse_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::AudioHelm::MaterialPulse.Pulse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialPulse::*)(float_t)>(&::AudioHelm::MaterialPulse::Pulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1819d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialPulse*>::get(),
                        "Pulse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MaterialPulse.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialPulse::*)()>(&::AudioHelm::MaterialPulse::Update)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x181b70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialPulse*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MaterialPulse._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MaterialPulse::*)()>(&::AudioHelm::MaterialPulse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialPulse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& AudioHelm::MaterialPulse::__cordl_internal_get_defaultMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& AudioHelm::MaterialPulse::__cordl_internal_get_defaultMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaterial;
}
constexpr void AudioHelm::MaterialPulse::__cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& AudioHelm::MaterialPulse::__cordl_internal_get_pulseMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulseMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& AudioHelm::MaterialPulse::__cordl_internal_get_pulseMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pulseMaterial;
}
constexpr void AudioHelm::MaterialPulse::__cordl_internal_set_pulseMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pulseMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::MaterialPulse::__cordl_internal_get_decay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decay;
}
constexpr float_t const& AudioHelm::MaterialPulse::__cordl_internal_get_decay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decay;
}
constexpr void AudioHelm::MaterialPulse::__cordl_internal_set_decay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decay = value;
}
constexpr float_t& AudioHelm::MaterialPulse::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& AudioHelm::MaterialPulse::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void AudioHelm::MaterialPulse::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& AudioHelm::MaterialPulse::__cordl_internal_get_render()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___render;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& AudioHelm::MaterialPulse::__cordl_internal_get_render() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___render;
}
constexpr void AudioHelm::MaterialPulse::__cordl_internal_set_render(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___render)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::RawImage>& AudioHelm::MaterialPulse::__cordl_internal_get_rawImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawImage;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& AudioHelm::MaterialPulse::__cordl_internal_get_rawImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawImage;
}
constexpr void AudioHelm::MaterialPulse::__cordl_internal_set_rawImage(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::MaterialPulse::Pulse(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialPulse*>::get(),
                        "Pulse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void AudioHelm::MaterialPulse::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialPulse*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::MaterialPulse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MaterialPulse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::MaterialPulse* AudioHelm::MaterialPulse::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::MaterialPulse*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::MaterialPulse::MaterialPulse()   {
}
