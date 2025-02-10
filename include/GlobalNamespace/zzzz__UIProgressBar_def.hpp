#pragma once
// IWYU pragma private; include "GlobalNamespace/UIProgressBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIProgressBar)
namespace VROSC {
class AdjustableMeshColorChangeEffect;
}
namespace VROSC {
class AdjustableMeshTransformUVEffect;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace GlobalNamespace {
class UIProgressBar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIProgressBar);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIProgressBar
class CORDL_TYPE UIProgressBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

/// @brief Field <Progress>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__Progress_k__BackingField, put=__cordl_internal_set__Progress_k__BackingField)) float_t  _Progress_k__BackingField;

/// @brief Field _failureColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__failureColor, put=__cordl_internal_set__failureColor)) ::UnityEngine::Color  _failureColor;

/// @brief Field _inProgressColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__inProgressColor, put=__cordl_internal_set__inProgressColor)) ::UnityEngine::Color  _inProgressColor;

/// @brief Field _progressBar, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressBar, put=__cordl_internal_set__progressBar)) ::UnityW<::VROSC::AdjustableMesh>  _progressBar;

/// @brief Field _progressBarColor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressBarColor, put=__cordl_internal_set__progressBarColor)) ::UnityW<::VROSC::AdjustableMeshColorChangeEffect>  _progressBarColor;

/// @brief Field _progressBarValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressBarValue, put=__cordl_internal_set__progressBarValue)) ::UnityW<::VROSC::AdjustableMeshTransformUVEffect>  _progressBarValue;

/// @brief Field _successColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__successColor, put=__cordl_internal_set__successColor)) ::UnityEngine::Color  _successColor;

/// @brief Method Awake, addr 0x16c42fc, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::UIProgressBar* New_ctor() ;

/// @brief Method StartUpdating, addr 0x16c4300, size 0x70, virtual false, abstract: false, final false
inline void StartUpdating() ;

/// @brief Method StopUpdating, addr 0x16c4370, size 0x6c, virtual false, abstract: false, final false
inline void StopUpdating(bool  success) ;

/// @brief Method UpdateValue, addr 0x16c43dc, size 0x24, virtual false, abstract: false, final false
inline void UpdateValue(float_t  value) ;

constexpr float_t const& __cordl_internal_get__Progress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Progress_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__failureColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__failureColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__inProgressColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__inProgressColor() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__progressBar() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__progressBar() ;

constexpr ::UnityW<::VROSC::AdjustableMeshColorChangeEffect> const& __cordl_internal_get__progressBarColor() const;

constexpr ::UnityW<::VROSC::AdjustableMeshColorChangeEffect>& __cordl_internal_get__progressBarColor() ;

constexpr ::UnityW<::VROSC::AdjustableMeshTransformUVEffect> const& __cordl_internal_get__progressBarValue() const;

constexpr ::UnityW<::VROSC::AdjustableMeshTransformUVEffect>& __cordl_internal_get__progressBarValue() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__successColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__successColor() ;

constexpr void __cordl_internal_set__Progress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__failureColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__inProgressColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__progressBar(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__progressBarColor(::UnityW<::VROSC::AdjustableMeshColorChangeEffect>  value) ;

constexpr void __cordl_internal_set__progressBarValue(::UnityW<::VROSC::AdjustableMeshTransformUVEffect>  value) ;

constexpr void __cordl_internal_set__successColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x16c4400, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Progress, addr 0x16c42ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Method set_Progress, addr 0x16c42f4, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIProgressBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIProgressBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIProgressBar(UIProgressBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIProgressBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIProgressBar(UIProgressBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{62};

/// @brief Field _progressBar, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____progressBar;

/// @brief Field _progressBarValue, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMeshTransformUVEffect>  ____progressBarValue;

/// @brief Field _progressBarColor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMeshColorChangeEffect>  ____progressBarColor;

/// @brief Field _successColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____successColor;

/// @brief Field _failureColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____failureColor;

/// @brief Field _inProgressColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____inProgressColor;

/// @brief Field <Progress>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____Progress_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____progressBar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____progressBarValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____progressBarColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____successColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____failureColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____inProgressColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIProgressBar, ____Progress_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIProgressBar, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIProgressBar*, "", "UIProgressBar");
