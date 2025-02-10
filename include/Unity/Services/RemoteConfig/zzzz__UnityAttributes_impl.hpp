#pragma once
// IWYU pragma private; include "Unity/Services/RemoteConfig/UnityAttributes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/RemoteConfig/zzzz__UnityAttributes_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::Unity::Services::RemoteConfig::UnityAttributes._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::RemoteConfig::UnityAttributes::*)()>(&::Unity::Services::RemoteConfig::UnityAttributes::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2ea7888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::UnityAttributes*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::UnityAttributes.GetDeviceModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::RemoteConfig::UnityAttributes::*)()>(&::Unity::Services::RemoteConfig::UnityAttributes::GetDeviceModel)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2eaa2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::UnityAttributes*>::get(),
                        "GetDeviceModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::RemoteConfig::UnityAttributes.GetISOCodeFromLangStruct
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::RemoteConfig::UnityAttributes::*)(::UnityEngine::SystemLanguage)>(&::Unity::Services::RemoteConfig::UnityAttributes::GetISOCodeFromLangStruct)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2eaa3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::UnityAttributes*>::get(),
                        "GetISOCodeFromLangStruct",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SystemLanguage>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_osVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osVersion;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_osVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osVersion;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_osVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___osVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appVersion;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appVersion;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_appVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_rootedJailbroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootedJailbroken;
}
constexpr bool const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_rootedJailbroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootedJailbroken;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_rootedJailbroken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootedJailbroken = value;
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___model;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___model;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_model(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___model)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_cpu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpu;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_cpu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpu;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_cpu(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cpu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_cpuCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpuCount;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_cpuCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpuCount;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_cpuCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cpuCount = value;
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_cpuFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpuFrequency;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_cpuFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cpuFrequency;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_cpuFrequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cpuFrequency = value;
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_ram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ram;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_ram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ram;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_ram(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ram = value;
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_vram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vram;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_vram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vram;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_vram(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vram = value;
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_screen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_screen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_screen(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_dpi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpi;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_dpi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpi;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_dpi(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpi = value;
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___language;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___language;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_language(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appName;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appName;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_appName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appInstallMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appInstallMode;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appInstallMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appInstallMode;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_appInstallMode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appInstallMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appInstallStore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appInstallStore;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_appInstallStore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appInstallStore;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_appInstallStore(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___appInstallStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsDeviceId;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsDeviceId;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_graphicsDeviceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphicsDeviceId = value;
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsDeviceVendorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsDeviceVendorId;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsDeviceVendorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsDeviceVendorId;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_graphicsDeviceVendorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphicsDeviceVendorId = value;
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsName;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsName;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_graphicsName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphicsName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsDeviceVendor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsDeviceVendor;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsDeviceVendor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsDeviceVendor;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_graphicsDeviceVendor(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphicsDeviceVendor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsVersion;
}
constexpr ::StringW const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsVersion;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_graphicsVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphicsVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsShader;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_graphicsShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphicsShader;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_graphicsShader(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphicsShader = value;
}
constexpr int32_t& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_maxTextureSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTextureSize;
}
constexpr int32_t const& Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_get_maxTextureSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTextureSize;
}
constexpr void Unity::Services::RemoteConfig::UnityAttributes::__cordl_internal_set_maxTextureSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTextureSize = value;
}
inline void Unity::Services::RemoteConfig::UnityAttributes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::UnityAttributes*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::RemoteConfig::UnityAttributes::GetDeviceModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::UnityAttributes*>::get(),
                        "GetDeviceModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::RemoteConfig::UnityAttributes::GetISOCodeFromLangStruct(::UnityEngine::SystemLanguage  systemLanguage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::RemoteConfig::UnityAttributes*>::get(),
                        "GetISOCodeFromLangStruct",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SystemLanguage>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, systemLanguage);
}
inline ::Unity::Services::RemoteConfig::UnityAttributes* Unity::Services::RemoteConfig::UnityAttributes::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::RemoteConfig::UnityAttributes*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::RemoteConfig::UnityAttributes::UnityAttributes()   {
}
