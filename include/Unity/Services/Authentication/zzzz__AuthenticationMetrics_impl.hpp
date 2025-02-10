#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationMetrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationMetrics_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationMetrics_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetricsFactory_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationMetrics._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationMetrics::*)(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*)>(&::Unity::Services::Authentication::AuthenticationMetrics::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2e96490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationMetrics.SendNetworkErrorMetric
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationMetrics::*)()>(&::Unity::Services::Authentication::AuthenticationMetrics::SendNetworkErrorMetric)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e978d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendNetworkErrorMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationMetrics.SendExpiredSessionMetric
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationMetrics::*)()>(&::Unity::Services::Authentication::AuthenticationMetrics::SendExpiredSessionMetric)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e9799c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendExpiredSessionMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationMetrics.SendClientInvalidStateExceptionMetric
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationMetrics::*)()>(&::Unity::Services::Authentication::AuthenticationMetrics::SendClientInvalidStateExceptionMetric)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e97a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendClientInvalidStateExceptionMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationMetrics.SendClientSessionTokenNotExistsExceptionMetric
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationMetrics::*)()>(&::Unity::Services::Authentication::AuthenticationMetrics::SendClientSessionTokenNotExistsExceptionMetric)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e97b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendClientSessionTokenNotExistsExceptionMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics*& Unity::Services::Authentication::AuthenticationMetrics::__cordl_internal_get_m_Metrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metrics;
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* const& Unity::Services::Authentication::AuthenticationMetrics::__cordl_internal_get_m_Metrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metrics;
}
constexpr void Unity::Services::Authentication::AuthenticationMetrics::__cordl_internal_set_m_Metrics(::Unity::Services::Core::Telemetry::Internal::IMetrics*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Metrics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Authentication::AuthenticationMetrics::_ctor(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  metricsFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metricsFactory);
}
inline void Unity::Services::Authentication::AuthenticationMetrics::SendNetworkErrorMetric()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendNetworkErrorMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationMetrics::SendExpiredSessionMetric()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendExpiredSessionMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationMetrics::SendClientInvalidStateExceptionMetric()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendClientInvalidStateExceptionMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationMetrics::SendClientSessionTokenNotExistsExceptionMetric()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationMetrics*>::get(),
                        "SendClientSessionTokenNotExistsExceptionMetric",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Authentication::AuthenticationMetrics* Unity::Services::Authentication::AuthenticationMetrics::New_ctor(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  metricsFactory)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationMetrics*>(metricsFactory));
}
/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationMetrics"
constexpr  Unity::Services::Authentication::AuthenticationMetrics::operator ::Unity::Services::Authentication::IAuthenticationMetrics*() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationMetrics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationMetrics"
constexpr ::Unity::Services::Authentication::IAuthenticationMetrics* Unity::Services::Authentication::AuthenticationMetrics::i___Unity__Services__Authentication__IAuthenticationMetrics() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationMetrics*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationMetrics::AuthenticationMetrics()   {
}
