#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/KeyboardManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyboardManager)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace Vuplex::WebView::Internal {
class KeyboardEventArgs;
}
namespace Vuplex::WebView::Internal {
class KeyboardManager___c__DisplayClass28_0;
}
namespace Vuplex::WebView::Internal {
class KeyboardManager___c__DisplayClass29_0;
}
namespace Vuplex::WebView::Internal {
class NativeKeyboardListener;
}
namespace Vuplex::WebView {
class BaseKeyboard;
}
namespace Vuplex::WebView {
class BaseWebViewPrefab;
}
namespace Vuplex::WebView {
class ClickedEventArgs;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class KeyboardManager;
}
namespace Vuplex::WebView::Internal {
class KeyboardManager___c__DisplayClass28_0;
}
namespace Vuplex::WebView::Internal {
class KeyboardManager___c__DisplayClass29_0;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::KeyboardManager);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.KeyboardManager/<>c__DisplayClass28_0
class CORDL_TYPE KeyboardManager___c__DisplayClass28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sender, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) ::System::Object*  sender;

static inline ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0* New_ctor() ;

/// @brief Method <WebView_FocusChanged>b__0, addr 0x17bead8, size 0x30, virtual false, abstract: false, final false
inline bool _WebView_FocusChanged_b__0(::Vuplex::WebView::BaseWebViewPrefab*  p) ;

constexpr ::System::Object* const& __cordl_internal_get_sender() const;

