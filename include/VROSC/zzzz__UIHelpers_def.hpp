#pragma once
// IWYU pragma private; include "VROSC/UIHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIHelpers)
namespace VROSC {
class UIColorPickerHelper;
}
namespace VROSC {
class UIHelperInfoIcon;
}
namespace VROSC {
class UIInputBoxHelper;
}
namespace VROSC {
class UISliderHelper;
}
namespace VROSC {
class UISpinnerHelper;
}
// Forward declare root types
namespace VROSC {
class UIHelpers;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIHelpers);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIHelpers
class CORDL_TYPE UIHelpers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ColorPickerHelper)) ::UnityW<::VROSC::UIColorPickerHelper>  ColorPickerHelper;

 __declspec(property(get=get_InfoIcon)) ::UnityW<::VROSC::UIHelperInfoIcon>  InfoIcon;

 __declspec(property(get=get_InputBoxHelper)) ::UnityW<::VROSC::UIInputBoxHelper>  InputBoxHelper;

 __declspec(property(get=get_SpinnerHelper)) ::UnityW<::VROSC::UISpinnerHelper>  SpinnerHelper;

 __declspec(property(get=get_UISliderHelper)) ::UnityW<::VROSC::UISliderHelper>  UISliderHelper;

 __declspec(property(get=get_UseHelpers)) bool  UseHelpers;

/// @brief Field _colorPickerHelper, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorPickerHelper, put=__cordl_internal_set__colorPickerHelper)) ::UnityW<::VROSC::UIColorPickerHelper>  _colorPickerHelper;

/// @brief Field _infoIcon, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__infoIcon, put=__cordl_internal_set__infoIcon)) ::UnityW<::VROSC::UIHelperInfoIcon>  _infoIcon;

/// @brief Field _inputBoxHelper, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputBoxHelper, put=__cordl_internal_set__inputBoxHelper)) ::UnityW<::VROSC::UIInputBoxHelper>  _inputBoxHelper;

/// @brief Field _sliderHelper, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sliderHelper, put=__cordl_internal_set__sliderHelper)) ::UnityW<::VROSC::UISliderHelper>  _sliderHelper;

/// @brief Field _spinnerHelper, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__spinnerHelper, put=__cordl_internal_set__spinnerHelper)) ::UnityW<::VROSC::UISpinnerHelper>  _spinnerHelper;

/// @brief Field _useHelpers, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__useHelpers, put=__cordl_internal_set__useHelpers)) bool  _useHelpers;

static inline ::VROSC::UIHelpers* New_ctor() ;

constexpr ::UnityW<::VROSC::UIColorPickerHelper> const& __cordl_internal_get__colorPickerHelper() const;

constexpr ::UnityW<::VROSC::UIColorPickerHelper>& __cordl_internal_get__colorPickerHelper() ;

constexpr ::UnityW<::VROSC::UIHelperInfoIcon> const& __cordl_internal_get__infoIcon() const;

constexpr ::UnityW<::VROSC::UIHelperInfoIcon>& __cordl_internal_get__infoIcon() ;

constexpr ::UnityW<::VROSC::UIInputBoxHelper> const& __cordl_internal_get__inputBoxHelper() const;

constexpr ::UnityW<::VROSC::UIInputBoxHelper>& __cordl_internal_get__inputBoxHelper() ;

constexpr ::UnityW<::VROSC::UISliderHelper> const& __cordl_internal_get__sliderHelper() const;

constexpr ::UnityW<::VROSC::UISliderHelper>& __cordl_internal_get__sliderHelper() ;

constexpr ::UnityW<::VROSC::UISpinnerHelper> const& __cordl_internal_get__spinnerHelper() const;

constexpr ::UnityW<::VROSC::UISpinnerHelper>& __cordl_internal_get__spinnerHelper() ;

constexpr bool const& __cordl_internal_get__useHelpers() const;

constexpr bool& __cordl_internal_get__useHelpers() ;

constexpr void __cordl_internal_set__colorPickerHelper(::UnityW<::VROSC::UIColorPickerHelper>  value) ;

constexpr void __cordl_internal_set__infoIcon(::UnityW<::VROSC::UIHelperInfoIcon>  value) ;

constexpr void __cordl_internal_set__inputBoxHelper(::UnityW<::VROSC::UIInputBoxHelper>  value) ;

constexpr void __cordl_internal_set__sliderHelper(::UnityW<::VROSC::UISliderHelper>  value) ;

constexpr void __cordl_internal_set__spinnerHelper(::UnityW<::VROSC::UISpinnerHelper>  value) ;

constexpr void __cordl_internal_set__useHelpers(bool  value) ;

/// @brief Method .ctor, addr 0x1779468, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColorPickerHelper, addr 0x1779450, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIColorPickerHelper> get_ColorPickerHelper() ;

/// @brief Method get_InfoIcon, addr 0x1779460, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIHelperInfoIcon> get_InfoIcon() ;

/// @brief Method get_InputBoxHelper, addr 0x1779458, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIInputBoxHelper> get_InputBoxHelper() ;

/// @brief Method get_SpinnerHelper, addr 0x1779448, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UISpinnerHelper> get_SpinnerHelper() ;

/// @brief Method get_UISliderHelper, addr 0x1779440, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UISliderHelper> get_UISliderHelper() ;

/// @brief Method get_UseHelpers, addr 0x1779438, size 0x8, virtual false, abstract: false, final false
inline bool get_UseHelpers() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIHelpers(UIHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIHelpers(UIHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1283};

/// @brief Field _useHelpers, offset: 0x20, size: 0x1, def value: None
 bool  ____useHelpers;

/// @brief Field _sliderHelper, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISliderHelper>  ____sliderHelper;

/// @brief Field _spinnerHelper, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinnerHelper>  ____spinnerHelper;

/// @brief Field _colorPickerHelper, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPickerHelper>  ____colorPickerHelper;

/// @brief Field _inputBoxHelper, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBoxHelper>  ____inputBoxHelper;

/// @brief Field _infoIcon, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHelperInfoIcon>  ____infoIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIHelpers, ____useHelpers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelpers, ____sliderHelper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelpers, ____spinnerHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelpers, ____colorPickerHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelpers, ____inputBoxHelper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIHelpers, ____infoIcon) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIHelpers, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIHelpers);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHelpers*, "VROSC", "UIHelpers");
