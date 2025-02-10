#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IBaseUxmlObjectFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_def.hpp"
CORDL_MODULE_EXPORT(IBaseUxmlObjectFactory)
// Forward declare root types
namespace UnityEngine::UIElements {
class IBaseUxmlObjectFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IBaseUxmlObjectFactory);
// Dependencies UnityEngine.UIElements.IBaseUxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IBaseUxmlObjectFactory
class CORDL_TYPE IBaseUxmlObjectFactory {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr operator  ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept;

/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IBaseUxmlObjectFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBaseUxmlObjectFactory(IBaseUxmlObjectFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IBaseUxmlObjectFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBaseUxmlObjectFactory*, "UnityEngine.UIElements", "IBaseUxmlObjectFactory");
