#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithFind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IWithFind)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Vuplex::WebView {
struct FindResult;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithFind;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithFind);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithFind
class CORDL_TYPE IWithFind {
public:
// Declarations
/// @brief Method ClearFindMatches, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearFindMatches() ;

/// @brief Method Find, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Vuplex::WebView::FindResult>* Find(::StringW  text, bool  forward) ;

// Ctor Parameters [CppParam { name: "", ty: "IWithFind", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithFind(IWithFind const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithFind);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithFind*, "Vuplex.WebView", "IWithFind");
