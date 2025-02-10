#pragma once
// IWYU pragma private; include "Vuplex/Demos/SimpleWebViewDemo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleWebViewDemo)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Object;
}
namespace Vuplex::Demos {
struct SimpleWebViewDemo__Start_d__2;
}
namespace Vuplex::Demos {
class SimpleWebViewDemo___c;
}
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
namespace Vuplex::WebView {
class WebViewPrefab;
}
// Forward declare root types
namespace Vuplex::Demos {
class SimpleWebViewDemo;
}
namespace Vuplex::Demos {
class SimpleWebViewDemo___c;
}
namespace Vuplex::Demos {
struct SimpleWebViewDemo__Start_d__2;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::Demos::SimpleWebViewDemo);
MARK_REF_PTR_T(::Vuplex::Demos::SimpleWebViewDemo___c);
MARK_VAL_T(::Vuplex::Demos::SimpleWebViewDemo__Start_d__2);
// Dependencies System.Object
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.SimpleWebViewDemo/<>c
class CORDL_TYPE SimpleWebViewDemo___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Vuplex::Demos::SimpleWebViewDemo___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  __9__2_0;

static inline ::Vuplex::Demos::SimpleWebViewDemo___c* New_ctor() ;

/// @brief Method <Start>b__2_0, addr 0x16c9ae4, size 0x8c, virtual false, abstract: false, final false
inline void _Start_b__2_0(::System::Object*  sender, ::Vuplex::WebView::UrlChangedEventArgs*  eventArgs) ;

/// @brief Method .ctor, addr 0x16c9adc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::Demos::SimpleWebViewDemo___c* getStaticF___9() ;

static inline ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Vuplex::Demos::SimpleWebViewDemo___c*  value) ;

static inline void setStaticF___9__2_0(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebViewDemo___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebViewDemo___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleWebViewDemo___c(SimpleWebViewDemo___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebViewDemo___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleWebViewDemo___c(SimpleWebViewDemo___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{95};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::SimpleWebViewDemo___c, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::Demos {
// Is value type: true
// CS Name: Vuplex.Demos.SimpleWebViewDemo/<Start>d__2
struct CORDL_TYPE SimpleWebViewDemo__Start_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16c9b70, size 0x334, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16c9ea4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebViewDemo__Start_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::Demos::SimpleWebViewDemo>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SimpleWebViewDemo__Start_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::Demos::SimpleWebViewDemo>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{96};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::Demos::SimpleWebViewDemo>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::SimpleWebViewDemo__Start_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::SimpleWebViewDemo__Start_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::SimpleWebViewDemo__Start_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::SimpleWebViewDemo__Start_d__2, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::SimpleWebViewDemo__Start_d__2, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.SimpleWebViewDemo
class CORDL_TYPE SimpleWebViewDemo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = ::Vuplex::Demos::SimpleWebViewDemo__Start_d__2;

using __c = ::Vuplex::Demos::SimpleWebViewDemo___c;

/// @brief Field webViewPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_webViewPrefab, put=__cordl_internal_set_webViewPrefab)) ::UnityW<::Vuplex::WebView::WebViewPrefab>  webViewPrefab;

/// @brief Method Awake, addr 0x16c9994, size 0x54, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Vuplex::Demos::SimpleWebViewDemo* New_ctor() ;

/// @brief Method Start, addr 0x16c99e8, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab> const& __cordl_internal_get_webViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::WebViewPrefab>& __cordl_internal_get_webViewPrefab() ;

constexpr void __cordl_internal_set_webViewPrefab(::UnityW<::Vuplex::WebView::WebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x16c9a78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleWebViewDemo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebViewDemo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleWebViewDemo(SimpleWebViewDemo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleWebViewDemo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleWebViewDemo(SimpleWebViewDemo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{97};

/// @brief Field webViewPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::WebViewPrefab>  ___webViewPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::SimpleWebViewDemo, ___webViewPrefab) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::SimpleWebViewDemo, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::Demos
NEED_NO_BOX(::Vuplex::Demos::SimpleWebViewDemo);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::SimpleWebViewDemo*, "Vuplex.Demos", "SimpleWebViewDemo");
NEED_NO_BOX(::Vuplex::Demos::SimpleWebViewDemo___c);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::SimpleWebViewDemo___c*, "Vuplex.Demos", "SimpleWebViewDemo/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::SimpleWebViewDemo__Start_d__2, "Vuplex.Demos", "SimpleWebViewDemo/<Start>d__2");
