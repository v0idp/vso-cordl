#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidStringAndBoolDelegateCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidStringAndBoolDelegateCallback)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace Vuplex::WebView::Internal {
class AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidStringAndBoolDelegateCallback;
}
namespace Vuplex::WebView::Internal {
class AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidStringAndBoolDelegateCallback/<>c__DisplayClass1_0
class CORDL_TYPE AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field delegateParam, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegateParam, put=__cordl_internal_set_delegateParam)) ::UnityEngine::AndroidJavaObject*  delegateParam;

static inline ::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0* New_ctor() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_delegateParam() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_delegateParam() ;

constexpr void __cordl_internal_set_delegateParam(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method <callback>b__0, addr 0x16e66d8, size 0xfc, virtual false, abstract: false, final false
inline void _callback_b__0(bool  boolParam) ;

/// @brief Method .ctor, addr 0x16e66d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0(AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0(AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{215};

/// @brief Field delegateParam, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___delegateParam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0, ___delegateParam) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies UnityEngine.AndroidJavaProxy
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidStringAndBoolDelegateCallback
class CORDL_TYPE AndroidStringAndBoolDelegateCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
using __c__DisplayClass1_0 = ::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0;

/// @brief Field _callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::System::Action_2<::StringW,::System::Action_1<bool>*>*  _callback;

static inline ::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback* New_ctor(::System::Action_2<::StringW,::System::Action_1<bool>*>*  callback) ;

constexpr ::System::Action_2<::StringW,::System::Action_1<bool>*>* const& __cordl_internal_get__callback() const;

constexpr ::System::Action_2<::StringW,::System::Action_1<bool>*>*& __cordl_internal_get__callback() ;

constexpr void __cordl_internal_set__callback(::System::Action_2<::StringW,::System::Action_1<bool>*>*  value) ;

/// @brief Method .ctor, addr 0x16e657c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Action_2<::StringW,::System::Action_1<bool>*>*  callback) ;

/// @brief Method callback, addr 0x16e6600, size 0xd0, virtual false, abstract: false, final false
inline void callback(::StringW  stringParam, ::UnityEngine::AndroidJavaObject*  delegateParam) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidStringAndBoolDelegateCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidStringAndBoolDelegateCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidStringAndBoolDelegateCallback(AndroidStringAndBoolDelegateCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidStringAndBoolDelegateCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidStringAndBoolDelegateCallback(AndroidStringAndBoolDelegateCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{216};

/// @brief Field _callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::StringW,::System::Action_1<bool>*>*  ____callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback, ____callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback*, "Vuplex.WebView.Internal", "AndroidStringAndBoolDelegateCallback");
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidStringAndBoolDelegateCallback___c__DisplayClass1_0*, "Vuplex.WebView.Internal", "AndroidStringAndBoolDelegateCallback/<>c__DisplayClass1_0");
