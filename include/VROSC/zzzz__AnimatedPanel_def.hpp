#pragma once
// IWYU pragma private; include "VROSC/AnimatedPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimatedPanel)
namespace VROSC {
class AnimatedAppear;
}
// Forward declare root types
namespace VROSC {
class AnimatedPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AnimatedPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnimatedPanel
class CORDL_TYPE AnimatedPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsAnimating)) bool  IsAnimating;

/// @brief Field _animation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityW<::VROSC::AnimatedAppear>  _animation;

/// @brief Field _isClosing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isClosing, put=__cordl_internal_set__isClosing)) bool  _isClosing;

/// @brief Method FinishClosing, addr 0x17a9e30, size 0x3c, virtual false, abstract: false, final false
inline void FinishClosing() ;

static inline ::VROSC::AnimatedPanel* New_ctor() ;

/// @brief Method OnDisable, addr 0x17a9eac, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetActive, addr 0x179938c, size 0x8c, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeOpen) ;

/// @brief Method Update, addr 0x17a9e6c, size 0x40, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::AnimatedAppear> const& __cordl_internal_get__animation() const;

constexpr ::UnityW<::VROSC::AnimatedAppear>& __cordl_internal_get__animation() ;

constexpr bool const& __cordl_internal_get__isClosing() const;

constexpr bool& __cordl_internal_get__isClosing() ;

constexpr void __cordl_internal_set__animation(::UnityW<::VROSC::AnimatedAppear>  value) ;

constexpr void __cordl_internal_set__isClosing(bool  value) ;

/// @brief Method .ctor, addr 0x17a9ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsAnimating, addr 0x17a9e18, size 0x18, virtual false, abstract: false, final false
inline bool get_IsAnimating() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedPanel(AnimatedPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedPanel(AnimatedPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1406};

/// @brief Field _animation, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AnimatedAppear>  ____animation;

/// @brief Field _isClosing, offset: 0x28, size: 0x1, def value: None
 bool  ____isClosing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnimatedPanel, ____animation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnimatedPanel, ____isClosing) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnimatedPanel, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AnimatedPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedPanel*, "VROSC", "AnimatedPanel");
