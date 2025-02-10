#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithCursorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWithCursorType)
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithCursorType;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithCursorType);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithCursorType
class CORDL_TYPE IWithCursorType {
public:
// Declarations
/// @brief Method add_CursorTypeChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_CursorTypeChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_CursorTypeChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_CursorTypeChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithCursorType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithCursorType(IWithCursorType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithCursorType);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithCursorType*, "Vuplex.WebView", "IWithCursorType");
