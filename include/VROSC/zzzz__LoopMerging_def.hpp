#pragma once
// IWYU pragma private; include "VROSC/LoopMerging.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopMerging)
namespace GlobalNamespace {
class LoopStationController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace VROSC {
struct LoopArrangeData;
}
namespace VROSC {
struct LoopMerging_MergeSettings;
}
namespace VROSC {
struct LoopMerging__MergeLoopAudio_d__13;
}
namespace VROSC {
struct LoopMerging__MergeLoopsForPreview_d__9;
}
namespace VROSC {
struct LoopMerging__MergeLoopsFromGroup_d__10;
}
namespace VROSC {
class LoopMerging___c__DisplayClass10_0;
}
namespace VROSC {
class LoopMerging___c__DisplayClass12_0;
}
namespace VROSC {
class LoopMerging___c__DisplayClass13_0;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
// Forward declare root types
namespace VROSC {
class LoopMerging;
}
namespace VROSC {
class LoopMerging___c__DisplayClass10_0;
}
namespace VROSC {
class LoopMerging___c__DisplayClass12_0;
}
namespace VROSC {
class LoopMerging___c__DisplayClass13_0;
}
namespace VROSC {
struct LoopMerging_MergeSettings;
}
namespace VROSC {
struct LoopMerging__MergeLoopAudio_d__13;
}
namespace VROSC {
struct LoopMerging__MergeLoopsForPreview_d__9;
}
namespace VROSC {
struct LoopMerging__MergeLoopsFromGroup_d__10;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopMerging);
MARK_REF_PTR_T(::VROSC::LoopMerging___c__DisplayClass10_0);
MARK_REF_PTR_T(::VROSC::LoopMerging___c__DisplayClass12_0);
MARK_REF_PTR_T(::VROSC::LoopMerging___c__DisplayClass13_0);
MARK_VAL_T(::VROSC::LoopMerging_MergeSettings);
MARK_VAL_T(::VROSC::LoopMerging__MergeLoopAudio_d__13);
MARK_VAL_T(::VROSC::LoopMerging__MergeLoopsForPreview_d__9);
MARK_VAL_T(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopMerging/MergeSettings
struct CORDL_TYPE LoopMerging_MergeSettings {
public:
// Declarations
 __declspec(property(get=get_GroupToAddTo)) ::UnityW<::VROSC::LoopStationGroup>  GroupToAddTo;

 __declspec(property(get=get_IncludeOneShots)) bool  IncludeOneShots;

 __declspec(property(get=get_KeepLoops)) bool  KeepLoops;

 __declspec(property(get=get_MustBePlaying)) bool  MustBePlaying;

/// @brief Method .ctor, addr 0x18b6088, size 0x20, virtual false, abstract: false, final false
inline void _ctor(bool  mustBePlaying, bool  includeOneShots, bool  keepLoops, ::VROSC::LoopStationGroup*  groupToAddTo) ;

/// @brief Method get_GroupToAddTo, addr 0x18bab38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::LoopStationGroup> get_GroupToAddTo() ;

/// @brief Method get_IncludeOneShots, addr 0x18bab28, size 0x8, virtual false, abstract: false, final false
inline bool get_IncludeOneShots() ;

/// @brief Method get_KeepLoops, addr 0x18bab30, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepLoops() ;

/// @brief Method get_MustBePlaying, addr 0x18bab20, size 0x8, virtual false, abstract: false, final false
inline bool get_MustBePlaying() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging_MergeSettings() ;

// Ctor Parameters [CppParam { name: "_MustBePlaying_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IncludeOneShots_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_KeepLoops_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_GroupToAddTo_k__BackingField", ty: "::UnityW<::VROSC::LoopStationGroup>", modifiers: "", def_value: None }]
constexpr LoopMerging_MergeSettings(bool  _MustBePlaying_k__BackingField, bool  _IncludeOneShots_k__BackingField, bool  _KeepLoops_k__BackingField, ::UnityW<::VROSC::LoopStationGroup>  _GroupToAddTo_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{734};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <MustBePlaying>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _MustBePlaying_k__BackingField;

/// @brief Field <IncludeOneShots>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _IncludeOneShots_k__BackingField;

/// @brief Field <KeepLoops>k__BackingField, offset: 0x2, size: 0x1, def value: None
 bool  _KeepLoops_k__BackingField;

/// @brief Field <GroupToAddTo>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  _GroupToAddTo_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging_MergeSettings, _MustBePlaying_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging_MergeSettings, _IncludeOneShots_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging_MergeSettings, _KeepLoops_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging_MergeSettings, _GroupToAddTo_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging_MergeSettings, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.LoopMerging::MergeSettings
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopMerging/<>c__DisplayClass10_0
class CORDL_TYPE LoopMerging___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field loopStationController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopStationController, put=__cordl_internal_set_loopStationController)) ::UnityW<::GlobalNamespace::LoopStationController>  loopStationController;

/// @brief Field settings, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::VROSC::LoopMerging_MergeSettings  settings;

/// @brief Field validatedLoops, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_validatedLoops, put=__cordl_internal_set_validatedLoops)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  validatedLoops;

static inline ::VROSC::LoopMerging___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <MergeLoopsFromGroup>b__0, addr 0x18bab48, size 0x1c8, virtual false, abstract: false, final false
inline void _MergeLoopsFromGroup_b__0() ;

constexpr ::UnityW<::GlobalNamespace::LoopStationController> const& __cordl_internal_get_loopStationController() const;

constexpr ::UnityW<::GlobalNamespace::LoopStationController>& __cordl_internal_get_loopStationController() ;

constexpr ::VROSC::LoopMerging_MergeSettings const& __cordl_internal_get_settings() const;

constexpr ::VROSC::LoopMerging_MergeSettings& __cordl_internal_get_settings() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* const& __cordl_internal_get_validatedLoops() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*& __cordl_internal_get_validatedLoops() ;

constexpr void __cordl_internal_set_loopStationController(::UnityW<::GlobalNamespace::LoopStationController>  value) ;

constexpr void __cordl_internal_set_settings(::VROSC::LoopMerging_MergeSettings  value) ;

constexpr void __cordl_internal_set_validatedLoops(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x18bab40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopMerging___c__DisplayClass10_0(LoopMerging___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopMerging___c__DisplayClass10_0(LoopMerging___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{735};

/// @brief Field validatedLoops, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  ___validatedLoops;

/// @brief Field settings, offset: 0x18, size: 0x10, def value: None
 ::VROSC::LoopMerging_MergeSettings  ___settings;

/// @brief Field loopStationController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LoopStationController>  ___loopStationController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass10_0, ___validatedLoops) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass10_0, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass10_0, ___loopStationController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging___c__DisplayClass10_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopMerging/<>c__DisplayClass12_0
class CORDL_TYPE LoopMerging___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

static inline ::VROSC::LoopMerging___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <AddResultToLooper>b__0, addr 0x18bad10, size 0xe0, virtual false, abstract: false, final false
inline void _AddResultToLooper_b__0(::VROSC::LoopPlayer*  loopPlayer) ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x18ba750, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopMerging___c__DisplayClass12_0(LoopMerging___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopMerging___c__DisplayClass12_0(LoopMerging___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{736};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass12_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopMerging/<>c__DisplayClass13_0
class CORDL_TYPE LoopMerging___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field applyGroupVolume, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyGroupVolume, put=__cordl_internal_set_applyGroupVolume)) bool  applyGroupVolume;

/// @brief Field arrangeData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_arrangeData, put=__cordl_internal_set_arrangeData)) ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  arrangeData;

/// @brief Field channels, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field output, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  output;

/// @brief Field outputLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_outputLength, put=__cordl_internal_set_outputLength)) int32_t  outputLength;

/// @brief Field progress, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressCounter, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressCounter, put=__cordl_internal_set_progressCounter)) int32_t  progressCounter;

static inline ::VROSC::LoopMerging___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <MergeLoopAudio>b__0, addr 0x18badf8, size 0x358, virtual false, abstract: false, final false
inline void _MergeLoopAudio_b__0() ;

constexpr bool const& __cordl_internal_get_applyGroupVolume() const;

constexpr bool& __cordl_internal_get_applyGroupVolume() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>* const& __cordl_internal_get_arrangeData() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*& __cordl_internal_get_arrangeData() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_output() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_output() ;

constexpr int32_t const& __cordl_internal_get_outputLength() const;

constexpr int32_t& __cordl_internal_get_outputLength() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr int32_t const& __cordl_internal_get_progressCounter() const;

constexpr int32_t& __cordl_internal_get_progressCounter() ;

constexpr void __cordl_internal_set_applyGroupVolume(bool  value) ;

constexpr void __cordl_internal_set_arrangeData(::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_output(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_outputLength(int32_t  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressCounter(int32_t  value) ;

/// @brief Method .ctor, addr 0x18badf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopMerging___c__DisplayClass13_0(LoopMerging___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopMerging___c__DisplayClass13_0(LoopMerging___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{737};

/// @brief Field arrangeData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  ___arrangeData;

/// @brief Field applyGroupVolume, offset: 0x18, size: 0x1, def value: None
 bool  ___applyGroupVolume;

/// @brief Field output, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___output;

/// @brief Field outputLength, offset: 0x28, size: 0x4, def value: None
 int32_t  ___outputLength;

/// @brief Field channels, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field progress, offset: 0x30, size: 0x4, def value: None
 float_t  ___progress;

/// @brief Field progressCounter, offset: 0x34, size: 0x4, def value: None
 int32_t  ___progressCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___arrangeData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___applyGroupVolume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___output) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___outputLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___channels) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___progress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging___c__DisplayClass13_0, ___progressCounter) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging___c__DisplayClass13_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopMerging/<MergeLoopAudio>d__13
struct CORDL_TYPE LoopMerging__MergeLoopAudio_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18bb150, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18bb580, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging__MergeLoopAudio_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>", modifiers: "", def_value: None }, CppParam { name: "arrangeData", ty: "::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*", modifiers: "", def_value: None }, CppParam { name: "applyGroupVolume", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopMerging___c__DisplayClass13_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopMerging__MergeLoopAudio_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __t__builder, ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  arrangeData, bool  applyGroupVolume, ::VROSC::LoopMerging___c__DisplayClass13_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __t__builder;

/// @brief Field arrangeData, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  arrangeData;

/// @brief Field applyGroupVolume, offset: 0x28, size: 0x1, def value: None
 bool  applyGroupVolume;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopMerging___c__DisplayClass13_0*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging__MergeLoopAudio_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopAudio_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopAudio_d__13, arrangeData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopAudio_d__13, applyGroupVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopAudio_d__13, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopAudio_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging__MergeLoopAudio_d__13, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopMerging/<MergeLoopsForPreview>d__9
struct CORDL_TYPE LoopMerging__MergeLoopsForPreview_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18bb5fc, size 0x360, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18bb95c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging__MergeLoopsForPreview_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>", modifiers: "", def_value: None }]
constexpr LoopMerging__MergeLoopsForPreview_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __t__builder;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsForPreview_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsForPreview_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsForPreview_d__9, __u__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging__MergeLoopsForPreview_d__9, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, VROSC.LoopMerging::MergeSettings
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopMerging/<MergeLoopsFromGroup>d__10
struct CORDL_TYPE LoopMerging__MergeLoopsFromGroup_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18bb9d8, size 0x4b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18bbe88, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging__MergeLoopsFromGroup_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::VROSC::LoopMerging_MergeSettings", modifiers: "", def_value: None }, CppParam { name: "loops", ty: "::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopMerging___c__DisplayClass10_0*", modifiers: "", def_value: None }, CppParam { name: "_loopArrangeDatas_5__2", ty: "::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>", modifiers: "", def_value: None }]
constexpr LoopMerging__MergeLoopsFromGroup_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::LoopMerging_MergeSettings  settings, ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops, ::VROSC::LoopMerging___c__DisplayClass10_0*  __8__1, ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  _loopArrangeDatas_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field settings, offset: 0x28, size: 0x10, def value: None
 ::VROSC::LoopMerging_MergeSettings  settings;

/// @brief Field loops, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoopMerging___c__DisplayClass10_0*  __8__1;

/// @brief Field <loopArrangeDatas>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  _loopArrangeDatas_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, loops) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, _loopArrangeDatas_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopMerging
class CORDL_TYPE LoopMerging : public ::System::Object {
public:
// Declarations
using MergeSettings = ::VROSC::LoopMerging_MergeSettings;

using _MergeLoopAudio_d__13 = ::VROSC::LoopMerging__MergeLoopAudio_d__13;

using _MergeLoopsForPreview_d__9 = ::VROSC::LoopMerging__MergeLoopsForPreview_d__9;

using _MergeLoopsFromGroup_d__10 = ::VROSC::LoopMerging__MergeLoopsFromGroup_d__10;

using __c__DisplayClass10_0 = ::VROSC::LoopMerging___c__DisplayClass10_0;

using __c__DisplayClass12_0 = ::VROSC::LoopMerging___c__DisplayClass12_0;

using __c__DisplayClass13_0 = ::VROSC::LoopMerging___c__DisplayClass13_0;

/// @brief Field <IsMerging>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsMerging_k__BackingField, put=setStaticF__IsMerging_k__BackingField)) bool  _IsMerging_k__BackingField;

/// @brief Field <Progress>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Progress_k__BackingField, put=setStaticF__Progress_k__BackingField)) float_t  _Progress_k__BackingField;

/// @brief Method AddResultToLooper, addr 0x18ba3c8, size 0x388, virtual false, abstract: false, final false
static inline void AddResultToLooper(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio, ::VROSC::LoopMerging_MergeSettings  settings, ::VROSC::LoopPlayer*  reference, ::System::Action*  callback) ;

/// @brief Method GreatestCommonMultiple, addr 0x18baac8, size 0x28, virtual false, abstract: false, final false
static inline int32_t GreatestCommonMultiple(int32_t  a, int32_t  b) ;

/// @brief Method LeastCommonMultiple, addr 0x18baaf0, size 0x30, virtual false, abstract: false, final false
static inline int32_t LeastCommonMultiple(int32_t  a, int32_t  b) ;

/// @brief Method MergeLoopAudio, addr 0x18ba9d8, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>* MergeLoopAudio(::System::Collections::Generic::List_1<::VROSC::LoopArrangeData>*  arrangeData, bool  applyGroupVolume) ;

/// @brief Method MergeLoopsForPreview, addr 0x18ba040, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>* MergeLoopsForPreview() ;

/// @brief Method MergeLoopsFromGroup, addr 0x18b60a8, size 0xa8, virtual false, abstract: false, final false
static inline void MergeLoopsFromGroup(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops, ::VROSC::LoopMerging_MergeSettings  settings) ;

/// @brief Method ShouldMergeLoop, addr 0x18ba324, size 0xa4, virtual false, abstract: false, final false
static inline bool ShouldMergeLoop(::VROSC::LoopPlayer*  loop, ::VROSC::LoopMerging_MergeSettings  settings) ;

/// @brief Method ValidateLoopsForMerging, addr 0x18ba114, size 0x210, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>* ValidateLoopsForMerging(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopPlayer>>*  loops, ::VROSC::LoopMerging_MergeSettings  settings) ;

static inline bool getStaticF__IsMerging_k__BackingField() ;

static inline float_t getStaticF__Progress_k__BackingField() ;

/// @brief Method get_IsMerging, addr 0x18b9f0c, size 0x48, virtual false, abstract: false, final false
static inline bool get_IsMerging() ;

/// @brief Method get_Progress, addr 0x18b9fa4, size 0x48, virtual false, abstract: false, final false
static inline float_t get_Progress() ;

static inline void setStaticF__IsMerging_k__BackingField(bool  value) ;

static inline void setStaticF__Progress_k__BackingField(float_t  value) ;

/// @brief Method set_IsMerging, addr 0x18b9f54, size 0x50, virtual false, abstract: false, final false
static inline void set_IsMerging(bool  value) ;

/// @brief Method set_Progress, addr 0x18b9fec, size 0x54, virtual false, abstract: false, final false
static inline void set_Progress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopMerging() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopMerging(LoopMerging && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopMerging", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopMerging(LoopMerging const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoopMerging, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopMerging);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging*, "VROSC", "LoopMerging");
NEED_NO_BOX(::VROSC::LoopMerging___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging___c__DisplayClass10_0*, "VROSC", "LoopMerging/<>c__DisplayClass10_0");
NEED_NO_BOX(::VROSC::LoopMerging___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging___c__DisplayClass12_0*, "VROSC", "LoopMerging/<>c__DisplayClass12_0");
NEED_NO_BOX(::VROSC::LoopMerging___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging___c__DisplayClass13_0*, "VROSC", "LoopMerging/<>c__DisplayClass13_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging_MergeSettings, "VROSC", "LoopMerging/MergeSettings");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging__MergeLoopAudio_d__13, "VROSC", "LoopMerging/<MergeLoopAudio>d__13");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging__MergeLoopsForPreview_d__9, "VROSC", "LoopMerging/<MergeLoopsForPreview>d__9");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopMerging__MergeLoopsFromGroup_d__10, "VROSC", "LoopMerging/<MergeLoopsFromGroup>d__10");
