#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/KeyboardEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "Vuplex/WebView/zzzz__KeyModifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyboardEventArgs)
namespace Vuplex::WebView {
struct KeyModifier;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class KeyboardEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::KeyboardEventArgs);
// Dependencies System.EventArgs, Vuplex.WebView.KeyModifier
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.KeyboardEventArgs
class CORDL_TYPE KeyboardEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::StringW  Key;

/// @brief Field Modifiers, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Modifiers, put=__cordl_internal_set_Modifiers)) ::Vuplex::WebView::KeyModifier  Modifiers;

static inline ::Vuplex::WebView::Internal::KeyboardEventArgs* New_ctor(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers) ;

/// @brief Method ToString, addr 0x17bebec, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_Key() const;

constexpr ::StringW& __cordl_internal_get_Key() ;

constexpr ::Vuplex::WebView::KeyModifier const& __cordl_internal_get_Modifiers() const;

constexpr ::Vuplex::WebView::KeyModifier& __cordl_internal_get_Modifiers() ;

constexpr void __cordl_internal_set_Key(::StringW  value) ;

constexpr void __cordl_internal_set_Modifiers(::Vuplex::WebView::KeyModifier  value) ;

/// @brief Method .ctor, addr 0x17beb78, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::Vuplex::WebView::KeyModifier  modifiers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardEventArgs(KeyboardEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardEventArgs(KeyboardEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{252};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Key;

/// @brief Field Modifiers, offset: 0x18, size: 0x4, def value: None
 ::Vuplex::WebView::KeyModifier  ___Modifiers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardEventArgs, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::KeyboardEventArgs, ___Modifiers) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::KeyboardEventArgs, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::KeyboardEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::KeyboardEventArgs*, "Vuplex.WebView.Internal", "KeyboardEventArgs");