constexpr ::System::Object*& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set_sender(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x17be684, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardManager___c__DisplayClass28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardManager___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardManager___c__DisplayClass28_0(KeyboardManager___c__DisplayClass28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardManager___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardManager___c__DisplayClass28_0(KeyboardManager___c__DisplayClass28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{247};

/// @brief Field sender, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___sender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0, ___sender) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.KeyboardManager/<>c__DisplayClass29_0
class CORDL_TYPE KeyboardManager___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sender, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) ::System::Object*  sender;

static inline ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <WebView_ImeInputFieldPositionChanged>b__0, addr 0x17beb08, size 0x30, virtual false, abstract: false, final false
inline bool _WebView_ImeInputFieldPositionChanged_b__0(::Vuplex::WebView::BaseWebViewPrefab*  p) ;

constexpr ::System::Object* const& __cordl_internal_get_sender() const;

constexpr ::System::Object*& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set_sender(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x17be8ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardManager___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardManager___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardManager___c__DisplayClass29_0(KeyboardManager___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardManager___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardManager___c__DisplayClass29_0(KeyboardManager___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{248};

/// @brief Field sender, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___sender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0, ___sender) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.KeyboardManager
class CORDL_TYPE KeyboardManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass28_0 = ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0;

using __c__DisplayClass29_0 = ::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0;

/// @brief Field _destroyed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__destroyed, put=setStaticF__destroyed)) bool  _destroyed;

/// @brief Field _focusedWebViewPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__focusedWebViewPrefab, put=__cordl_internal_set__focusedWebViewPrefab)) ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  _focusedWebViewPrefab;

/// @brief Field _hoveredWebViewPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveredWebViewPrefab, put=__cordl_internal_set__hoveredWebViewPrefab)) ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  _hoveredWebViewPrefab;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Vuplex::WebView::Internal::KeyboardManager>  _instance;

/// @brief Field _keyboards, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyboards, put=__cordl_internal_set__keyboards)) ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>*  _keyboards;

/// @brief Field _nativeKeyboardListener, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeKeyboardListener, put=__cordl_internal_set__nativeKeyboardListener)) ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>  _nativeKeyboardListener;

/// @brief Field _pointerIsHoveringOverKeyboard, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__pointerIsHoveringOverKeyboard, put=__cordl_internal_set__pointerIsHoveringOverKeyboard)) bool  _pointerIsHoveringOverKeyboard;

/// @brief Field _webViewPrefabs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__webViewPrefabs, put=__cordl_internal_set__webViewPrefabs)) ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>*  _webViewPrefabs;

/// @brief Method AddKeyboard, addr 0x17bcc1c, size 0x164, virtual false, abstract: false, final false
inline void AddKeyboard(::Vuplex::WebView::BaseKeyboard*  keyboard) ;

/// @brief Method Awake, addr 0x17bd5c8, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method NativeKeyboardListener_ImeCompositionCancelled, addr 0x17bdde0, size 0xc4, virtual false, abstract: false, final false
inline void NativeKeyboardListener_ImeCompositionCancelled(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method NativeKeyboardListener_ImeCompositionChanged, addr 0x17bdea4, size 0xe4, virtual false, abstract: false, final false
inline void NativeKeyboardListener_ImeCompositionChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs) ;

/// @brief Method NativeKeyboardListener_ImeCompositionFinished, addr 0x17bdf88, size 0xe4, virtual false, abstract: false, final false
inline void NativeKeyboardListener_ImeCompositionFinished(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs) ;

/// @brief Method NativeKeyboardListener_KeyDownReceived, addr 0x17be06c, size 0x188, virtual false, abstract: false, final false
inline void NativeKeyboardListener_KeyDownReceived(::System::Object*  sender, ::Vuplex::WebView::Internal::KeyboardEventArgs*  eventArgs) ;

/// @brief Method NativeKeyboardListener_KeyUpReceived, addr 0x17be1f4, size 0xec, virtual false, abstract: false, final false
inline void NativeKeyboardListener_KeyUpReceived(::System::Object*  sender, ::Vuplex::WebView::Internal::KeyboardEventArgs*  eventArgs) ;

static inline ::Vuplex::WebView::Internal::KeyboardManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17bdbd0, size 0x4c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnScreenKeyboard_KeyPressed, addr 0x17be2e0, size 0xdc, virtual false, abstract: false, final false
inline void OnScreenKeyboard_KeyPressed(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::StringW>*  eventArgs) ;

/// @brief Method OnScreenKeyboard_PointerEntered, addr 0x17be3bc, size 0xc, virtual false, abstract: false, final false
inline void OnScreenKeyboard_PointerEntered(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method OnScreenKeyboard_PointerExited, addr 0x17be3c8, size 0x8, virtual false, abstract: false, final false
inline void OnScreenKeyboard_PointerExited(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method RemoveKeyboard, addr 0x17bcd80, size 0x198, virtual false, abstract: false, final false
inline void RemoveKeyboard(::Vuplex::WebView::BaseKeyboard*  keyboard) ;

/// @brief Method SetKeyboardEnabled, addr 0x17bcf18, size 0xc, virtual false, abstract: false, final false
inline void SetKeyboardEnabled(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab, bool  enabled) ;

/// @brief Method Update, addr 0x17be3d0, size 0x10c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WebViewPrefab_Clicked, addr 0x17bdc1c, size 0x8c, virtual false, abstract: false, final false
inline void WebViewPrefab_Clicked(::System::Object*  sender, ::Vuplex::WebView::ClickedEventArgs*  eventArgs) ;

/// @brief Method WebViewPrefab_PointerEntered, addr 0x17be8b4, size 0xa4, virtual false, abstract: false, final false
inline void WebViewPrefab_PointerEntered(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method WebViewPrefab_PointerExited, addr 0x17be958, size 0xbc, virtual false, abstract: false, final false
inline void WebViewPrefab_PointerExited(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

/// @brief Method WebView_FocusChanged, addr 0x17be4dc, size 0x1a8, virtual false, abstract: false, final false
inline void WebView_FocusChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<bool>*  eventArgs) ;

/// @brief Method WebView_ImeInputFieldPositionChanged, addr 0x17be68c, size 0x220, virtual false, abstract: false, final false
inline void WebView_ImeInputFieldPositionChanged(::System::Object*  sender, ::Vuplex::WebView::EventArgs_1<::UnityEngine::Vector2Int>*  eventArgs) ;

constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> const& __cordl_internal_get__focusedWebViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>& __cordl_internal_get__focusedWebViewPrefab() ;

constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab> const& __cordl_internal_get__hoveredWebViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>& __cordl_internal_get__hoveredWebViewPrefab() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>* const& __cordl_internal_get__keyboards() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>*& __cordl_internal_get__keyboards() ;

constexpr ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener> const& __cordl_internal_get__nativeKeyboardListener() const;

constexpr ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>& __cordl_internal_get__nativeKeyboardListener() ;

constexpr bool const& __cordl_internal_get__pointerIsHoveringOverKeyboard() const;

constexpr bool& __cordl_internal_get__pointerIsHoveringOverKeyboard() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>* const& __cordl_internal_get__webViewPrefabs() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>*& __cordl_internal_get__webViewPrefabs() ;

constexpr void __cordl_internal_set__focusedWebViewPrefab(::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  value) ;

constexpr void __cordl_internal_set__hoveredWebViewPrefab(::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  value) ;

constexpr void __cordl_internal_set__keyboards(::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>*  value) ;

constexpr void __cordl_internal_set__nativeKeyboardListener(::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>  value) ;

constexpr void __cordl_internal_set__pointerIsHoveringOverKeyboard(bool  value) ;

constexpr void __cordl_internal_set__webViewPrefabs(::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>*  value) ;

/// @brief Method _addWebViewPrefab, addr 0x17bcf24, size 0x324, virtual false, abstract: false, final false
inline void _addWebViewPrefab(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab) ;

/// @brief Method .ctor, addr 0x17bea14, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _removeWebViewPrefab, addr 0x17bd248, size 0x380, virtual false, abstract: false, final false
inline void _removeWebViewPrefab(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab) ;

/// @brief Method _setFocusedWebViewPrefab, addr 0x17bdca8, size 0x138, virtual false, abstract: false, final false
inline void _setFocusedWebViewPrefab(::Vuplex::WebView::BaseWebViewPrefab*  webViewPrefab) ;

static inline bool getStaticF__destroyed() ;

static inline ::UnityW<::Vuplex::WebView::Internal::KeyboardManager> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x17bcadc, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::Vuplex::WebView::Internal::KeyboardManager> get_Instance() ;

static inline void setStaticF__destroyed(bool  value) ;

static inline void setStaticF__instance(::UnityW<::Vuplex::WebView::Internal::KeyboardManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardManager(KeyboardManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardManager(KeyboardManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{249};

/// @brief Field _focusedWebViewPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  ____focusedWebViewPrefab;

/// @brief Field _hoveredWebViewPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::BaseWebViewPrefab>  ____hoveredWebViewPrefab;

/// @brief Field _keyboards, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseKeyboard>>*  ____keyboards;

/// @brief Field _nativeKeyboardListener, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::NativeKeyboardListener>  ____nativeKeyboardListener;

/// @brief Field _pointerIsHoveringOverKeyboard, offset: 0x40, size: 0x1, def value: None
 bool  ____pointerIsHoveringOverKeyboard;

/// @brief Field _webViewPrefabs, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Vuplex::WebView::BaseWebViewPrefab>>*  ____webViewPrefabs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager, ____focusedWebViewPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager, ____hoveredWebViewPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager, ____keyboards) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager, ____nativeKeyboardListener) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager, ____pointerIsHoveringOverKeyboard) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardManager, ____webViewPrefabs) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::KeyboardManager, 0x50>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::KeyboardManager);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::KeyboardManager*, "Vuplex.WebView.Internal", "KeyboardManager");
NEED_NO_BOX(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass28_0*, "Vuplex.WebView.Internal", "KeyboardManager/<>c__DisplayClass28_0");
NEED_NO_BOX(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::KeyboardManager___c__DisplayClass29_0*, "Vuplex.WebView.Internal", "KeyboardManager/<>c__DisplayClass29_0");
