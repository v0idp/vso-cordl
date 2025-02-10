#pragma once
// IWYU pragma private; include "VROSC/EnvironmentColorsUIPicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentColorsUIPicker)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
struct EnvironmentColorsUIPicker_Type;
}
namespace VROSC {
class UIColorPicker;
}
// Forward declare root types
namespace VROSC {
struct EnvironmentColorsUIPicker_Type;
}
namespace VROSC {
class EnvironmentColorsUIPicker;
}
// Write type traits
MARK_VAL_T(::VROSC::EnvironmentColorsUIPicker_Type);
MARK_REF_PTR_T(::VROSC::EnvironmentColorsUIPicker);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.EnvironmentColorsUIPicker/Type
struct CORDL_TYPE EnvironmentColorsUIPicker_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnvironmentColorsUIPicker_Type_Unwrapped
enum struct __EnvironmentColorsUIPicker_Type_Unwrapped : int32_t {
__E_Primary = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_Accent = static_cast<int32_t>(0x2),
__E_Instrument = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnvironmentColorsUIPicker_Type_Unwrapped () const noexcept {
return static_cast<__EnvironmentColorsUIPicker_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentColorsUIPicker_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnvironmentColorsUIPicker_Type(int32_t  value__) noexcept;

/// @brief Field Accent value: I32(2)
static ::VROSC::EnvironmentColorsUIPicker_Type const Accent;

/// @brief Field Active value: I32(1)
static ::VROSC::EnvironmentColorsUIPicker_Type const Active;

/// @brief Field Instrument value: I32(3)
static ::VROSC::EnvironmentColorsUIPicker_Type const Instrument;

/// @brief Field Primary value: I32(0)
static ::VROSC::EnvironmentColorsUIPicker_Type const Primary;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentColorsUIPicker_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentColorsUIPicker_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.EnvironmentColorsUIPicker::Type
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentColorsUIPicker
class CORDL_TYPE EnvironmentColorsUIPicker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Type = ::VROSC::EnvironmentColorsUIPicker_Type;

 __declspec(property(get=get_Color)) ::UnityEngine::Color  Color;

/// @brief Field OnColorPicked, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorPicked, put=__cordl_internal_set_OnColorPicked)) ::System::Action*  OnColorPicked;

/// @brief Field _colorPicker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorPicker, put=__cordl_internal_set__colorPicker)) ::UnityW<::VROSC::UIColorPicker>  _colorPicker;

/// @brief Field _label, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _mesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::VROSC::AdjustableMesh>  _mesh;

/// @brief Field _type, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::VROSC::EnvironmentColorsUIPicker_Type  _type;

/// @brief Method Awake, addr 0x1744804, size 0x150, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ColorPicked, addr 0x1744d08, size 0x8c, virtual false, abstract: false, final false
inline void ColorPicked(::UnityEngine::Color  color) ;

/// @brief Method GetFromSettings, addr 0x1744acc, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetFromSettings() ;

/// @brief Method GetNameByType, addr 0x1744954, size 0x88, virtual false, abstract: false, final false
inline ::StringW GetNameByType() ;

static inline ::VROSC::EnvironmentColorsUIPicker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17449dc, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1744ab4, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x174454c, size 0x84, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetupForEditor, addr 0x1744d94, size 0x94, virtual false, abstract: false, final false
inline void SetupForEditor() ;

/// @brief Method WriteToSettings, addr 0x1744ba0, size 0x168, virtual false, abstract: false, final false
inline void WriteToSettings(::UnityEngine::Color  color) ;

constexpr ::System::Action* const& __cordl_internal_get_OnColorPicked() const;

constexpr ::System::Action*& __cordl_internal_get_OnColorPicked() ;

constexpr ::UnityW<::VROSC::UIColorPicker> const& __cordl_internal_get__colorPicker() const;

constexpr ::UnityW<::VROSC::UIColorPicker>& __cordl_internal_get__colorPicker() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__mesh() ;

constexpr ::VROSC::EnvironmentColorsUIPicker_Type const& __cordl_internal_get__type() const;

constexpr ::VROSC::EnvironmentColorsUIPicker_Type& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set_OnColorPicked(::System::Action*  value) ;

constexpr void __cordl_internal_set__colorPicker(::UnityW<::VROSC::UIColorPicker>  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__type(::VROSC::EnvironmentColorsUIPicker_Type  value) ;

/// @brief Method .ctor, addr 0x1744e28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Color, addr 0x1744724, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Color() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentColorsUIPicker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorsUIPicker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentColorsUIPicker(EnvironmentColorsUIPicker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorsUIPicker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentColorsUIPicker(EnvironmentColorsUIPicker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1123};

/// @brief Field _colorPicker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIColorPicker>  ____colorPicker;

/// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____mesh;

/// @brief Field _label, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// @brief Field _type, offset: 0x38, size: 0x4, def value: None
 ::VROSC::EnvironmentColorsUIPicker_Type  ____type;

/// @brief Field OnColorPicked, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___OnColorPicked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentColorsUIPicker, ____colorPicker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUIPicker, ____mesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUIPicker, ____label) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUIPicker, ____type) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentColorsUIPicker, ___OnColorPicked) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentColorsUIPicker, 0x48>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentColorsUIPicker_Type, "VROSC", "EnvironmentColorsUIPicker/Type");
NEED_NO_BOX(::VROSC::EnvironmentColorsUIPicker);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentColorsUIPicker*, "VROSC", "EnvironmentColorsUIPicker");
