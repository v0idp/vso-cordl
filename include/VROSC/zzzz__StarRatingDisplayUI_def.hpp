#pragma once
// IWYU pragma private; include "VROSC/StarRatingDisplayUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StarRatingDisplayUI)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class AdjustableMesh;
}
namespace VROSC {
class MinMaxFloat;
}
// Forward declare root types
namespace VROSC {
class StarRatingDisplayUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::StarRatingDisplayUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.StarRatingDisplayUI
class CORDL_TYPE StarRatingDisplayUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _exactResultText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__exactResultText, put=__cordl_internal_set__exactResultText)) ::UnityW<::TMPro::TextMeshPro>  _exactResultText;

/// @brief Field _previewValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewValue, put=__cordl_internal_set__previewValue)) float_t  _previewValue;

/// @brief Field _starMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__starMesh, put=__cordl_internal_set__starMesh)) ::UnityW<::VROSC::AdjustableMesh>  _starMesh;

/// @brief Field _uvRange, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uvRange, put=__cordl_internal_set__uvRange)) ::VROSC::MinMaxFloat*  _uvRange;

static inline ::VROSC::StarRatingDisplayUI* New_ctor() ;

/// @brief Method SetValue, addr 0x1758608, size 0xdc, virtual false, abstract: false, final false
inline void SetValue(float_t  value) ;

/// @brief Method UpdateSlider, addr 0x17586e4, size 0xd4, virtual false, abstract: false, final false
inline void UpdateSlider(float_t  value) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__exactResultText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__exactResultText() ;

constexpr float_t const& __cordl_internal_get__previewValue() const;

constexpr float_t& __cordl_internal_get__previewValue() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__starMesh() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__starMesh() ;

constexpr ::VROSC::MinMaxFloat* const& __cordl_internal_get__uvRange() const;

constexpr ::VROSC::MinMaxFloat*& __cordl_internal_get__uvRange() ;

constexpr void __cordl_internal_set__exactResultText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__previewValue(float_t  value) ;

constexpr void __cordl_internal_set__starMesh(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__uvRange(::VROSC::MinMaxFloat*  value) ;

/// @brief Method .ctor, addr 0x17587b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StarRatingDisplayUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StarRatingDisplayUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StarRatingDisplayUI(StarRatingDisplayUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StarRatingDisplayUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StarRatingDisplayUI(StarRatingDisplayUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1161};

/// @brief Field _exactResultText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____exactResultText;

/// @brief Field _starMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____starMesh;

/// @brief Field _uvRange, offset: 0x30, size: 0x8, def value: None
 ::VROSC::MinMaxFloat*  ____uvRange;

/// @brief Field _previewValue, offset: 0x38, size: 0x4, def value: None
 float_t  ____previewValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::StarRatingDisplayUI, ____exactResultText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::StarRatingDisplayUI, ____starMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::StarRatingDisplayUI, ____uvRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::StarRatingDisplayUI, ____previewValue) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::StarRatingDisplayUI, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::StarRatingDisplayUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StarRatingDisplayUI*, "VROSC", "StarRatingDisplayUI");
