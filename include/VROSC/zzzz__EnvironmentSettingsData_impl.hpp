#pragma once
// IWYU pragma private; include "VROSC/EnvironmentSettingsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__EnvironmentSettingsData_def.hpp"
//  Writing Method size for method: ::VROSC::EnvironmentSettingsData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::EnvironmentSettingsData::*)()>(&::VROSC::EnvironmentSettingsData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x183ce04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentSettingsData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::EnvironmentSettingsData::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& VROSC::EnvironmentSettingsData::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void VROSC::EnvironmentSettingsData::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::EnvironmentSettingsData::__cordl_internal_get_PrimaryColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryColor;
}
constexpr ::UnityEngine::Color const& VROSC::EnvironmentSettingsData::__cordl_internal_get_PrimaryColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryColor;
}
constexpr void VROSC::EnvironmentSettingsData::__cordl_internal_set_PrimaryColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryColor = value;
}
constexpr ::UnityEngine::Color& VROSC::EnvironmentSettingsData::__cordl_internal_get_ActiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveColor;
}
constexpr ::UnityEngine::Color const& VROSC::EnvironmentSettingsData::__cordl_internal_get_ActiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveColor;
}
constexpr void VROSC::EnvironmentSettingsData::__cordl_internal_set_ActiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveColor = value;
}
constexpr ::UnityEngine::Color& VROSC::EnvironmentSettingsData::__cordl_internal_get_AccentColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccentColor;
}
constexpr ::UnityEngine::Color const& VROSC::EnvironmentSettingsData::__cordl_internal_get_AccentColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccentColor;
}
constexpr void VROSC::EnvironmentSettingsData::__cordl_internal_set_AccentColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccentColor = value;
}
constexpr ::UnityEngine::Color& VROSC::EnvironmentSettingsData::__cordl_internal_get_InstrumentColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentColor;
}
constexpr ::UnityEngine::Color const& VROSC::EnvironmentSettingsData::__cordl_internal_get_InstrumentColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentColor;
}
constexpr void VROSC::EnvironmentSettingsData::__cordl_internal_set_InstrumentColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstrumentColor = value;
}
constexpr float_t& VROSC::EnvironmentSettingsData::__cordl_internal_get_EffectsAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EffectsAmount;
}
constexpr float_t const& VROSC::EnvironmentSettingsData::__cordl_internal_get_EffectsAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EffectsAmount;
}
constexpr void VROSC::EnvironmentSettingsData::__cordl_internal_set_EffectsAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EffectsAmount = value;
}
inline void VROSC::EnvironmentSettingsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::EnvironmentSettingsData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::EnvironmentSettingsData* VROSC::EnvironmentSettingsData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::EnvironmentSettingsData*>());
}
// Ctor Parameters []
constexpr ::VROSC::EnvironmentSettingsData::EnvironmentSettingsData()   {
}
