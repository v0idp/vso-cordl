#pragma once
// IWYU pragma private; include "VROSC/ChannelControlUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelControlUI)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UISpinner;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class ChannelControlUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ChannelControlUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ChannelControlUI
class CORDL_TYPE ChannelControlUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instrumentController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::InstrumentController>  _instrumentController;

/// @brief Field _label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::TMPro::TextMeshPro>  _label;

/// @brief Field _lastIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastIndex, put=__cordl_internal_set__lastIndex)) int32_t  _lastIndex;

/// @brief Field _synthController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__synthController, put=__cordl_internal_set__synthController)) ::UnityW<::VROSC::SynthController>  _synthController;

/// @brief Field _uISpinner, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__uISpinner, put=__cordl_internal_set__uISpinner)) ::UnityW<::VROSC::UISpinner>  _uISpinner;

/// @brief Field _usingExternal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__usingExternal, put=__cordl_internal_set__usingExternal)) bool  _usingExternal;

/// @brief Method Awake, addr 0x177f000, size 0xf8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::ChannelControlUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x177f0f8, size 0x234, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetData, addr 0x177f6f8, size 0x258, virtual false, abstract: false, final false
inline void SetData(bool  usingExternal) ;

/// @brief Method Setup, addr 0x177f4ac, size 0x1b8, virtual false, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrumentController) ;

/// @brief Method SpinnerPressed, addr 0x177fa00, size 0xc0, virtual false, abstract: false, final false
inline void SpinnerPressed(::VROSC::ClickData*  clickData, bool  isPressed) ;

/// @brief Method Start, addr 0x177f32c, size 0x180, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Toggled, addr 0x177f950, size 0x80, virtual false, abstract: false, final false
inline void Toggled(bool  isActive) ;

/// @brief Method UpdateSelection, addr 0x177f9d0, size 0x30, virtual false, abstract: false, final false
inline void UpdateSelection(int32_t  selectedIndex) ;

/// @brief Method UseExternalChanged, addr 0x177f664, size 0x94, virtual false, abstract: false, final false
inline void UseExternalChanged(bool  usingExternal) ;

/// @brief Method UserDataLoaded, addr 0x177fac0, size 0x6c, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__label() ;

constexpr int32_t const& __cordl_internal_get__lastIndex() const;

constexpr int32_t& __cordl_internal_get__lastIndex() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__synthController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__synthController() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__uISpinner() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__uISpinner() ;

constexpr bool const& __cordl_internal_get__usingExternal() const;

constexpr bool& __cordl_internal_get__usingExternal() ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::InstrumentController>  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__lastIndex(int32_t  value) ;

constexpr void __cordl_internal_set__synthController(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__uISpinner(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__usingExternal(bool  value) ;

/// @brief Method .ctor, addr 0x177fb2c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelControlUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelControlUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelControlUI(ChannelControlUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelControlUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelControlUI(ChannelControlUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1304};

/// @brief Field _label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____label;

/// @brief Field _uISpinner, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____uISpinner;

/// @brief Field _synthController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____synthController;

/// @brief Field _instrumentController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrumentController;

/// @brief Field _usingExternal, offset: 0x40, size: 0x1, def value: None
 bool  ____usingExternal;

/// @brief Field _lastIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ____lastIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ChannelControlUI, ____label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ChannelControlUI, ____uISpinner) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ChannelControlUI, ____synthController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ChannelControlUI, ____instrumentController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ChannelControlUI, ____usingExternal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ChannelControlUI, ____lastIndex) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ChannelControlUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ChannelControlUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ChannelControlUI*, "VROSC", "ChannelControlUI");
