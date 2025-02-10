#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColorChangeEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_def.hpp"
CORDL_MODULE_EXPORT(AdjustableMeshColorChangeEffect)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshColorChangeEffect;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshColorChangeEffect);
// Dependencies UnityEngine.Color, VROSC.AdjustableMeshEffect
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshColorChangeEffect
class CORDL_TYPE AdjustableMeshColorChangeEffect : public ::VROSC::AdjustableMeshEffect {
public:
// Declarations
/// @brief Field _baseColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__baseColor, put=__cordl_internal_set__baseColor)) ::UnityEngine::Color  _baseColor;

/// @brief Field _color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__color, put=__cordl_internal_set__color)) ::UnityEngine::Color  _color;

/// @brief Method Awake, addr 0x17a6b40, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AdjustableMeshColorChangeEffect* New_ctor() ;

/// @brief Method OnMeshVisible, addr 0x17a6b4c, size 0xa8, virtual true, abstract: false, final false
inline void OnMeshVisible() ;

/// @brief Method SetColor, addr 0x17a6bf8, size 0x14, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__baseColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__baseColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__color() ;

constexpr void __cordl_internal_set__baseColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__color(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17a6c0c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshColorChangeEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColorChangeEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshColorChangeEffect(AdjustableMeshColorChangeEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColorChangeEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshColorChangeEffect(AdjustableMeshColorChangeEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1388};

/// @brief Field _color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ____color;

/// @brief Field _baseColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____baseColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshColorChangeEffect, ____color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColorChangeEffect, ____baseColor) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshColorChangeEffect, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshColorChangeEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshColorChangeEffect*, "VROSC", "AdjustableMeshColorChangeEffect");
