#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableMeshColors)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class AdjustableMesh;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshColors;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshColors);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshColors
class CORDL_TYPE AdjustableMeshColors : public ::System::Object {
public:
// Declarations
/// @brief Field OnColorChange, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorChange, put=__cordl_internal_set_OnColorChange)) ::System::Action_1<::UnityEngine::Color>*  OnColorChange;

/// @brief Field _adjustableMesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustableMesh, put=__cordl_internal_set__adjustableMesh)) ::UnityW<::VROSC::AdjustableMesh>  _adjustableMesh;

static inline ::VROSC::AdjustableMeshColors* New_ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

/// @brief Method SetColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method Tint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Tint(::UnityEngine::Color  color, float_t  amount) ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColorChange() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_OnColorChange() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__adjustableMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__adjustableMesh() ;

constexpr void __cordl_internal_set_OnColorChange(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

/// @brief Method .ctor, addr 0x17ab374, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::VROSC::AdjustableMesh*  adjustableMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColors", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshColors(AdjustableMeshColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshColors", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshColors(AdjustableMeshColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1414};

/// @brief Field _adjustableMesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____adjustableMesh;

/// @brief Field OnColorChange, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ___OnColorChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshColors, ____adjustableMesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshColors, ___OnColorChange) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshColors, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshColors);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshColors*, "VROSC", "AdjustableMeshColors");
