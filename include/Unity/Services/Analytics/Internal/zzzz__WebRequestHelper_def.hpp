#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/WebRequestHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequestHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestHelper)
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::Services::Analytics::Internal {
class IWebRequest;
}
namespace Unity::Services::Analytics::Internal {
class WebRequestHelper___c__DisplayClass2_0;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class WebRequestHelper;
}
namespace Unity::Services::Analytics::Internal {
class WebRequestHelper___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::WebRequestHelper);
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0);
// Dependencies System.Object
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.WebRequestHelper/<>c__DisplayClass2_0
class CORDL_TYPE WebRequestHelper___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onCompleted, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCompleted, put=__cordl_internal_set_onCompleted)) ::System::Action_1<int64_t>*  onCompleted;

/// @brief Field requestOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestOp, put=__cordl_internal_set_requestOp)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  requestOp;

static inline ::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <SendWebRequest>b__0, addr 0x2e930e4, size 0x44, virtual false, abstract: false, final false
inline void _SendWebRequest_b__0(::UnityEngine::AsyncOperation*  _p0_) ;

constexpr ::System::Action_1<int64_t>* const& __cordl_internal_get_onCompleted() const;

constexpr ::System::Action_1<int64_t>*& __cordl_internal_get_onCompleted() ;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_requestOp() const;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_requestOp() ;

constexpr void __cordl_internal_set_onCompleted(::System::Action_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_requestOp(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value) ;

/// @brief Method .ctor, addr 0x2e930dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestHelper___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestHelper___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestHelper___c__DisplayClass2_0(WebRequestHelper___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestHelper___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestHelper___c__DisplayClass2_0(WebRequestHelper___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11897};

/// @brief Field onCompleted, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<int64_t>*  ___onCompleted;

/// @brief Field requestOp, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  ___requestOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0, ___onCompleted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0, ___requestOp) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
// Dependencies System.Object, Unity.Services.Analytics.Internal.IWebRequestHelper
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.WebRequestHelper
class CORDL_TYPE WebRequestHelper : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0;

/// @brief Field k_ClientIdHeaderValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_ClientIdHeaderValue, put=__cordl_internal_set_k_ClientIdHeaderValue)) ::StringW  k_ClientIdHeaderValue;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IWebRequestHelper"
constexpr operator  ::Unity::Services::Analytics::Internal::IWebRequestHelper*() noexcept;

/// @brief Method CreateWebRequest, addr 0x2e92e94, size 0x110, virtual true, abstract: false, final true
inline ::Unity::Services::Analytics::Internal::IWebRequest* CreateWebRequest(::StringW  url, ::StringW  method, ::ArrayW<uint8_t,::Array<uint8_t>*>  postBytes) ;

static inline ::Unity::Services::Analytics::Internal::WebRequestHelper* New_ctor() ;

/// @brief Method SendWebRequest, addr 0x2e92fa4, size 0x138, virtual true, abstract: false, final true
inline void SendWebRequest(::Unity::Services::Analytics::Internal::IWebRequest*  request, ::System::Action_1<int64_t>*  onCompleted) ;

constexpr ::StringW const& __cordl_internal_get_k_ClientIdHeaderValue() const;

constexpr ::StringW& __cordl_internal_get_k_ClientIdHeaderValue() ;

constexpr void __cordl_internal_set_k_ClientIdHeaderValue(::StringW  value) ;

/// @brief Method .ctor, addr 0x2e8b10c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IWebRequestHelper"
constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper* i___Unity__Services__Analytics__Internal__IWebRequestHelper() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestHelper(WebRequestHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestHelper(WebRequestHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11898};

/// @brief Field k_ClientIdHeaderValue, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___k_ClientIdHeaderValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::Internal::WebRequestHelper, ___k_ClientIdHeaderValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::WebRequestHelper, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::WebRequestHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::WebRequestHelper*, "Unity.Services.Analytics.Internal", "WebRequestHelper");
NEED_NO_BOX(::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::WebRequestHelper___c__DisplayClass2_0*, "Unity.Services.Analytics.Internal", "WebRequestHelper/<>c__DisplayClass2_0");
