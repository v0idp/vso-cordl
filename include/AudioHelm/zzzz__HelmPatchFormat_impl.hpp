#pragma once
// IWYU pragma private; include "AudioHelm/HelmPatchFormat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__HelmPatchFormat_def.hpp"
#include "AudioHelm/zzzz__HelmPatchSettings_def.hpp"
#include "AudioHelm/zzzz__VirtuosoHelmPatchSettings_def.hpp"
//  Writing Method size for method: ::AudioHelm::HelmPatchFormat._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmPatchFormat::*)(::AudioHelm::HelmPatchFormat*)>(&::AudioHelm::HelmPatchFormat::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1822204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchFormat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchFormat*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& AudioHelm::HelmPatchFormat::__cordl_internal_get_license()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___license;
}
constexpr ::StringW const& AudioHelm::HelmPatchFormat::__cordl_internal_get_license() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___license;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_license(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___license)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AudioHelm::HelmPatchFormat::__cordl_internal_get_synth_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synth_version;
}
constexpr ::StringW const& AudioHelm::HelmPatchFormat::__cordl_internal_get_synth_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synth_version;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_synth_version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synth_version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AudioHelm::HelmPatchFormat::__cordl_internal_get_patch_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patch_name;
}
constexpr ::StringW const& AudioHelm::HelmPatchFormat::__cordl_internal_get_patch_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patch_name;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_patch_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___patch_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AudioHelm::HelmPatchFormat::__cordl_internal_get_folder_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___folder_name;
}
constexpr ::StringW const& AudioHelm::HelmPatchFormat::__cordl_internal_get_folder_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___folder_name;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_folder_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___folder_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& AudioHelm::HelmPatchFormat::__cordl_internal_get_author()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___author;
}
constexpr ::StringW const& AudioHelm::HelmPatchFormat::__cordl_internal_get_author() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___author;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_author(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___author)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::VirtuosoHelmPatchSettings*& AudioHelm::HelmPatchFormat::__cordl_internal_get_virtuosoSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtuosoSettings;
}
constexpr ::AudioHelm::VirtuosoHelmPatchSettings* const& AudioHelm::HelmPatchFormat::__cordl_internal_get_virtuosoSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___virtuosoSettings;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_virtuosoSettings(::AudioHelm::VirtuosoHelmPatchSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___virtuosoSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::HelmPatchSettings*& AudioHelm::HelmPatchFormat::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::AudioHelm::HelmPatchSettings* const& AudioHelm::HelmPatchFormat::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void AudioHelm::HelmPatchFormat::__cordl_internal_set_settings(::AudioHelm::HelmPatchSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::HelmPatchFormat::_ctor(::AudioHelm::HelmPatchFormat*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmPatchFormat*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::HelmPatchFormat*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::AudioHelm::HelmPatchFormat* AudioHelm::HelmPatchFormat::New_ctor(::AudioHelm::HelmPatchFormat*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmPatchFormat*>(other));
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmPatchFormat::HelmPatchFormat()   {
}
