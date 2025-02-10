#pragma once
// IWYU pragma private; include "VROSC/LoopVisualizationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopVisualizationData)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace VROSC {
struct LoopVisualizationData__RenderLoop_d__21;
}
namespace VROSC {
struct LoopVisualizationData__RenderLoop_d__22;
}
namespace VROSC {
class LoopVisualizationData___c__DisplayClass22_0;
}
namespace VROSC {
class Loop;
}
// Forward declare root types
namespace VROSC {
class LoopVisualizationData;
}
namespace VROSC {
class LoopVisualizationData___c__DisplayClass22_0;
}
namespace VROSC {
struct LoopVisualizationData__RenderLoop_d__21;
}
namespace VROSC {
struct LoopVisualizationData__RenderLoop_d__22;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopVisualizationData);
MARK_REF_PTR_T(::VROSC::LoopVisualizationData___c__DisplayClass22_0);
MARK_VAL_T(::VROSC::LoopVisualizationData__RenderLoop_d__21);
MARK_VAL_T(::VROSC::LoopVisualizationData__RenderLoop_d__22);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopVisualizationData/<>c__DisplayClass22_0
class CORDL_TYPE LoopVisualizationData___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::LoopVisualizationData*  __4__this;

/// @brief Field length, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Field loop, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_loop, put=__cordl_internal_set_loop)) ::VROSC::Loop*  loop;

static inline ::VROSC::LoopVisualizationData___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <RenderLoop>b__0, addr 0x18a4938, size 0x15c, virtual false, abstract: false, final false
inline void _RenderLoop_b__0() ;

constexpr ::VROSC::LoopVisualizationData* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::LoopVisualizationData*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr ::VROSC::Loop* const& __cordl_internal_get_loop() const;

constexpr ::VROSC::Loop*& __cordl_internal_get_loop() ;

constexpr void __cordl_internal_set___4__this(::VROSC::LoopVisualizationData*  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

constexpr void __cordl_internal_set_loop(::VROSC::Loop*  value) ;

/// @brief Method .ctor, addr 0x18a4930, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopVisualizationData___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopVisualizationData___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopVisualizationData___c__DisplayClass22_0(LoopVisualizationData___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopVisualizationData___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopVisualizationData___c__DisplayClass22_0(LoopVisualizationData___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{679};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopVisualizationData*  _____4__this;

/// @brief Field loop, offset: 0x18, size: 0x8, def value: None
 ::VROSC::Loop*  ___loop;

/// @brief Field length, offset: 0x20, size: 0x4, def value: None
 int32_t  ___length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopVisualizationData___c__DisplayClass22_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData___c__DisplayClass22_0, ___loop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData___c__DisplayClass22_0, ___length) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopVisualizationData___c__DisplayClass22_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopVisualizationData/<RenderLoop>d__21
struct CORDL_TYPE LoopVisualizationData__RenderLoop_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a4a94, size 0x1d8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18a4c6c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopVisualizationData__RenderLoop_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopVisualizationData*", modifiers: "", def_value: None }, CppParam { name: "loop", ty: "::VROSC::Loop*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopVisualizationData__RenderLoop_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::LoopVisualizationData*  __4__this, ::VROSC::Loop*  loop, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::LoopVisualizationData*  __4__this;

/// @brief Field loop, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Loop*  loop;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__21, loop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopVisualizationData__RenderLoop_d__21, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopVisualizationData/<RenderLoop>d__22
struct CORDL_TYPE LoopVisualizationData__RenderLoop_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18a4cd4, size 0x2a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18a4f74, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopVisualizationData__RenderLoop_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopVisualizationData*", modifiers: "", def_value: None }, CppParam { name: "loop", ty: "::VROSC::Loop*", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopVisualizationData__RenderLoop_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::LoopVisualizationData*  __4__this, ::VROSC::Loop*  loop, int32_t  length, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{681};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::LoopVisualizationData*  __4__this;

/// @brief Field loop, offset: 0x28, size: 0x8, def value: None
 ::VROSC::Loop*  loop;

/// @brief Field length, offset: 0x30, size: 0x4, def value: None
 int32_t  length;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__22, loop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__22, length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData__RenderLoop_d__22, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopVisualizationData__RenderLoop_d__22, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopVisualizationData
class CORDL_TYPE LoopVisualizationData : public ::System::Object {
public:
// Declarations
using _RenderLoop_d__21 = ::VROSC::LoopVisualizationData__RenderLoop_d__21;

using _RenderLoop_d__22 = ::VROSC::LoopVisualizationData__RenderLoop_d__22;

using __c__DisplayClass22_0 = ::VROSC::LoopVisualizationData___c__DisplayClass22_0;

 __declspec(property(get=get_BothAudio, put=set_BothAudio)) ::ArrayW<float_t,::Array<float_t>*>  BothAudio;

 __declspec(property(get=get_IsReady, put=set_IsReady)) bool  IsReady;

 __declspec(property(get=get_LoopAudio, put=set_LoopAudio)) ::ArrayW<float_t,::Array<float_t>*>  LoopAudio;

