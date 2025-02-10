#pragma once
// IWYU pragma private; include "VROSC/EmissionOnSignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmissionOnSignal)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
struct EmissionOnSignal__NodeBegin_d__11;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class EmissionOnSignal;
}
namespace VROSC {
struct EmissionOnSignal__NodeBegin_d__11;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EmissionOnSignal);
MARK_VAL_T(::VROSC::EmissionOnSignal__NodeBegin_d__11);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.EmissionOnSignal/<NodeBegin>d__11
struct CORDL_TYPE EmissionOnSignal__NodeBegin_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x17273b4, size 0x324, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x17276d8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr EmissionOnSignal__NodeBegin_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "signal", ty: "::VROSC::Signal*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::EmissionOnSignal>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr EmissionOnSignal__NodeBegin_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::Signal*  signal, ::UnityW<::VROSC::EmissionOnSignal>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field signal, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Signal*  signal;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::EmissionOnSignal>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EmissionOnSignal__NodeBegin_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal__NodeBegin_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal__NodeBegin_d__11, signal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal__NodeBegin_d__11, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal__NodeBegin_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EmissionOnSignal__NodeBegin_d__11, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.Color, VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EmissionOnSignal
class CORDL_TYPE EmissionOnSignal : public ::VROSC::SignalNode {
public:
// Declarations
using _NodeBegin_d__11 = ::VROSC::EmissionOnSignal__NodeBegin_d__11;

/// @brief Field _currentBrightness, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentBrightness, put=__cordl_internal_set__currentBrightness)) float_t  _currentBrightness;

/// @brief Field _emissionColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__emissionColor, put=__cordl_internal_set__emissionColor)) ::UnityEngine::Color  _emissionColor;

/// @brief Field _materialInstance, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field _oneBrightness, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__oneBrightness, put=__cordl_internal_set__oneBrightness)) float_t  _oneBrightness;

/// @brief Field _outputRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputRenderer, put=__cordl_internal_set__outputRenderer)) ::UnityW<::UnityEngine::Renderer>  _outputRenderer;

/// @brief Field _rampDownTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rampDownTime, put=__cordl_internal_set__rampDownTime)) float_t  _rampDownTime;

/// @brief Field _rampUpTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__rampUpTime, put=__cordl_internal_set__rampUpTime)) float_t  _rampUpTime;

/// @brief Field _targetBrightness, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetBrightness, put=__cordl_internal_set__targetBrightness)) float_t  _targetBrightness;

/// @brief Field _zeroBrightness, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__zeroBrightness, put=__cordl_internal_set__zeroBrightness)) float_t  _zeroBrightness;

/// @brief Method Awake, addr 0x17270d4, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::EmissionOnSignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1727188, size 0x98, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1727274, size 0x3c, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1727220, size 0x30, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method SetColor, addr 0x17270c8, size 0xc, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Color  color) ;

/// @brief Method SetEmission, addr 0x1727108, size 0x80, virtual false, abstract: false, final false
inline void SetEmission(float_t  brightness) ;

/// @brief Method StayOn, addr 0x1727250, size 0x24, virtual false, abstract: false, final false
inline void StayOn(::VROSC::Signal*  signal) ;

/// @brief Method TurnOff, addr 0x17272b0, size 0x1c, virtual false, abstract: false, final false
inline void TurnOff(::VROSC::Signal*  signal) ;

/// @brief Method TurnOn, addr 0x1727378, size 0x34, virtual false, abstract: false, final false
inline void TurnOn(::VROSC::Signal*  signal) ;

/// @brief Method Update, addr 0x17272cc, size 0xac, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__currentBrightness() const;

constexpr float_t& __cordl_internal_get__currentBrightness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__emissionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__emissionColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr float_t const& __cordl_internal_get__oneBrightness() const;

constexpr float_t& __cordl_internal_get__oneBrightness() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__outputRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__outputRenderer() ;

constexpr float_t const& __cordl_internal_get__rampDownTime() const;

constexpr float_t& __cordl_internal_get__rampDownTime() ;

constexpr float_t const& __cordl_internal_get__rampUpTime() const;

constexpr float_t& __cordl_internal_get__rampUpTime() ;

constexpr float_t const& __cordl_internal_get__targetBrightness() const;

constexpr float_t& __cordl_internal_get__targetBrightness() ;

constexpr float_t const& __cordl_internal_get__zeroBrightness() const;

constexpr float_t& __cordl_internal_get__zeroBrightness() ;

constexpr void __cordl_internal_set__currentBrightness(float_t  value) ;

constexpr void __cordl_internal_set__emissionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__oneBrightness(float_t  value) ;

constexpr void __cordl_internal_set__outputRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__rampDownTime(float_t  value) ;

constexpr void __cordl_internal_set__rampUpTime(float_t  value) ;

constexpr void __cordl_internal_set__targetBrightness(float_t  value) ;

constexpr void __cordl_internal_set__zeroBrightness(float_t  value) ;

/// @brief Method .ctor, addr 0x17273ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmissionOnSignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmissionOnSignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmissionOnSignal(EmissionOnSignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmissionOnSignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmissionOnSignal(EmissionOnSignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1026};

/// @brief Field _outputRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____outputRenderer;

/// @brief Field _emissionColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____emissionColor;

/// @brief Field _zeroBrightness, offset: 0x60, size: 0x4, def value: None
 float_t  ____zeroBrightness;

/// @brief Field _oneBrightness, offset: 0x64, size: 0x4, def value: None
 float_t  ____oneBrightness;

/// @brief Field _rampUpTime, offset: 0x68, size: 0x4, def value: None
 float_t  ____rampUpTime;

/// @brief Field _rampDownTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ____rampDownTime;

/// @brief Field _materialInstance, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

/// @brief Field _targetBrightness, offset: 0x78, size: 0x4, def value: None
 float_t  ____targetBrightness;

/// @brief Field _currentBrightness, offset: 0x7c, size: 0x4, def value: None
 float_t  ____currentBrightness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EmissionOnSignal, ____outputRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____emissionColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____zeroBrightness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____oneBrightness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____rampUpTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____rampDownTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____materialInstance) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____targetBrightness) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::EmissionOnSignal, ____currentBrightness) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EmissionOnSignal, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EmissionOnSignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EmissionOnSignal*, "VROSC", "EmissionOnSignal");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EmissionOnSignal__NodeBegin_d__11, "VROSC", "EmissionOnSignal/<NodeBegin>d__11");
