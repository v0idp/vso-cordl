#pragma once
// IWYU pragma private; include "Vuplex/WebView/MockWebView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "Vuplex/WebView/zzzz__IWebView_def.hpp"
#include "Vuplex/WebView/zzzz__WebPluginType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockWebView)
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
class TaskCompletionSource_1;
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
class Cookie;
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
class MockWebView;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::MockWebView);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rect, UnityEngine.Vector2Int, Vuplex.WebView.IWebView, Vuplex.WebView.WebPluginType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.MockWebView
class CORDL_TYPE MockWebView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CloseRequested, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CloseRequested, put=__cordl_internal_set_CloseRequested)) ::System::EventHandler*  CloseRequested;

/// @brief Field ConsoleMessageLogged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConsoleMessageLogged, put=__cordl_internal_set_ConsoleMessageLogged)) ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  ConsoleMessageLogged;

/// @brief Field FocusChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FocusChanged, put=__cordl_internal_set_FocusChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  FocusChanged;

/// @brief Field FocusedInputFieldChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FocusedInputFieldChanged, put=__cordl_internal_set_FocusedInputFieldChanged)) ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  FocusedInputFieldChanged;

 __declspec(property(get=get_IsDisposed, put=set_IsDisposed)) bool  IsDisposed;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

/// @brief Field LoadFailed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoadFailed, put=__cordl_internal_set_LoadFailed)) ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  LoadFailed;

/// @brief Field LoadProgressChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoadProgressChanged, put=__cordl_internal_set_LoadProgressChanged)) ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  LoadProgressChanged;

/// @brief Field MessageEmitted, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessageEmitted, put=__cordl_internal_set_MessageEmitted)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  MessageEmitted;

/// @brief Field PageLoadFailed, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PageLoadFailed, put=__cordl_internal_set_PageLoadFailed)) ::System::EventHandler*  PageLoadFailed;

 __declspec(property(get=get_PageLoadScripts)) ::System::Collections::Generic::List_1<::StringW>*  PageLoadScripts;

 __declspec(property(get=get_PluginType)) ::Vuplex::WebView::WebPluginType  PluginType;

 __declspec(property(get=get_Resolution)) float_t  Resolution;

 __declspec(property(get=get_Size, put=set_Size)) ::UnityEngine::Vector2Int  Size;

 __declspec(property(get=get_SizeInPixels)) ::UnityEngine::Vector2  SizeInPixels;

/// @brief Field Terminated, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Terminated, put=__cordl_internal_set_Terminated)) ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  Terminated;

 __declspec(property(get=get_Texture, put=set_Texture)) ::UnityW<::UnityEngine::Texture2D>  Texture;

 __declspec(property(get=get_Title, put=set_Title)) ::StringW  Title;

/// @brief Field TitleChanged, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleChanged, put=__cordl_internal_set_TitleChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  TitleChanged;

 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

/// @brief Field UrlChanged, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_UrlChanged, put=__cordl_internal_set_UrlChanged)) ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  UrlChanged;

/// @brief Field VideoRectChanged, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_VideoRectChanged, put=__cordl_internal_set_VideoRectChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  VideoRectChanged;

 __declspec(property(get=get_VideoTexture)) ::UnityW<::UnityEngine::Texture2D>  VideoTexture;

/// @brief Field <IsDisposed>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDisposed_k__BackingField, put=__cordl_internal_set__IsDisposed_k__BackingField)) bool  _IsDisposed_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <PageLoadScripts>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__PageLoadScripts_k__BackingField, put=__cordl_internal_set__PageLoadScripts_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _PageLoadScripts_k__BackingField;

/// @brief Field <PluginType>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__PluginType_k__BackingField, put=__cordl_internal_set__PluginType_k__BackingField)) ::Vuplex::WebView::WebPluginType  _PluginType_k__BackingField;

/// @brief Field <Resolution>k__BackingField, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution_k__BackingField, put=__cordl_internal_set__Resolution_k__BackingField)) float_t  _Resolution_k__BackingField;

