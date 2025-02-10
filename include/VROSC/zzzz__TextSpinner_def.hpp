#pragma once
// IWYU pragma private; include "VROSC/TextSpinner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSpinner)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class SimpleHaptic;
}
namespace VROSC {
class TextSpinnerItem;
}
// Forward declare root types
namespace VROSC {
class TextSpinner;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TextSpinner);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TextSpinner
class CORDL_TYPE TextSpinner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_SelectedValue, put=set_SelectedValue)) int32_t  SelectedValue;

/// @brief Field <SelectedValue>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__SelectedValue_k__BackingField, put=__cordl_internal_set__SelectedValue_k__BackingField)) int32_t  _SelectedValue_k__BackingField;

/// @brief Field _hapticFeedBack, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticFeedBack, put=__cordl_internal_set__hapticFeedBack)) ::VROSC::SimpleHaptic*  _hapticFeedBack;

/// @brief Field _inputDevice, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDevice, put=__cordl_internal_set__inputDevice)) ::UnityW<::VROSC::InputDevice>  _inputDevice;

/// @brief Field _maxDisplay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDisplay, put=__cordl_internal_set__maxDisplay)) int32_t  _maxDisplay;

/// @brief Field _maxVisibleAngle, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxVisibleAngle, put=__cordl_internal_set__maxVisibleAngle)) float_t  _maxVisibleAngle;

/// @brief Field _rotationCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationCurve, put=__cordl_internal_set__rotationCurve)) ::UnityEngine::AnimationCurve*  _rotationCurve;

/// @brief Field _rotationRange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationRange, put=__cordl_internal_set__rotationRange)) ::VROSC::MinMaxFloat*  _rotationRange;

/// @brief Field _rotator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotator, put=__cordl_internal_set__rotator)) ::UnityW<::UnityEngine::Transform>  _rotator;

/// @brief Field _scaleCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleCurve, put=__cordl_internal_set__scaleCurve)) ::UnityEngine::AnimationCurve*  _scaleCurve;

/// @brief Field _textLines, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__textLines, put=__cordl_internal_set__textLines)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::TextSpinnerItem>>*  _textLines;

/// @brief Field _textValues, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__textValues, put=__cordl_internal_set__textValues)) ::System::Collections::Generic::List_1<::StringW>*  _textValues;

/// @brief Field _valueDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueDistance, put=__cordl_internal_set__valueDistance)) float_t  _valueDistance;

/// @brief Field _valuePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__valuePrefab, put=__cordl_internal_set__valuePrefab)) ::UnityW<::VROSC::TextSpinnerItem>  _valuePrefab;

/// @brief Field _valueTickAngle, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueTickAngle, put=__cordl_internal_set__valueTickAngle)) float_t  _valueTickAngle;

/// @brief Method ClearTextLines, addr 0x1777300, size 0x1f8, virtual false, abstract: false, final false
inline void ClearTextLines() ;

static inline ::VROSC::TextSpinner* New_ctor() ;

/// @brief Method SetSelectedValue, addr 0x1777b78, size 0xa4, virtual false, abstract: false, final false
inline void SetSelectedValue(int32_t  newSelectedValue) ;

/// @brief Method SetValues, addr 0x177715c, size 0x1a4, virtual false, abstract: false, final false
inline void SetValues(::System::Collections::Generic::List_1<::StringW>*  texts, ::VROSC::InputDevice*  inputDevice) ;

/// @brief Method UpdateValues, addr 0x17775c8, size 0x5b0, virtual false, abstract: false, final false
inline void UpdateValues(float_t  currentValue) ;

constexpr int32_t const& __cordl_internal_get__SelectedValue_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SelectedValue_k__BackingField() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__hapticFeedBack() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__hapticFeedBack() ;

constexpr ::UnityW<::VROSC::InputDevice> const& __cordl_internal_get__inputDevice() const;

