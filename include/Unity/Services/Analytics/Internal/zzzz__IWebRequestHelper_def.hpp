#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IWebRequestHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWebRequestHelper)
namespace System {
template<typename T>
class Action_1;
}
namespace Unity::Services::Analytics::Internal {
class IWebRequest;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IWebRequestHelper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IWebRequestHelper);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IWebRequestHelper
class CORDL_TYPE IWebRequestHelper {
public:
// Declarations
/// @brief Method CreateWebRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Unity::Services::Analytics::Internal::IWebRequest* CreateWebRequest(::StringW  url, ::StringW  method, ::ArrayW<uint8_t,::Array<uint8_t>*>  postBytes) ;

/// @brief Method SendWebRequest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendWebRequest(::Unity::Services::Analytics::Internal::IWebRequest*  request, ::System::Action_1<int64_t>*  onCompleted) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebRequestHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebRequestHelper(IWebRequestHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IWebRequestHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IWebRequestHelper*, "Unity.Services.Analytics.Internal", "IWebRequestHelper");
