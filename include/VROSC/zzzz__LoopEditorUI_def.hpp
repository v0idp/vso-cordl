#pragma once
// IWYU pragma private; include "VROSC/LoopEditorUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopEditorUI)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class LoopEditorModeSelectorUI;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class Loop;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class LoopEditorUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorUI
class CORDL_TYPE LoopEditorUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_LoopPlayer)) ::UnityW<::VROSC::LoopPlayer>  LoopPlayer;

/// @brief Field OnActivated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnActivated, put=setStaticF_OnActivated)) ::System::Action_1<::UnityW<::VROSC::LoopEditorUI>>*  OnActivated;

/// @brief Field OnActivatedSelf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnActivatedSelf, put=__cordl_internal_set_OnActivatedSelf)) ::System::Action_1<bool>*  OnActivatedSelf;

/// @brief Field OnClosed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClosed, put=__cordl_internal_set_OnClosed)) ::System::Action*  OnClosed;

/// @brief Field OnNewLoopPlayer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNewLoopPlayer, put=__cordl_internal_set_OnNewLoopPlayer)) ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  OnNewLoopPlayer;

/// @brief Field <IsOpen>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOpen_k__BackingField, put=__cordl_internal_set__IsOpen_k__BackingField)) bool  _IsOpen_k__BackingField;

/// @brief Field _closeButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::VROSC::UIButton>  _closeButton;

/// @brief Field _closeWhenOtherWindowOpens, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__closeWhenOtherWindowOpens, put=__cordl_internal_set__closeWhenOtherWindowOpens)) bool  _closeWhenOtherWindowOpens;

/// @brief Field _lengthText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__lengthText, put=__cordl_internal_set__lengthText)) ::UnityW<::TMPro::TextMeshPro>  _lengthText;

/// @brief Field _loopPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayer, put=__cordl_internal_set__loopPlayer)) ::UnityW<::VROSC::LoopPlayer>  _loopPlayer;

/// @brief Field _stateSelectorUI, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateSelectorUI, put=__cordl_internal_set__stateSelectorUI)) ::UnityW<::VROSC::LoopEditorModeSelectorUI>  _stateSelectorUI;

/// @brief Method Awake, addr 0x1892a9c, size 0x1bc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckFactor, addr 0x18933cc, size 0xdc, virtual false, abstract: false, final false
inline bool CheckFactor(float_t  asBars, int32_t  factor) ;

/// @brief Method Close, addr 0x1892cd0, size 0x174, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method CloseIfOtherOpen, addr 0x189334c, size 0x80, virtual false, abstract: false, final false
inline void CloseIfOtherOpen(::VROSC::LoopEditorUI*  opened) ;

/// @brief Method ClosePressed, addr 0x1892e44, size 0x4, virtual false, abstract: false, final false
inline void ClosePressed(::VROSC::ClickData*  obj) ;

/// @brief Method LoopDeleted, addr 0x1892fec, size 0x4, virtual false, abstract: false, final false
inline void LoopDeleted(::VROSC::LoopPlayer*  arg1, bool  arg2) ;

static inline ::VROSC::LoopEditorUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1892e48, size 0x1a4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Open, addr 0x1892ff0, size 0x194, virtual false, abstract: false, final false
inline void Open(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method UpdateLength, addr 0x1893184, size 0x1c8, virtual false, abstract: false, final false
inline void UpdateLength(::VROSC::Loop*  loop) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnActivatedSelf() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnActivatedSelf() ;

constexpr ::System::Action* const& __cordl_internal_get_OnClosed() const;

constexpr ::System::Action*& __cordl_internal_get_OnClosed() ;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_OnNewLoopPlayer() const;

constexpr ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_OnNewLoopPlayer() ;

constexpr bool const& __cordl_internal_get__IsOpen_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOpen_k__BackingField() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__closeButton() ;

constexpr bool const& __cordl_internal_get__closeWhenOtherWindowOpens() const;

constexpr bool& __cordl_internal_get__closeWhenOtherWindowOpens() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__lengthText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__lengthText() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__loopPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__loopPlayer() ;

constexpr ::UnityW<::VROSC::LoopEditorModeSelectorUI> const& __cordl_internal_get__stateSelectorUI() const;

constexpr ::UnityW<::VROSC::LoopEditorModeSelectorUI>& __cordl_internal_get__stateSelectorUI() ;

constexpr void __cordl_internal_set_OnActivatedSelf(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnClosed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnNewLoopPlayer(::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

constexpr void __cordl_internal_set__IsOpen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__closeWhenOtherWindowOpens(bool  value) ;

constexpr void __cordl_internal_set__lengthText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__stateSelectorUI(::UnityW<::VROSC::LoopEditorModeSelectorUI>  value) ;

/// @brief Method .ctor, addr 0x18934a8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::VROSC::LoopEditorUI>>* getStaticF_OnActivated() ;

/// @brief Method get_IsOpen, addr 0x1892a8c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_LoopPlayer, addr 0x1892a94, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopPlayer> get_LoopPlayer() ;

static inline void setStaticF_OnActivated(::System::Action_1<::UnityW<::VROSC::LoopEditorUI>>*  value) ;

/// @brief Method set_IsOpen, addr 0x1892a80, size 0xc, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorUI(LoopEditorUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorUI(LoopEditorUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{641};

/// @brief Field <IsOpen>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsOpen_k__BackingField;

/// @brief Field OnActivatedSelf, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnActivatedSelf;

/// @brief Field _stateSelectorUI, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopEditorModeSelectorUI>  ____stateSelectorUI;

/// @brief Field _closeButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____closeButton;

/// @brief Field _lengthText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____lengthText;

/// @brief Field _closeWhenOtherWindowOpens, offset: 0x48, size: 0x1, def value: None
 bool  ____closeWhenOtherWindowOpens;

/// @brief Field _loopPlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____loopPlayer;

/// @brief Field OnNewLoopPlayer, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::LoopPlayer>>*  ___OnNewLoopPlayer;

/// @brief Field OnClosed, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___OnClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorUI, ____IsOpen_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ___OnActivatedSelf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ____stateSelectorUI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ____closeButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ____lengthText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ____closeWhenOtherWindowOpens) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ____loopPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ___OnNewLoopPlayer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorUI, ___OnClosed) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorUI*, "VROSC", "LoopEditorUI");
