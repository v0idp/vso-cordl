#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColors32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__AdjustableMeshColors_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableMeshColors32)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshColors32;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshColors32);
// Dependencies VROSC.AdjustableMeshColors
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshColors32
class CORDL_TYPE AdjustableMeshColors32 : public ::VROSC::AdjustableMeshColors {
public:
// Declarations
/// @brief Field _colors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__colors, put=__cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  _colors;

/// @brief Field _originalColors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalColors, put=__cordl_internal_set__originalColors)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  _originalColors;

/// @brief Field _shownColors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__shownColors, put=__cordl_internal_set__shownColors)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  _shownColors;

static inline ::VROSC::AdjustableMeshColors32* New_ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

/// @brief Method SetColor, addr 0x17abae0, size 0x294, virtual true, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Tint, addr 0x17abd74, size 0x16c, virtual true, abstract: false, final false
inline void Tint(::UnityEngine::Color  color, float_t  amount) ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& __cordl_internal_get__colors() const;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& __cordl_internal_get__colors() ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& __cordl_internal_get__originalColors() const;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& __cordl_internal_get__originalColors() ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& __cordl_internal_get__shownColors() const;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& __cordl_internal_get__shownColors() ;

constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

constexpr void __cordl_internal_set__originalColors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

constexpr void __cordl_internal_set__shownColors(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

/// @brief Method .ctor, addr 0x17ab9b0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshColors32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColors32", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshColors32(AdjustableMeshColors32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColors32", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshColors32(AdjustableMeshColors32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1416};

/// @brief Field _colors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  ____colors;

/// @brief Field _originalColors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  ____originalColors;

/// @brief Field _shownColors, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  ____shownColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshColors32, ____colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColors32, ____originalColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColors32, ____shownColors) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshColors32, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshColors32);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshColors32*, "VROSC", "AdjustableMeshColors32");
