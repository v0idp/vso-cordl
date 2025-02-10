#pragma once
// IWYU pragma private; include "Vuplex/WebView/IWithFallbackTextureData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IWithFallbackTextureData)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Vuplex::WebView {
class IWithFallbackTextureData;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::IWithFallbackTextureData);
// Dependencies 
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.IWithFallbackTextureData
class CORDL_TYPE IWithFallbackTextureData {
public:
// Declarations
/// @brief Method GetFallbackTextureData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GetFallbackTextureData() ;

// Ctor Parameters [CppParam { name: "", ty: "IWithFallbackTextureData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWithFallbackTextureData(IWithFallbackTextureData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::IWithFallbackTextureData);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::IWithFallbackTextureData*, "Vuplex.WebView", "IWithFallbackTextureData");
