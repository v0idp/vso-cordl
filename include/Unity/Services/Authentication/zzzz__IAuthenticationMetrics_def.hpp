#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IAuthenticationMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAuthenticationMetrics)
// Forward declare root types
namespace Unity::Services::Authentication {
class IAuthenticationMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::IAuthenticationMetrics);
// Dependencies 
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.IAuthenticationMetrics
class CORDL_TYPE IAuthenticationMetrics {
public:
// Declarations
/// @brief Method SendClientInvalidStateExceptionMetric, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendClientInvalidStateExceptionMetric() ;

/// @brief Method SendClientSessionTokenNotExistsExceptionMetric, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendClientSessionTokenNotExistsExceptionMetric() ;

/// @brief Method SendExpiredSessionMetric, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendExpiredSessionMetric() ;

/// @brief Method SendNetworkErrorMetric, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendNetworkErrorMetric() ;

// Ctor Parameters [CppParam { name: "", ty: "IAuthenticationMetrics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAuthenticationMetrics(IAuthenticationMetrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11530};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::IAuthenticationMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::IAuthenticationMetrics*, "Unity.Services.Authentication", "IAuthenticationMetrics");