constexpr ::UnityW<::VROSC::InputDevice>& __cordl_internal_get__inputDevice() ;

constexpr int32_t const& __cordl_internal_get__maxDisplay() const;

constexpr int32_t& __cordl_internal_get__maxDisplay() ;

constexpr float_t const& __cordl_internal_get__maxVisibleAngle() const;

constexpr float_t& __cordl_internal_get__maxVisibleAngle() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__rotationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__rotationCurve() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__rotationRange() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__rotationRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rotator() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rotator() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__scaleCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleCurve() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::TextSpinnerItem>>* const& __cordl_internal_get__textLines() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::TextSpinnerItem>>*& __cordl_internal_get__textLines() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__textValues() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__textValues() ;

constexpr float_t const& __cordl_internal_get__valueDistance() const;

constexpr float_t& __cordl_internal_get__valueDistance() ;

constexpr ::UnityW<::VROSC::TextSpinnerItem> const& __cordl_internal_get__valuePrefab() const;

constexpr ::UnityW<::VROSC::TextSpinnerItem>& __cordl_internal_get__valuePrefab() ;

constexpr float_t const& __cordl_internal_get__valueTickAngle() const;

constexpr float_t& __cordl_internal_get__valueTickAngle() ;

constexpr void __cordl_internal_set__SelectedValue_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__inputDevice(::UnityW<::VROSC::InputDevice>  value) ;

constexpr void __cordl_internal_set__maxDisplay(int32_t  value) ;

constexpr void __cordl_internal_set__maxVisibleAngle(float_t  value) ;

constexpr void __cordl_internal_set__rotationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__rotationRange(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__rotator(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__scaleCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__textLines(::System::Collections::Generic::List_1<::UnityW<::VROSC::TextSpinnerItem>>*  value) ;

constexpr void __cordl_internal_set__textValues(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__valueDistance(float_t  value) ;

constexpr void __cordl_internal_set__valuePrefab(::UnityW<::VROSC::TextSpinnerItem>  value) ;

constexpr void __cordl_internal_set__valueTickAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x1777c1c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SelectedValue, addr 0x1777154, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedValue() ;

/// @brief Method set_SelectedValue, addr 0x177714c, size 0x8, virtual false, abstract: false, final false
inline void set_SelectedValue(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextSpinner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextSpinner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextSpinner(TextSpinner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextSpinner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextSpinner(TextSpinner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1273};

/// @brief Field <SelectedValue>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____SelectedValue_k__BackingField;

/// @brief Field _maxDisplay, offset: 0x24, size: 0x4, def value: None
 int32_t  ____maxDisplay;

/// @brief Field _valuePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::TextSpinnerItem>  ____valuePrefab;

/// @brief Field _rotationRange, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____rotationRange;

/// @brief Field _maxVisibleAngle, offset: 0x38, size: 0x4, def value: None
 float_t  ____maxVisibleAngle;

/// @brief Field _valueDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____valueDistance;

/// @brief Field _valueTickAngle, offset: 0x40, size: 0x4, def value: None
 float_t  ____valueTickAngle;

/// @brief Field _rotator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____rotator;

/// @brief Field _rotationCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____rotationCurve;

/// @brief Field _scaleCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____scaleCurve;

/// @brief Field _hapticFeedBack, offset: 0x60, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____hapticFeedBack;

/// @brief Field _textLines, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::TextSpinnerItem>>*  ____textLines;

/// @brief Field _textValues, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____textValues;

/// @brief Field _inputDevice, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::VROSC::InputDevice>  ____inputDevice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TextSpinner, ____SelectedValue_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____maxDisplay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____valuePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____rotationRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____maxVisibleAngle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____valueDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____valueTickAngle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____rotator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____rotationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____scaleCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____hapticFeedBack) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____textLines) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____textValues) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::TextSpinner, ____inputDevice) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TextSpinner, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TextSpinner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextSpinner*, "VROSC", "TextSpinner");
