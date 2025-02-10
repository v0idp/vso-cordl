#pragma once
// IWYU pragma private; include "VROSC/RemoteControlUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemoteControlUI)
namespace GlobalNamespace {
class UIInputField;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
struct ExternalSynthesizer_Status;
}
namespace VROSC {
class ExternalSynthesizer;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UISlideToggle;
}
// Forward declare root types
namespace VROSC {
class RemoteControlUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::RemoteControlUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.RemoteControlUI
class CORDL_TYPE RemoteControlUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ExternalSynthesizer)) ::UnityW<::VROSC::ExternalSynthesizer>  ExternalSynthesizer;

/// @brief Field _allNotesOffButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__allNotesOffButton, put=__cordl_internal_set__allNotesOffButton)) ::UnityW<::VROSC::UIButton>  _allNotesOffButton;

/// @brief Field _autoconnectButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoconnectButton, put=__cordl_internal_set__autoconnectButton)) ::UnityW<::VROSC::UISlideToggle>  _autoconnectButton;

/// @brief Field _autoconnectSection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__autoconnectSection, put=__cordl_internal_set__autoconnectSection)) ::UnityW<::UnityEngine::GameObject>  _autoconnectSection;

/// @brief Field _clientName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientName, put=__cordl_internal_set__clientName)) ::UnityW<::GlobalNamespace::UIInputField>  _clientName;

/// @brief Field _connectionStatusText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__connectionStatusText, put=__cordl_internal_set__connectionStatusText)) ::UnityW<::TMPro::TMP_Text>  _connectionStatusText;

/// @brief Field _manualIpAddress, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__manualIpAddress, put=__cordl_internal_set__manualIpAddress)) ::UnityW<::GlobalNamespace::UIInputField>  _manualIpAddress;

/// @brief Field _manualSection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__manualSection, put=__cordl_internal_set__manualSection)) ::UnityW<::UnityEngine::GameObject>  _manualSection;

/// @brief Field _remoteButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteButton, put=__cordl_internal_set__remoteButton)) ::UnityW<::VROSC::UISlideToggle>  _remoteButton;

/// @brief Field _remoteDownloadButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__remoteDownloadButton, put=__cordl_internal_set__remoteDownloadButton)) ::UnityW<::VROSC::UIButton>  _remoteDownloadButton;

/// @brief Method AllNotesOffButtonPressed, addr 0x1739a70, size 0x1c, virtual false, abstract: false, final false
inline void AllNotesOffButtonPressed() ;

/// @brief Method AutoconnectButtonPressed, addr 0x173979c, size 0x84, virtual false, abstract: false, final false
inline void AutoconnectButtonPressed(::VROSC::InputDevice*  arg1, bool  arg2) ;

/// @brief Method Awake, addr 0x1738a48, size 0x648, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClientNameChanged, addr 0x1739888, size 0x134, virtual false, abstract: false, final false
inline void ClientNameChanged(::StringW  value) ;

/// @brief Method ConnectionStatusChanged, addr 0x1739a8c, size 0x1f0, virtual false, abstract: false, final false
inline void ConnectionStatusChanged(::VROSC::ExternalSynthesizer_Status  connectionStatus) ;

/// @brief Method ManualIpChanged, addr 0x17399bc, size 0xb4, virtual false, abstract: false, final false
inline void ManualIpChanged(::StringW  value) ;

static inline ::VROSC::RemoteControlUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1739090, size 0x47c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RemoteButtonPressed, addr 0x1739718, size 0x84, virtual false, abstract: false, final false
inline void RemoteButtonPressed(::VROSC::InputDevice*  arg1, bool  arg2) ;

/// @brief Method RemoteDownloadButtonPressed, addr 0x1739820, size 0x68, virtual false, abstract: false, final false
inline void RemoteDownloadButtonPressed() ;

/// @brief Method UpdateUIState, addr 0x173950c, size 0x1c4, virtual false, abstract: false, final false
inline void UpdateUIState() ;

/// @brief Method UpdateVisibleConnectSections, addr 0x17396d0, size 0x48, virtual false, abstract: false, final false
inline void UpdateVisibleConnectSections(bool  autoconnect) ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__allNotesOffButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__allNotesOffButton() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__autoconnectButton() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__autoconnectButton() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__autoconnectSection() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__autoconnectSection() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__clientName() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__clientName() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__connectionStatusText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__connectionStatusText() ;

constexpr ::UnityW<::GlobalNamespace::UIInputField> const& __cordl_internal_get__manualIpAddress() const;

constexpr ::UnityW<::GlobalNamespace::UIInputField>& __cordl_internal_get__manualIpAddress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__manualSection() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__manualSection() ;

constexpr ::UnityW<::VROSC::UISlideToggle> const& __cordl_internal_get__remoteButton() const;

constexpr ::UnityW<::VROSC::UISlideToggle>& __cordl_internal_get__remoteButton() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__remoteDownloadButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__remoteDownloadButton() ;

constexpr void __cordl_internal_set__allNotesOffButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__autoconnectButton(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__autoconnectSection(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__clientName(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__connectionStatusText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__manualIpAddress(::UnityW<::GlobalNamespace::UIInputField>  value) ;

constexpr void __cordl_internal_set__manualSection(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__remoteButton(::UnityW<::VROSC::UISlideToggle>  value) ;

constexpr void __cordl_internal_set__remoteDownloadButton(::UnityW<::VROSC::UIButton>  value) ;

/// @brief Method .ctor, addr 0x1739c7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExternalSynthesizer, addr 0x17389f4, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::ExternalSynthesizer> get_ExternalSynthesizer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteControlUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteControlUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteControlUI(RemoteControlUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteControlUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteControlUI(RemoteControlUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1091};

/// @brief Field _allNotesOffButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____allNotesOffButton;

/// @brief Field _remoteButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____remoteButton;

/// @brief Field _autoconnectButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UISlideToggle>  ____autoconnectButton;

/// @brief Field _autoconnectSection, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____autoconnectSection;

/// @brief Field _manualSection, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____manualSection;

/// @brief Field _clientName, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____clientName;

/// @brief Field _manualIpAddress, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UIInputField>  ____manualIpAddress;

/// @brief Field _connectionStatusText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____connectionStatusText;

/// @brief Field _remoteDownloadButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____remoteDownloadButton;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::RemoteControlUI, ____allNotesOffButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____remoteButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____autoconnectButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____autoconnectSection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____manualSection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____clientName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____manualIpAddress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____connectionStatusText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::RemoteControlUI, ____remoteDownloadButton) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::RemoteControlUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::RemoteControlUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RemoteControlUI*, "VROSC", "RemoteControlUI");
