#pragma once
// IWYU pragma private; include "Vuplex/WebView/AuthRequestedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthRequestedEventArgs)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Vuplex::WebView {
class AuthRequestedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::AuthRequestedEventArgs);
// Dependencies System.EventArgs
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.AuthRequestedEventArgs
class CORDL_TYPE AuthRequestedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field Host, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Host, put=__cordl_internal_set_Host)) ::StringW  Host;

/// @brief Field _cancelCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancelCallback, put=__cordl_internal_set__cancelCallback)) ::System::Action*  _cancelCallback;

/// @brief Field _continueCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__continueCallback, put=__cordl_internal_set__continueCallback)) ::System::Action_2<::StringW,::StringW>*  _continueCallback;

/// @brief Method Cancel, addr 0x16d4b9c, size 0x24, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Continue, addr 0x16d4bc0, size 0x24, virtual false, abstract: false, final false
inline void Continue(::StringW  username, ::StringW  password) ;

static inline ::Vuplex::WebView::AuthRequestedEventArgs* New_ctor(::StringW  host, ::System::Action_2<::StringW,::StringW>*  continueCallback, ::System::Action*  cancelCallback) ;

constexpr ::StringW const& __cordl_internal_get_Host() const;

constexpr ::StringW& __cordl_internal_get_Host() ;

constexpr ::System::Action* const& __cordl_internal_get__cancelCallback() const;

constexpr ::System::Action*& __cordl_internal_get__cancelCallback() ;

constexpr ::System::Action_2<::StringW,::StringW>* const& __cordl_internal_get__continueCallback() const;

constexpr ::System::Action_2<::StringW,::StringW>*& __cordl_internal_get__continueCallback() ;

constexpr void __cordl_internal_set_Host(::StringW  value) ;

constexpr void __cordl_internal_set__cancelCallback(::System::Action*  value) ;

constexpr void __cordl_internal_set__continueCallback(::System::Action_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x16d4b1c, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  host, ::System::Action_2<::StringW,::StringW>*  continueCallback, ::System::Action*  cancelCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthRequestedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthRequestedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthRequestedEventArgs(AuthRequestedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthRequestedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthRequestedEventArgs(AuthRequestedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{118};

/// @brief Field Host, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Host;

/// @brief Field _cancelCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ____cancelCallback;

/// @brief Field _continueCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::StringW,::StringW>*  ____continueCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::AuthRequestedEventArgs, ___Host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AuthRequestedEventArgs, ____cancelCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::AuthRequestedEventArgs, ____continueCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::AuthRequestedEventArgs, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::AuthRequestedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::AuthRequestedEventArgs*, "Vuplex.WebView", "AuthRequestedEventArgs");
