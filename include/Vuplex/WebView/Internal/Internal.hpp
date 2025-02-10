#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Vuplex/WebView/Internal/AndroidBoolCallback.hpp"
#include "Vuplex/WebView/Internal/AndroidByteArrayCallback.hpp"
#include "Vuplex/WebView/Internal/AndroidFileSelectionCallback.hpp"
#include "Vuplex/WebView/Internal/AndroidStringAndBoolDelegateCallback.hpp"
#include "Vuplex/WebView/Internal/AndroidStringAndObjectCallback.hpp"
#include "Vuplex/WebView/Internal/AndroidStringCallback.hpp"
#include "Vuplex/WebView/Internal/AndroidTextureCreator.hpp"
#include "Vuplex/WebView/Internal/AndroidUtils.hpp"
#include "Vuplex/WebView/Internal/AndroidWarnings.hpp"
#include "Vuplex/WebView/Internal/AndroidWebPluginRegistrant.hpp"
#include "Vuplex/WebView/Internal/BaseWebView.hpp"
#include "Vuplex/WebView/Internal/BridgeMessage.hpp"
#include "Vuplex/WebView/Internal/CachingGetter_1.hpp"
#include "Vuplex/WebView/Internal/CanvasViewportMaterialView.hpp"
#include "Vuplex/WebView/Internal/ConsoleBridgeMessage.hpp"
#include "Vuplex/WebView/Internal/CursorHelper.hpp"
#include "Vuplex/WebView/Internal/DownloadMessage.hpp"
#include "Vuplex/WebView/Internal/FileSelectionMessage.hpp"
#include "Vuplex/WebView/Internal/IWebPlugin.hpp"
#include "Vuplex/WebView/Internal/JsonArrayWrapper_1.hpp"
#include "Vuplex/WebView/Internal/KeyboardEventArgs.hpp"
#include "Vuplex/WebView/Internal/KeyboardManager.hpp"
#include "Vuplex/WebView/Internal/KeyboardUI.hpp"
#include "Vuplex/WebView/Internal/LabelAttribute.hpp"
#include "Vuplex/WebView/Internal/MacWebPluginRegistrant.hpp"
#include "Vuplex/WebView/Internal/NativeKeyboardListener.hpp"
#include "Vuplex/WebView/Internal/StringBridgeMessage.hpp"
#include "Vuplex/WebView/Internal/StringWithIdBridgeMessage.hpp"
#include "Vuplex/WebView/Internal/ThreadDispatcher.hpp"
#include "Vuplex/WebView/Internal/UrlAction.hpp"
#include "Vuplex/WebView/Internal/UrlChangedMessage.hpp"
#include "Vuplex/WebView/Internal/VXUtils.hpp"
#include "Vuplex/WebView/Internal/ViewportMaterialView.hpp"
#include "Vuplex/WebView/Internal/VulkanDelayedTextureDestroyer.hpp"
#include "Vuplex/WebView/Internal/WebPluginFactory.hpp"
#include "Vuplex/WebView/Internal/WebViewLogger.hpp"
#include "Vuplex/WebView/Internal/WindowsWebPluginRegistrant.hpp"
#ifdef __cpp_modules
                    export module Internal;
                    #endif
                
