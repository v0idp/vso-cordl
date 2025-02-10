#pragma once
// IWYU pragma private; include "VROSC/SetCameraSettingsOnEnvironmentSwitch.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SetCameraSettingsOnEnvironmentSwitch_def.hpp"
#include "BeautifyEffect/zzzz__Beautify_def.hpp"
#include "GlobalNamespace/zzzz__Environment_def.hpp"
//  Writing Method size for method: ::VROSC::SetCameraSettingsOnEnvironmentSwitch.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetCameraSettingsOnEnvironmentSwitch::*)()>(&::VROSC::SetCameraSettingsOnEnvironmentSwitch::Awake)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1729430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetCameraSettingsOnEnvironmentSwitch.NewEnvironmentSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetCameraSettingsOnEnvironmentSwitch::*)(::GlobalNamespace::Environment*)>(&::VROSC::SetCameraSettingsOnEnvironmentSwitch::NewEnvironmentSet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1729528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>::get(),
                        "NewEnvironmentSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Environment*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetCameraSettingsOnEnvironmentSwitch._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetCameraSettingsOnEnvironmentSwitch::*)()>(&::VROSC::SetCameraSettingsOnEnvironmentSwitch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172952c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeautifyEffect::Beautify>& VROSC::SetCameraSettingsOnEnvironmentSwitch::__cordl_internal_get__beautify()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beautify;
}
constexpr ::UnityW<::BeautifyEffect::Beautify> const& VROSC::SetCameraSettingsOnEnvironmentSwitch::__cordl_internal_get__beautify() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beautify;
}
constexpr void VROSC::SetCameraSettingsOnEnvironmentSwitch::__cordl_internal_set__beautify(::UnityW<::BeautifyEffect::Beautify>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beautify)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SetCameraSettingsOnEnvironmentSwitch::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SetCameraSettingsOnEnvironmentSwitch::NewEnvironmentSet(::GlobalNamespace::Environment*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>::get(),
                        "NewEnvironmentSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Environment*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void VROSC::SetCameraSettingsOnEnvironmentSwitch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SetCameraSettingsOnEnvironmentSwitch* VROSC::SetCameraSettingsOnEnvironmentSwitch::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SetCameraSettingsOnEnvironmentSwitch*>());
}
// Ctor Parameters []
constexpr ::VROSC::SetCameraSettingsOnEnvironmentSwitch::SetCameraSettingsOnEnvironmentSwitch()   {
}
