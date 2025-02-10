#pragma once
// IWYU pragma private; include "VROSC/UIColorPickerMiniBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIColorPickerMiniBar)
namespace UnityEngine {
class Transform;
}
namespace VROSC::UI::Meshes {
class ColorPickerMesh;
}
namespace VROSC {
struct UIColorPickerMiniBar_Type;
}
// Forward declare root types
namespace VROSC {
struct UIColorPickerMiniBar_Type;
}
namespace VROSC {
class UIColorPickerMiniBar;
}
// Write type traits
MARK_VAL_T(::VROSC::UIColorPickerMiniBar_Type);
MARK_REF_PTR_T(::VROSC::UIColorPickerMiniBar);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.UIColorPickerMiniBar/Type
struct CORDL_TYPE UIColorPickerMiniBar_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UIColorPickerMiniBar_Type_Unwrapped
enum struct __UIColorPickerMiniBar_Type_Unwrapped : int32_t {
__E_Hue = static_cast<int32_t>(0x0),
__E_Saturation = static_cast<int32_t>(0x1),
__E_Value = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UIColorPickerMiniBar_Type_Unwrapped () const noexcept {
return static_cast<__UIColorPickerMiniBar_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UIColorPickerMiniBar_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UIColorPickerMiniBar_Type(int32_t  value__) noexcept;

/// @brief Field Hue value: I32(0)
static ::VROSC::UIColorPickerMiniBar_Type const Hue;

/// @brief Field Saturation value: I32(1)
static ::VROSC::UIColorPickerMiniBar_Type const Saturation;

/// @brief Field Value value: I32(2)
static ::VROSC::UIColorPickerMiniBar_Type const Value;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPickerMiniBar_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPickerMiniBar_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.UIColorPickerMiniBar::Type
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIColorPickerMiniBar
class CORDL_TYPE UIColorPickerMiniBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Type = ::VROSC::UIColorPickerMiniBar_Type;

/// @brief Field _marker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__marker, put=__cordl_internal_set__marker)) ::UnityW<::UnityEngine::Transform>  _marker;

/// @brief Field _mesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  _mesh;

/// @brief Field _type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::VROSC::UIColorPickerMiniBar_Type  _type;

/// @brief Field _width, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__width, put=__cordl_internal_set__width)) float_t  _width;

/// @brief Method Awake, addr 0x1779018, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::UIColorPickerMiniBar* New_ctor() ;

/// @brief Method Set, addr 0x17782f0, size 0xd4, virtual false, abstract: false, final false
inline void Set(float_t  hue, float_t  saturation, float_t  value) ;

/// @brief Method SetMarker, addr 0x1779020, size 0x40, virtual false, abstract: false, final false
inline void SetMarker(float_t  value) ;

/// @brief Method Verify, addr 0x17780e4, size 0x6c, virtual false, abstract: false, final false
inline void Verify(bool  forceUpdate) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__marker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__marker() ;

constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>& __cordl_internal_get__mesh() ;

constexpr ::VROSC::UIColorPickerMiniBar_Type const& __cordl_internal_get__type() const;

constexpr ::VROSC::UIColorPickerMiniBar_Type& __cordl_internal_get__type() ;

constexpr float_t const& __cordl_internal_get__width() const;

constexpr float_t& __cordl_internal_get__width() ;

constexpr void __cordl_internal_set__marker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  value) ;

constexpr void __cordl_internal_set__type(::VROSC::UIColorPickerMiniBar_Type  value) ;

constexpr void __cordl_internal_set__width(float_t  value) ;

/// @brief Method .ctor, addr 0x1779060, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIColorPickerMiniBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerMiniBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIColorPickerMiniBar(UIColorPickerMiniBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIColorPickerMiniBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIColorPickerMiniBar(UIColorPickerMiniBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1278};

/// @brief Field _type, offset: 0x20, size: 0x4, def value: None
 ::VROSC::UIColorPickerMiniBar_Type  ____type;

/// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  ____mesh;

/// @brief Field _marker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____marker;

/// @brief Field _width, offset: 0x38, size: 0x4, def value: None
 float_t  ____width;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIColorPickerMiniBar, ____type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerMiniBar, ____mesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerMiniBar, ____marker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIColorPickerMiniBar, ____width) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIColorPickerMiniBar, 0x40>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerMiniBar_Type, "VROSC", "UIColorPickerMiniBar/Type");
NEED_NO_BOX(::VROSC::UIColorPickerMiniBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPickerMiniBar*, "VROSC", "UIColorPickerMiniBar");
