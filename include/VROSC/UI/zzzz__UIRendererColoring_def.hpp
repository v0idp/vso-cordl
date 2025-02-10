#pragma once
// IWYU pragma private; include "VROSC/UI/UIRendererColoring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/UI/zzzz__UIInteractableColoring_def.hpp"
CORDL_MODULE_EXPORT(UIRendererColoring)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace VROSC::UI {
class UIRendererColoring;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIRendererColoring);
// Dependencies VROSC.UI.UIInteractableColoring
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIRendererColoring
class CORDL_TYPE UIRendererColoring : public ::VROSC::UI::UIInteractableColoring {
public:
// Declarations
/// @brief Field _hideWhenNotHovering, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideWhenNotHovering, put=__cordl_internal_set__hideWhenNotHovering)) bool  _hideWhenNotHovering;

/// @brief Field _materialBlock, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlock, put=__cordl_internal_set__materialBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialBlock;

/// @brief Field _renderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Method Awake, addr 0x17e5cb8, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::UI::UIRendererColoring* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17e605c, size 0x28, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0x17e5ea4, size 0x1b8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method UpdateColor, addr 0x17e5d24, size 0x180, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr bool const& __cordl_internal_get__hideWhenNotHovering() const;

constexpr bool& __cordl_internal_get__hideWhenNotHovering() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set__hideWhenNotHovering(bool  value) ;

constexpr void __cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0x17e6084, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIRendererColoring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIRendererColoring", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRendererColoring(UIRendererColoring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRendererColoring", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRendererColoring(UIRendererColoring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1607};

/// @brief Field _renderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// @brief Field _hideWhenNotHovering, offset: 0x58, size: 0x1, def value: None
 bool  ____hideWhenNotHovering;

/// @brief Field _materialBlock, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIRendererColoring, ____renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIRendererColoring, ____hideWhenNotHovering) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIRendererColoring, ____materialBlock) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIRendererColoring, 0x68>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIRendererColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIRendererColoring*, "VROSC.UI", "UIRendererColoring");
