#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/FastKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FastKeyboard)
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class FastKeyboard;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::FastKeyboard);
// Dependencies UnityEngine.InputSystem.Keyboard
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.FastKeyboard
class CORDL_TYPE FastKeyboard : public ::UnityEngine::InputSystem::Keyboard {
public:
// Declarations
/// @brief Method Initialize_ctrlKeyboard0, addr 0x2deff34, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard0(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard1, addr 0x2deeee4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard2, addr 0x2def0b4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard3, addr 0x2def284, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard4, addr 0x2def454, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard5, addr 0x2def624, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard6, addr 0x2def7f4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard6(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard7, addr 0x2def9c4, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard7(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard8, addr 0x2defb94, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard8(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboard9, addr 0x2defd64, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboard9(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardIMESelected, addr 0x2df6f2c, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::ButtonControl* Initialize_ctrlKeyboardIMESelected(::UnityEngine::InputSystem::Utilities::InternedString  kButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM1, addr 0x2df661c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM2, addr 0x2df67ec, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM3, addr 0x2df69bc, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM4, addr 0x2df6b8c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardOEM5, addr 0x2df6d5c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardOEM5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarda, addr 0x2debdbc, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarda(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardalt, addr 0x2df0ad0, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardalt(::UnityEngine::InputSystem::Utilities::InternedString  kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardanyKey, addr 0x2de97d8, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* Initialize_ctrlKeyboardanyKey(::UnityEngine::InputSystem::Utilities::InternedString  kAnyKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardb, addr 0x2debfa0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardb(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardbackquote, addr 0x2dea160, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackquote(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardbackslash, addr 0x2deacb8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackslash(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardbackspace, addr 0x2df1898, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardbackspace(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardc, addr 0x2dec184, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardc(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardcapsLock, addr 0x2df25d4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcapsLock(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardcomma, addr 0x2dea70c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcomma(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardcontextMenu, addr 0x2df16a8, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardcontextMenu(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardctrl, addr 0x2df10bc, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardctrl(::UnityEngine::InputSystem::Utilities::InternedString  kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardd, addr 0x2dec368, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardd(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarddelete, addr 0x2df23f0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddelete(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarddownArrow, addr 0x2deb810, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarddownArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboarde, addr 0x2dec54c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboarde(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardend, addr 0x2df2028, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardend(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardenter, addr 0x2de9d8c, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardenter(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardequals, addr 0x2deb448, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardequals(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardescape, addr 0x2de99b8, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardescape(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf, addr 0x2dec730, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf1, addr 0x2df4f6c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf10, addr 0x2df6070, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf10(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf11, addr 0x2df6254, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf11(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf12, addr 0x2df6438, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf12(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf2, addr 0x2df5150, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf3, addr 0x2df5334, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf4, addr 0x2df5518, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf5, addr 0x2df56fc, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf6, addr 0x2df58e0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf6(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf7, addr 0x2df5ac4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf7(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf8, addr 0x2df5ca8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf8(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardf9, addr 0x2df5e8c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardf9(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardg, addr 0x2dec914, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardg(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardh, addr 0x2decaf8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardh(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardhome, addr 0x2df1e44, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardhome(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardi, addr 0x2deccdc, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardi(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardinsert, addr 0x2df220c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardinsert(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardj, addr 0x2decec0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardj(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardk, addr 0x2ded0a4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardk(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardl, addr 0x2ded288, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardl(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftAlt, addr 0x2df06f0, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftAlt(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftArrow, addr 0x2deb9f4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftBracket, addr 0x2deae9c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftBracket(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftCtrl, addr 0x2df0cdc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftCtrl(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftMeta, addr 0x2df12c8, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftMeta(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardleftShift, addr 0x2df0104, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardleftShift(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardm, addr 0x2ded46c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardm(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardminus, addr 0x2deb264, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardminus(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardn, addr 0x2ded650, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardn(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumLock, addr 0x2df27b8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumLock(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad0, addr 0x2df4d88, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad0(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad1, addr 0x2df3c84, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad1(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad2, addr 0x2df3e68, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad2(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad3, addr 0x2df404c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad3(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad4, addr 0x2df4230, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad4(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad5, addr 0x2df4414, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad5(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad6, addr 0x2df45f8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad6(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad7, addr 0x2df47dc, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad7(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad8, addr 0x2df49c0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad8(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpad9, addr 0x2df4ba4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpad9(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadDivide, addr 0x2df312c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadDivide(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadEnter, addr 0x2df2f48, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEnter(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadEquals, addr 0x2df3aa0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadEquals(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadMinus, addr 0x2df36d8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMinus(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadMultiply, addr 0x2df3310, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadMultiply(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadPeriod, addr 0x2df38bc, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPeriod(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardnumpadPlus, addr 0x2df34f4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardnumpadPlus(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardo, addr 0x2ded834, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardo(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardp, addr 0x2deda18, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardp(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardpageDown, addr 0x2df1a7c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageDown(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardpageUp, addr 0x2df1c60, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpageUp(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardpause, addr 0x2df2d64, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardpause(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardperiod, addr 0x2dea8f0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardperiod(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardprintScreen, addr 0x2df299c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardprintScreen(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardq, addr 0x2dedbfc, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardq(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardquote, addr 0x2dea344, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardquote(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardr, addr 0x2dedde0, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardr(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightAlt, addr 0x2df08e0, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightAlt(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightArrow, addr 0x2debbd8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightBracket, addr 0x2deb080, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightBracket(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightCtrl, addr 0x2df0ecc, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightCtrl(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightMeta, addr 0x2df14b8, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightMeta(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardrightShift, addr 0x2df02f4, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardrightShift(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboards, addr 0x2dedfc4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboards(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardscrollLock, addr 0x2df2b80, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardscrollLock(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardsemicolon, addr 0x2dea528, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardsemicolon(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardshift, addr 0x2df04e4, size 0x20c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* Initialize_ctrlKeyboardshift(::UnityEngine::InputSystem::Utilities::InternedString  kDiscreteButtonLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardslash, addr 0x2deaad4, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardslash(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardspace, addr 0x2de9ba8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardspace(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardt, addr 0x2dee1a8, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardt(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardtab, addr 0x2de9f7c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardtab(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardu, addr 0x2dee38c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardu(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardupArrow, addr 0x2deb62c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardupArrow(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardv, addr 0x2dee570, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardv(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardw, addr 0x2dee754, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardw(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardx, addr 0x2dee938, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardx(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardy, addr 0x2deeb1c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardy(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Initialize_ctrlKeyboardz, addr 0x2deed00, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Controls::KeyControl* Initialize_ctrlKeyboardz(::UnityEngine::InputSystem::Utilities::InternedString  kKeyLayout, ::UnityEngine::InputSystem::InputControl*  parent) ;

static inline ::UnityEngine::InputSystem::FastKeyboard* New_ctor() ;

/// @brief Method .ctor, addr 0x2de6e78, size 0x2960, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastKeyboard(FastKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastKeyboard(FastKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4838};

/// @brief Field metadata offset 0xffffffff size 0x8
static constexpr ::ConstString  metadata{u";AnyKey;Button;Axis;Key;DiscreteButton;Keyboard"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::FastKeyboard, 0x1f0>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::FastKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::FastKeyboard*, "UnityEngine.InputSystem", "FastKeyboard");
