#pragma once
// IWYU pragma private; include "VROSC/FeedbackEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FeedbackEffectsUI)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UIInputBox;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class FeedbackEffectsUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FeedbackEffectsUI);
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FeedbackEffectsUI
class CORDL_TYPE FeedbackEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
/// @brief Field _3dBoxMarker, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__3dBoxMarker, put=__cordl_internal_set__3dBoxMarker)) ::UnityW<::VROSC::UIInputBox>  _3dBoxMarker;

/// @brief Field _amountSlider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__amountSlider, put=__cordl_internal_set__amountSlider)) ::UnityW<::VROSC::UISlider>  _amountSlider;

/// @brief Field _transposeSlider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__transposeSlider, put=__cordl_internal_set__transposeSlider)) ::UnityW<::VROSC::UISlider>  _transposeSlider;

/// @brief Field _tuneSlider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__tuneSlider, put=__cordl_internal_set__tuneSlider)) ::UnityW<::VROSC::UISlider>  _tuneSlider;

/// @brief Method ChangeAmount, addr 0x178c19c, size 0x78, virtual false, abstract: false, final false
inline void ChangeAmount(float_t  amount) ;

/// @brief Method ChangeTranspose, addr 0x178c214, size 0x78, virtual false, abstract: false, final false
inline void ChangeTranspose(float_t  transpose) ;

/// @brief Method ChangeTune, addr 0x178c28c, size 0x78, virtual false, abstract: false, final false
inline void ChangeTune(float_t  tune) ;

/// @brief Method CheckIfDirty, addr 0x178c078, size 0x124, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x178bf38, size 0x140, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

/// @brief Method MarkerPositionChanged, addr 0x178c304, size 0x15c, virtual false, abstract: false, final false
inline void MarkerPositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::FeedbackEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178bcb0, size 0x288, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPressed, addr 0x178c460, size 0x140, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x178b7c8, size 0x4e8, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__3dBoxMarker() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__3dBoxMarker() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__amountSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__amountSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__transposeSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__transposeSlider() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__tuneSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__tuneSlider() ;

constexpr void __cordl_internal_set__3dBoxMarker(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__amountSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__transposeSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__tuneSlider(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x178c5a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeedbackEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeedbackEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FeedbackEffectsUI(FeedbackEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeedbackEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeedbackEffectsUI(FeedbackEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1328};

/// @brief Field _transposeSlider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____transposeSlider;

/// @brief Field _tuneSlider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____tuneSlider;

/// @brief Field _amountSlider, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____amountSlider;

/// @brief Field _3dBoxMarker, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____3dBoxMarker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FeedbackEffectsUI, ____transposeSlider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::FeedbackEffectsUI, ____tuneSlider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::FeedbackEffectsUI, ____amountSlider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::FeedbackEffectsUI, ____3dBoxMarker) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FeedbackEffectsUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FeedbackEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FeedbackEffectsUI*, "VROSC", "FeedbackEffectsUI");
