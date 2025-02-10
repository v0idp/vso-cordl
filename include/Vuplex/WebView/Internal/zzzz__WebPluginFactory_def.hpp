#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/WebPluginFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebPluginFactory)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Vuplex::WebView::Internal {
class IWebPlugin;
}
namespace Vuplex::WebView {
struct WebPluginType;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class WebPluginFactory;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::WebPluginFactory);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.WebPluginFactory
class CORDL_TYPE WebPluginFactory : public ::System::Object {
public:
// Declarations
/// @brief Field _allPlugins, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allPlugins, put=setStaticF__allPlugins)) ::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>*  _allPlugins;

/// @brief Field _androidGeckoPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__androidGeckoPlugin, put=setStaticF__androidGeckoPlugin)) ::Vuplex::WebView::Internal::IWebPlugin*  _androidGeckoPlugin;

/// @brief Field _androidPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__androidPlugin, put=setStaticF__androidPlugin)) ::Vuplex::WebView::Internal::IWebPlugin*  _androidPlugin;

/// @brief Field _iosPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__iosPlugin, put=setStaticF__iosPlugin)) ::Vuplex::WebView::Internal::IWebPlugin*  _iosPlugin;

/// @brief Field _mockWarningLogged, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__mockWarningLogged, put=__cordl_internal_set__mockWarningLogged)) bool  _mockWarningLogged;

/// @brief Field _standalonePlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__standalonePlugin, put=setStaticF__standalonePlugin)) ::Vuplex::WebView::Internal::IWebPlugin*  _standalonePlugin;

/// @brief Field _uwpPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__uwpPlugin, put=setStaticF__uwpPlugin)) ::Vuplex::WebView::Internal::IWebPlugin*  _uwpPlugin;

/// @brief Field _webGLPlugin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__webGLPlugin, put=setStaticF__webGLPlugin)) ::Vuplex::WebView::Internal::IWebPlugin*  _webGLPlugin;

/// @brief Method GetAllPlugins, addr 0x17c3704, size 0x70, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Vuplex::WebView::Internal::IWebPlugin*>* GetAllPlugins() ;

/// @brief Method GetDefaultPlugin, addr 0x17c3774, size 0x178, virtual true, abstract: false, final false
inline ::Vuplex::WebView::Internal::IWebPlugin* GetDefaultPlugin(::ArrayW<::Vuplex::WebView::WebPluginType,::Array<::Vuplex::WebView::WebPluginType>*>  preferredPlugins) ;

static inline ::Vuplex::WebView::Internal::WebPluginFactory* New_ctor() ;

/// @brief Method RegisterAndroidGeckoPlugin, addr 0x17c3d00, size 0x60, virtual false, abstract: false, final false
static inline void RegisterAndroidGeckoPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

/// @brief Method RegisterAndroidPlugin, addr 0x17c3c10, size 0x60, virtual false, abstract: false, final false
static inline void RegisterAndroidPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

/// @brief Method RegisterIOSPlugin, addr 0x17c3d60, size 0x60, virtual false, abstract: false, final false
static inline void RegisterIOSPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

/// @brief Method RegisterStandalonePlugin, addr 0x17c3e80, size 0x60, virtual false, abstract: false, final false
static inline void RegisterStandalonePlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

/// @brief Method RegisterUwpPlugin, addr 0x17c3dc0, size 0x60, virtual false, abstract: false, final false
static inline void RegisterUwpPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

/// @brief Method RegisterWebGLPlugin, addr 0x17c3e20, size 0x60, virtual false, abstract: false, final false
static inline void RegisterWebGLPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

constexpr bool const& __cordl_internal_get__mockWarningLogged() const;

constexpr bool& __cordl_internal_get__mockWarningLogged() ;

constexpr void __cordl_internal_set__mockWarningLogged(bool  value) ;

/// @brief Method _addPlugin, addr 0x17c3c70, size 0x90, virtual false, abstract: false, final false
static inline void _addPlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin) ;

/// @brief Method _choosePlugin, addr 0x17c38ec, size 0x324, virtual false, abstract: false, final false
inline ::Vuplex::WebView::Internal::IWebPlugin* _choosePlugin(::Vuplex::WebView::Internal::IWebPlugin*  plugin, ::StringW  buildPlatform, ::StringW  packageName, ::StringW  storeUrlPath) ;

/// @brief Method .ctor, addr 0x17c4038, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _getMoreInfoText, addr 0x17c3ee0, size 0x6c, virtual false, abstract: false, final false
inline ::StringW _getMoreInfoText(::StringW  storeUrlPath) ;

/// @brief Method _logMockWarningOnce, addr 0x17c3f4c, size 0xec, virtual false, abstract: false, final false
inline void _logMockWarningOnce(::StringW  reason) ;

static inline ::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>* getStaticF__allPlugins() ;

static inline ::Vuplex::WebView::Internal::IWebPlugin* getStaticF__androidGeckoPlugin() ;

static inline ::Vuplex::WebView::Internal::IWebPlugin* getStaticF__androidPlugin() ;

static inline ::Vuplex::WebView::Internal::IWebPlugin* getStaticF__iosPlugin() ;

static inline ::Vuplex::WebView::Internal::IWebPlugin* getStaticF__standalonePlugin() ;

static inline ::Vuplex::WebView::Internal::IWebPlugin* getStaticF__uwpPlugin() ;

static inline ::Vuplex::WebView::Internal::IWebPlugin* getStaticF__webGLPlugin() ;

static inline void setStaticF__allPlugins(::System::Collections::Generic::HashSet_1<::Vuplex::WebView::Internal::IWebPlugin*>*  value) ;

static inline void setStaticF__androidGeckoPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value) ;

static inline void setStaticF__androidPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value) ;

static inline void setStaticF__iosPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value) ;

static inline void setStaticF__standalonePlugin(::Vuplex::WebView::Internal::IWebPlugin*  value) ;

static inline void setStaticF__uwpPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value) ;

static inline void setStaticF__webGLPlugin(::Vuplex::WebView::Internal::IWebPlugin*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebPluginFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebPluginFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebPluginFactory(WebPluginFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebPluginFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebPluginFactory(WebPluginFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{267};

/// @brief Field _mockWarningLogged, offset: 0x10, size: 0x1, def value: None
 bool  ____mockWarningLogged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::WebPluginFactory, ____mockWarningLogged) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::WebPluginFactory, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::WebPluginFactory);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::WebPluginFactory*, "Vuplex.WebView.Internal", "WebPluginFactory");
