#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationMetrics_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationMetrics)
namespace Unity::Services::Core::Telemetry::Internal {
class IMetricsFactory;
}
namespace Unity::Services::Core::Telemetry::Internal {
class IMetrics;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class AuthenticationMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::AuthenticationMetrics);
// Dependencies System.Object, Unity.Services.Authentication.IAuthenticationMetrics
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.AuthenticationMetrics
class CORDL_TYPE AuthenticationMetrics : public ::System::Object {
public:
// Declarations
/// @brief Field m_Metrics, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metrics, put=__cordl_internal_set_m_Metrics)) ::Unity::Services::Core::Telemetry::Internal::IMetrics*  m_Metrics;

/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationMetrics"
constexpr operator  ::Unity::Services::Authentication::IAuthenticationMetrics*() noexcept;

static inline ::Unity::Services::Authentication::AuthenticationMetrics* New_ctor(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  metricsFactory) ;

/// @brief Method SendClientInvalidStateExceptionMetric, addr 0x2e97a60, size 0xc4, virtual true, abstract: false, final true
inline void SendClientInvalidStateExceptionMetric() ;

/// @brief Method SendClientSessionTokenNotExistsExceptionMetric, addr 0x2e97b24, size 0xc4, virtual true, abstract: false, final true
inline void SendClientSessionTokenNotExistsExceptionMetric() ;

/// @brief Method SendExpiredSessionMetric, addr 0x2e9799c, size 0xc4, virtual true, abstract: false, final true
inline void SendExpiredSessionMetric() ;

/// @brief Method SendNetworkErrorMetric, addr 0x2e978d8, size 0xc4, virtual true, abstract: false, final true
inline void SendNetworkErrorMetric() ;

constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics* const& __cordl_internal_get_m_Metrics() const;

constexpr ::Unity::Services::Core::Telemetry::Internal::IMetrics*& __cordl_internal_get_m_Metrics() ;

constexpr void __cordl_internal_set_m_Metrics(::Unity::Services::Core::Telemetry::Internal::IMetrics*  value) ;

/// @brief Method .ctor, addr 0x2e96490, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Telemetry::Internal::IMetricsFactory*  metricsFactory) ;

/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationMetrics"
constexpr ::Unity::Services::Authentication::IAuthenticationMetrics* i___Unity__Services__Authentication__IAuthenticationMetrics() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationMetrics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationMetrics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationMetrics(AuthenticationMetrics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationMetrics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationMetrics(AuthenticationMetrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11529};

/// @brief Field m_Metrics, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Telemetry::Internal::IMetrics*  ___m_Metrics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Authentication::AuthenticationMetrics, ___m_Metrics) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::AuthenticationMetrics, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::AuthenticationMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::AuthenticationMetrics*, "Unity.Services.Authentication", "AuthenticationMetrics");
