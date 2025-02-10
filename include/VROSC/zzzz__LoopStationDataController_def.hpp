#pragma once
// IWYU pragma private; include "VROSC/LoopStationDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ToolDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopStationDataController)
namespace AudioHelm {
class HelmPatchFormat;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC::Utils {
class KeyedValue;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
class LoopData;
}
namespace VROSC {
class LoopPlaybackConfigData;
}
namespace VROSC {
class LoopPlaybackConfigOverrideFlags;
}
namespace VROSC {
struct LoopPlaybackTiming;
}
namespace VROSC {
struct LoopStationDataController__ExportData_d__40;
}
namespace VROSC {
struct LoopStationDataController__SaveAudioPreview_d__41;
}
namespace VROSC {
struct LoopStationDataController__SaveData_d__39;
}
namespace VROSC {
class LoopStationDataController___c;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass39_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass40_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass40_1;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass41_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_1;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_2;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_3;
}
namespace VROSC {
class LoopStationDataModel;
}
namespace VROSC {
class LoopStationLaunchpadData;
}
namespace VROSC {
class LoopStationTrackGroup;
}
namespace VROSC {
class LoopStationTrack;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class WidgetSettings;
}
namespace VROSC {
struct __c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d;
}
namespace VROSC {
struct __c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d;
}
// Forward declare root types
namespace VROSC {
class LoopStationDataController;
}
namespace VROSC {
class LoopStationDataController___c;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass39_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass40_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass40_1;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass41_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_0;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_1;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_2;
}
namespace VROSC {
class LoopStationDataController___c__DisplayClass43_3;
}
namespace VROSC {
struct LoopStationDataController__ExportData_d__40;
}
namespace VROSC {
struct LoopStationDataController__SaveAudioPreview_d__41;
}
namespace VROSC {
struct LoopStationDataController__SaveData_d__39;
}
namespace VROSC {
struct __c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d;
}
namespace VROSC {
struct __c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopStationDataController);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass39_0);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass40_0);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass40_1);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass41_0);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass43_0);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass43_1);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass43_2);
MARK_REF_PTR_T(::VROSC::LoopStationDataController___c__DisplayClass43_3);
MARK_VAL_T(::VROSC::LoopStationDataController__ExportData_d__40);
MARK_VAL_T(::VROSC::LoopStationDataController__SaveAudioPreview_d__41);
MARK_VAL_T(::VROSC::LoopStationDataController__SaveData_d__39);
MARK_VAL_T(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d);
MARK_VAL_T(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c
class CORDL_TYPE LoopStationDataController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::LoopStationDataController___c*  __9;

/// @brief Field <>9__108_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__108_0, put=setStaticF___9__108_0)) ::System::Func_2<::VROSC::LoopStationTrackGroup*,::StringW>*  __9__108_0;

/// @brief Field <>9__131_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__131_0, put=setStaticF___9__131_0)) ::System::Func_2<::VROSC::LoopStationLaunchpadData*,::StringW>*  __9__131_0;

/// @brief Field <>9__39_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__39_0, put=setStaticF___9__39_0)) ::System::Action*  __9__39_0;

/// @brief Field <>9__39_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__39_2, put=setStaticF___9__39_2)) ::System::Action*  __9__39_2;

/// @brief Field <>9__40_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_0, put=setStaticF___9__40_0)) ::System::Action*  __9__40_0;

/// @brief Field <>9__40_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_2, put=setStaticF___9__40_2)) ::System::Action*  __9__40_2;

/// @brief Field <>9__40_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__40_4, put=setStaticF___9__40_4)) ::System::Action*  __9__40_4;

/// @brief Field <>9__50_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_0, put=setStaticF___9__50_0)) ::System::Func_2<::VROSC::LoopStationTrack*,::StringW>*  __9__50_0;

static inline ::VROSC::LoopStationDataController___c* New_ctor() ;

/// @brief Method <ExportData>b__40_0, addr 0x186f8b0, size 0x4, virtual false, abstract: false, final false
inline void _ExportData_b__40_0() ;

/// @brief Method <ExportData>b__40_2, addr 0x186f8b4, size 0x4, virtual false, abstract: false, final false
inline void _ExportData_b__40_2() ;

/// @brief Method <ExportData>b__40_4, addr 0x186f8b8, size 0x4, virtual false, abstract: false, final false
inline void _ExportData_b__40_4() ;

/// @brief Method <GetGroupIds>b__108_0, addr 0x186f8d4, size 0x18, virtual false, abstract: false, final false
inline ::StringW _GetGroupIds_b__108_0(::VROSC::LoopStationTrackGroup*  t) ;

/// @brief Method <GetLaunchpadIds>b__131_0, addr 0x186f8ec, size 0x18, virtual false, abstract: false, final false
inline ::StringW _GetLaunchpadIds_b__131_0(::VROSC::LoopStationLaunchpadData*  t) ;

/// @brief Method <GetTrackIds>b__50_0, addr 0x186f8bc, size 0x18, virtual false, abstract: false, final false
inline ::StringW _GetTrackIds_b__50_0(::VROSC::LoopStationTrack*  t) ;

/// @brief Method <SaveData>b__39_0, addr 0x186f8a8, size 0x4, virtual false, abstract: false, final false
inline void _SaveData_b__39_0() ;

/// @brief Method <SaveData>b__39_2, addr 0x186f8ac, size 0x4, virtual false, abstract: false, final false
inline void _SaveData_b__39_2() ;

/// @brief Method .ctor, addr 0x186f8a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::LoopStationDataController___c* getStaticF___9() ;

static inline ::System::Func_2<::VROSC::LoopStationTrackGroup*,::StringW>* getStaticF___9__108_0() ;

static inline ::System::Func_2<::VROSC::LoopStationLaunchpadData*,::StringW>* getStaticF___9__131_0() ;

static inline ::System::Action* getStaticF___9__39_0() ;

static inline ::System::Action* getStaticF___9__39_2() ;

static inline ::System::Action* getStaticF___9__40_0() ;

static inline ::System::Action* getStaticF___9__40_2() ;

static inline ::System::Action* getStaticF___9__40_4() ;

static inline ::System::Func_2<::VROSC::LoopStationTrack*,::StringW>* getStaticF___9__50_0() ;

static inline void setStaticF___9(::VROSC::LoopStationDataController___c*  value) ;

static inline void setStaticF___9__108_0(::System::Func_2<::VROSC::LoopStationTrackGroup*,::StringW>*  value) ;

static inline void setStaticF___9__131_0(::System::Func_2<::VROSC::LoopStationLaunchpadData*,::StringW>*  value) ;

static inline void setStaticF___9__39_0(::System::Action*  value) ;

static inline void setStaticF___9__39_2(::System::Action*  value) ;

static inline void setStaticF___9__40_0(::System::Action*  value) ;

static inline void setStaticF___9__40_2(::System::Action*  value) ;

static inline void setStaticF___9__40_4(::System::Action*  value) ;

static inline void setStaticF___9__50_0(::System::Func_2<::VROSC::LoopStationTrack*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c(LoopStationDataController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c(LoopStationDataController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{517};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass39_0
class CORDL_TYPE LoopStationDataController___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::VROSC::Error>*  __9__1;

/// @brief Field <>9__3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field onFailure, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

static inline ::VROSC::LoopStationDataController___c__DisplayClass39_0* New_ctor() ;

/// @brief Method <SaveData>b__1, addr 0x186f90c, size 0x1c, virtual false, abstract: false, final false
inline void _SaveData_b__1(::VROSC::Error  error) ;

/// @brief Method <SaveData>b__3, addr 0x186f928, size 0x1c, virtual false, abstract: false, final false
inline void _SaveData_b__3(::VROSC::Error  error) ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x186f904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass39_0(LoopStationDataController___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass39_0(LoopStationDataController___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{518};

/// @brief Field onFailure, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__1;

/// @brief Field <>9__3, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass39_0, ___onFailure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass39_0, _____9__1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass39_0, _____9__3) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass39_0, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass40_0
class CORDL_TYPE LoopStationDataController___c__DisplayClass40_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::VROSC::Error>*  __9__1;

/// @brief Field <>9__3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::VROSC::Error>*  __9__3;

/// @brief Field <>9__5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__5, put=__cordl_internal_set___9__5)) ::System::Action_1<::VROSC::Error>*  __9__5;

/// @brief Field <>9__7, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__7, put=__cordl_internal_set___9__7)) ::System::Action_1<::VROSC::Error>*  __9__7;

/// @brief Field exportedDrumSamples, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportedDrumSamples, put=__cordl_internal_set_exportedDrumSamples)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  exportedDrumSamples;

/// @brief Field onFailure, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

static inline ::VROSC::LoopStationDataController___c__DisplayClass40_0* New_ctor() ;

/// @brief Method <ExportData>b__1, addr 0x186f94c, size 0x1c, virtual false, abstract: false, final false
inline void _ExportData_b__1(::VROSC::Error  error) ;

/// @brief Method <ExportData>b__3, addr 0x186f968, size 0x1c, virtual false, abstract: false, final false
inline void _ExportData_b__3(::VROSC::Error  error) ;

/// @brief Method <ExportData>b__5, addr 0x186f984, size 0x1c, virtual false, abstract: false, final false
inline void _ExportData_b__5(::VROSC::Error  error) ;

/// @brief Method <ExportData>b__7, addr 0x186f9a0, size 0x24, virtual false, abstract: false, final false
inline void _ExportData_b__7(::VROSC::Error  error) ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__5() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__5() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__7() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__7() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_exportedDrumSamples() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_exportedDrumSamples() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set___9__7(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_exportedDrumSamples(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x186f944, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass40_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass40_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass40_0(LoopStationDataController___c__DisplayClass40_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass40_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass40_0(LoopStationDataController___c__DisplayClass40_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{519};

/// @brief Field onFailure, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field exportedDrumSamples, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___exportedDrumSamples;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__1;

/// @brief Field <>9__3, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__3;

/// @brief Field <>9__5, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__5;

/// @brief Field <>9__7, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_0, ___onFailure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_0, ___exportedDrumSamples) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_0, _____9__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_0, _____9__3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_0, _____9__5) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_0, _____9__7) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass40_0, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass40_1
class CORDL_TYPE LoopStationDataController___c__DisplayClass40_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::LoopStationDataController___c__DisplayClass40_0*  CS$__8__locals1;

/// @brief Field audioClip, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClip, put=__cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip>  audioClip;

static inline ::VROSC::LoopStationDataController___c__DisplayClass40_1* New_ctor() ;

/// @brief Method <ExportData>b__6, addr 0x186f9cc, size 0xa8, virtual false, abstract: false, final false
inline void _ExportData_b__6() ;

constexpr ::VROSC::LoopStationDataController___c__DisplayClass40_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::LoopStationDataController___c__DisplayClass40_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::LoopStationDataController___c__DisplayClass40_0*  value) ;

constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x186f9c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass40_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass40_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass40_1(LoopStationDataController___c__DisplayClass40_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass40_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass40_1(LoopStationDataController___c__DisplayClass40_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{520};

/// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioClip;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass40_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_1, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass40_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass40_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass41_0
class CORDL_TYPE LoopStationDataController___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field normalizeMultiplier, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeMultiplier, put=__cordl_internal_set_normalizeMultiplier)) float_t  normalizeMultiplier;

/// @brief Field onSuccess, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_2<bool,float_t>*  onSuccess;

static inline ::VROSC::LoopStationDataController___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <SaveAudioPreview>b__0, addr 0x186fa7c, size 0x2c, virtual false, abstract: false, final false
inline void _SaveAudioPreview_b__0() ;

constexpr float_t const& __cordl_internal_get_normalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_normalizeMultiplier() ;

constexpr ::System::Action_2<bool,float_t>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_2<bool,float_t>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set_normalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_2<bool,float_t>*  value) ;

/// @brief Method .ctor, addr 0x186fa74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass41_0(LoopStationDataController___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass41_0(LoopStationDataController___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{521};

/// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<bool,float_t>*  ___onSuccess;

/// @brief Field normalizeMultiplier, offset: 0x18, size: 0x4, def value: None
 float_t  ___normalizeMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass41_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass41_0, ___normalizeMultiplier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass41_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass43_0/<<LoadData>b__0>d
struct CORDL_TYPE __c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x186fb50, size 0xce0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1870840, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopStationDataController___c__DisplayClass43_0*", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopStationDataController___c__DisplayClass43_1*", modifiers: "", def_value: None }, CppParam { name: "__8__2", ty: "::VROSC::LoopStationDataController___c__DisplayClass43_3*", modifiers: "", def_value: None }, CppParam { name: "_loadedTracksCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::LoopStationDataController___c__DisplayClass43_0*  __4__this, ::StringW  data, ::VROSC::LoopStationDataController___c__DisplayClass43_1*  __8__1, ::VROSC::LoopStationDataController___c__DisplayClass43_3*  __8__2, int32_t  _loadedTracksCount_5__2, int32_t  _i_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass43_0*  __4__this;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass43_1*  __8__1;

/// @brief Field <>8__2, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass43_3*  __8__2;

/// @brief Field <loadedTracksCount>5__2, offset: 0x48, size: 0x4, def value: None
 int32_t  _loadedTracksCount_5__2;

/// @brief Field <i>5__3, offset: 0x4c, size: 0x4, def value: None
 int32_t  _i_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, __8__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, _loadedTracksCount_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, _i_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass43_0
class CORDL_TYPE LoopStationDataController___c__DisplayClass43_0 : public ::System::Object {
public:
// Declarations
using __LoadData_b__0_d = ::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::LoopStationDataController*  __4__this;

/// @brief Field onFailure, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::LoopStationDataController___c__DisplayClass43_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x186fab0, size 0xa0, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

constexpr ::VROSC::LoopStationDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::LoopStationDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::LoopStationDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x186faa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass43_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass43_0(LoopStationDataController___c__DisplayClass43_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass43_0(LoopStationDataController___c__DisplayClass43_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{523};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_0, ___onFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_0, ___onSuccess) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass43_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass43_1/<<LoadData>b__1>d
struct CORDL_TYPE __c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1870cec, size 0x244, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1870f38, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopStationDataController___c__DisplayClass43_1*", modifiers: "", def_value: None }, CppParam { name: "samples", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "audioData", ty: "::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::LoopStationDataController___c__DisplayClass43_1*  __4__this, int32_t  samples, int32_t  channels, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{524};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass43_1*  __4__this;

/// @brief Field samples, offset: 0x30, size: 0x4, def value: None
 int32_t  samples;

/// @brief Field channels, offset: 0x34, size: 0x4, def value: None
 int32_t  channels;

/// @brief Field audioData, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, samples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, channels) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, audioData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass43_1
class CORDL_TYPE LoopStationDataController___c__DisplayClass43_1 : public ::System::Object {
public:
// Declarations
using __LoadData_b__1_d = ::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d;

/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::LoopStationDataController___c__DisplayClass43_0*  CS$__8__locals1;

/// @brief Field audio, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audio, put=__cordl_internal_set_audio)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio;

/// @brief Field loopStationTrack, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopStationTrack, put=__cordl_internal_set_loopStationTrack)) ::VROSC::LoopStationTrack*  loopStationTrack;

static inline ::VROSC::LoopStationDataController___c__DisplayClass43_1* New_ctor() ;

/// @brief Method <LoadData>b__1, addr 0x187084c, size 0xb4, virtual false, abstract: false, final false
inline void _LoadData_b__1(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  samples, int32_t  channels) ;

/// @brief Method <LoadData>b__2, addr 0x1870900, size 0x3ec, virtual false, abstract: false, final false
inline void _LoadData_b__2() ;

constexpr ::VROSC::LoopStationDataController___c__DisplayClass43_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::LoopStationDataController___c__DisplayClass43_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get_audio() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get_audio() ;

constexpr ::VROSC::LoopStationTrack* const& __cordl_internal_get_loopStationTrack() const;

constexpr ::VROSC::LoopStationTrack*& __cordl_internal_get_loopStationTrack() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::LoopStationDataController___c__DisplayClass43_0*  value) ;

constexpr void __cordl_internal_set_audio(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set_loopStationTrack(::VROSC::LoopStationTrack*  value) ;

/// @brief Method .ctor, addr 0x1870830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass43_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass43_1(LoopStationDataController___c__DisplayClass43_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass43_1(LoopStationDataController___c__DisplayClass43_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{525};

/// @brief Field audio, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ___audio;

/// @brief Field loopStationTrack, offset: 0x18, size: 0x8, def value: None
 ::VROSC::LoopStationTrack*  ___loopStationTrack;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass43_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_1, ___audio) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_1, ___loopStationTrack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass43_1, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass43_2
class CORDL_TYPE LoopStationDataController___c__DisplayClass43_2 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals2, put=__cordl_internal_set_CS$__8__locals2)) ::VROSC::LoopStationDataController___c__DisplayClass43_1*  CS$__8__locals2;

/// @brief Field channels, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field samples, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) int32_t  samples;

static inline ::VROSC::LoopStationDataController___c__DisplayClass43_2* New_ctor() ;

/// @brief Method <LoadData>b__3, addr 0x1870f44, size 0xa0, virtual false, abstract: false, final false
inline void _LoadData_b__3() ;

constexpr ::VROSC::LoopStationDataController___c__DisplayClass43_1* const& __cordl_internal_get_CS$__8__locals2() const;

constexpr ::VROSC::LoopStationDataController___c__DisplayClass43_1*& __cordl_internal_get_CS$__8__locals2() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_samples() const;

constexpr int32_t& __cordl_internal_get_samples() ;

constexpr void __cordl_internal_set_CS$__8__locals2(::VROSC::LoopStationDataController___c__DisplayClass43_1*  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_samples(int32_t  value) ;

/// @brief Method .ctor, addr 0x1870f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass43_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass43_2(LoopStationDataController___c__DisplayClass43_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass43_2(LoopStationDataController___c__DisplayClass43_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{526};

/// @brief Field samples, offset: 0x10, size: 0x4, def value: None
 int32_t  ___samples;

/// @brief Field channels, offset: 0x14, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass43_1*  ___CS$__8__locals2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_2, ___samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_2, ___channels) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass43_2, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController/<>c__DisplayClass43_3
class CORDL_TYPE LoopStationDataController___c__DisplayClass43_3 : public ::System::Object {
public:
// Declarations
/// @brief Field instrumentEvents, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_instrumentEvents, put=__cordl_internal_set_instrumentEvents)) ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEvents;

static inline ::VROSC::LoopStationDataController___c__DisplayClass43_3* New_ctor() ;

/// @brief Method <LoadData>b__4, addr 0x1870fe4, size 0x8, virtual false, abstract: false, final false
inline void _LoadData_b__4(::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEventData) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_instrumentEvents() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_instrumentEvents() ;

constexpr void __cordl_internal_set_instrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x1870838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController___c__DisplayClass43_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController___c__DisplayClass43_3(LoopStationDataController___c__DisplayClass43_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController___c__DisplayClass43_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController___c__DisplayClass43_3(LoopStationDataController___c__DisplayClass43_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{527};

/// @brief Field instrumentEvents, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___instrumentEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController___c__DisplayClass43_3, ___instrumentEvents) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController___c__DisplayClass43_3, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationDataController/<ExportData>d__40
struct CORDL_TYPE LoopStationDataController__ExportData_d__40 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1870fec, size 0xec4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1871eb0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController__ExportData_d__40() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopStationDataController*", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopStationDataController___c__DisplayClass40_0*", modifiers: "", def_value: None }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_loopStationTrack_5__3", ty: "::VROSC::LoopStationTrack*", modifiers: "", def_value: None }, CppParam { name: "_leadingSilentSamples_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_fileName_5__5", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap6", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopStationDataController__ExportData_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_1<::VROSC::Error>*  onFailure, ::VROSC::LoopStationDataController*  __4__this, ::StringW  sessionName, ::VROSC::LoopStationDataController___c__DisplayClass40_0*  __8__1, ::System::Action_1<float_t>*  onProgress, ::System::Action*  onSuccess, int32_t  _i_5__2, ::VROSC::LoopStationTrack*  _loopStationTrack_5__3, int32_t  _leadingSilentSamples_5__4, ::StringW  _fileName_5__5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  __7__wrap5, int32_t  __7__wrap6) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{528};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field onFailure, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  __4__this;

/// @brief Field sessionName, offset: 0x30, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass40_0*  __8__1;

/// @brief Field onProgress, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<float_t>*  onProgress;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <loopStationTrack>5__3, offset: 0x58, size: 0x8, def value: None
 ::VROSC::LoopStationTrack*  _loopStationTrack_5__3;

/// @brief Field <leadingSilentSamples>5__4, offset: 0x60, size: 0x4, def value: None
 int32_t  _leadingSilentSamples_5__4;

/// @brief Field <fileName>5__5, offset: 0x68, size: 0x8, def value: None
 ::StringW  _fileName_5__5;

/// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>7__wrap5, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  __7__wrap5;

/// @brief Field <>7__wrap6, offset: 0x80, size: 0x4, def value: None
 int32_t  __7__wrap6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, onFailure) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, sessionName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, onProgress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, _i_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, _loopStationTrack_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, _leadingSilentSamples_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, _fileName_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __7__wrap5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__ExportData_d__40, __7__wrap6) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController__ExportData_d__40, 0x88>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationDataController/<SaveAudioPreview>d__41
struct CORDL_TYPE LoopStationDataController__SaveAudioPreview_d__41 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1871f18, size 0x4b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18723c8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController__SaveAudioPreview_d__41() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_2<bool,float_t>*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopStationDataController___c__DisplayClass41_0*", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useOgg", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopStationDataController__SaveAudioPreview_d__41(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_2<bool,float_t>*  onSuccess, ::VROSC::LoopStationDataController___c__DisplayClass41_0*  __8__1, ::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<bool,float_t>*  onSuccess;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass41_0*  __8__1;

/// @brief Field folderName, offset: 0x30, size: 0x8, def value: None
 ::StringW  folderName;

/// @brief Field fileName, offset: 0x38, size: 0x8, def value: None
 ::StringW  fileName;

/// @brief Field useOgg, offset: 0x40, size: 0x1, def value: None
 bool  useOgg;

/// @brief Field onFailure, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onProgress, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<float_t>*  onProgress;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, folderName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, fileName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, useOgg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, onFailure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, onProgress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, __u__2) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController__SaveAudioPreview_d__41, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopStationDataController/<SaveData>d__39
struct CORDL_TYPE LoopStationDataController__SaveData_d__39 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1872430, size 0x854, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1872c84, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController__SaveData_d__39() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::LoopStationDataController*", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::LoopStationDataController___c__DisplayClass39_0*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_loopStationTrack_5__3", ty: "::VROSC::LoopStationTrack*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr LoopStationDataController__SaveData_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Action_1<::VROSC::Error>*  onFailure, ::VROSC::LoopStationDataController*  __4__this, ::StringW  sessionName, ::VROSC::LoopStationDataController___c__DisplayClass39_0*  __8__1, ::System::Action*  onSuccess, int32_t  _i_5__2, ::VROSC::LoopStationTrack*  _loopStationTrack_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopStationDataController*  __4__this;

/// @brief Field sessionName, offset: 0x38, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::LoopStationDataController___c__DisplayClass39_0*  __8__1;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <loopStationTrack>5__3, offset: 0x58, size: 0x8, def value: None
 ::VROSC::LoopStationTrack*  _loopStationTrack_5__3;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, sessionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, _i_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, _loopStationTrack_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController__SaveData_d__39, __u__1) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController__SaveData_d__39, 0x68>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.ToolDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopStationDataController
class CORDL_TYPE LoopStationDataController : public ::VROSC::ToolDataController {
public:
// Declarations
using _ExportData_d__40 = ::VROSC::LoopStationDataController__ExportData_d__40;

using _SaveAudioPreview_d__41 = ::VROSC::LoopStationDataController__SaveAudioPreview_d__41;

using _SaveData_d__39 = ::VROSC::LoopStationDataController__SaveData_d__39;

using __c = ::VROSC::LoopStationDataController___c;

using __c__DisplayClass39_0 = ::VROSC::LoopStationDataController___c__DisplayClass39_0;

using __c__DisplayClass40_0 = ::VROSC::LoopStationDataController___c__DisplayClass40_0;

using __c__DisplayClass40_1 = ::VROSC::LoopStationDataController___c__DisplayClass40_1;

using __c__DisplayClass41_0 = ::VROSC::LoopStationDataController___c__DisplayClass41_0;

using __c__DisplayClass43_0 = ::VROSC::LoopStationDataController___c__DisplayClass43_0;

using __c__DisplayClass43_1 = ::VROSC::LoopStationDataController___c__DisplayClass43_1;

using __c__DisplayClass43_2 = ::VROSC::LoopStationDataController___c__DisplayClass43_2;

using __c__DisplayClass43_3 = ::VROSC::LoopStationDataController___c__DisplayClass43_3;

 __declspec(property(get=get_AutoSortUserGroups, put=set_AutoSortUserGroups)) bool  AutoSortUserGroups;

 __declspec(property(get=get_DataModel)) ::VROSC::LoopStationDataModel*  DataModel;

 __declspec(property(get=get_DefaultPlaybackConfigData, put=set_DefaultPlaybackConfigData)) ::VROSC::LoopPlaybackConfigData*  DefaultPlaybackConfigData;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

/// @brief Field OnTrackRemoved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTrackRemoved, put=setStaticF_OnTrackRemoved)) ::System::Action_1<int32_t>*  OnTrackRemoved;

 __declspec(property(get=get_RecordButtonIsAttached, put=set_RecordButtonIsAttached)) bool  RecordButtonIsAttached;

 __declspec(property(get=get_RecordButtonPosition)) ::UnityEngine::Vector3  RecordButtonPosition;

 __declspec(property(get=get_RecordButtonRotation)) ::UnityEngine::Quaternion  RecordButtonRotation;

 __declspec(property(get=get_RecordButtonScale)) ::UnityEngine::Vector3  RecordButtonScale;

 __declspec(property(get=get_RecordingTarget, put=set_RecordingTarget)) ::StringW  RecordingTarget;

 __declspec(property(get=get_TrackCount)) int32_t  TrackCount;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field _tracks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tracks, put=__cordl_internal_set__tracks)) ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::LoopData*>*  _tracks;

/// @brief Field _transformData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformData, put=__cordl_internal_set__transformData)) ::VROSC::TransformDataController*  _transformData;

/// @brief Method AddLaunchpadSpatialAnchor, addr 0x186f650, size 0x11c, virtual false, abstract: false, final false
inline void AddLaunchpadSpatialAnchor(::StringW  launchpadID, ::StringW  uuid) ;

/// @brief Method AddRecordButtonSpatialAnchor, addr 0x186ba10, size 0xf8, virtual false, abstract: false, final false
inline void AddRecordButtonSpatialAnchor(::StringW  uuid) ;

/// @brief Method ApplyDefaults, addr 0x186ab10, size 0x138, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method CheckIntegrity, addr 0x186ad00, size 0x334, virtual false, abstract: false, final false
inline void CheckIntegrity() ;

/// @brief Method CreateGroup, addr 0x186b3d0, size 0x180, virtual false, abstract: false, final false
inline ::StringW CreateGroup(::StringW  groupName, float_t  volume, bool  isUserGroup, ::StringW  id) ;

/// @brief Method CreateLaunchPad, addr 0x186f0d0, size 0x100, virtual false, abstract: false, final false
inline void CreateLaunchPad(::StringW  launchpadID, ::StringW  targetID, bool  isGroup) ;

/// @brief Method CreateLoopTrack, addr 0x186c100, size 0x220, virtual false, abstract: false, final false
inline ::StringW CreateLoopTrack(::StringW  instrumentName, ::StringW  groupId, ::StringW  patchName, int32_t  loopLength) ;

/// @brief Method DuplicateTrack, addr 0x186c4dc, size 0x224, virtual false, abstract: false, final false
inline ::StringW DuplicateTrack(::StringW  sourceTrackId) ;

/// @brief Method ExportData, addr 0x1865b0c, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ExportData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method GenerateNewTrackNumber, addr 0x186bd9c, size 0x184, virtual false, abstract: false, final false
inline int32_t GenerateNewTrackNumber() ;

/// @brief Method GenerateTrackDisplayName, addr 0x186d358, size 0xe4, virtual false, abstract: false, final false
inline ::StringW GenerateTrackDisplayName(::StringW  trackId, ::StringW  overridePatchName) ;

/// @brief Method GetFirstRecordedTrackID, addr 0x186e444, size 0xa0, virtual false, abstract: false, final false
inline ::StringW GetFirstRecordedTrackID() ;

/// @brief Method GetGroupColor, addr 0x186eaac, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetGroupColor(::StringW  groupID) ;

/// @brief Method GetGroupIds, addr 0x186b034, size 0x12c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetGroupIds() ;

/// @brief Method GetGroupIsUserGroup, addr 0x186b2b4, size 0x6c, virtual false, abstract: false, final false
inline bool GetGroupIsUserGroup(::StringW  groupID) ;

/// @brief Method GetGroupMergeKeepsLoops, addr 0x186edf8, size 0x74, virtual false, abstract: false, final false
inline bool GetGroupMergeKeepsLoops(::StringW  groupID) ;

/// @brief Method GetGroupMuted, addr 0x186ea38, size 0x74, virtual false, abstract: false, final false
inline bool GetGroupMuted(::StringW  groupID) ;

/// @brief Method GetGroupName, addr 0x186b160, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetGroupName(::StringW  groupID) ;

/// @brief Method GetGroupPlaybackConfig, addr 0x186ed64, size 0x94, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigData* GetGroupPlaybackConfig(::StringW  groupID) ;

/// @brief Method GetGroupPlaybackOverrideFlags, addr 0x186ecd0, size 0x94, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigOverrideFlags* GetGroupPlaybackOverrideFlags(::StringW  groupID) ;

/// @brief Method GetGroupPosition, addr 0x186e704, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGroupPosition(::StringW  groupID) ;

/// @brief Method GetGroupRotation, addr 0x186e878, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetGroupRotation(::StringW  groupID) ;

/// @brief Method GetGroupTrackBelongsTo, addr 0x186b67c, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetGroupTrackBelongsTo(::StringW  trackId) ;

/// @brief Method GetGroupVolume, addr 0x186b1e0, size 0xd4, virtual false, abstract: false, final false
inline float_t GetGroupVolume(::StringW  groupID) ;

/// @brief Method GetGroupWithId, addr 0x186bf20, size 0x1e0, virtual false, abstract: false, final false
inline ::VROSC::LoopStationTrackGroup* GetGroupWithId(::StringW  groupID, ::StringW  debugMessage) ;

/// @brief Method GetLastLoopPlaybackData, addr 0x186e1e8, size 0xd0, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackTiming GetLastLoopPlaybackData(::StringW  trackId) ;

/// @brief Method GetLaunchpadIds, addr 0x186f284, size 0x12c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetLaunchpadIds() ;

/// @brief Method GetLaunchpadIsGroup, addr 0x186f4bc, size 0x6c, virtual false, abstract: false, final false
inline bool GetLaunchpadIsGroup(::StringW  launchpadID) ;

/// @brief Method GetLaunchpadSpatialAnchors, addr 0x186f5a8, size 0xa8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetLaunchpadSpatialAnchors(::StringW  launchpadID) ;

/// @brief Method GetLaunchpadTargetID, addr 0x186f528, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetLaunchpadTargetID(::StringW  launchpadID) ;

/// @brief Method GetLaunchpadTransformData, addr 0x186f448, size 0x74, virtual false, abstract: false, final false
inline ::VROSC::TransformDataController* GetLaunchpadTransformData(::StringW  launchpadID) ;

/// @brief Method GetLaunchpadWithId, addr 0x186eef0, size 0x1e0, virtual false, abstract: false, final false
inline ::VROSC::LoopStationLaunchpadData* GetLaunchpadWithId(::StringW  launchpadID, ::StringW  debugMessage) ;

/// @brief Method GetLoadSteps, addr 0x186b94c, size 0x54, virtual true, abstract: false, final false
inline int32_t GetLoadSteps() ;

/// @brief Method GetRecordButtonSpatialAnchors, addr 0x186b9f4, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetRecordButtonSpatialAnchors() ;

/// @brief Method GetSaveSteps, addr 0x186b9a0, size 0x54, virtual true, abstract: false, final false
inline int32_t GetSaveSteps() ;

/// @brief Method GetTrackAudioData, addr 0x186caac, size 0x10c, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> GetTrackAudioData(::StringW  trackId) ;

/// @brief Method GetTrackBeatsPerBar, addr 0x186dc38, size 0x6c, virtual false, abstract: false, final false
inline int32_t GetTrackBeatsPerBar(::StringW  trackId) ;

/// @brief Method GetTrackColor, addr 0x186d754, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetTrackColor(::StringW  trackId) ;

/// @brief Method GetTrackDisplayName, addr 0x186d4bc, size 0xb4, virtual false, abstract: false, final false
inline ::StringW GetTrackDisplayName(::StringW  trackId) ;

/// @brief Method GetTrackGlobalSyncStartOffset, addr 0x186d6f0, size 0x64, virtual false, abstract: false, final false
inline int32_t GetTrackGlobalSyncStartOffset(::StringW  trackId) ;

/// @brief Method GetTrackIds, addr 0x186b550, size 0x12c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetTrackIds() ;

/// @brief Method GetTrackInstrumentEvents, addr 0x186ce74, size 0x64, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetTrackInstrumentEvents(::StringW  trackId) ;

/// @brief Method GetTrackInstrumentName, addr 0x186d570, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetTrackInstrumentName(::StringW  trackId) ;

/// @brief Method GetTrackLoopData, addr 0x186cbb8, size 0x130, virtual false, abstract: false, final false
inline ::VROSC::LoopData* GetTrackLoopData(::StringW  trackId) ;

/// @brief Method GetTrackLoopLength, addr 0x186cfc8, size 0x1a8, virtual false, abstract: false, final false
inline int32_t GetTrackLoopLength(::StringW  trackId) ;

/// @brief Method GetTrackPanKeys, addr 0x186a0f8, size 0x13c, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::Utils::KeyedValue*,::Array<::VROSC::Utils::KeyedValue*>*> GetTrackPanKeys(::StringW  trackId) ;

/// @brief Method GetTrackPatch, addr 0x186e564, size 0x64, virtual false, abstract: false, final false
inline ::AudioHelm::HelmPatchFormat* GetTrackPatch(::StringW  trackId) ;

/// @brief Method GetTrackPatchName, addr 0x186d5f0, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetTrackPatchName(::StringW  trackId) ;

/// @brief Method GetTrackPlayLength, addr 0x186db54, size 0x64, virtual false, abstract: false, final false
inline int32_t GetTrackPlayLength(::StringW  trackId) ;

/// @brief Method GetTrackPlaybackConfigData, addr 0x186d8f8, size 0x94, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigData* GetTrackPlaybackConfigData(::StringW  trackId) ;

/// @brief Method GetTrackPositionInGroup, addr 0x186b6fc, size 0x64, virtual false, abstract: false, final false
inline int32_t GetTrackPositionInGroup(::StringW  trackId) ;

/// @brief Method GetTrackRecordedBPM, addr 0x186e364, size 0x70, virtual false, abstract: false, final false
inline double_t GetTrackRecordedBPM(::StringW  trackId) ;

/// @brief Method GetTrackStartConfigData, addr 0x186da54, size 0x94, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigData* GetTrackStartConfigData(::StringW  trackId) ;

/// @brief Method GetTrackTailAudioData, addr 0x186cce8, size 0x10c, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> GetTrackTailAudioData(::StringW  trackId) ;

/// @brief Method GetTrackUserSyncOffset, addr 0x186dd24, size 0x64, virtual false, abstract: false, final false
inline int32_t GetTrackUserSyncOffset(::StringW  trackId) ;

/// @brief Method GetTrackVolume, addr 0x186d1fc, size 0x6c, virtual false, abstract: false, final false
inline float_t GetTrackVolume(::StringW  trackId) ;

/// @brief Method GetTrackVolumeKeys, addr 0x186a234, size 0x98, virtual false, abstract: false, final false
inline ::VROSC::Utils::KeyedValue* GetTrackVolumeKeys(::StringW  trackId) ;

/// @brief Method GetTrackWithId, addr 0x186bbbc, size 0x1e0, virtual false, abstract: false, final false
inline ::VROSC::LoopStationTrack* GetTrackWithId(::StringW  trackId, ::StringW  debugMessage) ;

/// @brief Method HasTrack, addr 0x186c700, size 0x64, virtual false, abstract: false, final false
inline bool HasTrack(::StringW  trackId) ;

/// @brief Method IsTrackMuted, addr 0x186d2ec, size 0x6c, virtual false, abstract: false, final false
inline bool IsTrackMuted(::StringW  trackId) ;

/// @brief Method IsTrackPlaying, addr 0x186dae8, size 0x6c, virtual false, abstract: false, final false
inline bool IsTrackPlaying(::StringW  trackId) ;

/// @brief Method LoadData, addr 0x186b82c, size 0x120, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::LoopStationDataController* New_ctor() ;

/// @brief Method RemoveGroup, addr 0x186b320, size 0xb0, virtual false, abstract: false, final false
inline void RemoveGroup(::StringW  groupID) ;

/// @brief Method RemoveLaunchPad, addr 0x186f1d0, size 0xb4, virtual false, abstract: false, final false
inline void RemoveLaunchPad(::StringW  launchpadID) ;

/// @brief Method RemoveLaunchpadSpatialAnchor, addr 0x186f76c, size 0xd8, virtual false, abstract: false, final false
inline void RemoveLaunchpadSpatialAnchor(::StringW  launchpadID, ::StringW  uuid) ;

/// @brief Method RemoveRecordButtonSpatialAnchor, addr 0x186bb08, size 0xb4, virtual false, abstract: false, final false
inline void RemoveRecordButtonSpatialAnchor(::StringW  uuid) ;

/// @brief Method RemoveTrack, addr 0x186c320, size 0x1bc, virtual false, abstract: false, final false
inline void RemoveTrack(::StringW  trackId) ;

/// @brief Method ResetTrackEditingValues, addr 0x186e070, size 0x178, virtual false, abstract: false, final false
inline void ResetTrackEditingValues(::StringW  trackId) ;

/// @brief Method ResetTrackPanAndVolumeValues, addr 0x186df00, size 0x170, virtual false, abstract: false, final false
inline void ResetTrackPanAndVolumeValues(::StringW  trackId) ;

/// @brief Method SaveAudioPreview, addr 0x1865c00, size 0x104, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SaveAudioPreview(::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_2<bool,float_t>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method SaveData, addr 0x186ac48, size 0xb8, virtual true, abstract: false, final false
inline void SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SetGroupColor, addr 0x186eb28, size 0xa8, virtual false, abstract: false, final false
inline void SetGroupColor(::StringW  groupID, ::UnityEngine::Color  color) ;

/// @brief Method SetGroupMergeKeepsLoops, addr 0x186ee6c, size 0x84, virtual false, abstract: false, final false
inline void SetGroupMergeKeepsLoops(::StringW  groupID, bool  keepLoops) ;

/// @brief Method SetGroupMuted, addr 0x186e9b4, size 0x84, virtual false, abstract: false, final false
inline void SetGroupMuted(::StringW  groupID, bool  muted) ;

/// @brief Method SetGroupName, addr 0x186e5c8, size 0x80, virtual false, abstract: false, final false
inline void SetGroupName(::StringW  groupID, ::StringW  groupName) ;

/// @brief Method SetGroupPlaybackConfig, addr 0x186ec50, size 0x80, virtual false, abstract: false, final false
inline void SetGroupPlaybackConfig(::StringW  groupID, ::VROSC::LoopPlaybackConfigData*  playbackConfigData) ;

/// @brief Method SetGroupPlaybackOverrideFlags, addr 0x186ebd0, size 0x80, virtual false, abstract: false, final false
inline void SetGroupPlaybackOverrideFlags(::StringW  groupID, ::VROSC::LoopPlaybackConfigOverrideFlags*  overrideFlags) ;

/// @brief Method SetGroupPosition, addr 0x186e648, size 0xbc, virtual false, abstract: false, final false
inline void SetGroupPosition(::StringW  groupID, ::UnityEngine::Vector3  position) ;

/// @brief Method SetGroupRotation, addr 0x186e7b4, size 0xc4, virtual false, abstract: false, final false
inline void SetGroupRotation(::StringW  groupID, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetGroupTrackBelongsTo, addr 0x186b760, size 0xcc, virtual false, abstract: false, final false
inline void SetGroupTrackBelongsTo(::StringW  trackId, ::StringW  groupId, int32_t  placeInGroup) ;

/// @brief Method SetGroupVolume, addr 0x186e928, size 0x8c, virtual false, abstract: false, final false
inline void SetGroupVolume(::StringW  groupID, float_t  volume) ;

/// @brief Method SetLastLoopPlaybackData, addr 0x186e2b8, size 0xac, virtual false, abstract: false, final false
inline void SetLastLoopPlaybackData(::StringW  trackId, ::VROSC::LoopPlaybackTiming  lastLoopPlaybackData) ;

/// @brief Method SetLaunchpadTransform, addr 0x186f3b0, size 0x98, virtual false, abstract: false, final false
inline void SetLaunchpadTransform(::StringW  launchpadID, ::VROSC::TransformMover*  transformMover) ;

/// @brief Method SetRecordButtonTransformData, addr 0x186a978, size 0x198, virtual false, abstract: false, final false
inline void SetRecordButtonTransformData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale) ;

/// @brief Method SetTrackBeatsPerBar, addr 0x186dbb8, size 0x80, virtual false, abstract: false, final false
inline void SetTrackBeatsPerBar(::StringW  trackId, int32_t  beatsPerBar) ;

/// @brief Method SetTrackColor, addr 0x186d7d0, size 0xa8, virtual false, abstract: false, final false
inline void SetTrackColor(::StringW  trackId, ::UnityEngine::Color  color) ;

/// @brief Method SetTrackDisplayName, addr 0x186d43c, size 0x80, virtual false, abstract: false, final false
inline void SetTrackDisplayName(::StringW  trackId, ::StringW  displayName) ;

/// @brief Method SetTrackGlobalSyncStartOffset, addr 0x186d670, size 0x80, virtual false, abstract: false, final false
inline void SetTrackGlobalSyncStartOffset(::StringW  trackId, int32_t  globalSyncStartOffset) ;

/// @brief Method SetTrackInstrumentEvents, addr 0x186cdf4, size 0x80, virtual false, abstract: false, final false
inline void SetTrackInstrumentEvents(::StringW  trackId, ::ArrayW<uint8_t,::Array<uint8_t>*>  instrumentEvents) ;

/// @brief Method SetTrackLoopLength, addr 0x186ced8, size 0xf0, virtual false, abstract: false, final false
inline void SetTrackLoopLength(::StringW  trackId, int32_t  length) ;

/// @brief Method SetTrackMuted, addr 0x186d268, size 0x84, virtual false, abstract: false, final false
inline void SetTrackMuted(::StringW  trackId, bool  isMuted) ;

/// @brief Method SetTrackPanKeys, addr 0x186dd88, size 0xe4, virtual false, abstract: false, final false
inline void SetTrackPanKeys(::StringW  trackId, ::ArrayW<float_t,::Array<float_t>*>  firstKeys, ::ArrayW<float_t,::Array<float_t>*>  secondKeys) ;

/// @brief Method SetTrackPatch, addr 0x186e4e4, size 0x80, virtual false, abstract: false, final false
inline void SetTrackPatch(::StringW  trackId, ::AudioHelm::HelmPatchFormat*  patch) ;

/// @brief Method SetTrackPlayLength, addr 0x186c900, size 0x88, virtual false, abstract: false, final false
inline void SetTrackPlayLength(::StringW  trackId, int32_t  playLength) ;

/// @brief Method SetTrackPlaybackConfigData, addr 0x186d878, size 0x80, virtual false, abstract: false, final false
inline void SetTrackPlaybackConfigData(::StringW  trackId, ::VROSC::LoopPlaybackConfigData*  playbackConfigData) ;

/// @brief Method SetTrackPlaying, addr 0x186d98c, size 0xc8, virtual false, abstract: false, final false
inline void SetTrackPlaying(::StringW  trackId, bool  isPlaying, ::VROSC::LoopPlaybackConfigData*  playbackConfigData) ;

/// @brief Method SetTrackRecordedBPM, addr 0x186e3d4, size 0x70, virtual false, abstract: false, final false
inline void SetTrackRecordedBPM(::StringW  trackId, double_t  bpm) ;

/// @brief Method SetTrackRecording, addr 0x186c764, size 0x19c, virtual false, abstract: false, final false
inline void SetTrackRecording(::StringW  trackId, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData) ;

/// @brief Method SetTrackTailRecording, addr 0x186c988, size 0x124, virtual false, abstract: false, final false
inline void SetTrackTailRecording(::StringW  trackId, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  tailData) ;

/// @brief Method SetTrackUserSyncOffset, addr 0x186dca4, size 0x80, virtual false, abstract: false, final false
inline void SetTrackUserSyncOffset(::StringW  trackId, int32_t  userSyncOffset) ;

/// @brief Method SetTrackVolume, addr 0x186d170, size 0x8c, virtual false, abstract: false, final false
inline void SetTrackVolume(::StringW  trackId, float_t  volume) ;

/// @brief Method SetTrackVolumeKeys, addr 0x186de6c, size 0x94, virtual false, abstract: false, final false
inline void SetTrackVolumeKeys(::StringW  trackId, ::ArrayW<float_t,::Array<float_t>*>  keys) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::LoopData*>* const& __cordl_internal_get__tracks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::LoopData*>*& __cordl_internal_get__tracks() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformData() ;

constexpr void __cordl_internal_set__tracks(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::LoopData*>*  value) ;

constexpr void __cordl_internal_set__transformData(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x186a41c, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<int32_t>* getStaticF_OnTrackRemoved() ;

/// @brief Method get_AutoSortUserGroups, addr 0x186a5a4, size 0x1c, virtual false, abstract: false, final false
inline bool get_AutoSortUserGroups() ;

/// @brief Method get_DataModel, addr 0x186a39c, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::LoopStationDataModel* get_DataModel() ;

/// @brief Method get_DefaultPlaybackConfigData, addr 0x186a928, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigData* get_DefaultPlaybackConfigData() ;

/// @brief Method get_HasBeenOpened, addr 0x186a8d4, size 0x1c, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_IsOpen, addr 0x186a870, size 0x24, virtual true, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_RecordButtonIsAttached, addr 0x186a5f8, size 0x1c, virtual false, abstract: false, final false
inline bool get_RecordButtonIsAttached() ;

/// @brief Method get_RecordButtonPosition, addr 0x186a69c, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RecordButtonPosition() ;

/// @brief Method get_RecordButtonRotation, addr 0x186a728, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_RecordButtonRotation() ;

/// @brief Method get_RecordButtonScale, addr 0x186a7e4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RecordButtonScale() ;

/// @brief Method get_RecordingTarget, addr 0x186a64c, size 0x1c, virtual false, abstract: false, final false
inline ::StringW get_RecordingTarget() ;

/// @brief Method get_TrackCount, addr 0x1866314, size 0x54, virtual false, abstract: false, final false
inline int32_t get_TrackCount() ;

/// @brief Method get_TransformData, addr 0x186a414, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method get_Volume, addr 0x186a554, size 0x1c, virtual false, abstract: false, final false
inline float_t get_Volume() ;

static inline void setStaticF_OnTrackRemoved(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_AutoSortUserGroups, addr 0x186a5c0, size 0x38, virtual false, abstract: false, final false
inline void set_AutoSortUserGroups(bool  value) ;

/// @brief Method set_DefaultPlaybackConfigData, addr 0x186a944, size 0x34, virtual false, abstract: false, final false
inline void set_DefaultPlaybackConfigData(::VROSC::LoopPlaybackConfigData*  value) ;

/// @brief Method set_HasBeenOpened, addr 0x186a8f0, size 0x38, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_IsOpen, addr 0x186a894, size 0x40, virtual true, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_RecordButtonIsAttached, addr 0x186a614, size 0x38, virtual false, abstract: false, final false
inline void set_RecordButtonIsAttached(bool  value) ;

/// @brief Method set_RecordingTarget, addr 0x186a668, size 0x34, virtual false, abstract: false, final false
inline void set_RecordingTarget(::StringW  value) ;

/// @brief Method set_Volume, addr 0x186a570, size 0x34, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopStationDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopStationDataController(LoopStationDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopStationDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopStationDataController(LoopStationDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{531};

/// @brief Field _transformData, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformData;

/// @brief Field _tracks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::LoopData*>*  ____tracks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopStationDataController, ____transformData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopStationDataController, ____tracks) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopStationDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopStationDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController*, "VROSC", "LoopStationDataController");
NEED_NO_BOX(::VROSC::LoopStationDataController___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c*, "VROSC", "LoopStationDataController/<>c");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass39_0*, "VROSC", "LoopStationDataController/<>c__DisplayClass39_0");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass40_0*, "VROSC", "LoopStationDataController/<>c__DisplayClass40_0");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass40_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass40_1*, "VROSC", "LoopStationDataController/<>c__DisplayClass40_1");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass41_0*, "VROSC", "LoopStationDataController/<>c__DisplayClass41_0");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass43_0*, "VROSC", "LoopStationDataController/<>c__DisplayClass43_0");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass43_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass43_1*, "VROSC", "LoopStationDataController/<>c__DisplayClass43_1");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass43_2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass43_2*, "VROSC", "LoopStationDataController/<>c__DisplayClass43_2");
NEED_NO_BOX(::VROSC::LoopStationDataController___c__DisplayClass43_3);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController___c__DisplayClass43_3*, "VROSC", "LoopStationDataController/<>c__DisplayClass43_3");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController__ExportData_d__40, "VROSC", "LoopStationDataController/<ExportData>d__40");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController__SaveAudioPreview_d__41, "VROSC", "LoopStationDataController/<SaveAudioPreview>d__41");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController__SaveData_d__39, "VROSC", "LoopStationDataController/<SaveData>d__39");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass43_0_LoopStationDataController___LoadData_b__0_d, "VROSC", "LoopStationDataController/<>c__DisplayClass43_0/<<LoadData>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass43_1_LoopStationDataController___LoadData_b__1_d, "VROSC", "LoopStationDataController/<>c__DisplayClass43_1/<<LoadData>b__1>d");
