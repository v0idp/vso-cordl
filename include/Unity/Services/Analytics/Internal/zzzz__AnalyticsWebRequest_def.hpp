#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/AnalyticsWebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnalyticsWebRequest)
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class AnalyticsWebRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::AnalyticsWebRequest);
// Dependencies Unity.Services.Analytics.Internal.IWebRequest, UnityEngine.Networking.UnityWebRequest
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.AnalyticsWebRequest
class CORDL_TYPE AnalyticsWebRequest : public ::UnityEngine::Networking::UnityWebRequest {
public:
// Declarations
 __declspec(property(get=get_IsNetworkError)) bool  IsNetworkError;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IWebRequest"
constexpr operator  ::Unity::Services::Analytics::Internal::IWebRequest*() noexcept;

static inline ::Unity::Services::Analytics::Internal::AnalyticsWebRequest* New_ctor(::StringW  url, ::StringW  method) ;

/// @brief Method Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest, addr 0x2e92e84, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest() ;

/// @brief Method Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader, addr 0x2e92e8c, size 0x8, virtual true, abstract: false, final true
inline void Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader(::StringW  key, ::StringW  value) ;

/// @brief Method .ctor, addr 0x2e92e60, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  url, ::StringW  method) ;

/// @brief Method get_IsNetworkError, addr 0x2e92e68, size 0x1c, virtual true, abstract: false, final true
inline bool get_IsNetworkError() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IWebRequest"
constexpr ::Unity::Services::Analytics::Internal::IWebRequest* i___Unity__Services__Analytics__Internal__IWebRequest() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsWebRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsWebRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsWebRequest(AnalyticsWebRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsWebRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsWebRequest(AnalyticsWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11896};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::AnalyticsWebRequest, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::AnalyticsWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::AnalyticsWebRequest*, "Unity.Services.Analytics.Internal", "AnalyticsWebRequest");
