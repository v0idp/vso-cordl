#pragma once
// IWYU pragma private; include "Vuplex/WebView/AndroidWebPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__IWebPlugin_def.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidWebPlugin)
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
namespace Vuplex::WebView {
class AndroidWebPlugin;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::AndroidWebPlugin);
// Dependencies UnityEngine.MonoBehaviour, Vuplex.WebView.Internal.IWebPlugin, Vuplex.WebView.WebPluginType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AndroidWebPlugin
class CORDL_TYPE AndroidWebPlugin : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CookieManager)) ::Vuplex::WebView::ICookieManager*  CookieManager;

 __declspec(property(get=get_Type)) ::Vuplex::WebView::WebPluginType  Type;

/// @brief Field <CookieManager>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CookieManager_k__BackingField, put=__cordl_internal_set__CookieManager_k__BackingField)) ::Vuplex::WebView::ICookieManager*  _CookieManager_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::Vuplex::WebView::WebPluginType  _Type_k__BackingField;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Vuplex::WebView::AndroidWebPlugin>  _instance;

/// @brief Convert operator to "::Vuplex::WebView::Internal::IWebPlugin"
constexpr operator  ::Vuplex::WebView::Internal::IWebPlugin*() noexcept;

/// @brief Method ClearAllData, addr 0x16ca7b4, size 0x4c, virtual true, abstract: false, final true
inline void ClearAllData() ;

/// @brief Method CreateMaterial, addr 0x16ca8d0, size 0x70, virtual true, abstract: false, final true
inline void CreateMaterial(::System::Action_1<::UnityW<::UnityEngine::Material>>*  callback) ;

/// @brief Method CreateWebView, addr 0x16ca940, size 0x4c, virtual true, abstract: false, final true
inline ::Vuplex::WebView::IWebView* CreateWebView() ;

/// @brief Method EnableRemoteDebugging, addr 0x16caa00, size 0x50, virtual true, abstract: false, final true
inline void EnableRemoteDebugging() ;

static inline ::Vuplex::WebView::AndroidWebPlugin* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x16cb35c, size 0x9c, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  isPaused) ;

/// @brief Method SetAutoplayEnabled, addr 0x16cab84, size 0x54, virtual true, abstract: false, final true
inline void SetAutoplayEnabled(bool  enabled) ;

/// @brief Method SetCameraAndMicrophoneEnabled, addr 0x16cacdc, size 0x54, virtual true, abstract: false, final true
inline void SetCameraAndMicrophoneEnabled(bool  enabled) ;

/// @brief Method SetIgnoreCertificateErrors, addr 0x16cae34, size 0x54, virtual true, abstract: false, final true
inline void SetIgnoreCertificateErrors(bool  ignore) ;

/// @brief Method SetStorageEnabled, addr 0x16caf8c, size 0x54, virtual true, abstract: false, final true
inline void SetStorageEnabled(bool  enabled) ;

/// @brief Method SetUserAgent, addr 0x16cb0e4, size 0x54, virtual true, abstract: false, final true
inline void SetUserAgent(bool  mobile) ;

/// @brief Method SetUserAgent, addr 0x16cb23c, size 0x54, virtual true, abstract: false, final true
inline void SetUserAgent(::StringW  userAgent) ;

constexpr ::Vuplex::WebView::ICookieManager* const& __cordl_internal_get__CookieManager_k__BackingField() const;

constexpr ::Vuplex::WebView::ICookieManager*& __cordl_internal_get__CookieManager_k__BackingField() ;

constexpr ::Vuplex::WebView::WebPluginType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::Vuplex::WebView::WebPluginType& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__CookieManager_k__BackingField(::Vuplex::WebView::ICookieManager*  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::Vuplex::WebView::WebPluginType  value) ;

/// @brief Method .ctor, addr 0x16cb668, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Vuplex::WebView::AndroidWebPlugin> getStaticF__instance() ;

/// @brief Method get_CookieManager, addr 0x16ca508, size 0x8, virtual true, abstract: false, final true
inline ::Vuplex::WebView::ICookieManager* get_CookieManager() ;

/// @brief Method get_Instance, addr 0x16ca510, size 0x198, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::AndroidWebPlugin> get_Instance() ;

/// @brief Method get_Type, addr 0x16ca7ac, size 0x8, virtual true, abstract: false, final true
inline ::Vuplex::WebView::WebPluginType get_Type() ;

/// @brief Convert to "::Vuplex::WebView::Internal::IWebPlugin"
constexpr ::Vuplex::WebView::Internal::IWebPlugin* i___Vuplex__WebView__Internal__IWebPlugin() noexcept;

static inline void setStaticF__instance(::UnityW<::Vuplex::WebView::AndroidWebPlugin>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidWebPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebPlugin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidWebPlugin(AndroidWebPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidWebPlugin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidWebPlugin(AndroidWebPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{99};

/// @brief Field <CookieManager>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Vuplex::WebView::ICookieManager*  ____CookieManager_k__BackingField;

/// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Vuplex::WebView::WebPluginType  ____Type_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AndroidWebPlugin, ____CookieManager_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AndroidWebPlugin, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AndroidWebPlugin, 0x30>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::AndroidWebPlugin);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AndroidWebPlugin*, "Vuplex.WebView", "AndroidWebPlugin");
