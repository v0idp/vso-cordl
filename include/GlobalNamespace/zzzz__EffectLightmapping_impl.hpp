#pragma once
// IWYU pragma private; include "GlobalNamespace/EffectLightmapping.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EffectLightmapping_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EffectLightmapping.ShowEffectLighting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EffectLightmapping::*)(bool)>(&::GlobalNamespace::EffectLightmapping::ShowEffectLighting)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x16c2484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectLightmapping*>::get(),
                        "ShowEffectLighting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EffectLightmapping._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EffectLightmapping::*)()>(&::GlobalNamespace::EffectLightmapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c24cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectLightmapping*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EffectLightmapping::__cordl_internal_get__normalLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalLighting;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EffectLightmapping::__cordl_internal_get__normalLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalLighting;
}
constexpr void GlobalNamespace::EffectLightmapping::__cordl_internal_set__normalLighting(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalLighting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::EffectLightmapping::__cordl_internal_get__effectLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectLighting;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::EffectLightmapping::__cordl_internal_get__effectLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____effectLighting;
}
constexpr void GlobalNamespace::EffectLightmapping::__cordl_internal_set__effectLighting(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____effectLighting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EffectLightmapping::ShowEffectLighting(bool  showEffects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectLightmapping*>::get(),
                        "ShowEffectLighting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showEffects);
}
inline void GlobalNamespace::EffectLightmapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EffectLightmapping*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EffectLightmapping* GlobalNamespace::EffectLightmapping::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EffectLightmapping*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EffectLightmapping::EffectLightmapping()   {
}
