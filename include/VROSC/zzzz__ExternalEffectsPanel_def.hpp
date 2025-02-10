#pragma once
// IWYU pragma private; include "VROSC/ExternalEffectsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ExternalEffectsPanel)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class UIInputBox;
}
namespace VROSC {
class UISlider;
}
// Forward declare root types
namespace VROSC {
class ExternalEffectsPanel;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ExternalEffectsPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ExternalEffectsPanel
class CORDL_TYPE ExternalEffectsPanel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _3dBoxMarker123, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__3dBoxMarker123, put=__cordl_internal_set__3dBoxMarker123)) ::UnityW<::VROSC::UIInputBox>  _3dBoxMarker123;

/// @brief Field _3dBoxMarker456, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__3dBoxMarker456, put=__cordl_internal_set__3dBoxMarker456)) ::UnityW<::VROSC::UIInputBox>  _3dBoxMarker456;

/// @brief Field _instrumentController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::InstrumentController>  _instrumentController;

/// @brief Field _knob1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob1, put=__cordl_internal_set__knob1)) ::UnityW<::VROSC::UISlider>  _knob1;

/// @brief Field _knob2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob2, put=__cordl_internal_set__knob2)) ::UnityW<::VROSC::UISlider>  _knob2;

/// @brief Field _knob3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob3, put=__cordl_internal_set__knob3)) ::UnityW<::VROSC::UISlider>  _knob3;

/// @brief Field _knob4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob4, put=__cordl_internal_set__knob4)) ::UnityW<::VROSC::UISlider>  _knob4;

/// @brief Field _knob5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob5, put=__cordl_internal_set__knob5)) ::UnityW<::VROSC::UISlider>  _knob5;

/// @brief Field _knob6, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__knob6, put=__cordl_internal_set__knob6)) ::UnityW<::VROSC::UISlider>  _knob6;

/// @brief Method ChangeParameter1, addr 0x178b2b0, size 0x6c, virtual false, abstract: false, final false
inline void ChangeParameter1(float_t  value) ;

/// @brief Method ChangeParameter2, addr 0x178b31c, size 0x6c, virtual false, abstract: false, final false
inline void ChangeParameter2(float_t  value) ;

/// @brief Method ChangeParameter3, addr 0x178b388, size 0x6c, virtual false, abstract: false, final false
inline void ChangeParameter3(float_t  value) ;

/// @brief Method ChangeParameter4, addr 0x178b3f4, size 0x6c, virtual false, abstract: false, final false
inline void ChangeParameter4(float_t  value) ;

/// @brief Method ChangeParameter5, addr 0x178b460, size 0x6c, virtual false, abstract: false, final false
inline void ChangeParameter5(float_t  value) ;

/// @brief Method ChangeParameter6, addr 0x178b4cc, size 0x6c, virtual false, abstract: false, final false
inline void ChangeParameter6(float_t  value) ;

/// @brief Method Marker123PositionChanged, addr 0x178b538, size 0x144, virtual false, abstract: false, final false
inline void Marker123PositionChanged(::UnityEngine::Vector3  position) ;

/// @brief Method Marker456PositionChanged, addr 0x178b67c, size 0x144, virtual false, abstract: false, final false
inline void Marker456PositionChanged(::UnityEngine::Vector3  position) ;

static inline ::VROSC::ExternalEffectsPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x178ae20, size 0x490, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Reset, addr 0x178ad68, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x1780554, size 0x8a0, virtual false, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__3dBoxMarker123() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__3dBoxMarker123() ;

constexpr ::UnityW<::VROSC::UIInputBox> const& __cordl_internal_get__3dBoxMarker456() const;

constexpr ::UnityW<::VROSC::UIInputBox>& __cordl_internal_get__3dBoxMarker456() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__knob1() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__knob1() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__knob2() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__knob2() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__knob3() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__knob3() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__knob4() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__knob4() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__knob5() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__knob5() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__knob6() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__knob6() ;

constexpr void __cordl_internal_set__3dBoxMarker123(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__3dBoxMarker456(::UnityW<::VROSC::UIInputBox>  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__knob1(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__knob2(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__knob3(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__knob4(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__knob5(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__knob6(::UnityW<::VROSC::UISlider>  value) ;

/// @brief Method .ctor, addr 0x178b7c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalEffectsPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalEffectsPanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalEffectsPanel(ExternalEffectsPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalEffectsPanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalEffectsPanel(ExternalEffectsPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1327};

/// @brief Field _knob1, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____knob1;

/// @brief Field _knob2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____knob2;

/// @brief Field _knob3, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____knob3;

/// @brief Field _knob4, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____knob4;

/// @brief Field _knob5, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____knob5;

/// @brief Field _knob6, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____knob6;

/// @brief Field _3dBoxMarker123, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____3dBoxMarker123;

/// @brief Field _3dBoxMarker456, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UIInputBox>  ____3dBoxMarker456;

/// @brief Field _instrumentController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrumentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____knob1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____knob2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____knob3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____knob4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____knob5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____knob6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____3dBoxMarker123) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____3dBoxMarker456) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ExternalEffectsPanel, ____instrumentController) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ExternalEffectsPanel, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ExternalEffectsPanel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ExternalEffectsPanel*, "VROSC", "ExternalEffectsPanel");
