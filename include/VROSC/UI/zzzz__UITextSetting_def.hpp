#pragma once
// IWYU pragma private; include "VROSC/UI/UITextSetting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UITextSetting)
namespace System {
class Action;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC::UI {
class UITextSetting;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UITextSetting);
// Dependencies TMPro.FontStyles, UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UITextSetting
class CORDL_TYPE UITextSetting : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_AutoSize)) bool  AutoSize;

 __declspec(property(get=get_Font)) ::UnityW<::TMPro::TMP_FontAsset>  Font;

 __declspec(property(get=get_MinMaxSize)) ::VROSC::MinMaxFloat*  MinMaxSize;

/// @brief Field OnTextChange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTextChange, put=__cordl_internal_set_OnTextChange)) ::System::Action*  OnTextChange;

 __declspec(property(get=get_Size)) float_t  Size;

 __declspec(property(get=get_Style)) ::TMPro::FontStyles  Style;

/// @brief Field _autoSize, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoSize, put=__cordl_internal_set__autoSize)) bool  _autoSize;

/// @brief Field _font, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__font, put=__cordl_internal_set__font)) ::UnityW<::TMPro::TMP_FontAsset>  _font;

/// @brief Field _minMaxSize, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__minMaxSize, put=__cordl_internal_set__minMaxSize)) ::VROSC::MinMaxFloat*  _minMaxSize;

/// @brief Field _size, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

/// @brief Field _style, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__style, put=__cordl_internal_set__style)) ::TMPro::FontStyles  _style;

static inline ::VROSC::UI::UITextSetting* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_OnTextChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnTextChange() ;

constexpr bool const& __cordl_internal_get__autoSize() const;

constexpr bool& __cordl_internal_get__autoSize() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get__font() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get__font() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__minMaxSize() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__minMaxSize() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr ::TMPro::FontStyles const& __cordl_internal_get__style() const;

constexpr ::TMPro::FontStyles& __cordl_internal_get__style() ;

constexpr void __cordl_internal_set_OnTextChange(::System::Action*  value) ;

constexpr void __cordl_internal_set__autoSize(bool  value) ;

constexpr void __cordl_internal_set__font(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set__minMaxSize(::VROSC::MinMaxFloat*  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

constexpr void __cordl_internal_set__style(::TMPro::FontStyles  value) ;

/// @brief Method .ctor, addr 0x17e6a84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoSize, addr 0x17e6a6c, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoSize() ;

/// @brief Method get_Font, addr 0x17e6a5c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::TMPro::TMP_FontAsset> get_Font() ;

/// @brief Method get_MinMaxSize, addr 0x17e6a7c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_MinMaxSize() ;

/// @brief Method get_Size, addr 0x17e6a74, size 0x8, virtual false, abstract: false, final false
inline float_t get_Size() ;

/// @brief Method get_Style, addr 0x17e6a64, size 0x8, virtual false, abstract: false, final false
inline ::TMPro::FontStyles get_Style() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UITextSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UITextSetting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UITextSetting(UITextSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UITextSetting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UITextSetting(UITextSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1610};

/// @brief Field _font, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ____font;

/// @brief Field _style, offset: 0x20, size: 0x4, def value: None
 ::TMPro::FontStyles  ____style;

/// @brief Field _autoSize, offset: 0x24, size: 0x1, def value: None
 bool  ____autoSize;

/// @brief Field _size, offset: 0x28, size: 0x4, def value: None
 float_t  ____size;

/// @brief Field _minMaxSize, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____minMaxSize;

/// @brief Field OnTextChange, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnTextChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UITextSetting, ____font) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextSetting, ____style) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextSetting, ____autoSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextSetting, ____size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextSetting, ____minMaxSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextSetting, ___OnTextChange) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UITextSetting, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UITextSetting);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UITextSetting*, "VROSC.UI", "UITextSetting");
