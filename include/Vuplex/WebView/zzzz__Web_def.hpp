#pragma once
// IWYU pragma private; include "Vuplex/WebView/Web.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Web)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace Vuplex::WebView::Internal {
class IWebPlugin;
}
namespace Vuplex::WebView::Internal {
class WebPluginFactory;
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
namespace Vuplex::WebView {
class Web___c;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass10_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass11_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass12_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass13_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass8_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass9_0;
}
// Forward declare root types
namespace Vuplex::WebView {
class Web;
}
namespace Vuplex::WebView {
class Web___c;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass10_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass11_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass12_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass13_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass8_0;
}
namespace Vuplex::WebView {
class Web___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Web);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c__DisplayClass10_0);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c__DisplayClass11_0);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c__DisplayClass12_0);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c__DisplayClass13_0);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c__DisplayClass8_0);
MARK_REF_PTR_T(::Vuplex::WebView::Web___c__DisplayClass9_0);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c
class CORDL_TYPE Web___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Vuplex::WebView::Web___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Action_1<::Vuplex::WebView::Internal::IWebPlugin*>*  __9__4_0;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Action_1<::Vuplex::WebView::Internal::IWebPlugin*>*  __9__7_0;

static inline ::Vuplex::WebView::Web___c* New_ctor() ;

/// @brief Method <ClearAllData>b__4_0, addr 0x16e4ad0, size 0xa0, virtual false, abstract: false, final false
inline void _ClearAllData_b__4_0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

/// @brief Method <EnableRemoteDebugging>b__7_0, addr 0x16e4b70, size 0xa0, virtual false, abstract: false, final false
inline void _EnableRemoteDebugging_b__7_0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

/// @brief Method .ctor, addr 0x16e4ac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::WebView::Web___c* getStaticF___9() ;

static inline ::System::Action_1<::Vuplex::WebView::Internal::IWebPlugin*>* getStaticF___9__4_0() ;

static inline ::System::Action_1<::Vuplex::WebView::Internal::IWebPlugin*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::Vuplex::WebView::Web___c*  value) ;

static inline void setStaticF___9__4_0(::System::Action_1<::Vuplex::WebView::Internal::IWebPlugin*>*  value) ;

static inline void setStaticF___9__7_0(::System::Action_1<::Vuplex::WebView::Internal::IWebPlugin*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c(Web___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c(Web___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{193};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c__DisplayClass10_0
class CORDL_TYPE Web___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field ignore, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignore, put=__cordl_internal_set_ignore)) bool  ignore;

static inline ::Vuplex::WebView::Web___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <SetIgnoreCertificateErrors>b__0, addr 0x16e4c10, size 0xb0, virtual false, abstract: false, final false
inline void _SetIgnoreCertificateErrors_b__0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

constexpr bool const& __cordl_internal_get_ignore() const;

constexpr bool& __cordl_internal_get_ignore() ;

constexpr void __cordl_internal_set_ignore(bool  value) ;

/// @brief Method .ctor, addr 0x16e43bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c__DisplayClass10_0(Web___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c__DisplayClass10_0(Web___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{194};

/// @brief Field ignore, offset: 0x10, size: 0x1, def value: None
 bool  ___ignore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Web___c__DisplayClass10_0, ___ignore) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c__DisplayClass11_0
class CORDL_TYPE Web___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

static inline ::Vuplex::WebView::Web___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <SetStorageEnabled>b__0, addr 0x16e4cc0, size 0xb0, virtual false, abstract: false, final false
inline void _SetStorageEnabled_b__0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

/// @brief Method .ctor, addr 0x16e44d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c__DisplayClass11_0(Web___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c__DisplayClass11_0(Web___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{195};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Web___c__DisplayClass11_0, ___enabled) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c__DisplayClass12_0
class CORDL_TYPE Web___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field mobile, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_mobile, put=__cordl_internal_set_mobile)) bool  mobile;

static inline ::Vuplex::WebView::Web___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <SetUserAgent>b__0, addr 0x16e4d70, size 0xb0, virtual false, abstract: false, final false
inline void _SetUserAgent_b__0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

constexpr bool const& __cordl_internal_get_mobile() const;

constexpr bool& __cordl_internal_get_mobile() ;

constexpr void __cordl_internal_set_mobile(bool  value) ;

