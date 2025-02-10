#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/IWebPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWebPlugin)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Material;
}
namespace Vuplex::WebView {
class ICookieManager;
}
namespace Vuplex::WebView {
class IWebView;
}
namespace Vuplex::WebView {
struct WebPluginType;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class IWebPlugin;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::IWebPlugin);
// Dependencies 
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.IWebPlugin
class CORDL_TYPE IWebPlugin {
public:
// Declarations
 __declspec(property(get=get_CookieManager)) ::Vuplex::WebView::ICookieManager*  CookieManager;

 __declspec(property(get=get_Type)) ::Vuplex::WebView::WebPluginType  Type;

/// @brief Method ClearAllData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearAllData() ;

/// @brief Method CreateMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CreateMaterial(::System::Action_1<::UnityW<::UnityEngine::Material>>*  callback) ;

/// @brief Method CreateWebView, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Vuplex::WebView::IWebView* CreateWebView() ;

/// @brief Method EnableRemoteDebugging, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnableRemoteDebugging() ;

/// @brief Method SetAutoplayEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAutoplayEnabled(bool  enabled) ;

/// @brief Method SetCameraAndMicrophoneEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetCameraAndMicrophoneEnabled(bool  enabled) ;

/// @brief Method SetIgnoreCertificateErrors, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetIgnoreCertificateErrors(bool  ignore) ;

/// @brief Method SetStorageEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetStorageEnabled(bool  enabled) ;

/// @brief Method SetUserAgent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUserAgent(bool  mobile) ;

/// @brief Method SetUserAgent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUserAgent(::StringW  userAgent) ;

/// @brief Method get_CookieManager, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Vuplex::WebView::ICookieManager* get_CookieManager() ;

/// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Vuplex::WebView::WebPluginType get_Type() ;

// Ctor Parameters [CppParam { name: "", ty: "IWebPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebPlugin(IWebPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::IWebPlugin);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::IWebPlugin*, "Vuplex.WebView.Internal", "IWebPlugin");
