#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IGroupManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGroupManager)
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IGroupManager);
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IGroupManager
class CORDL_TYPE IGroupManager {
public:
// Declarations
/// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Init(::UnityEngine::UIElements::IGroupBox*  groupBox) ;

/// @brief Method OnOptionSelectionChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption*  selectedOption) ;

/// @brief Method RegisterOption, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption*  option) ;

/// @brief Method UnregisterOption, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption*  option) ;

// Ctor Parameters [CppParam { name: "", ty: "IGroupManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGroupManager(IGroupManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupManager*, "UnityEngine.UIElements", "IGroupManager");
