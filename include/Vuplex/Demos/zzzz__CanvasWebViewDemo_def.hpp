#pragma once
// IWYU pragma private; include "Vuplex/Demos/CanvasWebViewDemo.hpp"
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
CORDL_MODULE_EXPORT(CanvasWebViewDemo)
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
struct CanvasWebViewDemo__Start_d__1;
}
namespace Vuplex::Demos {
class CanvasWebViewDemo___c;
}
namespace Vuplex::WebView {
class CanvasWebViewPrefab;
}
namespace Vuplex::WebView {
class UrlChangedEventArgs;
}
// Forward declare root types
namespace Vuplex::Demos {
class CanvasWebViewDemo;
}
namespace Vuplex::Demos {
class CanvasWebViewDemo___c;
}
namespace Vuplex::Demos {
struct CanvasWebViewDemo__Start_d__1;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::Demos::CanvasWebViewDemo);
MARK_REF_PTR_T(::Vuplex::Demos::CanvasWebViewDemo___c);
MARK_VAL_T(::Vuplex::Demos::CanvasWebViewDemo__Start_d__1);
// Dependencies System.Object
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.CanvasWebViewDemo/<>c
class CORDL_TYPE CanvasWebViewDemo___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Vuplex::Demos::CanvasWebViewDemo___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  __9__1_0;

static inline ::Vuplex::Demos::CanvasWebViewDemo___c* New_ctor() ;

/// @brief Method <Start>b__1_0, addr 0x16c82c4, size 0x8c, virtual false, abstract: false, final false
inline void _Start_b__1_0(::System::Object*  sender, ::Vuplex::WebView::UrlChangedEventArgs*  eventArgs) ;

/// @brief Method .ctor, addr 0x16c82bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::Demos::CanvasWebViewDemo___c* getStaticF___9() ;

static inline ::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Vuplex::Demos::CanvasWebViewDemo___c*  value) ;

static inline void setStaticF___9__1_0(::System::EventHandler_1<::Vuplex::WebView::UrlChangedEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasWebViewDemo___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasWebViewDemo___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasWebViewDemo___c(CanvasWebViewDemo___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasWebViewDemo___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasWebViewDemo___c(CanvasWebViewDemo___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{84};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasWebViewDemo___c, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Vuplex::Demos {
// Is value type: true
// CS Name: Vuplex.Demos.CanvasWebViewDemo/<Start>d__1
struct CORDL_TYPE CanvasWebViewDemo__Start_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16c8350, size 0x334, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16c8684, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CanvasWebViewDemo__Start_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::Vuplex::Demos::CanvasWebViewDemo>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr CanvasWebViewDemo__Start_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Vuplex::Demos::CanvasWebViewDemo>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{85};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Vuplex::Demos::CanvasWebViewDemo>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::CanvasWebViewDemo__Start_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasWebViewDemo__Start_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasWebViewDemo__Start_d__1, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Vuplex::Demos::CanvasWebViewDemo__Start_d__1, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasWebViewDemo__Start_d__1, 0x38>, "Size mismatch!");

} // namespace end def Vuplex::Demos
// Dependencies UnityEngine.MonoBehaviour
namespace Vuplex::Demos {
// Is value type: false
// CS Name: Vuplex.Demos.CanvasWebViewDemo
class CORDL_TYPE CanvasWebViewDemo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__1 = ::Vuplex::Demos::CanvasWebViewDemo__Start_d__1;

using __c = ::Vuplex::Demos::CanvasWebViewDemo___c;

/// @brief Field canvasWebViewPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasWebViewPrefab, put=__cordl_internal_set_canvasWebViewPrefab)) ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  canvasWebViewPrefab;

static inline ::Vuplex::Demos::CanvasWebViewDemo* New_ctor() ;

/// @brief Method Start, addr 0x16c81c8, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab> const& __cordl_internal_get_canvasWebViewPrefab() const;

constexpr ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>& __cordl_internal_get_canvasWebViewPrefab() ;

constexpr void __cordl_internal_set_canvasWebViewPrefab(::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  value) ;

/// @brief Method .ctor, addr 0x16c8258, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasWebViewDemo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasWebViewDemo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasWebViewDemo(CanvasWebViewDemo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasWebViewDemo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasWebViewDemo(CanvasWebViewDemo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{86};

/// @brief Field canvasWebViewPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Vuplex::WebView::CanvasWebViewPrefab>  ___canvasWebViewPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::Demos::CanvasWebViewDemo, ___canvasWebViewPrefab) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::Demos::CanvasWebViewDemo, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::Demos
NEED_NO_BOX(::Vuplex::Demos::CanvasWebViewDemo);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasWebViewDemo*, "Vuplex.Demos", "CanvasWebViewDemo");
NEED_NO_BOX(::Vuplex::Demos::CanvasWebViewDemo___c);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasWebViewDemo___c*, "Vuplex.Demos", "CanvasWebViewDemo/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::Demos::CanvasWebViewDemo__Start_d__1, "Vuplex.Demos", "CanvasWebViewDemo/<Start>d__1");