/// @brief Method .ctor, addr 0x16e45f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c__DisplayClass12_0(Web___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c__DisplayClass12_0(Web___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{196};

/// @brief Field mobile, offset: 0x10, size: 0x1, def value: None
 bool  ___mobile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Web___c__DisplayClass12_0, ___mobile) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c__DisplayClass13_0
class CORDL_TYPE Web___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field userAgent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_userAgent, put=__cordl_internal_set_userAgent)) ::StringW  userAgent;

static inline ::Vuplex::WebView::Web___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <SetUserAgent>b__0, addr 0x16e4e20, size 0xac, virtual false, abstract: false, final false
inline void _SetUserAgent_b__0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

constexpr ::StringW const& __cordl_internal_get_userAgent() const;

constexpr ::StringW& __cordl_internal_get_userAgent() ;

constexpr void __cordl_internal_set_userAgent(::StringW  value) ;

/// @brief Method .ctor, addr 0x16e470c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c__DisplayClass13_0(Web___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c__DisplayClass13_0(Web___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{197};

/// @brief Field userAgent, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___userAgent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Web___c__DisplayClass13_0, ___userAgent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c__DisplayClass8_0
class CORDL_TYPE Web___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

static inline ::Vuplex::WebView::Web___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <SetAutoplayEnabled>b__0, addr 0x16e4ecc, size 0xb0, virtual false, abstract: false, final false
inline void _SetAutoplayEnabled_b__0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

/// @brief Method .ctor, addr 0x16e4184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c__DisplayClass8_0(Web___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c__DisplayClass8_0(Web___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{198};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Web___c__DisplayClass8_0, ___enabled) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web/<>c__DisplayClass9_0
class CORDL_TYPE Web___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

static inline ::Vuplex::WebView::Web___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <SetCameraAndMicrophoneEnabled>b__0, addr 0x16e4f7c, size 0xb0, virtual false, abstract: false, final false
inline void _SetCameraAndMicrophoneEnabled_b__0(::Vuplex::WebView::Internal::IWebPlugin*  p) ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

