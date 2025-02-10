#pragma once
// IWYU pragma private; include "AudioHelm/HelmModulationSetting.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__HelmModulationSetting_def.hpp"
//  Writing Method size for method: ::AudioHelm::HelmModulationSetting._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmModulationSetting::*)()>(&::AudioHelm::HelmModulationSetting::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1820870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmModulationSetting*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& AudioHelm::HelmModulationSetting::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::StringW const& AudioHelm::HelmModulationSetting::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void AudioHelm::HelmModulationSetting::__cordl_internal_set_source(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AudioHelm::HelmModulationSetting::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::StringW const& AudioHelm::HelmModulationSetting::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void AudioHelm::HelmModulationSetting::__cordl_internal_set_destination(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::HelmModulationSetting::__cordl_internal_get_amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amount;
}
constexpr float_t const& AudioHelm::HelmModulationSetting::__cordl_internal_get_amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amount;
}
constexpr void AudioHelm::HelmModulationSetting::__cordl_internal_set_amount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amount = value;
}
inline void AudioHelm::HelmModulationSetting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmModulationSetting*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::HelmModulationSetting* AudioHelm::HelmModulationSetting::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmModulationSetting*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmModulationSetting::HelmModulationSetting()   {
}
