#pragma once
// IWYU pragma private; include "VROSC/ScalePanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScalePanelUI)
namespace VROSC {
class AnimatedPanel;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
class ScalePreset;
}
namespace VROSC {
class ScaleRowUI;
}
namespace VROSC {
struct Scale;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
class ScalePanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScalePanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScalePanelUI
class CORDL_TYPE ScalePanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__animation, put=__cordl_internal_set__animation)) ::UnityW<::VROSC::AnimatedPanel>  _animation;

/// @brief Field _instrumentController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::SynthController>  _instrumentController;

/// @brief Field _scaleRows, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scaleRows, put=__cordl_internal_set__scaleRows)) ::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*>  _scaleRows;

/// @brief Method Awake, addr 0x1799070, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GlobalScaleChanged, addr 0x1799570, size 0x74, virtual false, abstract: false, final false
inline void GlobalScaleChanged(::VROSC::ScalePreset*  scalePreset, ::VROSC::Note  key) ;

static inline ::VROSC::ScalePanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1799418, size 0x118, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RowNotesUpdated, addr 0x1799530, size 0x40, virtual false, abstract: false, final false
inline void RowNotesUpdated(int32_t  axis, ::VROSC::Scale  scale) ;

/// @brief Method SetActive, addr 0x179934c, size 0x40, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeOpen, bool  animate) ;

/// @brief Method Setup, addr 0x1799188, size 0x1c4, virtual false, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrumentController) ;

constexpr ::UnityW<::VROSC::AnimatedPanel> const& __cordl_internal_get__animation() const;

constexpr ::UnityW<::VROSC::AnimatedPanel>& __cordl_internal_get__animation() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrumentController() ;

constexpr ::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*> const& __cordl_internal_get__scaleRows() const;

constexpr ::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*>& __cordl_internal_get__scaleRows() ;

constexpr void __cordl_internal_set__animation(::UnityW<::VROSC::AnimatedPanel>  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__scaleRows(::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*>  value) ;

/// @brief Method .ctor, addr 0x17995e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalePanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalePanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalePanelUI(ScalePanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalePanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalePanelUI(ScalePanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1356};

/// @brief Field _scaleRows, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::ScaleRowUI>,::Array<::UnityW<::VROSC::ScaleRowUI>>*>  ____scaleRows;

/// @brief Field _animation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::AnimatedPanel>  ____animation;

/// @brief Field _instrumentController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrumentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScalePanelUI, ____scaleRows) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePanelUI, ____animation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScalePanelUI, ____instrumentController) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScalePanelUI, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScalePanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePanelUI*, "VROSC", "ScalePanelUI");