/// @brief Field <Size>k__BackingField, offset 0x84, size 0x8 
 __declspec(property(get=__cordl_internal_get__Size_k__BackingField, put=__cordl_internal_set__Size_k__BackingField)) ::UnityEngine::Vector2Int  _Size_k__BackingField;

/// @brief Field <Texture>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Texture_k__BackingField, put=__cordl_internal_set__Texture_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _Texture_k__BackingField;

/// @brief Field <Title>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Title_k__BackingField, put=__cordl_internal_set__Title_k__BackingField)) ::StringW  _Title_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

/// @brief Field <VideoTexture>k__BackingField, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__VideoTexture_k__BackingField, put=__cordl_internal_set__VideoTexture_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _VideoTexture_k__BackingField;

/// @brief Field _moreDetailsClickRect, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get__moreDetailsClickRect, put=__cordl_internal_set__moreDetailsClickRect)) ::UnityEngine::Rect  _moreDetailsClickRect;

/// @brief Field _pageLoadFinishedTaskSource, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageLoadFinishedTaskSource, put=__cordl_internal_set__pageLoadFinishedTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _pageLoadFinishedTaskSource;

/// @brief Convert operator to "::Vuplex::WebView::IWebView"
constexpr operator  ::Vuplex::WebView::IWebView*() noexcept;

/// @brief Method Blur, addr 0x16e3520, size 0x4, virtual true, abstract: false, final true
inline void Blur() ;

/// @brief Method CanGoBack, addr 0x16e1894, size 0x84, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<bool>* CanGoBack() ;

/// @brief Method CanGoBack, addr 0x16e3524, size 0x4, virtual true, abstract: false, final true
inline void CanGoBack(::System::Action_1<bool>*  callback) ;

/// @brief Method CanGoForward, addr 0x16e1970, size 0x84, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<bool>* CanGoForward() ;

/// @brief Method CanGoForward, addr 0x16e3528, size 0x4, virtual true, abstract: false, final true
inline void CanGoForward(::System::Action_1<bool>*  callback) ;

/// @brief Method CaptureScreenshot, addr 0x16e19f4, size 0xb4, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* CaptureScreenshot() ;

/// @brief Method CaptureScreenshot, addr 0x16e352c, size 0x4, virtual true, abstract: false, final true
inline void CaptureScreenshot(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method Click, addr 0x16e1d20, size 0x16c, virtual true, abstract: false, final true
inline void Click(::UnityEngine::Vector2  point, bool  preventStealingFocus) ;

/// @brief Method Click, addr 0x16e1aa8, size 0x278, virtual true, abstract: false, final true
inline void Click(int32_t  xInPixels, int32_t  yInPixels, bool  preventStealingFocus) ;

/// @brief Method Copy, addr 0x16e1f58, size 0x40, virtual true, abstract: false, final true
inline void Copy() ;

/// @brief Method CreateMaterial, addr 0x16e1f98, size 0x178, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Material> CreateMaterial() ;

/// @brief Method Cut, addr 0x16e2110, size 0x40, virtual true, abstract: false, final true
inline void Cut() ;

/// @brief Method DeleteCookies, addr 0x16e01f0, size 0x178, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* DeleteCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method DisableViewUpdates, addr 0x16e3530, size 0x4, virtual true, abstract: false, final true
inline void DisableViewUpdates() ;

/// @brief Method Dispose, addr 0x16e2150, size 0xcc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnableViewUpdates, addr 0x16e3534, size 0x4, virtual true, abstract: false, final true
inline void EnableViewUpdates() ;

/// @brief Method ExecuteJavaScript, addr 0x16e221c, size 0xe8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* ExecuteJavaScript(::StringW  javaScript) ;

/// @brief Method ExecuteJavaScript, addr 0x16e2304, size 0xb0, virtual true, abstract: false, final true
inline void ExecuteJavaScript(::StringW  javaScript, ::System::Action_1<::StringW>*  callback) ;

/// @brief Method Focus, addr 0x16e3538, size 0x4, virtual true, abstract: false, final true
inline void Focus() ;

/// @brief Method GetCookies, addr 0x16e0374, size 0x1e0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::ArrayW<::Vuplex::WebView::Cookie*,::Array<::Vuplex::WebView::Cookie*>*>>* GetCookies(::StringW  url, ::StringW  cookieName) ;

/// @brief Method GetRawTextureData, addr 0x16e2434, size 0xb4, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x16e353c, size 0x4, virtual true, abstract: false, final true
inline void GetRawTextureData(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method GoBack, addr 0x16e24e8, size 0x40, virtual true, abstract: false, final true
inline void GoBack() ;

/// @brief Method GoForward, addr 0x16e2528, size 0x40, virtual true, abstract: false, final true
inline void GoForward() ;

/// @brief Method HandleKeyboardInput, addr 0x16e3540, size 0x4, virtual true, abstract: false, final true
inline void HandleKeyboardInput(::StringW  key) ;

/// @brief Method Init, addr 0x16e2568, size 0x1b0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Init(int32_t  width, int32_t  height) ;

/// @brief Method Init, addr 0x16e3544, size 0x4, virtual true, abstract: false, final true
inline void Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height) ;

/// @brief Method Init, addr 0x16e3548, size 0x4, virtual true, abstract: false, final true
inline void Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height, ::UnityEngine::Texture2D*  videoTexture) ;

