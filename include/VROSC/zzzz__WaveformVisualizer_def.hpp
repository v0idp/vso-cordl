#pragma once
// IWYU pragma private; include "VROSC/WaveformVisualizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveformVisualizer)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace VROSC {
struct WaveformVisualizer_EdgeBehaviour;
}
namespace VROSC {
struct WaveformVisualizer_RenderMode;
}
namespace VROSC {
struct WaveformVisualizer__CreateVisualization_d__18;
}
namespace VROSC {
class WaveformVisualizer___c__DisplayClass18_0;
}
// Forward declare root types
namespace VROSC {
struct WaveformVisualizer_EdgeBehaviour;
}
namespace VROSC {
struct WaveformVisualizer_RenderMode;
}
namespace VROSC {
class WaveformVisualizer;
}
namespace VROSC {
class WaveformVisualizer___c__DisplayClass18_0;
}
namespace VROSC {
struct WaveformVisualizer__CreateVisualization_d__18;
}
// Write type traits
MARK_VAL_T(::VROSC::WaveformVisualizer_EdgeBehaviour);
MARK_VAL_T(::VROSC::WaveformVisualizer_RenderMode);
MARK_REF_PTR_T(::VROSC::WaveformVisualizer);
MARK_REF_PTR_T(::VROSC::WaveformVisualizer___c__DisplayClass18_0);
MARK_VAL_T(::VROSC::WaveformVisualizer__CreateVisualization_d__18);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.WaveformVisualizer/EdgeBehaviour
struct CORDL_TYPE WaveformVisualizer_EdgeBehaviour {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaveformVisualizer_EdgeBehaviour_Unwrapped
enum struct __WaveformVisualizer_EdgeBehaviour_Unwrapped : int32_t {
__E_Wipe = static_cast<int32_t>(0x0),
__E_Keep = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaveformVisualizer_EdgeBehaviour_Unwrapped () const noexcept {
return static_cast<__WaveformVisualizer_EdgeBehaviour_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaveformVisualizer_EdgeBehaviour() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaveformVisualizer_EdgeBehaviour(int32_t  value__) noexcept;

/// @brief Field Keep value: I32(1)
static ::VROSC::WaveformVisualizer_EdgeBehaviour const Keep;

/// @brief Field Wipe value: I32(0)
static ::VROSC::WaveformVisualizer_EdgeBehaviour const Wipe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveformVisualizer_EdgeBehaviour, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveformVisualizer_EdgeBehaviour, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.WaveformVisualizer/RenderMode
struct CORDL_TYPE WaveformVisualizer_RenderMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WaveformVisualizer_RenderMode_Unwrapped
enum struct __WaveformVisualizer_RenderMode_Unwrapped : int32_t {
__E_Replace = static_cast<int32_t>(0x0),
__E_Add = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WaveformVisualizer_RenderMode_Unwrapped () const noexcept {
return static_cast<__WaveformVisualizer_RenderMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WaveformVisualizer_RenderMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WaveformVisualizer_RenderMode(int32_t  value__) noexcept;

/// @brief Field Add value: I32(1)
static ::VROSC::WaveformVisualizer_RenderMode const Add;

/// @brief Field Replace value: I32(0)
static ::VROSC::WaveformVisualizer_RenderMode const Replace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveformVisualizer_RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveformVisualizer_RenderMode, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WaveformVisualizer/<>c__DisplayClass18_0
class CORDL_TYPE WaveformVisualizer___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::WaveformVisualizer>  __4__this;

/// @brief Field audioData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioData, put=__cordl_internal_set_audioData)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field endSample, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_endSample, put=__cordl_internal_set_endSample)) int32_t  endSample;

/// @brief Field startSample, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_startSample, put=__cordl_internal_set_startSample)) int32_t  startSample;

static inline ::VROSC::WaveformVisualizer___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <CreateVisualization>b__0, addr 0x16fe170, size 0x194, virtual false, abstract: false, final false
inline void _CreateVisualization_b__0() ;

constexpr ::UnityW<::VROSC::WaveformVisualizer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::WaveformVisualizer>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_audioData() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_audioData() ;

constexpr int32_t const& __cordl_internal_get_endSample() const;

constexpr int32_t& __cordl_internal_get_endSample() ;

constexpr int32_t const& __cordl_internal_get_startSample() const;

constexpr int32_t& __cordl_internal_get_startSample() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::WaveformVisualizer>  value) ;

constexpr void __cordl_internal_set_audioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_endSample(int32_t  value) ;

constexpr void __cordl_internal_set_startSample(int32_t  value) ;

/// @brief Method .ctor, addr 0x16fe168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveformVisualizer___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveformVisualizer___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveformVisualizer___c__DisplayClass18_0(WaveformVisualizer___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveformVisualizer___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveformVisualizer___c__DisplayClass18_0(WaveformVisualizer___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{835};

/// @brief Field endSample, offset: 0x10, size: 0x4, def value: None
 int32_t  ___endSample;

/// @brief Field startSample, offset: 0x14, size: 0x4, def value: None
 int32_t  ___startSample;

/// @brief Field audioData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___audioData;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::WaveformVisualizer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveformVisualizer___c__DisplayClass18_0, ___endSample) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer___c__DisplayClass18_0, ___startSample) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer___c__DisplayClass18_0, ___audioData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer___c__DisplayClass18_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveformVisualizer___c__DisplayClass18_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.WaveformVisualizer/<CreateVisualization>d__18
struct CORDL_TYPE WaveformVisualizer__CreateVisualization_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x16fe304, size 0x278, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x16fe57c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WaveformVisualizer__CreateVisualization_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "endSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startSample", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::WaveformVisualizer>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr WaveformVisualizer__CreateVisualization_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, int32_t  endSample, int32_t  startSample, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::UnityW<::VROSC::WaveformVisualizer>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{836};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field endSample, offset: 0x28, size: 0x4, def value: None
 int32_t  endSample;

/// @brief Field startSample, offset: 0x2c, size: 0x4, def value: None
 int32_t  startSample;

/// @brief Field audioData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::WaveformVisualizer>  __4__this;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, endSample) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, startSample) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, audioData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer__CreateVisualization_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveformVisualizer__CreateVisualization_d__18, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.WaveformVisualizer::EdgeBehaviour, VROSC.WaveformVisualizer::RenderMode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WaveformVisualizer
class CORDL_TYPE WaveformVisualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EdgeBehaviour = ::VROSC::WaveformVisualizer_EdgeBehaviour;

using RenderMode = ::VROSC::WaveformVisualizer_RenderMode;

using _CreateVisualization_d__18 = ::VROSC::WaveformVisualizer__CreateVisualization_d__18;

using __c__DisplayClass18_0 = ::VROSC::WaveformVisualizer___c__DisplayClass18_0;

 __declspec(property(get=get_Values)) ::ArrayW<float_t,::Array<float_t>*>  Values;

/// @brief Field _contionusRecordingBehaviour, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__contionusRecordingBehaviour, put=__cordl_internal_set__contionusRecordingBehaviour)) ::VROSC::WaveformVisualizer_RenderMode  _contionusRecordingBehaviour;

/// @brief Field _currentVisualizationIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentVisualizationIndex, put=__cordl_internal_set__currentVisualizationIndex)) int32_t  _currentVisualizationIndex;

/// @brief Field _defaultVisualNormalization, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultVisualNormalization, put=__cordl_internal_set__defaultVisualNormalization)) float_t  _defaultVisualNormalization;

/// @brief Field _edgeBehaviour, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__edgeBehaviour, put=__cordl_internal_set__edgeBehaviour)) ::VROSC::WaveformVisualizer_EdgeBehaviour  _edgeBehaviour;

/// @brief Field _fullRenderBehaviour, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fullRenderBehaviour, put=__cordl_internal_set__fullRenderBehaviour)) ::VROSC::WaveformVisualizer_RenderMode  _fullRenderBehaviour;

/// @brief Field _lastMeasuredPeakValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastMeasuredPeakValue, put=__cordl_internal_set__lastMeasuredPeakValue)) float_t  _lastMeasuredPeakValue;

/// @brief Field _steps, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__steps, put=__cordl_internal_set__steps)) int32_t  _steps;

/// @brief Field _values, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<float_t,::Array<float_t>*>  _values;

/// @brief Field _visualizationStartIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__visualizationStartIndex, put=__cordl_internal_set__visualizationStartIndex)) int32_t  _visualizationStartIndex;

/// @brief Field _windowLengthInSeconds, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__windowLengthInSeconds, put=__cordl_internal_set__windowLengthInSeconds)) float_t  _windowLengthInSeconds;

/// @brief Method Clear, addr 0x16fd1f8, size 0x14, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateVisualization, addr 0x16fd778, size 0xb0, virtual false, abstract: false, final false
inline void CreateVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, int32_t  endSample) ;

/// @brief Method GetVisualPower, addr 0x16fe034, size 0x134, virtual false, abstract: false, final false
inline float_t GetVisualPower(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, int32_t  endSample, float_t  normalize) ;

static inline ::VROSC::WaveformVisualizer* New_ctor() ;

/// @brief Method OnPartialVisualizationUpdated, addr 0x16fdf20, size 0x78, virtual true, abstract: false, final false
inline void OnPartialVisualizationUpdated(int32_t  startIndex, ::ArrayW<float_t,::Array<float_t>*>  partialValues) ;

/// @brief Method OnVisualizationUpdated, addr 0x16fdfe0, size 0x4, virtual true, abstract: false, final false
inline void OnVisualizationUpdated() ;

/// @brief Method SetValue, addr 0x16fdfe4, size 0x50, virtual false, abstract: false, final false
inline void SetValue(int32_t  index, float_t  amount, ::VROSC::WaveformVisualizer_RenderMode  renderMode) ;

/// @brief Method SetWindowLength, addr 0x16fdfd8, size 0x8, virtual false, abstract: false, final false
inline void SetWindowLength(float_t  lengthInSeconds) ;

/// @brief Method Setup, addr 0x16fdc24, size 0x90, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateVisualization, addr 0x16fd330, size 0x234, virtual false, abstract: false, final false
inline void UpdateVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  newData, float_t  elapsedTimeSeconds) ;

/// @brief Method Wipe, addr 0x16fdcfc, size 0x50, virtual true, abstract: false, final false
inline void Wipe() ;

constexpr ::VROSC::WaveformVisualizer_RenderMode const& __cordl_internal_get__contionusRecordingBehaviour() const;

constexpr ::VROSC::WaveformVisualizer_RenderMode& __cordl_internal_get__contionusRecordingBehaviour() ;

constexpr int32_t const& __cordl_internal_get__currentVisualizationIndex() const;

constexpr int32_t& __cordl_internal_get__currentVisualizationIndex() ;

constexpr float_t const& __cordl_internal_get__defaultVisualNormalization() const;

constexpr float_t& __cordl_internal_get__defaultVisualNormalization() ;

constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour const& __cordl_internal_get__edgeBehaviour() const;

constexpr ::VROSC::WaveformVisualizer_EdgeBehaviour& __cordl_internal_get__edgeBehaviour() ;

constexpr ::VROSC::WaveformVisualizer_RenderMode const& __cordl_internal_get__fullRenderBehaviour() const;

constexpr ::VROSC::WaveformVisualizer_RenderMode& __cordl_internal_get__fullRenderBehaviour() ;

constexpr float_t const& __cordl_internal_get__lastMeasuredPeakValue() const;

constexpr float_t& __cordl_internal_get__lastMeasuredPeakValue() ;

constexpr int32_t const& __cordl_internal_get__steps() const;

constexpr int32_t& __cordl_internal_get__steps() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__values() ;

constexpr int32_t const& __cordl_internal_get__visualizationStartIndex() const;

constexpr int32_t& __cordl_internal_get__visualizationStartIndex() ;

constexpr float_t const& __cordl_internal_get__windowLengthInSeconds() const;

constexpr float_t& __cordl_internal_get__windowLengthInSeconds() ;

constexpr void __cordl_internal_set__contionusRecordingBehaviour(::VROSC::WaveformVisualizer_RenderMode  value) ;

constexpr void __cordl_internal_set__currentVisualizationIndex(int32_t  value) ;

constexpr void __cordl_internal_set__defaultVisualNormalization(float_t  value) ;

constexpr void __cordl_internal_set__edgeBehaviour(::VROSC::WaveformVisualizer_EdgeBehaviour  value) ;

constexpr void __cordl_internal_set__fullRenderBehaviour(::VROSC::WaveformVisualizer_RenderMode  value) ;

constexpr void __cordl_internal_set__lastMeasuredPeakValue(float_t  value) ;

constexpr void __cordl_internal_set__steps(int32_t  value) ;

constexpr void __cordl_internal_set__values(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__visualizationStartIndex(int32_t  value) ;

constexpr void __cordl_internal_set__windowLengthInSeconds(float_t  value) ;

/// @brief Method .ctor, addr 0x16fdfb4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Values, addr 0x16fdfd0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveformVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveformVisualizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveformVisualizer(WaveformVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveformVisualizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveformVisualizer(WaveformVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{837};

/// @brief Field _steps, offset: 0x20, size: 0x4, def value: None
 int32_t  ____steps;

/// @brief Field _edgeBehaviour, offset: 0x24, size: 0x4, def value: None
 ::VROSC::WaveformVisualizer_EdgeBehaviour  ____edgeBehaviour;

/// @brief Field _contionusRecordingBehaviour, offset: 0x28, size: 0x4, def value: None
 ::VROSC::WaveformVisualizer_RenderMode  ____contionusRecordingBehaviour;

/// @brief Field _fullRenderBehaviour, offset: 0x2c, size: 0x4, def value: None
 ::VROSC::WaveformVisualizer_RenderMode  ____fullRenderBehaviour;

/// @brief Field _defaultVisualNormalization, offset: 0x30, size: 0x4, def value: None
 float_t  ____defaultVisualNormalization;

/// @brief Field _windowLengthInSeconds, offset: 0x34, size: 0x4, def value: None
 float_t  ____windowLengthInSeconds;

/// @brief Field _lastMeasuredPeakValue, offset: 0x38, size: 0x4, def value: None
 float_t  ____lastMeasuredPeakValue;

/// @brief Field _visualizationStartIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____visualizationStartIndex;

/// @brief Field _currentVisualizationIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ____currentVisualizationIndex;

/// @brief Field _values, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WaveformVisualizer, ____steps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____edgeBehaviour) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____contionusRecordingBehaviour) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____fullRenderBehaviour) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____defaultVisualNormalization) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____windowLengthInSeconds) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____lastMeasuredPeakValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____visualizationStartIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____currentVisualizationIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::WaveformVisualizer, ____values) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WaveformVisualizer, 0x50>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveformVisualizer_EdgeBehaviour, "VROSC", "WaveformVisualizer/EdgeBehaviour");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveformVisualizer_RenderMode, "VROSC", "WaveformVisualizer/RenderMode");
NEED_NO_BOX(::VROSC::WaveformVisualizer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveformVisualizer*, "VROSC", "WaveformVisualizer");
NEED_NO_BOX(::VROSC::WaveformVisualizer___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveformVisualizer___c__DisplayClass18_0*, "VROSC", "WaveformVisualizer/<>c__DisplayClass18_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WaveformVisualizer__CreateVisualization_d__18, "VROSC", "WaveformVisualizer/<CreateVisualization>d__18");
