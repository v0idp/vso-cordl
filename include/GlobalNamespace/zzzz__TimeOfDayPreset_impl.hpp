#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayPreset.hpp"
#include "GlobalNamespace/zzzz__TimeOfDayType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimeOfDayPreset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayPreset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimeOfDayPreset::*)()>(&::GlobalNamespace::TimeOfDayPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16c1d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeOfDayPreset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TimeOfDayType& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_timeOfDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDay;
}
constexpr ::GlobalNamespace::TimeOfDayType const& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_timeOfDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDay;
}
constexpr void GlobalNamespace::TimeOfDayPreset::__cordl_internal_set_timeOfDay(::GlobalNamespace::TimeOfDayType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDay = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_SkyboxMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkyboxMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_SkyboxMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkyboxMaterial;
}
constexpr void GlobalNamespace::TimeOfDayPreset::__cordl_internal_set_SkyboxMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SkyboxMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_directionalLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_directionalLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalLight;
}
constexpr void GlobalNamespace::TimeOfDayPreset::__cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___directionalLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_SunTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SunTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_SunTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SunTransform;
}
constexpr void GlobalNamespace::TimeOfDayPreset::__cordl_internal_set_SunTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SunTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_SunColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SunColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_SunColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SunColor;
}
constexpr void GlobalNamespace::TimeOfDayPreset::__cordl_internal_set_SunColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SunColor = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_ObjectsToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectsToActivate;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::TimeOfDayPreset::__cordl_internal_get_ObjectsToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObjectsToActivate;
}
constexpr void GlobalNamespace::TimeOfDayPreset::__cordl_internal_set_ObjectsToActivate(::ArrayW<::UnityW<::UnityEngine::GameObject>,::Array<::UnityW<::UnityEngine::GameObject>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ObjectsToActivate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TimeOfDayPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimeOfDayPreset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TimeOfDayPreset* GlobalNamespace::TimeOfDayPreset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TimeOfDayPreset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeOfDayPreset::TimeOfDayPreset()   {
}
