#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationCache.hpp"
#include "Unity/Services/Authentication/zzzz__ICache_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationCache_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::IAuthenticationCache.Migrate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::IAuthenticationCache::*)(::StringW)>(&::Unity::Services::Authentication::IAuthenticationCache::Migrate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationCache*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationCache*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::IAuthenticationCache::Migrate(::StringW  key)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IAuthenticationCache*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
/// @brief Convert operator to "::Unity::Services::Authentication::ICache"
constexpr  Unity::Services::Authentication::IAuthenticationCache::operator ::Unity::Services::Authentication::ICache*() noexcept {
return static_cast<::Unity::Services::Authentication::ICache*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::ICache"
constexpr ::Unity::Services::Authentication::ICache* Unity::Services::Authentication::IAuthenticationCache::i___Unity__Services__Authentication__ICache() noexcept {
return static_cast<::Unity::Services::Authentication::ICache*>(static_cast<void*>(this));
}