/// @brief Method .ctor, addr 0x16e42a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web___c__DisplayClass9_0(Web___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web___c__DisplayClass9_0(Web___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{199};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Web___c__DisplayClass9_0, ___enabled) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.Web
class CORDL_TYPE Web : public ::System::Object {
public:
// Declarations
using __c = ::Vuplex::WebView::Web___c;

using __c__DisplayClass10_0 = ::Vuplex::WebView::Web___c__DisplayClass10_0;

using __c__DisplayClass11_0 = ::Vuplex::WebView::Web___c__DisplayClass11_0;

using __c__DisplayClass12_0 = ::Vuplex::WebView::Web___c__DisplayClass12_0;

using __c__DisplayClass13_0 = ::Vuplex::WebView::Web___c__DisplayClass13_0;

using __c__DisplayClass8_0 = ::Vuplex::WebView::Web___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::Vuplex::WebView::Web___c__DisplayClass9_0;

/// @brief Field _pluginFactory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pluginFactory, put=setStaticF__pluginFactory)) ::Vuplex::WebView::Internal::WebPluginFactory*  _pluginFactory;

/// @brief Method ClearAllData, addr 0x16e3e4c, size 0x140, virtual false, abstract: false, final false
static inline void ClearAllData() ;

/// @brief Method CreateMaterial, addr 0x16e4770, size 0x18c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Material>>* CreateMaterial() ;

/// @brief Method CreateMaterial, addr 0x16e48fc, size 0xec, virtual false, abstract: false, final false
static inline void CreateMaterial(::System::Action_1<::UnityW<::UnityEngine::Material>>*  callback) ;

/// @brief Method CreateTexture, addr 0x16e49e8, size 0x8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* CreateTexture(int32_t  width, int32_t  height) ;

/// @brief Method CreateTexture, addr 0x16e49f0, size 0x4, virtual false, abstract: false, final false
static inline void CreateTexture(float_t  width, float_t  height, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*  callback) ;

/// @brief Method CreateVideoMaterial, addr 0x16e49f4, size 0x4, virtual false, abstract: false, final false
static inline void CreateVideoMaterial(::System::Action_1<::UnityW<::UnityEngine::Material>>*  callback) ;

/// @brief Method CreateWebView, addr 0x16e3f8c, size 0xe4, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::IWebView* CreateWebView() ;

/// @brief Method CreateWebView, addr 0x16db47c, size 0xe8, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::IWebView* CreateWebView(::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>  preferredPlugins) ;

/// @brief Method EnableRemoteDebugging, addr 0x16d8100, size 0x140, virtual false, abstract: false, final false
static inline void EnableRemoteDebugging() ;

/// @brief Method SetAutoplayEnabled, addr 0x16e4070, size 0x114, virtual false, abstract: false, final false
static inline void SetAutoplayEnabled(bool  enabled) ;

/// @brief Method SetCameraAndMicrophoneEnabled, addr 0x16e418c, size 0x114, virtual false, abstract: false, final false
static inline void SetCameraAndMicrophoneEnabled(bool  enabled) ;

/// @brief Method SetIgnoreCertificateErrors, addr 0x16e42a8, size 0x114, virtual false, abstract: false, final false
static inline void SetIgnoreCertificateErrors(bool  ignore) ;

/// @brief Method SetPluginFactory, addr 0x16e4714, size 0x5c, virtual false, abstract: false, final false
static inline void SetPluginFactory(::Vuplex::WebView::Internal::WebPluginFactory*  pluginFactory) ;

/// @brief Method SetStorageEnabled, addr 0x16e43c4, size 0x114, virtual false, abstract: false, final false
static inline void SetStorageEnabled(bool  enabled) ;

/// @brief Method SetTouchScreenKeyboardEnabled, addr 0x16e49f8, size 0x4, virtual false, abstract: false, final false
static inline void SetTouchScreenKeyboardEnabled(bool  enabled) ;

/// @brief Method SetUserAgent, addr 0x16e44e0, size 0x114, virtual false, abstract: false, final false
static inline void SetUserAgent(bool  mobile) ;

/// @brief Method SetUserAgent, addr 0x16e45fc, size 0x110, virtual false, abstract: false, final false
static inline void SetUserAgent(::StringW  userAgent) ;

static inline ::Vuplex::WebView::Internal::WebPluginFactory* getStaticF__pluginFactory() ;

/// @brief Method get_CookieManager, addr 0x16e3c88, size 0xe0, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::ICookieManager* get_CookieManager() ;

/// @brief Method get_DefaultPluginType, addr 0x16e3d68, size 0xe4, virtual false, abstract: false, final false
static inline ::Vuplex::WebView::WebPluginType get_DefaultPluginType() ;

static inline void setStaticF__pluginFactory(::Vuplex::WebView::Internal::WebPluginFactory*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Web() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Web", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Web(Web && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Web", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Web(Web const& ) = delete;

/// @brief Field CreateMaterialMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  CreateMaterialMessage{u"Web.CreateMaterial() is now deprecated in v4. Please use IWebView.CreateMaterial() instead: https://developer.vuplex.com/webview/IWebView#CreateMaterial"};

/// @brief Field CreateTextureMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  CreateTextureMessage{u"Web.CreateTexture() has been removed in v4 because IWebView instances now automatically create their own textures. For more details, please see this article: https://support.vuplex.com/articles/v4-changes#init"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Web, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::Web);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web*, "Vuplex.WebView", "Web");
NEED_NO_BOX(::Vuplex::WebView::Web___c);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c*, "Vuplex.WebView", "Web/<>c");
NEED_NO_BOX(::Vuplex::WebView::Web___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c__DisplayClass10_0*, "Vuplex.WebView", "Web/<>c__DisplayClass10_0");
NEED_NO_BOX(::Vuplex::WebView::Web___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c__DisplayClass11_0*, "Vuplex.WebView", "Web/<>c__DisplayClass11_0");
NEED_NO_BOX(::Vuplex::WebView::Web___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c__DisplayClass12_0*, "Vuplex.WebView", "Web/<>c__DisplayClass12_0");
NEED_NO_BOX(::Vuplex::WebView::Web___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c__DisplayClass13_0*, "Vuplex.WebView", "Web/<>c__DisplayClass13_0");
NEED_NO_BOX(::Vuplex::WebView::Web___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c__DisplayClass8_0*, "Vuplex.WebView", "Web/<>c__DisplayClass8_0");
NEED_NO_BOX(::Vuplex::WebView::Web___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Web___c__DisplayClass9_0*, "Vuplex.WebView", "Web/<>c__DisplayClass9_0");
