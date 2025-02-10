#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColor16bits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMeshColors_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableMeshColor16bits)
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshColor16bits;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshColor16bits);
// Dependencies VROSC.AdjustableMeshColors
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshColor16bits
class CORDL_TYPE AdjustableMeshColor16bits : public ::VROSC::AdjustableMeshColors {
public:
// Declarations
/// @brief Field _adjustedColors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustedColors, put=__cordl_internal_set__adjustedColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _adjustedColors;

/// @brief Field _colors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _colors;

/// @brief Field _multiplyValue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__multiplyValue, put=__cordl_internal_set__multiplyValue)) float_t  _multiplyValue;

/// @brief Field _originalColors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalColors, put=__cordl_internal_set__originalColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _originalColors;

/// @brief Field _shownColors, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__shownColors, put=__cordl_internal_set__shownColors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  _shownColors;

/// @brief Method CalculateColorMultiplication, addr 0x17ab5c4, size 0xd0, virtual false, abstract: false, final false
inline void CalculateColorMultiplication() ;

static inline ::VROSC::AdjustableMeshColor16bits* New_ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

/// @brief Method SetColor, addr 0x17ab694, size 0x268, virtual true, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Tint, addr 0x17ab8fc, size 0xb4, virtual true, abstract: false, final false
inline void Tint(::UnityEngine::Color  color, float_t  amount) ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__adjustedColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__adjustedColors() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors() ;

constexpr float_t const& __cordl_internal_get__multiplyValue() const;

constexpr float_t& __cordl_internal_get__multiplyValue() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__originalColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__originalColors() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get__shownColors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get__shownColors() ;

constexpr void __cordl_internal_set__adjustedColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__multiplyValue(float_t  value) ;

constexpr void __cordl_internal_set__originalColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set__shownColors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

/// @brief Method .ctor, addr 0x17ab39c, size 0x228, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshColor16bits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColor16bits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshColor16bits(AdjustableMeshColor16bits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColor16bits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshColor16bits(AdjustableMeshColor16bits const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1415};

/// @brief Field _colors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____colors;

/// @brief Field _originalColors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____originalColors;

/// @brief Field _adjustedColors, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____adjustedColors;

/// @brief Field _shownColors, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ____shownColors;

/// @brief Field _multiplyValue, offset: 0x40, size: 0x4, def value: None
 float_t  ____multiplyValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshColor16bits, ____colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColor16bits, ____originalColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColor16bits, ____adjustedColors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColor16bits, ____shownColors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColor16bits, ____multiplyValue) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshColor16bits, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshColor16bits);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshColor16bits*, "VROSC", "AdjustableMeshColor16bits");
