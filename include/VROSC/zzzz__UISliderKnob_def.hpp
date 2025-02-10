#pragma once
// IWYU pragma private; include "VROSC/UISliderKnob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UISliderKnob)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace VROSC {
class UISliderKnob;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UISliderKnob);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UISliderKnob
class CORDL_TYPE UISliderKnob : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _position, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) bool  _position;

/// @brief Field _rotateFrom, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotateFrom, put=__cordl_internal_set__rotateFrom)) float_t  _rotateFrom;

/// @brief Field _rotateTo, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotateTo, put=__cordl_internal_set__rotateTo)) float_t  _rotateTo;

/// @brief Field _rotation, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__rotation, put=__cordl_internal_set__rotation)) bool  _rotation;

/// @brief Field _sliderKnob, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliderKnob, put=__cordl_internal_set__sliderKnob)) ::UnityW<::UnityEngine::RectTransform>  _sliderKnob;

/// @brief Field _sliderRect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliderRect, put=__cordl_internal_set__sliderRect)) ::UnityW<::UnityEngine::RectTransform>  _sliderRect;

static inline ::VROSC::UISliderKnob* New_ctor() ;

/// @brief Method SetValue, addr 0x1773cdc, size 0x4c, virtual false, abstract: false, final false
inline void SetValue(float_t  value) ;

/// @brief Method UpdatePosition, addr 0x17748d4, size 0x128, virtual false, abstract: false, final false
inline void UpdatePosition(float_t  value) ;

/// @brief Method UpdateRotation, addr 0x17749fc, size 0x7c, virtual false, abstract: false, final false
inline void UpdateRotation(float_t  value) ;

constexpr bool const& __cordl_internal_get__position() const;

constexpr bool& __cordl_internal_get__position() ;

constexpr float_t const& __cordl_internal_get__rotateFrom() const;

constexpr float_t& __cordl_internal_get__rotateFrom() ;

constexpr float_t const& __cordl_internal_get__rotateTo() const;

constexpr float_t& __cordl_internal_get__rotateTo() ;

constexpr bool const& __cordl_internal_get__rotation() const;

constexpr bool& __cordl_internal_get__rotation() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__sliderKnob() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__sliderKnob() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__sliderRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__sliderRect() ;

constexpr void __cordl_internal_set__position(bool  value) ;

constexpr void __cordl_internal_set__rotateFrom(float_t  value) ;

constexpr void __cordl_internal_set__rotateTo(float_t  value) ;

constexpr void __cordl_internal_set__rotation(bool  value) ;

constexpr void __cordl_internal_set__sliderKnob(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__sliderRect(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x1774a78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISliderKnob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISliderKnob", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISliderKnob(UISliderKnob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISliderKnob", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISliderKnob(UISliderKnob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1263};

/// @brief Field _sliderKnob, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____sliderKnob;

/// @brief Field _sliderRect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____sliderRect;

/// @brief Field _position, offset: 0x30, size: 0x1, def value: None
 bool  ____position;

/// @brief Field _rotation, offset: 0x31, size: 0x1, def value: None
 bool  ____rotation;

/// @brief Field _rotateFrom, offset: 0x34, size: 0x4, def value: None
 float_t  ____rotateFrom;

/// @brief Field _rotateTo, offset: 0x38, size: 0x4, def value: None
 float_t  ____rotateTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UISliderKnob, ____sliderKnob) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderKnob, ____sliderRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderKnob, ____position) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderKnob, ____rotation) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderKnob, ____rotateFrom) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UISliderKnob, ____rotateTo) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UISliderKnob, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UISliderKnob);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UISliderKnob*, "VROSC", "UISliderKnob");
