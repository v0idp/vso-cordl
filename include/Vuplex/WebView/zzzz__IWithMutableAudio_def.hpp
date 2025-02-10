#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithMutableAudio.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWithMutableAudio)
// Forward declare root types
namespace Vuplex::WebView {
class IWithMutableAudio;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithMutableAudio);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithMutableAudio
class CORDL_TYPE IWithMutableAudio {
public:
// Declarations
/// @brief Method SetAudioMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAudioMuted(bool  muted) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithMutableAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithMutableAudio(IWithMutableAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithMutableAudio);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithMutableAudio*, "Vuplex.WebView", "IWithMutableAudio");
