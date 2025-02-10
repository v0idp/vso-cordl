#pragma once
// IWYU pragma private; include "VROSC/LoopEditorModeUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopEditorModeUI)
namespace VROSC {
struct LoopEditorModeUI_Type;
}
namespace VROSC {
class LoopEditorUI;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class UIHoldButton;
}
// Forward declare root types
namespace VROSC {
struct LoopEditorModeUI_Type;
}
namespace VROSC {
class LoopEditorModeUI;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopEditorModeUI_Type);
MARK_REF_PTR_T(::VROSC::LoopEditorModeUI);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopEditorModeUI/Type
struct CORDL_TYPE LoopEditorModeUI_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopEditorModeUI_Type_Unwrapped
enum struct __LoopEditorModeUI_Type_Unwrapped : int32_t {
__E_Shift = static_cast<int32_t>(0x0),
__E_Volume = static_cast<int32_t>(0x1),
__E_Trim = static_cast<int32_t>(0x2),
__E_Pan = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopEditorModeUI_Type_Unwrapped () const noexcept {
return static_cast<__LoopEditorModeUI_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorModeUI_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopEditorModeUI_Type(int32_t  value__) noexcept;

/// @brief Field Pan value: I32(3)
static ::VROSC::LoopEditorModeUI_Type const Pan;

/// @brief Field Shift value: I32(0)
static ::VROSC::LoopEditorModeUI_Type const Shift;

/// @brief Field Trim value: I32(2)
static ::VROSC::LoopEditorModeUI_Type const Trim;

/// @brief Field Volume value: I32(1)
static ::VROSC::LoopEditorModeUI_Type const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{644};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorModeUI_Type, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorModeUI_Type, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorModeUI
class CORDL_TYPE LoopEditorModeUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Type = ::VROSC::LoopEditorModeUI_Type;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

 __declspec(property(get=get_IsType)) ::VROSC::LoopEditorModeUI_Type  IsType;

/// @brief Field _currentLoopPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentLoopPlayer, put=__cordl_internal_set__currentLoopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _currentLoopPlayer;

/// @brief Field _loopEditorUI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopEditorUI, put=__cordl_internal_set__loopEditorUI)) ::UnityW<::VROSC::LoopEditorUI>  _loopEditorUI;

/// @brief Field _revertEditsButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__revertEditsButton, put=__cordl_internal_set__revertEditsButton)) ::UnityW<::VROSC::UIHoldButton>  _revertEditsButton;

/// @brief Method Awake, addr 0x1894050, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x1894370, size 0x118, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method GetLoopTimeStretchFactor, addr 0x18944bc, size 0x28, virtual false, abstract: false, final false
inline float_t GetLoopTimeStretchFactor() ;

/// @brief Method GetPrecisionSensitivityMultiplier, addr 0x1894488, size 0x34, virtual false, abstract: false, final false
inline float_t GetPrecisionSensitivityMultiplier(float_t  precision) ;

static inline ::VROSC::LoopEditorModeUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1894104, size 0xb4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNewLoopPlayer, addr 0x18941e0, size 0x10, virtual true, abstract: false, final false
inline void OnNewLoopPlayer(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method Open, addr 0x18941f0, size 0x180, virtual true, abstract: false, final false
inline void Open() ;

/// @brief Method ResetUI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ResetUI() ;

/// @brief Method RevertEdits, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RevertEdits() ;

/// @brief Method Setup, addr 0x18941b8, size 0x28, virtual true, abstract: false, final false
inline void Setup(::VROSC::LoopEditorUI*  loopEditorUI) ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__currentLoopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__currentLoopPlayer() ;

constexpr ::UnityW<::VROSC::LoopEditorUI> const& __cordl_internal_get__loopEditorUI() const;

constexpr ::UnityW<::VROSC::LoopEditorUI>& __cordl_internal_get__loopEditorUI() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__revertEditsButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__revertEditsButton() ;

constexpr void __cordl_internal_set__currentLoopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__loopEditorUI(::UnityW<::VROSC::LoopEditorUI>  value) ;

constexpr void __cordl_internal_set__revertEditsButton(::UnityW<::VROSC::UIHoldButton>  value) ;

/// @brief Method .ctor, addr 0x18944e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DisplayName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_IsType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::VROSC::LoopEditorModeUI_Type get_IsType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorModeUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorModeUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorModeUI(LoopEditorModeUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorModeUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorModeUI(LoopEditorModeUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{645};

/// @brief Field _loopEditorUI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorUI>  ____loopEditorUI;

/// @brief Field _currentLoopPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____currentLoopPlayer;

/// @brief Field _revertEditsButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____revertEditsButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorModeUI, ____loopEditorUI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorModeUI, ____currentLoopPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorModeUI, ____revertEditsButton) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorModeUI, 0x38>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorModeUI_Type, "VROSC", "LoopEditorModeUI/Type");
NEED_NO_BOX(::VROSC::LoopEditorModeUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorModeUI*, "VROSC", "LoopEditorModeUI");
