#pragma once
// IWYU pragma private; include "Vuplex/WebView/ProgressChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__ProgressChangeType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressChangedEventArgs)
namespace Vuplex::WebView {
struct ProgressChangeType;
}
// Forward declare root types
namespace Vuplex::WebView {
class ProgressChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::ProgressChangedEventArgs);
// Dependencies System.EventArgs, Vuplex.WebView.ProgressChangeType
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.ProgressChangedEventArgs
class CORDL_TYPE ProgressChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Progress, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) float_t  Progress;

/// @brief Field Type, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Vuplex::WebView::ProgressChangeType  Type;

static inline ::Vuplex::WebView::ProgressChangedEventArgs* New_ctor(::Vuplex::WebView::ProgressChangeType  type, float_t  progress) ;

/// @brief Method ToString, addr 0x16e3a20, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr float_t const& __cordl_internal_get_Progress() const;

constexpr float_t& __cordl_internal_get_Progress() ;

constexpr ::Vuplex::WebView::ProgressChangeType const& __cordl_internal_get_Type() const;

constexpr ::Vuplex::WebView::ProgressChangeType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Progress(float_t  value) ;

constexpr void __cordl_internal_set_Type(::Vuplex::WebView::ProgressChangeType  value) ;

/// @brief Method .ctor, addr 0x16e34a4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Vuplex::WebView::ProgressChangeType  type, float_t  progress) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressChangedEventArgs(ProgressChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressChangedEventArgs(ProgressChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{181};

/// @brief Field Progress, offset: 0x10, size: 0x4, def value: None
 float_t  ___Progress;

/// @brief Field Type, offset: 0x14, size: 0x4, def value: None
 ::Vuplex::WebView::ProgressChangeType  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::ProgressChangedEventArgs, ___Progress) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::ProgressChangedEventArgs, ___Type) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::ProgressChangedEventArgs, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::ProgressChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::ProgressChangedEventArgs*, "Vuplex.WebView", "ProgressChangedEventArgs");
