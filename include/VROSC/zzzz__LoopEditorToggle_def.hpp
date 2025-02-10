#pragma once
// IWYU pragma private; include "VROSC/LoopEditorToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopEditorToggle)
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class LoopEditorUI;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopEditorToggle;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorToggle);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorToggle
class CORDL_TYPE LoopEditorToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _loopEditorUi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopEditorUi, put=__cordl_internal_set__loopEditorUi)) ::UnityW<::VROSC::LoopEditorUI>  _loopEditorUi;

/// @brief Field _loopPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _toggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::VROSC::UIToggle>  _toggle;

/// @brief Method Awake, addr 0x18959b8, size 0x1dc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::LoopEditorToggle* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1895da4, size 0x1b0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEditorOpened, addr 0x1895d5c, size 0x24, virtual false, abstract: false, final false
inline void OnEditorOpened(bool  isOn) ;

/// @brief Method OnLoopEditorClosed, addr 0x1895d80, size 0x24, virtual false, abstract: false, final false
inline void OnLoopEditorClosed() ;

/// @brief Method SetEditorOpened, addr 0x1895f54, size 0xcc, virtual false, abstract: false, final false
inline void SetEditorOpened(::VROSC::InputDevice*  inputDevice, bool  isOn) ;

/// @brief Method SetTarget, addr 0x1895b94, size 0x1c8, virtual false, abstract: false, final false
inline void SetTarget(::VROSC::LoopEditorUI*  loopEditorUi) ;

/// @brief Method Setup, addr 0x18959b0, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopPlayer*  loopPlayer) ;

constexpr ::UnityW<::VROSC::LoopEditorUI> const& __cordl_internal_get__loopEditorUi() const;

constexpr ::UnityW<::VROSC::LoopEditorUI>& __cordl_internal_get__loopEditorUi() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__toggle() ;

constexpr void __cordl_internal_set__loopEditorUi(::UnityW<::VROSC::LoopEditorUI>  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x1896020, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorToggle(LoopEditorToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorToggle(LoopEditorToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{648};

/// @brief Field _loopEditorUi, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorUI>  ____loopEditorUi;

/// @brief Field _toggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____toggle;

/// @brief Field _loopPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorToggle, ____loopEditorUi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorToggle, ____toggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorToggle, ____loopPlayer) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorToggle, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorToggle*, "VROSC", "LoopEditorToggle");
