#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/PlayerNameComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__PlayerNameComponent_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationCache_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerNameComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerNameComponent::*)(::Unity::Services::Authentication::IAuthenticationCache*)>(&::Unity::Services::Authentication::PlayerNameComponent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e965cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerNameComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationCache*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::PlayerNameComponent.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::PlayerNameComponent::*)()>(&::Unity::Services::Authentication::PlayerNameComponent::Clear)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e9374c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerNameComponent*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::IAuthenticationCache*& Unity::Services::Authentication::PlayerNameComponent::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::Unity::Services::Authentication::IAuthenticationCache* const& Unity::Services::Authentication::PlayerNameComponent::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void Unity::Services::Authentication::PlayerNameComponent::__cordl_internal_set_m_Cache(::Unity::Services::Authentication::IAuthenticationCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::PlayerNameComponent::_ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerNameComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationCache*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
inline void Unity::Services::Authentication::PlayerNameComponent::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::PlayerNameComponent*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::PlayerNameComponent* Unity::Services::Authentication::PlayerNameComponent::New_ctor(::Unity::Services::Authentication::IAuthenticationCache*  cache)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::PlayerNameComponent*>(cache));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::PlayerNameComponent::PlayerNameComponent()   {
}
