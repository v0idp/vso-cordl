#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/GeoIPResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__GeoIPResponse_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::GeoIPResponse._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::GeoIPResponse::*)()>(&::Unity::Services::Analytics::Internal::GeoIPResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e91e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::GeoIPResponse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Analytics::Internal::GeoIPResponse::__cordl_internal_get_identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifier;
}
constexpr ::StringW const& Unity::Services::Analytics::Internal::GeoIPResponse::__cordl_internal_get_identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___identifier;
}
constexpr void Unity::Services::Analytics::Internal::GeoIPResponse::__cordl_internal_set_identifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::Internal::GeoIPResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::GeoIPResponse*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::GeoIPResponse* Unity::Services::Analytics::Internal::GeoIPResponse::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::GeoIPResponse*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::GeoIPResponse::GeoIPResponse()   {
}