/// @brief Method Instantiate, addr 0x16e09b4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::MockWebView> Instantiate() ;

/// @brief Method LoadHtml, addr 0x16e2718, size 0x90, virtual true, abstract: false, final false
inline void LoadHtml(::StringW  html) ;

/// @brief Method LoadUrl, addr 0x16e290c, size 0x14, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url) ;

/// @brief Method LoadUrl, addr 0x16e2920, size 0x84, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders) ;

static inline ::Vuplex::WebView::MockWebView* New_ctor() ;

/// @brief Method NormalizedToPoint, addr 0x16e29a4, size 0x188, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2Int NormalizedToPoint(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method Paste, addr 0x16e2b2c, size 0x40, virtual true, abstract: false, final true
inline void Paste() ;

/// @brief Method PointToNormalized, addr 0x16e2b6c, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 PointToNormalized(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method PostMessage, addr 0x16e2b8c, size 0x70, virtual true, abstract: false, final true
inline void PostMessage(::StringW  data) ;

/// @brief Method Reload, addr 0x16e2bfc, size 0x40, virtual true, abstract: false, final true
inline void Reload() ;

/// @brief Method Resize, addr 0x16e2c3c, size 0x154, virtual true, abstract: false, final true
inline void Resize(int32_t  width, int32_t  height) ;

/// @brief Method Scroll, addr 0x16e2e38, size 0xa0, virtual true, abstract: false, final true
inline void Scroll(::UnityEngine::Vector2  delta) ;

/// @brief Method Scroll, addr 0x16e2ed8, size 0x15c, virtual true, abstract: false, final true
inline void Scroll(::UnityEngine::Vector2  delta, ::UnityEngine::Vector2  point) ;

/// @brief Method Scroll, addr 0x16e2d90, size 0xa8, virtual true, abstract: false, final true
inline void Scroll(int32_t  scrollDeltaX, int32_t  scrollDeltaY) ;

/// @brief Method SelectAll, addr 0x16e3034, size 0x40, virtual true, abstract: false, final true
inline void SelectAll() ;

/// @brief Method SendKey, addr 0x16e3074, size 0x70, virtual true, abstract: false, final true
inline void SendKey(::StringW  input) ;

/// @brief Method SetCookie, addr 0x16e055c, size 0x158, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* SetCookie(::Vuplex::WebView::Cookie*  cookie) ;

/// @brief Method SetDefaultBackgroundEnabled, addr 0x16e30e4, size 0x88, virtual true, abstract: false, final true
inline void SetDefaultBackgroundEnabled(bool  enabled) ;

/// @brief Method SetFocused, addr 0x16e316c, size 0xf4, virtual true, abstract: false, final true
inline void SetFocused(bool  focused) ;

/// @brief Method SetRenderingEnabled, addr 0x16e3260, size 0x88, virtual true, abstract: false, final true
inline void SetRenderingEnabled(bool  enabled) ;

/// @brief Method SetResolution, addr 0x16e368c, size 0x4, virtual true, abstract: false, final true
inline void SetResolution(float_t  pixelsPerUnityUnit) ;

