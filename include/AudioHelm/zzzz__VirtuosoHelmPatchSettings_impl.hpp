#pragma once
// IWYU pragma private; include "AudioHelm/VirtuosoHelmPatchSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__VirtuosoHelmPatchSettings_def.hpp"
//  Writing Method size for method: ::AudioHelm::VirtuosoHelmPatchSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::VirtuosoHelmPatchSettings::*)(::AudioHelm::VirtuosoHelmPatchSettings*)>(&::AudioHelm::VirtuosoHelmPatchSettings::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x18222cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::VirtuosoHelmPatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::VirtuosoHelmPatchSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_get_UseLinkHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseLinkHands;
}
constexpr bool const& AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_get_UseLinkHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseLinkHands;
}
constexpr void AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_set_UseLinkHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseLinkHands = value;
}
constexpr bool& AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_get_DistortionNormalizeVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistortionNormalizeVolume;
}
constexpr bool const& AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_get_DistortionNormalizeVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistortionNormalizeVolume;
}
constexpr void AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_set_DistortionNormalizeVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DistortionNormalizeVolume = value;
}
constexpr float_t& AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_get_PatchVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchVolume;
}
constexpr float_t const& AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_get_PatchVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PatchVolume;
}
constexpr void AudioHelm::VirtuosoHelmPatchSettings::__cordl_internal_set_PatchVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PatchVolume = value;
}
inline void AudioHelm::VirtuosoHelmPatchSettings::_ctor(::AudioHelm::VirtuosoHelmPatchSettings*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::VirtuosoHelmPatchSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::VirtuosoHelmPatchSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::AudioHelm::VirtuosoHelmPatchSettings* AudioHelm::VirtuosoHelmPatchSettings::New_ctor(::AudioHelm::VirtuosoHelmPatchSettings*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::VirtuosoHelmPatchSettings*>(other));
}
// Ctor Parameters []
constexpr ::AudioHelm::VirtuosoHelmPatchSettings::VirtuosoHelmPatchSettings()   {
}
