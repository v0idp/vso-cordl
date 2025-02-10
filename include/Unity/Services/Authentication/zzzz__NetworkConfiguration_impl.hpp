#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/NetworkConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkConfiguration_impl.hpp"
#include "Unity/Services/Authentication/zzzz__NetworkConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::NetworkConfiguration.get_Retries
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Authentication::NetworkConfiguration::*)()>(&::Unity::Services::Authentication::NetworkConfiguration::get_Retries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkConfiguration*>::get(),
                        "get_Retries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::NetworkConfiguration.get_Timeout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Authentication::NetworkConfiguration::*)()>(&::Unity::Services::Authentication::NetworkConfiguration::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e98608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkConfiguration*>::get(),
                        "get_Timeout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::NetworkConfiguration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::NetworkConfiguration::*)()>(&::Unity::Services::Authentication::NetworkConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2e9661c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkConfiguration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Services::Authentication::NetworkConfiguration::__cordl_internal_get__Retries_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Retries_k__BackingField;
}
constexpr int32_t const& Unity::Services::Authentication::NetworkConfiguration::__cordl_internal_get__Retries_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Retries_k__BackingField;
}
constexpr void Unity::Services::Authentication::NetworkConfiguration::__cordl_internal_set__Retries_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Retries_k__BackingField = value;
}
constexpr int32_t& Unity::Services::Authentication::NetworkConfiguration::__cordl_internal_get__Timeout_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timeout_k__BackingField;
}
constexpr int32_t const& Unity::Services::Authentication::NetworkConfiguration::__cordl_internal_get__Timeout_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timeout_k__BackingField;
}
constexpr void Unity::Services::Authentication::NetworkConfiguration::__cordl_internal_set__Timeout_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Timeout_k__BackingField = value;
}
inline int32_t Unity::Services::Authentication::NetworkConfiguration::get_Retries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkConfiguration*>::get(),
                        "get_Retries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Authentication::NetworkConfiguration::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkConfiguration*>::get(),
                        "get_Timeout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::NetworkConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkConfiguration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::NetworkConfiguration* Unity::Services::Authentication::NetworkConfiguration::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::NetworkConfiguration*>());
}
/// @brief Convert operator to "::Unity::Services::Authentication::INetworkConfiguration"
constexpr  Unity::Services::Authentication::NetworkConfiguration::operator ::Unity::Services::Authentication::INetworkConfiguration*() noexcept {
return static_cast<::Unity::Services::Authentication::INetworkConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::INetworkConfiguration"
constexpr ::Unity::Services::Authentication::INetworkConfiguration* Unity::Services::Authentication::NetworkConfiguration::i___Unity__Services__Authentication__INetworkConfiguration() noexcept {
return static_cast<::Unity::Services::Authentication::INetworkConfiguration*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::NetworkConfiguration::NetworkConfiguration()   {
}