/// @brief Method StopLoad, addr 0x16e32e8, size 0x40, virtual true, abstract: false, final true
inline void StopLoad() ;

/// @brief Method WaitForNextPageLoadToFinish, addr 0x16e3328, size 0x8c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* WaitForNextPageLoadToFinish() ;

/// @brief Method ZoomIn, addr 0x16e33b4, size 0x40, virtual true, abstract: false, final true
inline void ZoomIn() ;

/// @brief Method ZoomOut, addr 0x16e33f4, size 0x40, virtual true, abstract: false, final true
inline void ZoomOut() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_CloseRequested() const;

constexpr ::System::EventHandler*& __cordl_internal_get_CloseRequested() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>* const& __cordl_internal_get_ConsoleMessageLogged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*& __cordl_internal_get_ConsoleMessageLogged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>* const& __cordl_internal_get_FocusChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*& __cordl_internal_get_FocusChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>* const& __cordl_internal_get_FocusedInputFieldChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*& __cordl_internal_get_FocusedInputFieldChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>* const& __cordl_internal_get_LoadFailed() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*& __cordl_internal_get_LoadFailed() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>* const& __cordl_internal_get_LoadProgressChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*& __cordl_internal_get_LoadProgressChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_MessageEmitted() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_MessageEmitted() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_PageLoadFailed() const;

constexpr ::System::EventHandler*& __cordl_internal_get_PageLoadFailed() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>* const& __cordl_internal_get_Terminated() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*& __cordl_internal_get_Terminated() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_TitleChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_TitleChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>* const& __cordl_internal_get_UrlChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*& __cordl_internal_get_UrlChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>* const& __cordl_internal_get_VideoRectChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*& __cordl_internal_get_VideoRectChanged() ;

constexpr bool const& __cordl_internal_get__IsDisposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDisposed_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__PageLoadScripts_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__PageLoadScripts_k__BackingField() ;

constexpr ::Vuplex::WebView::WebPluginType const& __cordl_internal_get__PluginType_k__BackingField() const;

constexpr ::Vuplex::WebView::WebPluginType& __cordl_internal_get__PluginType_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Resolution_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Resolution_k__BackingField() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__Size_k__BackingField() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__Size_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__Texture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__Texture_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Title_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__VideoTexture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__VideoTexture_k__BackingField() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__moreDetailsClickRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__moreDetailsClickRect() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__pageLoadFinishedTaskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__pageLoadFinishedTaskSource() ;

