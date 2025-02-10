#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithChangingTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithChangingTexture)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
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
class IWithChangingTexture;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithChangingTexture);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithChangingTexture
class CORDL_TYPE IWithChangingTexture {
public:
// Declarations
/// @brief Method add_TextureChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_TextureChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  value) ;

/// @brief Method remove_TextureChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_TextureChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityW<::UnityEngine::Texture2D>>*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithChangingTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithChangingTexture(IWithChangingTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithChangingTexture);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithChangingTexture*, "Vuplex.WebView", "IWithChangingTexture");
