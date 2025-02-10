#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWebView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IWebView)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace Vuplex::WebView {
class ConsoleMessageEventArgs;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
class FocusedInputFieldChangedEventArgs;
}
namespace Vuplex::WebView {
class LoadFailedEventArgs;
}
namespace Vuplex::WebView {
class ProgressChangedEventArgs;
}
namespace Vuplex::WebView {
class TerminatedEventArgs;
}
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
namespace Vuplex::WebView {
struct WebPluginType;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWebView;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWebView);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWebView
class CORDL_TYPE IWebView {
public:
// Declarations
 __declspec(property(get=get_IsDisposed)) bool  IsDisposed;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_PageLoadScripts)) ::System::Collections::Generic::List_1<::StringW>*  PageLoadScripts;

 __declspec(property(get=get_PluginType)) ::Vuplex::WebView::WebPluginType  PluginType;

 __declspec(property(get=get_Resolution)) float_t  Resolution;

 __declspec(property(get=get_Size)) ::UnityEngine::Vector2Int  Size;

 __declspec(property(get=get_SizeInPixels)) ::UnityEngine::Vector2  SizeInPixels;

 __declspec(property(get=get_Texture)) ::UnityW<::UnityEngine::Texture2D>  Texture;

 __declspec(property(get=get_Title)) ::StringW  Title;

 __declspec(property(get=get_Url)) ::StringW  Url;

 __declspec(property(get=get_VideoTexture)) ::UnityW<::UnityEngine::Texture2D>  VideoTexture;

/// @brief Method Blur, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Blur() ;

/// @brief Method CanGoBack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CanGoBack() ;

/// @brief Method CanGoBack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CanGoBack(::System::Action_1<bool>*  callback) ;

/// @brief Method CanGoForward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CanGoForward() ;

/// @brief Method CanGoForward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CanGoForward(::System::Action_1<bool>*  callback) ;

/// @brief Method CaptureScreenshot, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* CaptureScreenshot() ;

/// @brief Method CaptureScreenshot, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CaptureScreenshot(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method Click, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Click(::UnityEngine::Vector2  normalizedPoint, bool  preventStealingFocus) ;

/// @brief Method Click, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Click(int32_t  xInPixels, int32_t  yInPixels, bool  preventStealingFocus) ;

/// @brief Method Copy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Copy() ;

/// @brief Method CreateMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> CreateMaterial() ;

/// @brief Method Cut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Cut() ;

/// @brief Method DisableViewUpdates, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DisableViewUpdates() ;

/// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnableViewUpdates, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnableViewUpdates() ;

/// @brief Method ExecuteJavaScript, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ExecuteJavaScript(::StringW  javaScript) ;

/// @brief Method ExecuteJavaScript, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ExecuteJavaScript(::StringW  javaScript, ::System::Action_1<::StringW>*  callback) ;

/// @brief Method Focus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Focus() ;

/// @brief Method GetRawTextureData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetRawTextureData(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method GoBack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GoBack() ;

/// @brief Method GoForward, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GoForward() ;

/// @brief Method HandleKeyboardInput, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleKeyboardInput(::StringW  key) ;

/// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* Init(int32_t  width, int32_t  height) ;

/// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height) ;

/// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height, ::UnityEngine::Texture2D*  videoTexture) ;

/// @brief Method LoadHtml, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadHtml(::StringW  html) ;

/// @brief Method LoadUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url) ;

/// @brief Method LoadUrl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders) ;

/// @brief Method NormalizedToPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2Int NormalizedToPoint(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method Paste, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Paste() ;

/// @brief Method PointToNormalized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 PointToNormalized(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method PostMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PostMessage(::StringW  data) ;

/// @brief Method Reload, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reload() ;

/// @brief Method Resize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Resize(int32_t  width, int32_t  height) ;

/// @brief Method Scroll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Scroll(::UnityEngine::Vector2  normalizedScrollDelta) ;

/// @brief Method Scroll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Scroll(::UnityEngine::Vector2  normalizedScrollDelta, ::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method Scroll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Scroll(int32_t  scrollDeltaXInPixels, int32_t  scrollDeltaYInPixels) ;

/// @brief Method SelectAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SelectAll() ;

/// @brief Method SendKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendKey(::StringW  key) ;

/// @brief Method SetDefaultBackgroundEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetDefaultBackgroundEnabled(bool  enabled) ;

/// @brief Method SetFocused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFocused(bool  focused) ;

/// @brief Method SetRenderingEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRenderingEnabled(bool  enabled) ;

/// @brief Method SetResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetResolution(float_t  pixelsPerUnityUnit) ;

/// @brief Method StopLoad, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopLoad() ;

/// @brief Method WaitForNextPageLoadToFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForNextPageLoadToFinish() ;

/// @brief Method ZoomIn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ZoomIn() ;

/// @brief Method ZoomOut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ZoomOut() ;

/// @brief Method add_CloseRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_CloseRequested(::System::EventHandler*  value) ;

/// @brief Method add_ConsoleMessageLogged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

/// @brief Method add_FocusChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

/// @brief Method add_FocusedInputFieldChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

/// @brief Method add_LoadFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

/// @brief Method add_LoadProgressChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

/// @brief Method add_MessageEmitted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_PageLoadFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_PageLoadFailed(::System::EventHandler*  value) ;

/// @brief Method add_Terminated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

/// @brief Method add_TitleChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_UrlChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

/// @brief Method add_VideoRectChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

/// @brief Method get_IsDisposed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsDisposed() ;

/// @brief Method get_IsInitialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_PageLoadScripts, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_PageLoadScripts() ;

/// @brief Method get_PluginType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Vuplex::WebView::WebPluginType get_PluginType() ;

/// @brief Method get_Resolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Resolution() ;

/// @brief Method get_Size, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2Int get_Size() ;

/// @brief Method get_SizeInPixels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_SizeInPixels() ;

/// @brief Method get_Texture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_Texture() ;

/// @brief Method get_Title, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Title() ;

/// @brief Method get_Url, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Url() ;

/// @brief Method get_VideoTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_VideoTexture() ;

/// @brief Method remove_CloseRequested, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_CloseRequested(::System::EventHandler*  value) ;

/// @brief Method remove_ConsoleMessageLogged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

/// @brief Method remove_FocusChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

/// @brief Method remove_FocusedInputFieldChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

/// @brief Method remove_LoadFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

/// @brief Method remove_LoadProgressChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

/// @brief Method remove_MessageEmitted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_PageLoadFailed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_PageLoadFailed(::System::EventHandler*  value) ;

/// @brief Method remove_Terminated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

/// @brief Method remove_TitleChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_UrlChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

/// @brief Method remove_VideoRectChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWebView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWebView(IWebView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWebView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWebView*, "Vuplex.WebView", "IWebView");
