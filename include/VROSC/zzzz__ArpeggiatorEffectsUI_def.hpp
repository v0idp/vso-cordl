#pragma once
// IWYU pragma private; include "VROSC/ArpeggiatorEffectsUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__BaseEffectsUI_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArpeggiatorEffectsUI)
namespace VROSC {
struct ArpeggiatorEffectsUI_Pattern;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UISlider;
}
namespace VROSC {
class UISpinner;
}
// Forward declare root types
namespace VROSC {
struct ArpeggiatorEffectsUI_Pattern;
}
namespace VROSC {
class ArpeggiatorEffectsUI;
}
// Write type traits
MARK_VAL_T(::VROSC::ArpeggiatorEffectsUI_Pattern);
MARK_REF_PTR_T(::VROSC::ArpeggiatorEffectsUI);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.ArpeggiatorEffectsUI/Pattern
struct CORDL_TYPE ArpeggiatorEffectsUI_Pattern {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ArpeggiatorEffectsUI_Pattern_Unwrapped
enum struct __ArpeggiatorEffectsUI_Pattern_Unwrapped : int32_t {
__E_Up = static_cast<int32_t>(0x0),
__E_Down = static_cast<int32_t>(0x1),
__E_UpDown = static_cast<int32_t>(0x2),
__E_AsPlayed = static_cast<int32_t>(0x3),
__E_Random = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArpeggiatorEffectsUI_Pattern_Unwrapped () const noexcept {
return static_cast<__ArpeggiatorEffectsUI_Pattern_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ArpeggiatorEffectsUI_Pattern() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArpeggiatorEffectsUI_Pattern(int32_t  value__) noexcept;

/// @brief Field AsPlayed value: I32(3)
static ::VROSC::ArpeggiatorEffectsUI_Pattern const AsPlayed;

/// @brief Field Down value: I32(1)
static ::VROSC::ArpeggiatorEffectsUI_Pattern const Down;

/// @brief Field Random value: I32(4)
static ::VROSC::ArpeggiatorEffectsUI_Pattern const Random;

/// @brief Field Up value: I32(0)
static ::VROSC::ArpeggiatorEffectsUI_Pattern const Up;

/// @brief Field UpDown value: I32(2)
static ::VROSC::ArpeggiatorEffectsUI_Pattern const UpDown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ArpeggiatorEffectsUI_Pattern, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ArpeggiatorEffectsUI_Pattern, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseEffectsUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ArpeggiatorEffectsUI
class CORDL_TYPE ArpeggiatorEffectsUI : public ::VROSC::BaseEffectsUI {
public:
// Declarations
using Pattern = ::VROSC::ArpeggiatorEffectsUI_Pattern;

/// @brief Field _gateSlider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__gateSlider, put=__cordl_internal_set__gateSlider)) ::UnityW<::VROSC::UISlider>  _gateSlider;

/// @brief Field _octaves, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__octaves, put=__cordl_internal_set__octaves)) ::UnityW<::VROSC::UISpinner>  _octaves;

/// @brief Field _pattern, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__pattern, put=__cordl_internal_set__pattern)) ::UnityW<::VROSC::UISpinner>  _pattern;

/// @brief Field _tempo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tempo, put=__cordl_internal_set__tempo)) ::UnityW<::VROSC::UISpinner>  _tempo;

/// @brief Method ChangeGate, addr 0x17877cc, size 0x6c, virtual false, abstract: false, final false
inline void ChangeGate(float_t  gate) ;

/// @brief Method ChangeOctaves, addr 0x1787838, size 0x64, virtual false, abstract: false, final false
inline void ChangeOctaves(int32_t  octaves) ;

/// @brief Method ChangePattern, addr 0x178789c, size 0x64, virtual false, abstract: false, final false
inline void ChangePattern(int32_t  pattern) ;

/// @brief Method ChangeTempo, addr 0x1787640, size 0x18c, virtual false, abstract: false, final false
inline void ChangeTempo(int32_t  frequency) ;

/// @brief Method CheckIfDirty, addr 0x1787280, size 0x26c, virtual true, abstract: false, final false
inline void CheckIfDirty() ;

/// @brief Method LoadPatchValues, addr 0x1786f38, size 0x23c, virtual true, abstract: false, final false
inline void LoadPatchValues() ;

static inline ::VROSC::ArpeggiatorEffectsUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1786b2c, size 0x290, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOffToggled, addr 0x1787528, size 0xf4, virtual true, abstract: false, final false
inline void OnOffToggled(::VROSC::InputDevice*  device, bool  isOn) ;

/// @brief Method ResetPressed, addr 0x1787900, size 0x260, virtual true, abstract: false, final false
inline void ResetPressed() ;

/// @brief Method Setup, addr 0x1785b9c, size 0xd3c, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrument) ;

/// @brief Method UpdateEnableState, addr 0x178719c, size 0xe0, virtual true, abstract: false, final false
inline void UpdateEnableState() ;

constexpr ::UnityW<::VROSC::UISlider> const& __cordl_internal_get__gateSlider() const;

constexpr ::UnityW<::VROSC::UISlider>& __cordl_internal_get__gateSlider() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__octaves() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__octaves() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__pattern() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__pattern() ;

constexpr ::UnityW<::VROSC::UISpinner> const& __cordl_internal_get__tempo() const;

constexpr ::UnityW<::VROSC::UISpinner>& __cordl_internal_get__tempo() ;

constexpr void __cordl_internal_set__gateSlider(::UnityW<::VROSC::UISlider>  value) ;

constexpr void __cordl_internal_set__octaves(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__pattern(::UnityW<::VROSC::UISpinner>  value) ;

constexpr void __cordl_internal_set__tempo(::UnityW<::VROSC::UISpinner>  value) ;

/// @brief Method .ctor, addr 0x1787bb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArpeggiatorEffectsUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArpeggiatorEffectsUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArpeggiatorEffectsUI(ArpeggiatorEffectsUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArpeggiatorEffectsUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArpeggiatorEffectsUI(ArpeggiatorEffectsUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1322};

/// @brief Field _tempo, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____tempo;

/// @brief Field _octaves, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____octaves;

/// @brief Field _pattern, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UISpinner>  ____pattern;

/// @brief Field _gateSlider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlider>  ____gateSlider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ArpeggiatorEffectsUI, ____tempo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ArpeggiatorEffectsUI, ____octaves) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ArpeggiatorEffectsUI, ____pattern) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ArpeggiatorEffectsUI, ____gateSlider) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ArpeggiatorEffectsUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ArpeggiatorEffectsUI_Pattern, "VROSC", "ArpeggiatorEffectsUI/Pattern");
NEED_NO_BOX(::VROSC::ArpeggiatorEffectsUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ArpeggiatorEffectsUI*, "VROSC", "ArpeggiatorEffectsUI");
