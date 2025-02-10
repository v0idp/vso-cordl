#pragma once
// IWYU pragma private; include "VROSC/UI/UIMaterialSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/UI/zzzz__UIMaterialSettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UIMaterialSettings.GetMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::VROSC::UI::UIMaterialSettings::*)(bool)>(&::VROSC::UI::UIMaterialSettings::GetMaterial)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17e5014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIMaterialSettings*>::get(),
                        "GetMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIMaterialSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIMaterialSettings::*)()>(&::VROSC::UI::UIMaterialSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e5cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIMaterialSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& VROSC::UI::UIMaterialSettings::__cordl_internal_get__opaqueMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opaqueMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::UI::UIMaterialSettings::__cordl_internal_get__opaqueMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opaqueMaterial;
}
constexpr void VROSC::UI::UIMaterialSettings::__cordl_internal_set__opaqueMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____opaqueMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& VROSC::UI::UIMaterialSettings::__cordl_internal_get__transparentMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transparentMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::UI::UIMaterialSettings::__cordl_internal_get__transparentMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transparentMaterial;
}
constexpr void VROSC::UI::UIMaterialSettings::__cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transparentMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Material> VROSC::UI::UIMaterialSettings::GetMaterial(bool  needsTransparency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIMaterialSettings*>::get(),
                        "GetMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, needsTransparency);
}
inline void VROSC::UI::UIMaterialSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIMaterialSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UIMaterialSettings* VROSC::UI::UIMaterialSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIMaterialSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIMaterialSettings::UIMaterialSettings()   {
}
