#pragma once
// IWYU pragma private; include "Vuplex/WebView/FindResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindResult)
// Forward declare root types
namespace Vuplex::WebView {
struct FindResult;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::FindResult);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: true
// CS Name: Vuplex.WebView.FindResult
struct CORDL_TYPE FindResult {
public:
// Declarations
/// @brief Method ToString, addr 0x16df9dc, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr FindResult() ;

// Ctor Parameters [CppParam { name: "CurrentMatchIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MatchCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FindResult(int32_t  CurrentMatchIndex, int32_t  MatchCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field CurrentMatchIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  CurrentMatchIndex;

/// @brief Field MatchCount, offset: 0x4, size: 0x4, def value: None
 int32_t  MatchCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::FindResult, CurrentMatchIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::FindResult, MatchCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::FindResult, 0x8>, "Size mismatch!");

} // namespace end def Vuplex::WebView
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::FindResult, "Vuplex.WebView", "FindResult");
