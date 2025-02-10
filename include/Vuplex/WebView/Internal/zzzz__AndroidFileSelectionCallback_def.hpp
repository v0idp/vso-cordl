#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidFileSelectionCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidFileSelectionCallback)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace Vuplex::WebView::Internal {
class AndroidFileSelectionCallback___c__DisplayClass1_0;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidFileSelectionCallback;
}
namespace Vuplex::WebView::Internal {
class AndroidFileSelectionCallback___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidFileSelectionCallback);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidFileSelectionCallback/<>c__DisplayClass1_0
class CORDL_TYPE AndroidFileSelectionCallback___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field cancelCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelCallback, put=__cordl_internal_set_cancelCallback)) ::UnityEngine::AndroidJavaObject*  cancelCallback;

/// @brief Field continueCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_continueCallback, put=__cordl_internal_set_continueCallback)) ::UnityEngine::AndroidJavaObject*  continueCallback;

static inline ::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0* New_ctor() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_cancelCallback() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_cancelCallback() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_continueCallback() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_continueCallback() ;

constexpr void __cordl_internal_set_cancelCallback(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set_continueCallback(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method <callback>b__0, addr 0x16e6420, size 0x70, virtual false, abstract: false, final false
inline void _callback_b__0(::ArrayW<::StringW,::Array<::StringW>*>  filePaths) ;

/// @brief Method <callback>b__1, addr 0x16e6490, size 0xec, virtual false, abstract: false, final false
inline void _callback_b__1() ;

/// @brief Method .ctor, addr 0x16e6418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidFileSelectionCallback___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidFileSelectionCallback___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidFileSelectionCallback___c__DisplayClass1_0(AndroidFileSelectionCallback___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidFileSelectionCallback___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidFileSelectionCallback___c__DisplayClass1_0(AndroidFileSelectionCallback___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{213};

/// @brief Field continueCallback, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___continueCallback;

/// @brief Field cancelCallback, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___cancelCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0, ___continueCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0, ___cancelCallback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies UnityEngine.AndroidJavaProxy
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidFileSelectionCallback
class CORDL_TYPE AndroidFileSelectionCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
using __c__DisplayClass1_0 = ::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0;

/// @brief Field _callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>*  _callback;

static inline ::Vuplex::WebView::Internal::AndroidFileSelectionCallback* New_ctor(::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>*  callback) ;

constexpr ::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>* const& __cordl_internal_get__callback() const;

constexpr ::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>*& __cordl_internal_get__callback() ;

constexpr void __cordl_internal_set__callback(::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>*  value) ;

/// @brief Method .ctor, addr 0x16e6270, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>*  callback) ;

/// @brief Method callback, addr 0x16e62f4, size 0x124, virtual false, abstract: false, final false
inline void callback(::StringW  serializedMessage, ::UnityEngine::AndroidJavaObject*  continueCallback, ::UnityEngine::AndroidJavaObject*  cancelCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidFileSelectionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidFileSelectionCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidFileSelectionCallback(AndroidFileSelectionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidFileSelectionCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidFileSelectionCallback(AndroidFileSelectionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{214};

/// @brief Field _callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_3<::StringW,::System::Action_1<::ArrayW<::StringW,::Array<::StringW>*>>*,::System::Action*>*  ____callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidFileSelectionCallback, ____callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidFileSelectionCallback, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidFileSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidFileSelectionCallback*, "Vuplex.WebView.Internal", "AndroidFileSelectionCallback");
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidFileSelectionCallback___c__DisplayClass1_0*, "Vuplex.WebView.Internal", "AndroidFileSelectionCallback/<>c__DisplayClass1_0");
