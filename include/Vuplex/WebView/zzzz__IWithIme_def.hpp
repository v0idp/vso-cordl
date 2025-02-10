#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithIme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWithIme)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithIme;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithIme);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithIme
class CORDL_TYPE IWithIme {
public:
// Declarations
/// @brief Method CancelImeComposition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CancelImeComposition() ;

/// @brief Method FinishImeComposition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FinishImeComposition(::StringW  text) ;

/// @brief Method SetImeComposition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetImeComposition(::StringW  text) ;

/// @brief Method add_ImeInputFieldPositionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_ImeInputFieldPositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*>*  value) ;

/// @brief Method remove_ImeInputFieldPositionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_ImeInputFieldPositionChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithIme", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithIme(IWithIme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{155};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithIme);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithIme*, "Vuplex.WebView", "IWithIme");
