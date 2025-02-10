#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Generated/PlayerNamesApi.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/Generated/zzzz__IPlayerNamesApi_impl.hpp"
#include "Unity/Services/Authentication/Generated/zzzz__PlayerNamesApi_def.hpp"
#include "Unity/Services/Authentication/Shared/zzzz__IApiClient_def.hpp"
#include "Unity/Services/Authentication/Shared/zzzz__IApiConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::Generated::PlayerNamesApi._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::Generated::PlayerNamesApi::*)(::Unity::Services::Authentication::Shared::IApiClient*, ::Unity::Services::Authentication::Shared::IApiConfiguration*)>(&::Unity::Services::Authentication::Generated::PlayerNamesApi::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e96a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::PlayerNamesApi*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Shared::IApiClient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Shared::IApiConfiguration*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::Shared::IApiClient*& Unity::Services::Authentication::Generated::PlayerNamesApi::__cordl_internal_get__Client_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr ::Unity::Services::Authentication::Shared::IApiClient* const& Unity::Services::Authentication::Generated::PlayerNamesApi::__cordl_internal_get__Client_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
constexpr void Unity::Services::Authentication::Generated::PlayerNamesApi::__cordl_internal_set__Client_k__BackingField(::Unity::Services::Authentication::Shared::IApiClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Client_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::Shared::IApiConfiguration*& Unity::Services::Authentication::Generated::PlayerNamesApi::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::Unity::Services::Authentication::Shared::IApiConfiguration* const& Unity::Services::Authentication::Generated::PlayerNamesApi::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Unity::Services::Authentication::Generated::PlayerNamesApi::__cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::Shared::IApiConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Configuration_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::Generated::PlayerNamesApi::_ctor(::Unity::Services::Authentication::Shared::IApiClient*  apiClient, ::Unity::Services::Authentication::Shared::IApiConfiguration*  apiConfiguration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::Generated::PlayerNamesApi*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Shared::IApiClient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Shared::IApiConfiguration*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, apiClient, apiConfiguration);
}
inline ::Unity::Services::Authentication::Generated::PlayerNamesApi* Unity::Services::Authentication::Generated::PlayerNamesApi::New_ctor(::Unity::Services::Authentication::Shared::IApiClient*  apiClient, ::Unity::Services::Authentication::Shared::IApiConfiguration*  apiConfiguration)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::Generated::PlayerNamesApi*>(apiClient, apiConfiguration));
}
/// @brief Convert operator to "::Unity::Services::Authentication::Generated::IPlayerNamesApi"
constexpr  Unity::Services::Authentication::Generated::PlayerNamesApi::operator ::Unity::Services::Authentication::Generated::IPlayerNamesApi*() noexcept {
return static_cast<::Unity::Services::Authentication::Generated::IPlayerNamesApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::Generated::IPlayerNamesApi"
constexpr ::Unity::Services::Authentication::Generated::IPlayerNamesApi* Unity::Services::Authentication::Generated::PlayerNamesApi::i___Unity__Services__Authentication__Generated__IPlayerNamesApi() noexcept {
return static_cast<::Unity::Services::Authentication::Generated::IPlayerNamesApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::Generated::PlayerNamesApi::PlayerNamesApi()   {
}
