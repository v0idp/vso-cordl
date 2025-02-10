#pragma once
// IWYU pragma private; include "VROSC/FullScreenFxController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FullScreenFxController)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
struct FullScreenFxController__FadeFromBlack_d__6;
}
namespace VROSC {
struct FullScreenFxController__FadeToBlack_d__5;
}
namespace VROSC {
struct FullScreenFxController__Recenter_d__3;
}
// Forward declare root types
namespace VROSC {
class FullScreenFxController;
}
namespace VROSC {
struct FullScreenFxController__FadeFromBlack_d__6;
}
namespace VROSC {
struct FullScreenFxController__FadeToBlack_d__5;
}
namespace VROSC {
struct FullScreenFxController__Recenter_d__3;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FullScreenFxController);
MARK_VAL_T(::VROSC::FullScreenFxController__FadeFromBlack_d__6);
MARK_VAL_T(::VROSC::FullScreenFxController__FadeToBlack_d__5);
MARK_VAL_T(::VROSC::FullScreenFxController__Recenter_d__3);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FullScreenFxController/<FadeFromBlack>d__6
struct CORDL_TYPE FullScreenFxController__FadeFromBlack_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1887708, size 0x2c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18879cc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FullScreenFxController__FadeFromBlack_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "instant", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::FullScreenFxController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FullScreenFxController__FadeFromBlack_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  instant, ::UnityW<::VROSC::FullScreenFxController>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field instant, offset: 0x20, size: 0x1, def value: None
 bool  instant;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FullScreenFxController__FadeFromBlack_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeFromBlack_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeFromBlack_d__6, instant) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeFromBlack_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeFromBlack_d__6, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FullScreenFxController__FadeFromBlack_d__6, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FullScreenFxController/<FadeToBlack>d__5
struct CORDL_TYPE FullScreenFxController__FadeToBlack_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1887a34, size 0x2c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1887cf8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FullScreenFxController__FadeToBlack_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "instant", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::FullScreenFxController>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FullScreenFxController__FadeToBlack_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  instant, ::UnityW<::VROSC::FullScreenFxController>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{606};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field instant, offset: 0x20, size: 0x1, def value: None
 bool  instant;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FullScreenFxController__FadeToBlack_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeToBlack_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeToBlack_d__5, instant) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeToBlack_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__FadeToBlack_d__5, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FullScreenFxController__FadeToBlack_d__5, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.FullScreenFxController/<Recenter>d__3
struct CORDL_TYPE FullScreenFxController__Recenter_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1887d60, size 0x3a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1888100, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FullScreenFxController__Recenter_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::FullScreenFxController>", modifiers: "", def_value: None }, CppParam { name: "useFade", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr FullScreenFxController__Recenter_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::VROSC::FullScreenFxController>  __4__this, bool  useFade, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::FullScreenFxController>  __4__this;

/// @brief Field useFade, offset: 0x28, size: 0x1, def value: None
 bool  useFade;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FullScreenFxController__Recenter_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__Recenter_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__Recenter_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__Recenter_d__3, useFade) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController__Recenter_d__3, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FullScreenFxController__Recenter_d__3, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FullScreenFxController
class CORDL_TYPE FullScreenFxController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadeFromBlack_d__6 = ::VROSC::FullScreenFxController__FadeFromBlack_d__6;

using _FadeToBlack_d__5 = ::VROSC::FullScreenFxController__FadeToBlack_d__5;

using _Recenter_d__3 = ::VROSC::FullScreenFxController__Recenter_d__3;

/// @brief Field _isRecentering, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecentering, put=__cordl_internal_set__isRecentering)) bool  _isRecentering;

/// @brief Field _screenFadeCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenFadeCurve, put=__cordl_internal_set__screenFadeCurve)) ::UnityEngine::AnimationCurve*  _screenFadeCurve;

/// @brief Field _screenFadeTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenFadeTime, put=__cordl_internal_set__screenFadeTime)) float_t  _screenFadeTime;

/// @brief Method FadeFromBlack, addr 0x188761c, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FadeFromBlack(bool  instant) ;

/// @brief Method FadeToBlack, addr 0x1887540, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FadeToBlack(bool  instant) ;

static inline ::VROSC::FullScreenFxController* New_ctor() ;

/// @brief Method Recenter, addr 0x18873a4, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Recenter(bool  useFade) ;

/// @brief Method RecenterSteam, addr 0x188747c, size 0xc4, virtual false, abstract: false, final false
inline void RecenterSteam() ;

constexpr bool const& __cordl_internal_get__isRecentering() const;

constexpr bool& __cordl_internal_get__isRecentering() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__screenFadeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__screenFadeCurve() ;

constexpr float_t const& __cordl_internal_get__screenFadeTime() const;

constexpr float_t& __cordl_internal_get__screenFadeTime() ;

constexpr void __cordl_internal_set__isRecentering(bool  value) ;

constexpr void __cordl_internal_set__screenFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__screenFadeTime(float_t  value) ;

/// @brief Method .ctor, addr 0x18876f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FullScreenFxController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FullScreenFxController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FullScreenFxController(FullScreenFxController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullScreenFxController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullScreenFxController(FullScreenFxController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{608};

/// @brief Field _screenFadeCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____screenFadeCurve;

/// @brief Field _screenFadeTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____screenFadeTime;

/// @brief Field _isRecentering, offset: 0x2c, size: 0x1, def value: None
 bool  ____isRecentering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FullScreenFxController, ____screenFadeCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController, ____screenFadeTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::FullScreenFxController, ____isRecentering) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FullScreenFxController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FullScreenFxController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FullScreenFxController*, "VROSC", "FullScreenFxController");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FullScreenFxController__FadeFromBlack_d__6, "VROSC", "FullScreenFxController/<FadeFromBlack>d__6");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FullScreenFxController__FadeToBlack_d__5, "VROSC", "FullScreenFxController/<FadeToBlack>d__5");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FullScreenFxController__Recenter_d__3, "VROSC", "FullScreenFxController/<Recenter>d__3");
