#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IWebRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWebRequest)
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IWebRequest;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IWebRequest);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IWebRequest
class CORDL_TYPE IWebRequest {
public:
// Declarations
 __declspec(property(get=get_IsNetworkError)) bool  IsNetworkError;

/// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method SendWebRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest() ;

/// @brief Method SetRequestHeader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRequestHeader(::StringW  key, ::StringW  value) ;

/// @brief Method get_IsNetworkError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsNetworkError() ;

// Ctor Parameters [CppParam { name: "", ty: "IWebRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebRequest(IWebRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11894};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IWebRequest*, "Unity.Services.Analytics.Internal", "IWebRequest");
