#pragma once
// IWYU pragma private; include "VROSC/GlobalColorSetParticleStartColor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__GlobalColorSetParticleStartColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "VROSC/zzzz__GlobalColorSetParticleStartColor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel::GlobalColorSetParticleStartColor_Channel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel::GlobalColorSetParticleStartColor_Channel()   {
}
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel  VROSC::GlobalColorSetParticleStartColor_Channel::Channel1{static_cast<int32_t>(0x0)};
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel  VROSC::GlobalColorSetParticleStartColor_Channel::Channel2{static_cast<int32_t>(0x1)};
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel  VROSC::GlobalColorSetParticleStartColor_Channel::Channel3{static_cast<int32_t>(0x2)};
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel  VROSC::GlobalColorSetParticleStartColor_Channel::Channel4{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::VROSC::GlobalColorSetParticleStartColor.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalColorSetParticleStartColor::*)()>(&::VROSC::GlobalColorSetParticleStartColor::OnEnable)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x17b97b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GlobalColorSetParticleStartColor.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalColorSetParticleStartColor::*)()>(&::VROSC::GlobalColorSetParticleStartColor::OnDisable)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x17b9a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GlobalColorSetParticleStartColor.ColorChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalColorSetParticleStartColor::*)(::UnityEngine::Color, float_t)>(&::VROSC::GlobalColorSetParticleStartColor::ColorChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17b9ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        "ColorChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GlobalColorSetParticleStartColor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalColorSetParticleStartColor::*)()>(&::VROSC::GlobalColorSetParticleStartColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b9dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel& VROSC::GlobalColorSetParticleStartColor::__cordl_internal_get__channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr ::VROSC::GlobalColorSetParticleStartColor_Channel const& VROSC::GlobalColorSetParticleStartColor::__cordl_internal_get__channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channel;
}
constexpr void VROSC::GlobalColorSetParticleStartColor::__cordl_internal_set__channel(::VROSC::GlobalColorSetParticleStartColor_Channel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channel = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& VROSC::GlobalColorSetParticleStartColor::__cordl_internal_get__particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& VROSC::GlobalColorSetParticleStartColor::__cordl_internal_get__particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr void VROSC::GlobalColorSetParticleStartColor::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::GlobalColorSetParticleStartColor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GlobalColorSetParticleStartColor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GlobalColorSetParticleStartColor::ColorChanged(::UnityEngine::Color  color, float_t  multiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        "ColorChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, multiplier);
}
inline void VROSC::GlobalColorSetParticleStartColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalColorSetParticleStartColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GlobalColorSetParticleStartColor* VROSC::GlobalColorSetParticleStartColor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GlobalColorSetParticleStartColor*>());
}
// Ctor Parameters []
constexpr ::VROSC::GlobalColorSetParticleStartColor::GlobalColorSetParticleStartColor()   {
}
