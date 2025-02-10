#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidBoolCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
CORDL_MODULE_EXPORT(AndroidBoolCallback)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidBoolCallback;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidBoolCallback);
// Dependencies UnityEngine.AndroidJavaProxy
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidBoolCallback
class CORDL_TYPE AndroidBoolCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field _callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::System::Action_1<bool>*  _callback;

static inline ::Vuplex::WebView::Internal::AndroidBoolCallback* New_ctor(::System::Action_1<bool>*  callback) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get__callback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get__callback() ;

constexpr void __cordl_internal_set__callback(::System::Action_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x16e5fc8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<bool>*  callback) ;

/// @brief Method callback, addr 0x16e604c, size 0x34, virtual false, abstract: false, final false
inline void callback(bool  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidBoolCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidBoolCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidBoolCallback(AndroidBoolCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidBoolCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidBoolCallback(AndroidBoolCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{211};

/// @brief Field _callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<bool>*  ____callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidBoolCallback, ____callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidBoolCallback, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidBoolCallback);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidBoolCallback*, "Vuplex.WebView.Internal", "AndroidBoolCallback");
