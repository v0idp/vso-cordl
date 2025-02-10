#pragma once
// IWYU pragma private; include "VROSC/InputVisualizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputVisualizer)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class TrailRenderer;
}
namespace VROSC::UI {
class UIAdjustableMeshColoring;
}
namespace VROSC::UI {
class UIColorGetter;
}
// Forward declare root types
namespace VROSC {
class InputVisualizer;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InputVisualizer);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InputVisualizer
class CORDL_TYPE InputVisualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _adjustableMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  _adjustableMesh;

/// @brief Field _colorGetter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorGetter, put=__cordl_internal_set__colorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _colorGetter;

/// @brief Field _doFinalTrailSet, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__doFinalTrailSet, put=__cordl_internal_set__doFinalTrailSet)) bool  _doFinalTrailSet;

/// @brief Field _trail, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__trail, put=__cordl_internal_set__trail)) ::UnityW<::UnityEngine::TrailRenderer>  _trail;

/// @brief Method Awake, addr 0x17ac57c, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorChanged, addr 0x17ac704, size 0x164, virtual false, abstract: false, final false
inline void ColorChanged() ;

static inline ::VROSC::InputVisualizer* New_ctor() ;

/// @brief Method OnDisable, addr 0x17ac868, size 0x108, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17ac5f8, size 0x10c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x17acb2c, size 0xf4, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetInteraction, addr 0x17acaf8, size 0x34, virtual false, abstract: false, final false
inline void SetInteraction(bool  interact, bool  fade) ;

/// @brief Method SetTrailColor, addr 0x17aca1c, size 0xdc, virtual false, abstract: false, final false
inline void SetTrailColor(::UnityEngine::Color  color) ;

/// @brief Method Update, addr 0x17ac970, size 0xac, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>& __cordl_internal_get__adjustableMesh() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__colorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__colorGetter() ;

constexpr bool const& __cordl_internal_get__doFinalTrailSet() const;

constexpr bool& __cordl_internal_get__doFinalTrailSet() ;

constexpr ::UnityW<::UnityEngine::TrailRenderer> const& __cordl_internal_get__trail() const;

constexpr ::UnityW<::UnityEngine::TrailRenderer>& __cordl_internal_get__trail() ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  value) ;

constexpr void __cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__doFinalTrailSet(bool  value) ;

constexpr void __cordl_internal_set__trail(::UnityW<::UnityEngine::TrailRenderer>  value) ;

/// @brief Method .ctor, addr 0x17acc20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputVisualizer(InputVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputVisualizer(InputVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1421};

/// @brief Field _trail, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TrailRenderer>  ____trail;

/// @brief Field _adjustableMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIAdjustableMeshColoring>  ____adjustableMesh;

/// @brief Field _doFinalTrailSet, offset: 0x30, size: 0x1, def value: None
 bool  ____doFinalTrailSet;

/// @brief Field _colorGetter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____colorGetter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InputVisualizer, ____trail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputVisualizer, ____adjustableMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputVisualizer, ____doFinalTrailSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InputVisualizer, ____colorGetter) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InputVisualizer, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InputVisualizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InputVisualizer*, "VROSC", "InputVisualizer");
