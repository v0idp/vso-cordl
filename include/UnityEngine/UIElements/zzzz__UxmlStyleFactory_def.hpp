#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlStyleFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlStyleFactory)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStyleTraits;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStyleFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlStyleFactory);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlStyleFactory
class CORDL_TYPE UxmlStyleFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*,::UnityEngine::UIElements::UxmlStyleTraits*> {
public:
// Declarations
 __declspec(property(get=get_uxmlName)) ::StringW  uxmlName;

 __declspec(property(get=get_uxmlQualifiedName)) ::StringW  uxmlQualifiedName;

/// @brief Method Create, addr 0x3052ae8, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::UxmlStyleFactory* New_ctor() ;

/// @brief Method .ctor, addr 0x3052af0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_uxmlName, addr 0x3052a34, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName, addr 0x3052a74, size 0x74, virtual true, abstract: false, final false
inline ::StringW get_uxmlQualifiedName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlStyleFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlStyleFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlStyleFactory(UxmlStyleFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStyleFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlStyleFactory(UxmlStyleFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlStyleFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStyleFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStyleFactory*, "UnityEngine.UIElements", "UxmlStyleFactory");
