#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationApiClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/Shared/zzzz__IApiClient_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationApiClient_def.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationApiClient._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationApiClient::*)(::Unity::Services::Authentication::INetworkConfiguration*)>(&::Unity::Services::Authentication::AuthenticationApiClient::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e96778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationApiClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkConfiguration*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::INetworkConfiguration*& Unity::Services::Authentication::AuthenticationApiClient::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::Unity::Services::Authentication::INetworkConfiguration* const& Unity::Services::Authentication::AuthenticationApiClient::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationApiClient::__cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::INetworkConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Configuration_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::AuthenticationApiClient::_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationApiClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkConfiguration*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configuration);
}
inline ::Unity::Services::Authentication::AuthenticationApiClient* Unity::Services::Authentication::AuthenticationApiClient::New_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationApiClient*>(configuration));
}
/// @brief Convert operator to "::Unity::Services::Authentication::Shared::IApiClient"
constexpr  Unity::Services::Authentication::AuthenticationApiClient::operator ::Unity::Services::Authentication::Shared::IApiClient*() noexcept {
return static_cast<::Unity::Services::Authentication::Shared::IApiClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::Shared::IApiClient"
constexpr ::Unity::Services::Authentication::Shared::IApiClient* Unity::Services::Authentication::AuthenticationApiClient::i___Unity__Services__Authentication__Shared__IApiClient() noexcept {
return static_cast<::Unity::Services::Authentication::Shared::IApiClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationApiClient::AuthenticationApiClient()   {
}
