#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheBinding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheValidator_def.hpp"
#include "System/Net/Cache/zzzz__RequestCache_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Cache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCache* (::System::Net::Cache::RequestCacheBinding::*)()>(&::System::Net::Cache::RequestCacheBinding::get_Cache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc1cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                        "get_Cache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Validator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheValidator* (::System::Net::Cache::RequestCacheBinding::*)()>(&::System::Net::Cache::RequestCacheBinding::get_Validator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc1cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                        "get_Validator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Cache::RequestCache*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_RequestCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestCache;
}
constexpr ::System::Net::Cache::RequestCache* const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_RequestCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestCache;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_RequestCache(::System::Net::Cache::RequestCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Cache::RequestCacheValidator*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_CacheValidator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheValidator;
}
constexpr ::System::Net::Cache::RequestCacheValidator* const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_CacheValidator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CacheValidator;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CacheValidator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Cache::RequestCache* System::Net::Cache::RequestCacheBinding::get_Cache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                        "get_Cache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCache*, false>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheValidator* System::Net::Cache::RequestCacheBinding::get_Validator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                        "get_Validator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheValidator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheBinding::RequestCacheBinding()   {
}
