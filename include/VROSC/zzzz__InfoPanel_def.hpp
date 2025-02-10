#pragma once
// IWYU pragma private; include "VROSC/InfoPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InfoPanel)
namespace VROSC {
class AnimatedPanel;
}
// Forward declare root types
namespace VROSC {
class InfoPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InfoPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InfoPanel
class CORDL_TYPE InfoPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityW<::VROSC::AnimatedPanel>  _animation;

static inline ::VROSC::InfoPanel* New_ctor() ;

/// @brief Method SetActive, addr 0x177ff48, size 0x44, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeOpen, bool  animate) ;

/// @brief Method Setup, addr 0x178fa24, size 0xc, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::VROSC::AnimatedPanel> const& __cordl_internal_get__animation() const;

constexpr ::UnityW<::VROSC::AnimatedPanel>& __cordl_internal_get__animation() ;

constexpr void __cordl_internal_set__animation(::UnityW<::VROSC::AnimatedPanel>  value) ;

/// @brief Method .ctor, addr 0x178fa30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InfoPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InfoPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InfoPanel(InfoPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InfoPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InfoPanel(InfoPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1336};

/// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AnimatedPanel>  ____animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InfoPanel, ____animation) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InfoPanel, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InfoPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InfoPanel*, "VROSC", "InfoPanel");
