#pragma once
// IWYU pragma private; include "Vuplex/WebView/PointerOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Vuplex/WebView/zzzz__MouseButton_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerOptions)
// Forward declare root types
namespace Vuplex::WebView {
class PointerOptions;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::PointerOptions);
// Dependencies System.Object, Vuplex.WebView.MouseButton
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.PointerOptions
class CORDL_TYPE PointerOptions : public ::System::Object {
public:
// Declarations
/// @brief Field Button, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Button, put=__cordl_internal_set_Button)) ::Vuplex::WebView::MouseButton  Button;

/// @brief Field ClickCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClickCount, put=__cordl_internal_set_ClickCount)) int32_t  ClickCount;

/// @brief Field PreventStealingFocus, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_PreventStealingFocus, put=__cordl_internal_set_PreventStealingFocus)) bool  PreventStealingFocus;

static inline ::Vuplex::WebView::PointerOptions* New_ctor() ;

/// @brief Method ToString, addr 0x16e392c, size 0xf4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Vuplex::WebView::MouseButton const& __cordl_internal_get_Button() const;

constexpr ::Vuplex::WebView::MouseButton& __cordl_internal_get_Button() ;

constexpr int32_t const& __cordl_internal_get_ClickCount() const;

constexpr int32_t& __cordl_internal_get_ClickCount() ;

constexpr bool const& __cordl_internal_get_PreventStealingFocus() const;

constexpr bool& __cordl_internal_get_PreventStealingFocus() ;

constexpr void __cordl_internal_set_Button(::Vuplex::WebView::MouseButton  value) ;

constexpr void __cordl_internal_set_ClickCount(int32_t  value) ;

constexpr void __cordl_internal_set_PreventStealingFocus(bool  value) ;

/// @brief Method .ctor, addr 0x16e391c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerOptions(PointerOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerOptions(PointerOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{178};

/// @brief Field Button, offset: 0x10, size: 0x4, def value: None
 ::Vuplex::WebView::MouseButton  ___Button;

/// @brief Field ClickCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___ClickCount;

/// @brief Field PreventStealingFocus, offset: 0x18, size: 0x1, def value: None
 bool  ___PreventStealingFocus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::PointerOptions, ___Button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::PointerOptions, ___ClickCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::PointerOptions, ___PreventStealingFocus) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::PointerOptions, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::PointerOptions);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::PointerOptions*, "Vuplex.WebView", "PointerOptions");
