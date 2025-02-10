#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidStringAndObjectCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidStringAndObjectCallback)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidStringAndObjectCallback;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidStringAndObjectCallback);
// Dependencies UnityEngine.AndroidJavaProxy
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidStringAndObjectCallback
class CORDL_TYPE AndroidStringAndObjectCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field _callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  _callback;

static inline ::Vuplex::WebView::Internal::AndroidStringAndObjectCallback* New_ctor(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  callback) ;

constexpr ::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>* const& __cordl_internal_get__callback() const;

constexpr ::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*& __cordl_internal_get__callback() ;

constexpr void __cordl_internal_set__callback(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  value) ;

/// @brief Method .ctor, addr 0x16d3ea0, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  callback) ;

/// @brief Method callback, addr 0x16e67d4, size 0x24, virtual false, abstract: false, final false
inline void callback(::StringW  param1, ::UnityEngine::AndroidJavaObject*  param2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidStringAndObjectCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidStringAndObjectCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidStringAndObjectCallback(AndroidStringAndObjectCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidStringAndObjectCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidStringAndObjectCallback(AndroidStringAndObjectCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{217};

/// @brief Field _callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::StringW,::UnityEngine::AndroidJavaObject*>*  ____callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidStringAndObjectCallback, ____callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidStringAndObjectCallback, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidStringAndObjectCallback);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidStringAndObjectCallback*, "Vuplex.WebView.Internal", "AndroidStringAndObjectCallback");