 __declspec(property(get=get_Peak, put=set_Peak)) float_t  Peak;

 __declspec(property(get=get_TailAudio, put=set_TailAudio)) ::ArrayW<float_t,::Array<float_t>*>  TailAudio;

/// @brief Field <BothAudio>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BothAudio_k__BackingField, put=__cordl_internal_set__BothAudio_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _BothAudio_k__BackingField;

/// @brief Field <IsReady>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReady_k__BackingField, put=__cordl_internal_set__IsReady_k__BackingField)) bool  _IsReady_k__BackingField;

/// @brief Field <LoopAudio>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoopAudio_k__BackingField, put=__cordl_internal_set__LoopAudio_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _LoopAudio_k__BackingField;

/// @brief Field <Peak>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Peak_k__BackingField, put=__cordl_internal_set__Peak_k__BackingField)) float_t  _Peak_k__BackingField;

/// @brief Field <TailAudio>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__TailAudio_k__BackingField, put=__cordl_internal_set__TailAudio_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _TailAudio_k__BackingField;

/// @brief Method GetPeak, addr 0x18a4850, size 0xe0, virtual false, abstract: false, final false
inline float_t GetPeak(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData) ;

/// @brief Method GetVisualization, addr 0x18a461c, size 0x114, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> GetVisualization(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  length, int32_t  width) ;

/// @brief Method GetVolumeOfSlice, addr 0x18a4730, size 0x120, virtual false, abstract: false, final false
inline float_t GetVolumeOfSlice(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  startSample, int32_t  endSample, float_t  normalizeMultiplier) ;

static inline ::VROSC::LoopVisualizationData* New_ctor() ;

/// @brief Method RenderLoop, addr 0x18a09a4, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RenderLoop(::VROSC::Loop*  loop) ;

/// @brief Method RenderLoop, addr 0x18a4544, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RenderLoop(::VROSC::Loop*  loop, int32_t  length) ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__BothAudio_k__BackingField() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__BothAudio_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsReady_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReady_k__BackingField() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__LoopAudio_k__BackingField() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__LoopAudio_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Peak_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Peak_k__BackingField() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get__TailAudio_k__BackingField() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get__TailAudio_k__BackingField() ;

constexpr void __cordl_internal_set__BothAudio_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__IsReady_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LoopAudio_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set__Peak_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TailAudio_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method .ctor, addr 0x18a19c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BothAudio, addr 0x18a451c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_BothAudio() ;

/// @brief Method get_IsReady, addr 0x18a44f0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsReady() ;

/// @brief Method get_LoopAudio, addr 0x18a450c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_LoopAudio() ;

/// @brief Method get_Peak, addr 0x18a453c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Peak() ;

/// @brief Method get_TailAudio, addr 0x18a452c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t,::Array<float_t>*> get_TailAudio() ;

/// @brief Method set_BothAudio, addr 0x18a4514, size 0x8, virtual false, abstract: false, final false
inline void set_BothAudio(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method set_IsReady, addr 0x18a44f8, size 0xc, virtual false, abstract: false, final false
inline void set_IsReady(bool  value) ;

/// @brief Method set_LoopAudio, addr 0x18a4504, size 0x8, virtual false, abstract: false, final false
inline void set_LoopAudio(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method set_Peak, addr 0x18a4534, size 0x8, virtual false, abstract: false, final false
inline void set_Peak(float_t  value) ;

/// @brief Method set_TailAudio, addr 0x18a4524, size 0x8, virtual false, abstract: false, final false
inline void set_TailAudio(::ArrayW<float_t,::Array<float_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopVisualizationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopVisualizationData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopVisualizationData(LoopVisualizationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopVisualizationData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopVisualizationData(LoopVisualizationData const& ) = delete;

/// @brief Field VisualizationXRes offset 0xffffffff size 0x4
static constexpr int32_t  VisualizationXRes{static_cast<int32_t>(0x200)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{682};

/// @brief Field <IsReady>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsReady_k__BackingField;

/// @brief Field <LoopAudio>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____LoopAudio_k__BackingField;

/// @brief Field <BothAudio>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____BothAudio_k__BackingField;

/// @brief Field <TailAudio>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ____TailAudio_k__BackingField;

/// @brief Field <Peak>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____Peak_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopVisualizationData, ____IsReady_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData, ____LoopAudio_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData, ____BothAudio_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData, ____TailAudio_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopVisualizationData, ____Peak_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopVisualizationData, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopVisualizationData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopVisualizationData*, "VROSC", "LoopVisualizationData");
NEED_NO_BOX(::VROSC::LoopVisualizationData___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopVisualizationData___c__DisplayClass22_0*, "VROSC", "LoopVisualizationData/<>c__DisplayClass22_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopVisualizationData__RenderLoop_d__21, "VROSC", "LoopVisualizationData/<RenderLoop>d__21");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopVisualizationData__RenderLoop_d__22, "VROSC", "LoopVisualizationData/<RenderLoop>d__22");
