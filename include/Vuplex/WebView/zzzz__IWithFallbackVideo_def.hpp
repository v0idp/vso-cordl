#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithFallbackVideo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithFallbackVideo)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
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
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithFallbackVideo;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithFallbackVideo);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithFallbackVideo
class CORDL_TYPE IWithFallbackVideo {
public:
// Declarations
 __declspec(property(get=get_FallbackVideoEnabled)) bool  FallbackVideoEnabled;

 __declspec(property(get=get_VideoTexture)) ::UnityW<::UnityEngine::Texture2D>  VideoTexture;

/// @brief Method CreateVideoMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> CreateVideoMaterial() ;

/// @brief Method SetFallbackVideoEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFallbackVideoEnabled(bool  enabled) ;

/// @brief Method add_VideoRectChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

/// @brief Method get_FallbackVideoEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_FallbackVideoEnabled() ;

/// @brief Method get_VideoTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_VideoTexture() ;

/// @brief Method remove_VideoRectChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithFallbackVideo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithFallbackVideo(IWithFallbackVideo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithFallbackVideo);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithFallbackVideo*, "Vuplex.WebView", "IWithFallbackVideo");