constexpr void __cordl_internal_set_CloseRequested(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

constexpr void __cordl_internal_set_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

constexpr void __cordl_internal_set_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_PageLoadFailed(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

constexpr void __cordl_internal_set__IsDisposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PageLoadScripts_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__PluginType_k__BackingField(::Vuplex::WebView::WebPluginType  value) ;

constexpr void __cordl_internal_set__Resolution_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Size_k__BackingField(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set__Texture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__Title_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__VideoTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__moreDetailsClickRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__pageLoadFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method _assertValidNormalizedPoint, addr 0x16e1e8c, size 0xcc, virtual false, abstract: false, final false
inline void _assertValidNormalizedPoint(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method .ctor, addr 0x16e3808, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _handlePageLoad, addr 0x16e27a8, size 0x164, virtual false, abstract: false, final false
inline void _handlePageLoad(::StringW  url) ;

/// @brief Method _log, addr 0x16e1918, size 0x58, virtual false, abstract: false, final false
static inline void _log(::StringW  message) ;

/// @brief Method _truncateIfNeeded, addr 0x16e23b4, size 0x80, virtual false, abstract: false, final false
inline ::StringW _truncateIfNeeded(::StringW  str) ;

/// @brief Method add_CloseRequested, addr 0x16e0a84, size 0x9c, virtual true, abstract: false, final true
inline void add_CloseRequested(::System::EventHandler*  value) ;

/// @brief Method add_ConsoleMessageLogged, addr 0x16e0bbc, size 0xb0, virtual true, abstract: false, final true
inline void add_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

/// @brief Method add_FocusChanged, addr 0x16e0d1c, size 0xb0, virtual true, abstract: false, final true
inline void add_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

/// @brief Method add_FocusedInputFieldChanged, addr 0x16e0e7c, size 0xb0, virtual true, abstract: false, final true
inline void add_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

/// @brief Method add_LoadFailed, addr 0x16e0fdc, size 0xb0, virtual true, abstract: false, final true
inline void add_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

/// @brief Method add_LoadProgressChanged, addr 0x16e113c, size 0xb0, virtual true, abstract: false, final true
inline void add_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

/// @brief Method add_MessageEmitted, addr 0x16e129c, size 0xb0, virtual true, abstract: false, final true
inline void add_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_PageLoadFailed, addr 0x16e354c, size 0x9c, virtual true, abstract: false, final true
inline void add_PageLoadFailed(::System::EventHandler*  value) ;

/// @brief Method add_Terminated, addr 0x16e13fc, size 0xb0, virtual true, abstract: false, final true
inline void add_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

/// @brief Method add_TitleChanged, addr 0x16e155c, size 0xb0, virtual true, abstract: false, final true
inline void add_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_UrlChanged, addr 0x16e16bc, size 0xb0, virtual true, abstract: false, final true
inline void add_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

/// @brief Method add_VideoRectChanged, addr 0x16e36a0, size 0xb0, virtual true, abstract: false, final true
inline void add_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

/// @brief Method get_IsDisposed, addr 0x16e181c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsDisposed() ;

/// @brief Method get_IsInitialized, addr 0x16e1830, size 0x8, virtual true, abstract: false, final true
inline bool get_IsInitialized() ;

/// @brief Method get_PageLoadScripts, addr 0x16e1844, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::StringW>* get_PageLoadScripts() ;

/// @brief Method get_PluginType, addr 0x16e184c, size 0x8, virtual true, abstract: false, final true
inline ::Vuplex::WebView::WebPluginType get_PluginType() ;

/// @brief Method get_Resolution, addr 0x16e3684, size 0x8, virtual true, abstract: false, final true
inline float_t get_Resolution() ;

/// @brief Method get_Size, addr 0x16e1854, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2Int get_Size() ;

/// @brief Method get_SizeInPixels, addr 0x16e3690, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_SizeInPixels() ;

/// @brief Method get_Texture, addr 0x16e1864, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Texture2D> get_Texture() ;

/// @brief Method get_Title, addr 0x16e1874, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Title() ;

/// @brief Method get_Url, addr 0x16e1884, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Url() ;

/// @brief Method get_VideoTexture, addr 0x16e3800, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Texture2D> get_VideoTexture() ;

/// @brief Convert to "::Vuplex::WebView::IWebView"
constexpr ::Vuplex::WebView::IWebView* i___Vuplex__WebView__IWebView() noexcept;

/// @brief Method remove_CloseRequested, addr 0x16e0b20, size 0x9c, virtual true, abstract: false, final true
inline void remove_CloseRequested(::System::EventHandler*  value) ;

/// @brief Method remove_ConsoleMessageLogged, addr 0x16e0c6c, size 0xb0, virtual true, abstract: false, final true
inline void remove_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

/// @brief Method remove_FocusChanged, addr 0x16e0dcc, size 0xb0, virtual true, abstract: false, final true
inline void remove_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

/// @brief Method remove_FocusedInputFieldChanged, addr 0x16e0f2c, size 0xb0, virtual true, abstract: false, final true
inline void remove_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

/// @brief Method remove_LoadFailed, addr 0x16e108c, size 0xb0, virtual true, abstract: false, final true
inline void remove_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

/// @brief Method remove_LoadProgressChanged, addr 0x16e11ec, size 0xb0, virtual true, abstract: false, final true
inline void remove_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

/// @brief Method remove_MessageEmitted, addr 0x16e134c, size 0xb0, virtual true, abstract: false, final true
inline void remove_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_PageLoadFailed, addr 0x16e35e8, size 0x9c, virtual true, abstract: false, final true
inline void remove_PageLoadFailed(::System::EventHandler*  value) ;

/// @brief Method remove_Terminated, addr 0x16e14ac, size 0xb0, virtual true, abstract: false, final true
inline void remove_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

/// @brief Method remove_TitleChanged, addr 0x16e160c, size 0xb0, virtual true, abstract: false, final true
inline void remove_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_UrlChanged, addr 0x16e176c, size 0xb0, virtual true, abstract: false, final true
inline void remove_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

/// @brief Method remove_VideoRectChanged, addr 0x16e3750, size 0xb0, virtual true, abstract: false, final true
inline void remove_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

/// @brief Method set_IsDisposed, addr 0x16e1824, size 0xc, virtual false, abstract: false, final false
inline void set_IsDisposed(bool  value) ;

/// @brief Method set_IsInitialized, addr 0x16e1838, size 0xc, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// @brief Method set_Size, addr 0x16e185c, size 0x8, virtual false, abstract: false, final false
inline void set_Size(::UnityEngine::Vector2Int  value) ;

/// @brief Method set_Texture, addr 0x16e186c, size 0x8, virtual false, abstract: false, final false
inline void set_Texture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_Title, addr 0x16e187c, size 0x8, virtual false, abstract: false, final false
inline void set_Title(::StringW  value) ;

/// @brief Method set_Url, addr 0x16e188c, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockWebView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockWebView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockWebView(MockWebView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockWebView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockWebView(MockWebView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{174};

/// @brief Field CloseRequested, offset: 0x20, size: 0x8, def value: None
 ::System::EventHandler*  ___CloseRequested;

/// @brief Field ConsoleMessageLogged, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  ___ConsoleMessageLogged;

/// @brief Field FocusChanged, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  ___FocusChanged;

/// @brief Field FocusedInputFieldChanged, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  ___FocusedInputFieldChanged;

/// @brief Field LoadFailed, offset: 0x40, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  ___LoadFailed;

/// @brief Field LoadProgressChanged, offset: 0x48, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  ___LoadProgressChanged;

/// @brief Field MessageEmitted, offset: 0x50, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___MessageEmitted;

/// @brief Field Terminated, offset: 0x58, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  ___Terminated;

/// @brief Field TitleChanged, offset: 0x60, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___TitleChanged;

/// @brief Field UrlChanged, offset: 0x68, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  ___UrlChanged;

/// @brief Field <IsDisposed>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____IsDisposed_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset: 0x71, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

/// @brief Field <PageLoadScripts>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____PageLoadScripts_k__BackingField;

/// @brief Field <PluginType>k__BackingField, offset: 0x80, size: 0x4, def value: None
 ::Vuplex::WebView::WebPluginType  ____PluginType_k__BackingField;

/// @brief Field <Size>k__BackingField, offset: 0x84, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ____Size_k__BackingField;

/// @brief Field <Texture>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____Texture_k__BackingField;

/// @brief Field <Title>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____Title_k__BackingField;

/// @brief Field <Url>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

/// @brief Field _moreDetailsClickRect, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Rect  ____moreDetailsClickRect;

/// @brief Field _pageLoadFinishedTaskSource, offset: 0xb8, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____pageLoadFinishedTaskSource;

/// @brief Field PageLoadFailed, offset: 0xc0, size: 0x8, def value: None
 ::System::EventHandler*  ___PageLoadFailed;

/// @brief Field <Resolution>k__BackingField, offset: 0xc8, size: 0x4, def value: None
 float_t  ____Resolution_k__BackingField;

/// @brief Field VideoRectChanged, offset: 0xd0, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  ___VideoRectChanged;

/// @brief Field <VideoTexture>k__BackingField, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____VideoTexture_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::MockWebView, ___CloseRequested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___ConsoleMessageLogged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___FocusChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___FocusedInputFieldChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___LoadFailed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___LoadProgressChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___MessageEmitted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___Terminated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___TitleChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___UrlChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____IsDisposed_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____IsInitialized_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____PageLoadScripts_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____PluginType_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____Size_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____Texture_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____Title_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____Url_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____moreDetailsClickRect) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____pageLoadFinishedTaskSource) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___PageLoadFailed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____Resolution_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ___VideoRectChanged) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::MockWebView, ____VideoTexture_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::MockWebView, 0xe0>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::MockWebView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::MockWebView*, "Vuplex.WebView", "MockWebView");
