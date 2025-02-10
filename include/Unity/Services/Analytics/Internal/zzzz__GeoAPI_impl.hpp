#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/GeoAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IGeoAPI_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__GeoAPI_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::GeoAPI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::GeoAPI::*)()>(&::Unity::Services::Analytics::Internal::GeoAPI::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e919ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::GeoAPI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Analytics::Internal::GeoAPI::__cordl_internal_get_m_PrivacyEndpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrivacyEndpoint;
}
constexpr ::StringW const& Unity::Services::Analytics::Internal::GeoAPI::__cordl_internal_get_m_PrivacyEndpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrivacyEndpoint;
}
constexpr void Unity::Services::Analytics::Internal::GeoAPI::__cordl_internal_set_m_PrivacyEndpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PrivacyEndpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::Internal::GeoAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::GeoAPI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::GeoAPI* Unity::Services::Analytics::Internal::GeoAPI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::GeoAPI*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IGeoAPI"
constexpr  Unity::Services::Analytics::Internal::GeoAPI::operator ::Unity::Services::Analytics::Internal::IGeoAPI*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IGeoAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IGeoAPI"
constexpr ::Unity::Services::Analytics::Internal::IGeoAPI* Unity::Services::Analytics::Internal::GeoAPI::i___Unity__Services__Analytics__Internal__IGeoAPI() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IGeoAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::GeoAPI::GeoAPI()   {
}
