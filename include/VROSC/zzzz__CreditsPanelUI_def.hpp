#pragma once
// IWYU pragma private; include "VROSC/CreditsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CreditsPanelUI)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class CreditsPanelUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::CreditsPanelUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.CreditsPanelUI
class CORDL_TYPE CreditsPanelUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsOpen)) bool  IsOpen;

/// @brief Field _discordURLOpenedText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__discordURLOpenedText, put=__cordl_internal_set__discordURLOpenedText)) ::UnityW<::TMPro::TextMeshPro>  _discordURLOpenedText;

/// @brief Field _joinDiscordButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__joinDiscordButton, put=__cordl_internal_set__joinDiscordButton)) ::UnityW<::VROSC::UIButton>  _joinDiscordButton;

/// @brief Method Awake, addr 0x1735b60, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method JoinDiscordButtonPressed, addr 0x1735d8c, size 0x90, virtual false, abstract: false, final false
inline void JoinDiscordButtonPressed() ;

static inline ::VROSC::CreditsPanelUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1735cc8, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x1735c40, size 0x88, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__discordURLOpenedText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__discordURLOpenedText() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__joinDiscordButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__joinDiscordButton() ;

constexpr void __cordl_internal_set__discordURLOpenedText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__joinDiscordButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x1735e1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsOpen, addr 0x1735b40, size 0x20, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsPanelUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsPanelUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsPanelUI(CreditsPanelUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsPanelUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsPanelUI(CreditsPanelUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1081};

/// @brief Field _joinDiscordButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____joinDiscordButton;

/// @brief Field _discordURLOpenedText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____discordURLOpenedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::CreditsPanelUI, ____joinDiscordButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::CreditsPanelUI, ____discordURLOpenedText) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::CreditsPanelUI, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::CreditsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CreditsPanelUI*, "VROSC", "CreditsPanelUI");
