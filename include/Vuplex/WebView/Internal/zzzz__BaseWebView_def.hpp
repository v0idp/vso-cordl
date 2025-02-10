#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/BaseWebView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseWebView)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Specialized {
class OrderedDictionary;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class EventHandler;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Application_LowMemoryCallback;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView_InitState;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView__Copy_d__60;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView__Cut_d__62;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass137_0;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass139_0;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass185_0;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass71_0;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView___initBase_d__138;
}
namespace Vuplex::WebView::Internal {
class UrlAction;
}
namespace Vuplex::WebView {
class ConsoleMessageEventArgs;
}
namespace Vuplex::WebView {
struct ConsoleMessageLevel;
}
namespace Vuplex::WebView {
template<typename T>
class EventArgs_1;
}
namespace Vuplex::WebView {
class FocusedInputFieldChangedEventArgs;
}
namespace Vuplex::WebView {
class LoadFailedEventArgs;
}
namespace Vuplex::WebView {
class ProgressChangedEventArgs;
}
namespace Vuplex::WebView {
class TerminatedEventArgs;
}
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
struct BaseWebView_InitState;
}
namespace Vuplex::WebView::Internal {
class BaseWebView;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass137_0;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass139_0;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass185_0;
}
namespace Vuplex::WebView::Internal {
class BaseWebView___c__DisplayClass71_0;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView__Copy_d__60;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView__Cut_d__62;
}
namespace Vuplex::WebView::Internal {
struct BaseWebView___initBase_d__138;
}
// Write type traits
MARK_VAL_T(::Vuplex::WebView::Internal::BaseWebView_InitState);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BaseWebView);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BaseWebView___c);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0);
MARK_VAL_T(::Vuplex::WebView::Internal::BaseWebView__Copy_d__60);
MARK_VAL_T(::Vuplex::WebView::Internal::BaseWebView__Cut_d__62);
MARK_VAL_T(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138);
// Dependencies 
namespace Vuplex::WebView::Internal {
// Is value type: true
// CS Name: Vuplex.WebView.Internal.BaseWebView/InitState
struct CORDL_TYPE BaseWebView_InitState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BaseWebView_InitState_Unwrapped
enum struct __BaseWebView_InitState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_InProgress = static_cast<int32_t>(0x1),
__E_Initialized = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BaseWebView_InitState_Unwrapped () const noexcept {
return static_cast<__BaseWebView_InitState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView_InitState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BaseWebView_InitState(int32_t  value__) noexcept;

/// @brief Field InProgress value: I32(1)
static ::Vuplex::WebView::Internal::BaseWebView_InitState const InProgress;

/// @brief Field Initialized value: I32(2)
static ::Vuplex::WebView::Internal::BaseWebView_InitState const Initialized;

/// @brief Field Uninitialized value: I32(0)
static ::Vuplex::WebView::Internal::BaseWebView_InitState const Uninitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView_InitState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView_InitState, 0x4>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BaseWebView/<>c
class CORDL_TYPE BaseWebView___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Vuplex::WebView::Internal::BaseWebView___c*  __9;

/// @brief Field <>9__145_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__145_0, put=setStaticF___9__145_0)) ::UnityEngine::Application_LowMemoryCallback*  __9__145_0;

static inline ::Vuplex::WebView::Internal::BaseWebView___c* New_ctor() ;

/// @brief Method <_staticInit>b__145_0, addr 0x17bb314, size 0x44, virtual false, abstract: false, final false
inline void __staticInit_b__145_0() ;

/// @brief Method .ctor, addr 0x17bb30c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::WebView::Internal::BaseWebView___c* getStaticF___9() ;

static inline ::UnityEngine::Application_LowMemoryCallback* getStaticF___9__145_0() ;

static inline void setStaticF___9(::Vuplex::WebView::Internal::BaseWebView___c*  value) ;

static inline void setStaticF___9__145_0(::UnityEngine::Application_LowMemoryCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebView___c(BaseWebView___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebView___c(BaseWebView___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView___c, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BaseWebView/<>c__DisplayClass137_0
class CORDL_TYPE BaseWebView___c__DisplayClass137_0 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::Vuplex::WebView::Internal::UrlAction*  action;

static inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0* New_ctor() ;

constexpr ::Vuplex::WebView::Internal::UrlAction* const& __cordl_internal_get_action() const;

constexpr ::Vuplex::WebView::Internal::UrlAction*& __cordl_internal_get_action() ;

constexpr void __cordl_internal_set_action(::Vuplex::WebView::Internal::UrlAction*  value) ;

/// @brief Method <_handleUrlChanged>b__0, addr 0x17bb3f8, size 0x24, virtual false, abstract: false, final false
inline bool __handleUrlChanged_b__0(::StringW  scheme) ;

/// @brief Method .ctor, addr 0x17bb3f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView___c__DisplayClass137_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass137_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebView___c__DisplayClass137_0(BaseWebView___c__DisplayClass137_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass137_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebView___c__DisplayClass137_0(BaseWebView___c__DisplayClass137_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{228};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::Vuplex::WebView::Internal::UrlAction*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0, ___action) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BaseWebView/<>c__DisplayClass139_0
class CORDL_TYPE BaseWebView___c__DisplayClass139_0 : public ::System::Object {
public:
// Declarations
/// @brief Field info, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::System::Collections::Specialized::OrderedDictionary*  info;

static inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0* New_ctor() ;

constexpr ::System::Collections::Specialized::OrderedDictionary* const& __cordl_internal_get_info() const;

constexpr ::System::Collections::Specialized::OrderedDictionary*& __cordl_internal_get_info() ;

constexpr void __cordl_internal_set_info(::System::Collections::Specialized::OrderedDictionary*  value) ;

/// @brief Method <_logSystemInfoIfNeeded>b__0, addr 0x17bb424, size 0x70, virtual false, abstract: false, final false
inline ::StringW __logSystemInfoIfNeeded_b__0(::StringW  key) ;

/// @brief Method .ctor, addr 0x17bb41c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView___c__DisplayClass139_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass139_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebView___c__DisplayClass139_0(BaseWebView___c__DisplayClass139_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass139_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebView___c__DisplayClass139_0(BaseWebView___c__DisplayClass139_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{229};

/// @brief Field info, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Specialized::OrderedDictionary*  ___info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0, ___info) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BaseWebView/<>c__DisplayClass185_0
class CORDL_TYPE BaseWebView___c__DisplayClass185_0 : public ::System::Object {
public:
// Declarations
/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::System::EventHandler*  value;

static inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0* New_ctor() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_value() const;

constexpr ::System::EventHandler*& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_value(::System::EventHandler*  value) ;

/// @brief Method <add_PageLoadFailed>b__0, addr 0x17bb49c, size 0x84, virtual false, abstract: false, final false
inline void _add_PageLoadFailed_b__0(::System::Object*  sender, ::Vuplex::WebView::LoadFailedEventArgs*  eventArgs) ;

/// @brief Method .ctor, addr 0x17bb494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView___c__DisplayClass185_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass185_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebView___c__DisplayClass185_0(BaseWebView___c__DisplayClass185_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass185_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebView___c__DisplayClass185_0(BaseWebView___c__DisplayClass185_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{230};

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::System::EventHandler*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BaseWebView/<>c__DisplayClass71_0
class CORDL_TYPE BaseWebView___c__DisplayClass71_0 : public ::System::Object {
public:
// Declarations
/// @brief Field additionalHttpHeaders, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_additionalHttpHeaders, put=__cordl_internal_set_additionalHttpHeaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders;

static inline ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0* New_ctor() ;

/// @brief Method <LoadUrl>b__0, addr 0x17bb528, size 0x80, virtual false, abstract: false, final false
inline ::StringW _LoadUrl_b__0(::StringW  key) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_additionalHttpHeaders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_additionalHttpHeaders() ;

constexpr void __cordl_internal_set_additionalHttpHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x17bb520, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView___c__DisplayClass71_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass71_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebView___c__DisplayClass71_0(BaseWebView___c__DisplayClass71_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView___c__DisplayClass71_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebView___c__DisplayClass71_0(BaseWebView___c__DisplayClass71_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{231};

/// @brief Field additionalHttpHeaders, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___additionalHttpHeaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0, ___additionalHttpHeaders) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::WebView::Internal {
// Is value type: true
// CS Name: Vuplex.WebView.Internal.BaseWebView/<Copy>d__60
struct CORDL_TYPE BaseWebView__Copy_d__60 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17bb5a8, size 0x1fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17bb7a4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView__Copy_d__60() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::Internal::BaseWebView>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr BaseWebView__Copy_d__60(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{232};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Copy_d__60, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Copy_d__60, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Copy_d__60, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Copy_d__60, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView__Copy_d__60, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::WebView::Internal {
// Is value type: true
// CS Name: Vuplex.WebView.Internal.BaseWebView/<Cut>d__62
struct CORDL_TYPE BaseWebView__Cut_d__62 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17bb7b0, size 0x23c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17bb9ec, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView__Cut_d__62() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::Internal::BaseWebView>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr BaseWebView__Cut_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Cut_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Cut_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Cut_d__62, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView__Cut_d__62, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView__Cut_d__62, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Vuplex::WebView::Internal {
// Is value type: true
// CS Name: Vuplex.WebView.Internal.BaseWebView/<_initBase>d__138
struct CORDL_TYPE BaseWebView___initBase_d__138 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17bb9f8, size 0x3f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17bbea8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView___initBase_d__138() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::WebView::Internal::BaseWebView>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "asyncInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None }]
constexpr BaseWebView___initBase_d__138(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this, int32_t  width, int32_t  height, bool  createTexture, bool  asyncInit, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{234};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::Internal::BaseWebView>  __4__this;

/// @brief Field width, offset: 0x28, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 int32_t  height;

/// @brief Field createTexture, offset: 0x30, size: 0x1, def value: None
 bool  createTexture;

/// @brief Field asyncInit, offset: 0x31, size: 0x1, def value: None
 bool  asyncInit;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, createTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, asyncInit) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, 0x40>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.IntPtr, UnityEngine.MonoBehaviour, UnityEngine.Vector2Int, Vuplex.WebView.Internal.BaseWebView::InitState
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.BaseWebView
class CORDL_TYPE BaseWebView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitState = ::Vuplex::WebView::Internal::BaseWebView_InitState;

using _Copy_d__60 = ::Vuplex::WebView::Internal::BaseWebView__Copy_d__60;

using _Cut_d__62 = ::Vuplex::WebView::Internal::BaseWebView__Cut_d__62;

using __c = ::Vuplex::WebView::Internal::BaseWebView___c;

using __c__DisplayClass137_0 = ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0;

using __c__DisplayClass139_0 = ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0;

using __c__DisplayClass185_0 = ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0;

using __c__DisplayClass71_0 = ::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0;

using __initBase_d__138 = ::Vuplex::WebView::Internal::BaseWebView___initBase_d__138;

/// @brief Field CloseRequested, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CloseRequested, put=__cordl_internal_set_CloseRequested)) ::System::EventHandler*  CloseRequested;

/// @brief Field FocusChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FocusChanged, put=__cordl_internal_set_FocusChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  FocusChanged;

 __declspec(property(get=get_IsDisposed, put=set_IsDisposed)) bool  IsDisposed;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

/// @brief Field LoadFailed, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoadFailed, put=__cordl_internal_set_LoadFailed)) ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  LoadFailed;

/// @brief Field LoadProgressChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoadProgressChanged, put=__cordl_internal_set_LoadProgressChanged)) ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  LoadProgressChanged;

/// @brief Field MessageEmitted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessageEmitted, put=__cordl_internal_set_MessageEmitted)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  MessageEmitted;

 __declspec(property(get=get_PageLoadScripts)) ::System::Collections::Generic::List_1<::StringW>*  PageLoadScripts;

 __declspec(property(get=get_Resolution)) float_t  Resolution;

/// @brief Field STANDARD_URI_SCHEMES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_STANDARD_URI_SCHEMES, put=setStaticF_STANDARD_URI_SCHEMES)) ::ArrayW<::StringW,::Array<::StringW>*>  STANDARD_URI_SCHEMES;

 __declspec(property(get=get_Size, put=set_Size)) ::UnityEngine::Vector2Int  Size;

 __declspec(property(get=get_SizeInPixels)) ::UnityEngine::Vector2  SizeInPixels;

/// @brief Field Terminated, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Terminated, put=__cordl_internal_set_Terminated)) ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  Terminated;

 __declspec(property(get=get_Texture, put=set_Texture)) ::UnityW<::UnityEngine::Texture2D>  Texture;

 __declspec(property(get=get_Title, put=set_Title)) ::StringW  Title;

/// @brief Field TitleChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleChanged, put=__cordl_internal_set_TitleChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  TitleChanged;

 __declspec(property(get=get_Url, put=set_Url)) ::StringW  Url;

/// @brief Field UrlChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_UrlChanged, put=__cordl_internal_set_UrlChanged)) ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  UrlChanged;

/// @brief Field VideoRectChanged, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_VideoRectChanged, put=__cordl_internal_set_VideoRectChanged)) ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  VideoRectChanged;

 __declspec(property(get=get_VideoTexture)) ::UnityW<::UnityEngine::Texture2D>  VideoTexture;

/// @brief Field <IsDisposed>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDisposed_k__BackingField, put=__cordl_internal_set__IsDisposed_k__BackingField)) bool  _IsDisposed_k__BackingField;

/// @brief Field <PageLoadScripts>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__PageLoadScripts_k__BackingField, put=__cordl_internal_set__PageLoadScripts_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _PageLoadScripts_k__BackingField;

/// @brief Field <Resolution>k__BackingField, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution_k__BackingField, put=__cordl_internal_set__Resolution_k__BackingField)) float_t  _Resolution_k__BackingField;

/// @brief Field <Size>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Size_k__BackingField, put=__cordl_internal_set__Size_k__BackingField)) ::UnityEngine::Vector2Int  _Size_k__BackingField;

/// @brief Field <Texture>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Texture_k__BackingField, put=__cordl_internal_set__Texture_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _Texture_k__BackingField;

/// @brief Field <Title>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Title_k__BackingField, put=__cordl_internal_set__Title_k__BackingField)) ::StringW  _Title_k__BackingField;

/// @brief Field <Url>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Url_k__BackingField, put=__cordl_internal_set__Url_k__BackingField)) ::StringW  _Url_k__BackingField;

/// @brief Field <VideoTexture>k__BackingField, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__VideoTexture_k__BackingField, put=__cordl_internal_set__VideoTexture_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _VideoTexture_k__BackingField;

/// @brief Field _consoleMessageLogged, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__consoleMessageLogged, put=__cordl_internal_set__consoleMessageLogged)) ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  _consoleMessageLogged;

/// @brief Field _currentNativeTexture, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentNativeTexture, put=__cordl_internal_set__currentNativeTexture)) ::System::IntPtr  _currentNativeTexture;

/// @brief Field _focusedInputFieldChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__focusedInputFieldChanged, put=__cordl_internal_set__focusedInputFieldChanged)) ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  _focusedInputFieldChanged;

/// @brief Field _initState, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__initState, put=__cordl_internal_set__initState)) ::Vuplex::WebView::Internal::BaseWebView_InitState  _initState;

/// @brief Field _initTaskSource, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__initTaskSource, put=__cordl_internal_set__initTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _initTaskSource;

/// @brief Field _legacyPageLoadFailedHandlerMap, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__legacyPageLoadFailedHandlerMap, put=__cordl_internal_set__legacyPageLoadFailedHandlerMap)) ::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>*  _legacyPageLoadFailedHandlerMap;

/// @brief Field _materialForBlitting, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialForBlitting, put=__cordl_internal_set__materialForBlitting)) ::UnityW<::UnityEngine::Material>  _materialForBlitting;

/// @brief Field _native2DModeEnabled, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__native2DModeEnabled, put=__cordl_internal_set__native2DModeEnabled)) bool  _native2DModeEnabled;

/// @brief Field _native2DPosition, offset 0xc4, size 0x8 
 __declspec(property(get=__cordl_internal_get__native2DPosition, put=__cordl_internal_set__native2DPosition)) ::UnityEngine::Vector2Int  _native2DPosition;

/// @brief Field _nativeWebViewPtr, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeWebViewPtr, put=__cordl_internal_set__nativeWebViewPtr)) ::System::IntPtr  _nativeWebViewPtr;

/// @brief Field _pageLoadFinishedTaskSource, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageLoadFinishedTaskSource, put=__cordl_internal_set__pageLoadFinishedTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _pageLoadFinishedTaskSource;

/// @brief Field _pendingCanGoBackCallbacks, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingCanGoBackCallbacks, put=__cordl_internal_set__pendingCanGoBackCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  _pendingCanGoBackCallbacks;

/// @brief Field _pendingCanGoForwardCallbacks, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingCanGoForwardCallbacks, put=__cordl_internal_set__pendingCanGoForwardCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  _pendingCanGoForwardCallbacks;

/// @brief Field _pendingJavaScriptResultCallbacks, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingJavaScriptResultCallbacks, put=__cordl_internal_set__pendingJavaScriptResultCallbacks)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>*  _pendingJavaScriptResultCallbacks;

 __declspec(property(get=get__rect, put=set__rect)) ::UnityEngine::Rect  _rect;

/// @brief Field _renderingEnabled, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__renderingEnabled, put=__cordl_internal_set__renderingEnabled)) bool  _renderingEnabled;

/// @brief Field _streamingAssetsUrlRegex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__streamingAssetsUrlRegex, put=setStaticF__streamingAssetsUrlRegex)) ::System::Text::RegularExpressions::Regex*  _streamingAssetsUrlRegex;

/// @brief Method Blur, addr 0x16ede8c, size 0x4, virtual true, abstract: false, final true
inline void Blur() ;

/// @brief Method CanGoBack, addr 0x16e8de8, size 0x17c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CanGoBack() ;

/// @brief Method CanGoBack, addr 0x16ede90, size 0x4, virtual true, abstract: false, final true
inline void CanGoBack(::System::Action_1<bool>*  callback) ;

/// @brief Method CanGoForward, addr 0x16e9068, size 0x17c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* CanGoForward() ;

/// @brief Method CanGoForward, addr 0x16ede94, size 0x4, virtual true, abstract: false, final true
inline void CanGoForward(::System::Action_1<bool>*  callback) ;

/// @brief Method CaptureScreenshot, addr 0x16e925c, size 0xc0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* CaptureScreenshot() ;

/// @brief Method CaptureScreenshot, addr 0x16ede98, size 0x4, virtual true, abstract: false, final true
inline void CaptureScreenshot(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method Click, addr 0x16e97dc, size 0x5c, virtual true, abstract: false, final true
inline void Click(::UnityEngine::Vector2  normalizedPoint, bool  preventStealingFocus) ;

/// @brief Method Click, addr 0x16e9500, size 0x88, virtual true, abstract: false, final false
inline void Click(int32_t  xInPixels, int32_t  yInPixels, bool  preventStealingFocus) ;

/// @brief Method Copy, addr 0x16e9904, size 0x90, virtual true, abstract: false, final false
inline void Copy() ;

/// @brief Method CreateMaterial, addr 0x16e9994, size 0xa4, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Material> CreateMaterial() ;

/// @brief Method Cut, addr 0x16e9a38, size 0x90, virtual true, abstract: false, final false
inline void Cut() ;

/// @brief Method DisableViewUpdates, addr 0x16ede9c, size 0x4, virtual true, abstract: false, final true
inline void DisableViewUpdates() ;

/// @brief Method Dispose, addr 0x16e9ac8, size 0xe0, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnableViewUpdates, addr 0x16edea0, size 0x4, virtual true, abstract: false, final true
inline void EnableViewUpdates() ;

/// @brief Method ExecuteJavaScript, addr 0x16e9c24, size 0xf4, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* ExecuteJavaScript(::StringW  javaScript) ;

/// @brief Method ExecuteJavaScript, addr 0x16e9d18, size 0xe4, virtual true, abstract: false, final false
inline void ExecuteJavaScript(::StringW  javaScript, ::System::Action_1<::StringW>*  callback) ;

/// @brief Method Focus, addr 0x16edea4, size 0x4, virtual true, abstract: false, final true
inline void Focus() ;

/// @brief Method GetRawTextureData, addr 0x16e9eb8, size 0xc8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x16edea8, size 0x4, virtual true, abstract: false, final true
inline void GetRawTextureData(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method GoBack, addr 0x16e9f80, size 0x60, virtual true, abstract: false, final false
inline void GoBack() ;

/// @brief Method GoForward, addr 0x16ea05c, size 0x60, virtual true, abstract: false, final false
inline void GoForward() ;

/// @brief Method HandleCanGoBackResult, addr 0x16ebf2c, size 0x320, virtual false, abstract: false, final false
inline void HandleCanGoBackResult(::StringW  message) ;

/// @brief Method HandleCanGoForwardResult, addr 0x16ec24c, size 0x320, virtual false, abstract: false, final false
inline void HandleCanGoForwardResult(::StringW  message) ;

/// @brief Method HandleCloseRequested, addr 0x16ec56c, size 0x80, virtual false, abstract: false, final false
inline void HandleCloseRequested(::StringW  message) ;

/// @brief Method HandleFocusedInputFieldChanged, addr 0x16ec5ec, size 0x98, virtual false, abstract: false, final false
inline void HandleFocusedInputFieldChanged(::StringW  typeString) ;

/// @brief Method HandleInitFinished, addr 0x16ec684, size 0x60, virtual false, abstract: false, final false
inline void HandleInitFinished(::StringW  unusedParam) ;

/// @brief Method HandleJavaScriptResult, addr 0x16ec6e4, size 0xa8, virtual false, abstract: false, final false
inline void HandleJavaScriptResult(::StringW  message) ;

/// @brief Method HandleKeyboardInput, addr 0x16edeac, size 0x10, virtual true, abstract: false, final true
inline void HandleKeyboardInput(::StringW  key) ;

/// @brief Method HandleLoadFailed, addr 0x16ec838, size 0x270, virtual false, abstract: false, final false
inline void HandleLoadFailed(::StringW  param) ;

/// @brief Method HandleLoadFinished, addr 0x16ecaa8, size 0x1bc, virtual false, abstract: false, final false
inline void HandleLoadFinished(::StringW  unusedParam) ;

/// @brief Method HandleLoadProgressUpdate, addr 0x16eccd0, size 0xc0, virtual false, abstract: false, final false
inline void HandleLoadProgressUpdate(::StringW  progressString) ;

/// @brief Method HandleLoadStarted, addr 0x16ecc64, size 0x6c, virtual false, abstract: false, final false
inline void HandleLoadStarted(::StringW  unusedParam) ;

/// @brief Method HandleMessageEmitted, addr 0x16ecd90, size 0x320, virtual true, abstract: false, final false
inline void HandleMessageEmitted(::StringW  serializedMessage) ;

/// @brief Method HandleTerminated, addr 0x16ed2c4, size 0x19c, virtual false, abstract: false, final false
inline void HandleTerminated(::StringW  typeString) ;

/// @brief Method HandleTextureChanged, addr 0x16ed460, size 0xa0, virtual true, abstract: false, final false
inline void HandleTextureChanged(::StringW  textureString) ;

/// @brief Method Init, addr 0x16edebc, size 0x4, virtual true, abstract: false, final true
inline void Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height) ;

/// @brief Method Init, addr 0x16edec0, size 0x4, virtual true, abstract: false, final true
inline void Init(::UnityEngine::Texture2D*  texture, float_t  width, float_t  height, ::UnityEngine::Texture2D*  videoTexture) ;

/// @brief Method LoadHtml, addr 0x16ea138, size 0x70, virtual true, abstract: false, final false
inline void LoadHtml(::StringW  html) ;

/// @brief Method LoadUrl, addr 0x16ea23c, size 0x80, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url) ;

/// @brief Method LoadUrl, addr 0x16ea6c8, size 0x1d4, virtual true, abstract: false, final false
inline void LoadUrl(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  additionalHttpHeaders) ;

static inline ::Vuplex::WebView::Internal::BaseWebView* New_ctor() ;

/// @brief Method NormalizedToPoint, addr 0x16ea958, size 0x188, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2Int NormalizedToPoint(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method OnLoadProgressChanged, addr 0x16ed94c, size 0x28, virtual true, abstract: false, final false
inline void OnLoadProgressChanged(::Vuplex::WebView::ProgressChangedEventArgs*  eventArgs) ;

/// @brief Method Paste, addr 0x16eaae0, size 0xf4, virtual true, abstract: false, final false
inline void Paste() ;

/// @brief Method PointToNormalized, addr 0x16eabd4, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 PointToNormalized(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method PostMessage, addr 0x16eabf4, size 0x180, virtual true, abstract: false, final false
inline void PostMessage(::StringW  message) ;

/// @brief Method Reload, addr 0x16ead74, size 0x60, virtual true, abstract: false, final false
inline void Reload() ;

/// @brief Method Resize, addr 0x16eae50, size 0x84, virtual true, abstract: false, final false
inline void Resize(int32_t  width, int32_t  height) ;

/// @brief Method Scroll, addr 0x16eb094, size 0x4c, virtual true, abstract: false, final true
inline void Scroll(::UnityEngine::Vector2  normalizedScrollDelta) ;

/// @brief Method Scroll, addr 0x16eb0e0, size 0xbc, virtual true, abstract: false, final false
inline void Scroll(::UnityEngine::Vector2  normalizedScrollDelta, ::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method Scroll, addr 0x16eaf88, size 0x78, virtual true, abstract: false, final false
inline void Scroll(int32_t  scrollDeltaXInPixels, int32_t  scrollDeltaYInPixels) ;

/// @brief Method SelectAll, addr 0x16eb248, size 0x60, virtual true, abstract: false, final false
inline void SelectAll() ;

/// @brief Method SendKey, addr 0x16eb2a8, size 0x70, virtual true, abstract: false, final false
inline void SendKey(::StringW  key) ;

/// @brief Method SetCameraAndMicrophoneEnabled, addr 0x16eb3b0, size 0x54, virtual false, abstract: false, final false
static inline void SetCameraAndMicrophoneEnabled(bool  enabled) ;

/// @brief Method SetDefaultBackgroundEnabled, addr 0x16eb480, size 0x70, virtual true, abstract: false, final false
inline void SetDefaultBackgroundEnabled(bool  enabled) ;

/// @brief Method SetFocused, addr 0x16eb574, size 0xe4, virtual true, abstract: false, final false
inline void SetFocused(bool  focused) ;

/// @brief Method SetRenderingEnabled, addr 0x16eb6dc, size 0x104, virtual true, abstract: false, final false
inline void SetRenderingEnabled(bool  enabled) ;

/// @brief Method SetResolution, addr 0x16ee054, size 0x4, virtual true, abstract: false, final true
inline void SetResolution(float_t  pixelsPerUnityUnit) ;

/// @brief Method StopLoad, addr 0x16eb864, size 0x60, virtual true, abstract: false, final false
inline void StopLoad() ;

/// @brief Method WaitForNextPageLoadToFinish, addr 0x16eb940, size 0x8c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* WaitForNextPageLoadToFinish() ;

/// @brief Method WebView_canGoBack, addr 0x16e8fec, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_canGoBack(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_canGoForward, addr 0x16e91e4, size 0x78, virtual false, abstract: false, final false
static inline void WebView_canGoForward(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_click, addr 0x16e9748, size 0x94, virtual false, abstract: false, final false
static inline void WebView_click(::System::IntPtr  webViewPtr, int32_t  x, int32_t  y) ;

/// @brief Method WebView_destroy, addr 0x16e9ba8, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_destroy(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_destroyTexture, addr 0x16ebe4c, size 0x98, virtual false, abstract: false, final false
static inline void WebView_destroyTexture(::System::IntPtr  texture, ::StringW  graphicsApi) ;

/// @brief Method WebView_executeJavaScript, addr 0x16e9dfc, size 0xbc, virtual false, abstract: false, final false
static inline void WebView_executeJavaScript(::System::IntPtr  webViewPtr, ::StringW  javaScript, ::StringW  resultCallbackId) ;

/// @brief Method WebView_goBack, addr 0x16e9fe0, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_goBack(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_goForward, addr 0x16ea0bc, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_goForward(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_loadHtml, addr 0x16ea1a8, size 0x94, virtual false, abstract: false, final false
static inline void WebView_loadHtml(::System::IntPtr  webViewPtr, ::StringW  html) ;

/// @brief Method WebView_loadUrl, addr 0x16ea630, size 0x98, virtual false, abstract: false, final false
static inline void WebView_loadUrl(::System::IntPtr  webViewPtr, ::StringW  url) ;

/// @brief Method WebView_loadUrlWithHeaders, addr 0x16ea89c, size 0xbc, virtual false, abstract: false, final false
static inline void WebView_loadUrlWithHeaders(::System::IntPtr  webViewPtr, ::StringW  url, ::StringW  newlineDelimitedHttpHeaders) ;

/// @brief Method WebView_reload, addr 0x16eadd4, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_reload(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_resize, addr 0x16edaf0, size 0x94, virtual false, abstract: false, final false
static inline void WebView_resize(::System::IntPtr  webViewPtr, int32_t  width, int32_t  height) ;

/// @brief Method WebView_scroll, addr 0x16eb000, size 0x94, virtual false, abstract: false, final false
static inline void WebView_scroll(::System::IntPtr  webViewPtr, int32_t  deltaX, int32_t  deltaY) ;

/// @brief Method WebView_scrollAtPoint, addr 0x16eb19c, size 0xac, virtual false, abstract: false, final false
static inline void WebView_scrollAtPoint(::System::IntPtr  webViewPtr, int32_t  deltaX, int32_t  deltaY, int32_t  pointerX, int32_t  pointerY) ;

/// @brief Method WebView_sendKey, addr 0x16eb318, size 0x98, virtual false, abstract: false, final false
static inline void WebView_sendKey(::System::IntPtr  webViewPtr, ::StringW  input) ;

/// @brief Method WebView_setCameraAndMicrophoneEnabled, addr 0x16eb404, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_setCameraAndMicrophoneEnabled(bool  enabled) ;

/// @brief Method WebView_setConsoleMessageEventsEnabled, addr 0x16edbf4, size 0x84, virtual false, abstract: false, final false
static inline void WebView_setConsoleMessageEventsEnabled(::System::IntPtr  webViewPtr, bool  enabled) ;

/// @brief Method WebView_setDefaultBackgroundEnabled, addr 0x16eb4f0, size 0x84, virtual false, abstract: false, final false
static inline void WebView_setDefaultBackgroundEnabled(::System::IntPtr  webViewPtr, bool  enabled) ;

/// @brief Method WebView_setFocused, addr 0x16eb658, size 0x84, virtual false, abstract: false, final false
static inline void WebView_setFocused(::System::IntPtr  webViewPtr, bool  focused) ;

/// @brief Method WebView_setFocusedInputFieldEventsEnabled, addr 0x16edce8, size 0x84, virtual false, abstract: false, final false
static inline void WebView_setFocusedInputFieldEventsEnabled(::System::IntPtr  webViewPtr, bool  enabled) ;

/// @brief Method WebView_setRenderingEnabled, addr 0x16eb7e0, size 0x84, virtual false, abstract: false, final false
static inline void WebView_setRenderingEnabled(::System::IntPtr  webViewPtr, bool  enabled) ;

/// @brief Method WebView_stopLoad, addr 0x16eb8c4, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_stopLoad(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_zoomIn, addr 0x16eba2c, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_zoomIn(::System::IntPtr  webViewPtr) ;

/// @brief Method WebView_zoomOut, addr 0x16ebb08, size 0x7c, virtual false, abstract: false, final false
static inline void WebView_zoomOut(::System::IntPtr  webViewPtr) ;

/// @brief Method ZoomIn, addr 0x16eb9cc, size 0x60, virtual true, abstract: false, final false
inline void ZoomIn() ;

/// @brief Method ZoomOut, addr 0x16ebaa8, size 0x60, virtual true, abstract: false, final false
inline void ZoomOut() ;

constexpr ::System::EventHandler* const& __cordl_internal_get_CloseRequested() const;

constexpr ::System::EventHandler*& __cordl_internal_get_CloseRequested() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>* const& __cordl_internal_get_FocusChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*& __cordl_internal_get_FocusChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>* const& __cordl_internal_get_LoadFailed() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*& __cordl_internal_get_LoadFailed() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>* const& __cordl_internal_get_LoadProgressChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*& __cordl_internal_get_LoadProgressChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_MessageEmitted() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_MessageEmitted() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>* const& __cordl_internal_get_Terminated() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*& __cordl_internal_get_Terminated() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>* const& __cordl_internal_get_TitleChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*& __cordl_internal_get_TitleChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>* const& __cordl_internal_get_UrlChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*& __cordl_internal_get_UrlChanged() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>* const& __cordl_internal_get_VideoRectChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*& __cordl_internal_get_VideoRectChanged() ;

constexpr bool const& __cordl_internal_get__IsDisposed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDisposed_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__PageLoadScripts_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__PageLoadScripts_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Resolution_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Resolution_k__BackingField() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__Size_k__BackingField() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__Size_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__Texture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__Texture_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Title_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Url_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__VideoTexture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__VideoTexture_k__BackingField() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>* const& __cordl_internal_get__consoleMessageLogged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*& __cordl_internal_get__consoleMessageLogged() ;

constexpr ::System::IntPtr const& __cordl_internal_get__currentNativeTexture() const;

constexpr ::System::IntPtr& __cordl_internal_get__currentNativeTexture() ;

constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>* const& __cordl_internal_get__focusedInputFieldChanged() const;

constexpr ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*& __cordl_internal_get__focusedInputFieldChanged() ;

constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState const& __cordl_internal_get__initState() const;

constexpr ::Vuplex::WebView::Internal::BaseWebView_InitState& __cordl_internal_get__initState() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__initTaskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__initTaskSource() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>* const& __cordl_internal_get__legacyPageLoadFailedHandlerMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>*& __cordl_internal_get__legacyPageLoadFailedHandlerMap() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialForBlitting() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialForBlitting() ;

constexpr bool const& __cordl_internal_get__native2DModeEnabled() const;

constexpr bool& __cordl_internal_get__native2DModeEnabled() ;

constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__native2DPosition() const;

constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__native2DPosition() ;

constexpr ::System::IntPtr const& __cordl_internal_get__nativeWebViewPtr() const;

constexpr ::System::IntPtr& __cordl_internal_get__nativeWebViewPtr() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__pageLoadFinishedTaskSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__pageLoadFinishedTaskSource() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>* const& __cordl_internal_get__pendingCanGoBackCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*& __cordl_internal_get__pendingCanGoBackCallbacks() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>* const& __cordl_internal_get__pendingCanGoForwardCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*& __cordl_internal_get__pendingCanGoForwardCallbacks() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>* const& __cordl_internal_get__pendingJavaScriptResultCallbacks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>*& __cordl_internal_get__pendingJavaScriptResultCallbacks() ;

constexpr bool const& __cordl_internal_get__renderingEnabled() const;

constexpr bool& __cordl_internal_get__renderingEnabled() ;

constexpr void __cordl_internal_set_CloseRequested(::System::EventHandler*  value) ;

constexpr void __cordl_internal_set_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

constexpr void __cordl_internal_set_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

constexpr void __cordl_internal_set__IsDisposed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PageLoadScripts_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__Resolution_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Size_k__BackingField(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set__Texture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__Title_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Url_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__VideoTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__consoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

constexpr void __cordl_internal_set__currentNativeTexture(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__focusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

constexpr void __cordl_internal_set__initState(::Vuplex::WebView::Internal::BaseWebView_InitState  value) ;

constexpr void __cordl_internal_set__initTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__legacyPageLoadFailedHandlerMap(::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>*  value) ;

constexpr void __cordl_internal_set__materialForBlitting(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__native2DModeEnabled(bool  value) ;

constexpr void __cordl_internal_set__native2DPosition(::UnityEngine::Vector2Int  value) ;

constexpr void __cordl_internal_set__nativeWebViewPtr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__pageLoadFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__pendingCanGoBackCallbacks(::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  value) ;

constexpr void __cordl_internal_set__pendingCanGoForwardCallbacks(::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  value) ;

constexpr void __cordl_internal_set__pendingJavaScriptResultCallbacks(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set__renderingEnabled(bool  value) ;

/// @brief Method _assertNative2DModeEnabled, addr 0x16ebba0, size 0x5c, virtual false, abstract: false, final false
inline void _assertNative2DModeEnabled() ;

/// @brief Method _assertPointIsWithinBounds, addr 0x16e9588, size 0x1c0, virtual false, abstract: false, final false
inline void _assertPointIsWithinBounds(int32_t  xInPixels, int32_t  yInPixels) ;

/// @brief Method _assertSingletonEventHandlerUnset, addr 0x16ebbfc, size 0x6c, virtual false, abstract: false, final false
inline void _assertSingletonEventHandlerUnset(::System::Object*  handler, ::StringW  eventName) ;

/// @brief Method _assertValidSize, addr 0x16eaed4, size 0xb4, virtual false, abstract: false, final false
inline void _assertValidSize(int32_t  width, int32_t  height) ;

/// @brief Method _assertValidState, addr 0x16e8f64, size 0x88, virtual false, abstract: false, final false
inline void _assertValidState() ;

/// @brief Method _createMaterial, addr 0x16ebc68, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> _createMaterial() ;

/// @brief Method _createTexture, addr 0x16ebc70, size 0x130, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* _createTexture(int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x16ee1d8, size 0x148, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _destroyNativeTexture, addr 0x16ebda0, size 0xac, virtual true, abstract: false, final false
inline void _destroyNativeTexture(::System::IntPtr  nativeTexture) ;

/// @brief Method _getReadableTexture, addr 0x16e931c, size 0x1e4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> _getReadableTexture() ;

/// @brief Method _getSelectedText, addr 0x16ebee4, size 0x48, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* _getSelectedText() ;

/// @brief Method _handleJavaScriptResult, addr 0x16ec78c, size 0xac, virtual false, abstract: false, final false
inline void _handleJavaScriptResult(::StringW  resultCallbackId, ::StringW  result) ;

/// @brief Method _handleUrlChanged, addr 0x16ed0b0, size 0x214, virtual false, abstract: false, final false
inline void _handleUrlChanged(::StringW  serializedMessage) ;

/// @brief Method _initBase, addr 0x16d3dac, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _initBase(int32_t  width, int32_t  height, bool  createTexture, bool  asyncInit) ;

/// @brief Method _logSystemInfoIfNeeded, addr 0x16ed500, size 0x44c, virtual false, abstract: false, final false
static inline void _logSystemInfoIfNeeded() ;

/// @brief Method _normalizedToPointAssertValid, addr 0x16e9838, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int _normalizedToPointAssertValid(::UnityEngine::Vector2  normalizedPoint) ;

/// @brief Method _parseConsoleMessageLevel, addr 0x16ed974, size 0x118, virtual false, abstract: false, final false
inline ::Vuplex::WebView::ConsoleMessageLevel _parseConsoleMessageLevel(::StringW  levelString) ;

/// @brief Method _resize, addr 0x16eda8c, size 0x64, virtual true, abstract: false, final false
inline void _resize() ;

/// @brief Method _setConsoleMessageEventsEnabled, addr 0x16edb84, size 0x70, virtual true, abstract: false, final false
inline void _setConsoleMessageEventsEnabled(bool  enabled) ;

/// @brief Method _setFocusedInputFieldEventsEnabled, addr 0x16edc78, size 0x70, virtual true, abstract: false, final false
inline void _setFocusedInputFieldEventsEnabled(bool  enabled) ;

/// @brief Method _staticInit, addr 0x16edd6c, size 0x120, virtual false, abstract: false, final false
static inline void _staticInit() ;

/// @brief Method _transformUrlIfNeeded, addr 0x16ea2bc, size 0x374, virtual false, abstract: false, final false
inline ::StringW _transformUrlIfNeeded(::StringW  originalUrl) ;

/// @brief Method add_CloseRequested, addr 0x16e7f44, size 0x9c, virtual true, abstract: false, final true
inline void add_CloseRequested(::System::EventHandler*  value) ;

/// @brief Method add_ConsoleMessageLogged, addr 0x16e807c, size 0xe8, virtual true, abstract: false, final true
inline void add_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

/// @brief Method add_FocusChanged, addr 0x16e822c, size 0xb0, virtual true, abstract: false, final true
inline void add_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

/// @brief Method add_FocusedInputFieldChanged, addr 0x16e838c, size 0xe8, virtual true, abstract: false, final true
inline void add_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

/// @brief Method add_LoadFailed, addr 0x16e853c, size 0xb0, virtual true, abstract: false, final true
inline void add_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

/// @brief Method add_LoadProgressChanged, addr 0x16e869c, size 0xb0, virtual true, abstract: false, final true
inline void add_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

/// @brief Method add_MessageEmitted, addr 0x16e87fc, size 0xb0, virtual true, abstract: false, final true
inline void add_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_PageLoadFailed, addr 0x16edec4, size 0xe4, virtual true, abstract: false, final true
inline void add_PageLoadFailed(::System::EventHandler*  value) ;

/// @brief Method add_Terminated, addr 0x16e895c, size 0xb0, virtual true, abstract: false, final true
inline void add_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

/// @brief Method add_TitleChanged, addr 0x16e8abc, size 0xb0, virtual true, abstract: false, final true
inline void add_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method add_UrlChanged, addr 0x16e8c1c, size 0xb0, virtual true, abstract: false, final true
inline void add_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

/// @brief Method add_VideoRectChanged, addr 0x16ee068, size 0xb4, virtual true, abstract: false, final true
inline void add_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_STANDARD_URI_SCHEMES() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF__streamingAssetsUrlRegex() ;

/// @brief Method get_IsDisposed, addr 0x16e8d7c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsDisposed() ;

/// @brief Method get_IsInitialized, addr 0x16e8d90, size 0x10, virtual true, abstract: false, final true
inline bool get_IsInitialized() ;

/// @brief Method get_PageLoadScripts, addr 0x16e8da0, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::StringW>* get_PageLoadScripts() ;

/// @brief Method get_Resolution, addr 0x16ee04c, size 0x8, virtual true, abstract: false, final true
inline float_t get_Resolution() ;

/// @brief Method get_Size, addr 0x16e8da8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2Int get_Size() ;

/// @brief Method get_SizeInPixels, addr 0x16ee058, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_SizeInPixels() ;

/// @brief Method get_Texture, addr 0x16e8db8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Texture2D> get_Texture() ;

/// @brief Method get_Title, addr 0x16e8dc8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Title() ;

/// @brief Method get_Url, addr 0x16e8dd8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Url() ;

/// @brief Method get_VideoTexture, addr 0x16ee1d0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Texture2D> get_VideoTexture() ;

/// @brief Method get__rect, addr 0x16ebb84, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get__rect() ;

/// @brief Method remove_CloseRequested, addr 0x16e7fe0, size 0x9c, virtual true, abstract: false, final true
inline void remove_CloseRequested(::System::EventHandler*  value) ;

/// @brief Method remove_ConsoleMessageLogged, addr 0x16e8164, size 0xc8, virtual true, abstract: false, final true
inline void remove_ConsoleMessageLogged(::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  value) ;

/// @brief Method remove_FocusChanged, addr 0x16e82dc, size 0xb0, virtual true, abstract: false, final true
inline void remove_FocusChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  value) ;

/// @brief Method remove_FocusedInputFieldChanged, addr 0x16e8474, size 0xc8, virtual true, abstract: false, final true
inline void remove_FocusedInputFieldChanged(::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  value) ;

/// @brief Method remove_LoadFailed, addr 0x16e85ec, size 0xb0, virtual true, abstract: false, final true
inline void remove_LoadFailed(::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  value) ;

/// @brief Method remove_LoadProgressChanged, addr 0x16e874c, size 0xb0, virtual true, abstract: false, final true
inline void remove_LoadProgressChanged(::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  value) ;

/// @brief Method remove_MessageEmitted, addr 0x16e88ac, size 0xb0, virtual true, abstract: false, final true
inline void remove_MessageEmitted(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_PageLoadFailed, addr 0x16edfa8, size 0xa4, virtual true, abstract: false, final true
inline void remove_PageLoadFailed(::System::EventHandler*  value) ;

/// @brief Method remove_Terminated, addr 0x16e8a0c, size 0xb0, virtual true, abstract: false, final true
inline void remove_Terminated(::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  value) ;

/// @brief Method remove_TitleChanged, addr 0x16e8b6c, size 0xb0, virtual true, abstract: false, final true
inline void remove_TitleChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  value) ;

/// @brief Method remove_UrlChanged, addr 0x16e8ccc, size 0xb0, virtual true, abstract: false, final true
inline void remove_UrlChanged(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

/// @brief Method remove_VideoRectChanged, addr 0x16ee11c, size 0xb4, virtual true, abstract: false, final true
inline void remove_VideoRectChanged(::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  value) ;

static inline void setStaticF_STANDARD_URI_SCHEMES(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF__streamingAssetsUrlRegex(::System::Text::RegularExpressions::Regex*  value) ;

/// @brief Method set_IsDisposed, addr 0x16e8d84, size 0xc, virtual false, abstract: false, final false
inline void set_IsDisposed(bool  value) ;

/// @brief Method set_Size, addr 0x16e8db0, size 0x8, virtual false, abstract: false, final false
inline void set_Size(::UnityEngine::Vector2Int  value) ;

/// @brief Method set_Texture, addr 0x16e8dc0, size 0x8, virtual false, abstract: false, final false
inline void set_Texture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_Title, addr 0x16e8dd0, size 0x8, virtual false, abstract: false, final false
inline void set_Title(::StringW  value) ;

/// @brief Method set_Url, addr 0x16e8de0, size 0x8, virtual false, abstract: false, final false
inline void set_Url(::StringW  value) ;

/// @brief Method set__rect, addr 0x16d3d50, size 0x5c, virtual false, abstract: false, final false
inline void set__rect(::UnityEngine::Rect  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseWebView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseWebView(BaseWebView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseWebView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseWebView(BaseWebView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{235};

/// @brief Field _dllName offset 0xffffffff size 0x8
static constexpr ::ConstString  _dllName{u"VuplexWebViewAndroid"};

/// @brief Field CloseRequested, offset: 0x20, size: 0x8, def value: None
 ::System::EventHandler*  ___CloseRequested;

/// @brief Field FocusChanged, offset: 0x28, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<bool>*>*  ___FocusChanged;

/// @brief Field LoadFailed, offset: 0x30, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*  ___LoadFailed;

/// @brief Field LoadProgressChanged, offset: 0x38, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ProgressChangedEventArgs*>*  ___LoadProgressChanged;

/// @brief Field MessageEmitted, offset: 0x40, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___MessageEmitted;

/// @brief Field Terminated, offset: 0x48, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::TerminatedEventArgs*>*  ___Terminated;

/// @brief Field TitleChanged, offset: 0x50, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::StringW>*>*  ___TitleChanged;

/// @brief Field UrlChanged, offset: 0x58, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  ___UrlChanged;

/// @brief Field <IsDisposed>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____IsDisposed_k__BackingField;

/// @brief Field <PageLoadScripts>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____PageLoadScripts_k__BackingField;

/// @brief Field <Size>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ____Size_k__BackingField;

/// @brief Field <Texture>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____Texture_k__BackingField;

/// @brief Field <Title>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____Title_k__BackingField;

/// @brief Field <Url>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____Url_k__BackingField;

/// @brief Field _consoleMessageLogged, offset: 0x90, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::ConsoleMessageEventArgs*>*  ____consoleMessageLogged;

/// @brief Field _currentNativeTexture, offset: 0x98, size: 0x8, def value: None
 ::System::IntPtr  ____currentNativeTexture;

/// @brief Field _focusedInputFieldChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::FocusedInputFieldChangedEventArgs*>*  ____focusedInputFieldChanged;

/// @brief Field _initState, offset: 0xa8, size: 0x4, def value: None
 ::Vuplex::WebView::Internal::BaseWebView_InitState  ____initState;

/// @brief Field _initTaskSource, offset: 0xb0, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____initTaskSource;

/// @brief Field _materialForBlitting, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialForBlitting;

/// @brief Field _native2DModeEnabled, offset: 0xc0, size: 0x1, def value: None
 bool  ____native2DModeEnabled;

/// @brief Field _native2DPosition, offset: 0xc4, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  ____native2DPosition;

/// @brief Field _nativeWebViewPtr, offset: 0xd0, size: 0x8, def value: None
 ::System::IntPtr  ____nativeWebViewPtr;

/// @brief Field _pageLoadFinishedTaskSource, offset: 0xd8, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____pageLoadFinishedTaskSource;

/// @brief Field _pendingCanGoBackCallbacks, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  ____pendingCanGoBackCallbacks;

/// @brief Field _pendingCanGoForwardCallbacks, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<bool>*>*  ____pendingCanGoForwardCallbacks;

/// @brief Field _pendingJavaScriptResultCallbacks, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::StringW>*>*  ____pendingJavaScriptResultCallbacks;

/// @brief Field _renderingEnabled, offset: 0xf8, size: 0x1, def value: None
 bool  ____renderingEnabled;

/// @brief Field _legacyPageLoadFailedHandlerMap, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::EventHandler*,::System::EventHandler_1<::Vuplex::WebView::LoadFailedEventArgs*>*>*  ____legacyPageLoadFailedHandlerMap;

/// @brief Field <Resolution>k__BackingField, offset: 0x108, size: 0x4, def value: None
 float_t  ____Resolution_k__BackingField;

/// @brief Field VideoRectChanged, offset: 0x110, size: 0x8, def value: None
 ::System::EventHandler_1<::Vuplex::WebView::EventArgs_1<::UnityEngine::Rect>*>*  ___VideoRectChanged;

/// @brief Field <VideoTexture>k__BackingField, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____VideoTexture_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___CloseRequested) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___FocusChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___LoadFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___LoadProgressChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___MessageEmitted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___Terminated) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___TitleChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___UrlChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____IsDisposed_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____PageLoadScripts_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____Size_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____Texture_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____Title_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____Url_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____consoleMessageLogged) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____currentNativeTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____focusedInputFieldChanged) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____initState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____initTaskSource) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____materialForBlitting) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____native2DModeEnabled) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____native2DPosition) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____nativeWebViewPtr) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____pageLoadFinishedTaskSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____pendingCanGoBackCallbacks) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____pendingCanGoForwardCallbacks) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____pendingJavaScriptResultCallbacks) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____renderingEnabled) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____legacyPageLoadFailedHandlerMap) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____Resolution_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ___VideoRectChanged) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::BaseWebView, ____VideoTexture_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::BaseWebView, 0x120>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView_InitState, "Vuplex.WebView.Internal", "BaseWebView/InitState");
NEED_NO_BOX(::Vuplex::WebView::Internal::BaseWebView);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView*, "Vuplex.WebView.Internal", "BaseWebView");
NEED_NO_BOX(::Vuplex::WebView::Internal::BaseWebView___c);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView___c*, "Vuplex.WebView.Internal", "BaseWebView/<>c");
NEED_NO_BOX(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass137_0*, "Vuplex.WebView.Internal", "BaseWebView/<>c__DisplayClass137_0");
NEED_NO_BOX(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass139_0*, "Vuplex.WebView.Internal", "BaseWebView/<>c__DisplayClass139_0");
NEED_NO_BOX(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass185_0*, "Vuplex.WebView.Internal", "BaseWebView/<>c__DisplayClass185_0");
NEED_NO_BOX(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView___c__DisplayClass71_0*, "Vuplex.WebView.Internal", "BaseWebView/<>c__DisplayClass71_0");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView__Copy_d__60, "Vuplex.WebView.Internal", "BaseWebView/<Copy>d__60");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView__Cut_d__62, "Vuplex.WebView.Internal", "BaseWebView/<Cut>d__62");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::BaseWebView___initBase_d__138, "Vuplex.WebView.Internal", "BaseWebView/<_initBase>d__138");
