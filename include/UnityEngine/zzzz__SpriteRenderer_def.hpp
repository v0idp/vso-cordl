#pragma once
// IWYU pragma private; include "UnityEngine/SpriteRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(SpriteRenderer)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class SpriteRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpriteRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpriteRenderer
class CORDL_TYPE SpriteRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

/// @brief Field m_SpriteChangeEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpriteChangeEvent, put=__cordl_internal_set_m_SpriteChangeEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  m_SpriteChangeEvent;

/// @brief Method InvokeSpriteChanged, addr 0x2f959bc, size 0xf4, virtual false, abstract: false, final false
inline void InvokeSpriteChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>* const& __cordl_internal_get_m_SpriteChangeEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*& __cordl_internal_get_m_SpriteChangeEvent() ;

constexpr void __cordl_internal_set_m_SpriteChangeEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  value) ;

/// @brief Method get_color, addr 0x2f95ab0, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0x2f95b08, size 0x44, virtual false, abstract: false, final false
inline void get_color_Injected(::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method set_color, addr 0x2f95b4c, size 0x54, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x2f95ba0, size 0x44, virtual false, abstract: false, final false
inline void set_color_Injected(::ByRef<::UnityEngine::Color>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteRenderer(SpriteRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteRenderer(SpriteRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8652};

/// @brief Field m_SpriteChangeEvent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::SpriteRenderer>>*  ___m_SpriteChangeEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpriteRenderer, ___m_SpriteChangeEvent) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SpriteRenderer, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SpriteRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteRenderer*, "UnityEngine", "SpriteRenderer");
