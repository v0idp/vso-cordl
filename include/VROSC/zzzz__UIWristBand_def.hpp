#pragma once
// IWYU pragma private; include "VROSC/UIWristBand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIWristBand)
namespace VROSC {
struct HandType;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class UIWristBand;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIWristBand);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIWristBand
class CORDL_TYPE UIWristBand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _leftSlider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftSlider, put=__cordl_internal_set__leftSlider)) ::UnityW<::VROSC::UISlider>  _leftSlider;

/// @brief Field _rightSlider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightSlider, put=__cordl_internal_set__rightSlider)) ::UnityW<::VROSC::UISlider>  _rightSlider;

/// @brief Field _shouldResetActive, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldResetActive, put=__cordl_internal_set__shouldResetActive)) bool  _shouldResetActive;

/// @brief Field _tiltAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiltAngle, put=__cordl_internal_set__tiltAngle)) float_t  _tiltAngle;

/// @brief Method CalculateValue, addr 0x1776e08, size 0x40, virtual false, abstract: false, final false
inline float_t CalculateValue(float_t  value) ;

static inline ::VROSC::UIWristBand* New_ctor() ;

/// @brief Method SetBarTransform, addr 0x1776e48, size 0x15c, virtual false, abstract: false, final false
inline void SetBarTransform(::VROSC::HandType  handType) ;

/// @brief Method SetValue, addr 0x1776ce4, size 0x124, virtual false, abstract: false, final false
inline void SetValue(float_t  value, ::VROSC::HandType  handType) ;

/// @brief Method Setup, addr 0x1776cbc, size 0x28, virtual false, abstract: false, final false
inline void Setup(float_t  tiltAngle) ;

/// @brief Method Update, addr 0x1776c60, size 0x5c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__leftSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__leftSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__rightSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__rightSlider() ;

constexpr bool const& __cordl_internal_get__shouldResetActive() const;

constexpr bool& __cordl_internal_get__shouldResetActive() ;

constexpr float_t const& __cordl_internal_get__tiltAngle() const;

constexpr float_t& __cordl_internal_get__tiltAngle() ;

constexpr void __cordl_internal_set__leftSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__rightSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__shouldResetActive(bool  value) ;

constexpr void __cordl_internal_set__tiltAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x1776fa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIWristBand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIWristBand", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIWristBand(UIWristBand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIWristBand", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIWristBand(UIWristBand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1269};

/// @brief Field _leftSlider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____leftSlider;

/// @brief Field _rightSlider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____rightSlider;

/// @brief Field _tiltAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ____tiltAngle;

/// @brief Field _shouldResetActive, offset: 0x34, size: 0x1, def value: None
 bool  ____shouldResetActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIWristBand, ____leftSlider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIWristBand, ____rightSlider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIWristBand, ____tiltAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIWristBand, ____shouldResetActive) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIWristBand, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIWristBand);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIWristBand*, "VROSC", "UIWristBand");
