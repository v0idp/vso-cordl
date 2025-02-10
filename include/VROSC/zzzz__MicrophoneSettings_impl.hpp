#pragma once
// IWYU pragma private; include "VROSC/MicrophoneSettings.hpp"
#include "VROSC/zzzz__ToolSettings_impl.hpp"
#include "VROSC/zzzz__MicrophoneSettings_def.hpp"
//  Writing Method size for method: ::VROSC::MicrophoneSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MicrophoneSettings::*)()>(&::VROSC::MicrophoneSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1710a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::MicrophoneSettings::__cordl_internal_get_VolumeMaxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeMaxValue;
}
constexpr float_t const& VROSC::MicrophoneSettings::__cordl_internal_get_VolumeMaxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeMaxValue;
}
constexpr void VROSC::MicrophoneSettings::__cordl_internal_set_VolumeMaxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumeMaxValue = value;
}
constexpr float_t& VROSC::MicrophoneSettings::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::MicrophoneSettings::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::MicrophoneSettings::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr float_t& VROSC::MicrophoneSettings::__cordl_internal_get_ReverbMaxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbMaxValue;
}
constexpr float_t const& VROSC::MicrophoneSettings::__cordl_internal_get_ReverbMaxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReverbMaxValue;
}
constexpr void VROSC::MicrophoneSettings::__cordl_internal_set_ReverbMaxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReverbMaxValue = value;
}
constexpr float_t& VROSC::MicrophoneSettings::__cordl_internal_get_Reverb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverb;
}
constexpr float_t const& VROSC::MicrophoneSettings::__cordl_internal_get_Reverb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reverb;
}
constexpr void VROSC::MicrophoneSettings::__cordl_internal_set_Reverb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reverb = value;
}
constexpr bool& VROSC::MicrophoneSettings::__cordl_internal_get_UseProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseProximity;
}
constexpr bool const& VROSC::MicrophoneSettings::__cordl_internal_get_UseProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseProximity;
}
constexpr void VROSC::MicrophoneSettings::__cordl_internal_set_UseProximity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseProximity = value;
}
inline void VROSC::MicrophoneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MicrophoneSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MicrophoneSettings* VROSC::MicrophoneSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MicrophoneSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::MicrophoneSettings::MicrophoneSettings()   {
}
