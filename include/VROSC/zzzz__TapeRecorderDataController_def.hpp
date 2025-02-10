#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ToolDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TapeRecorderDataController)
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
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
struct TapeRecorderDataController__ClearAudioData_d__30;
}
namespace VROSC {
struct TapeRecorderDataController__LoadData_d__45;
}
namespace VROSC {
struct TapeRecorderDataController__SaveAudioPreview_d__46;
}
namespace VROSC {
struct TapeRecorderDataController__SaveData_d__44;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass44_0;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass45_0;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass45_1;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass46_0;
}
namespace VROSC {
class TapeRecorderDataModel;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
namespace VROSC {
struct __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d;
}
namespace VROSC {
struct __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d;
}
// Forward declare root types
namespace VROSC {
class TapeRecorderDataController;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass44_0;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass45_0;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass45_1;
}
namespace VROSC {
class TapeRecorderDataController___c__DisplayClass46_0;
}
namespace VROSC {
struct TapeRecorderDataController__ClearAudioData_d__30;
}
namespace VROSC {
struct TapeRecorderDataController__LoadData_d__45;
}
namespace VROSC {
struct TapeRecorderDataController__SaveAudioPreview_d__46;
}
namespace VROSC {
struct TapeRecorderDataController__SaveData_d__44;
}
namespace VROSC {
struct __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d;
}
namespace VROSC {
struct __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TapeRecorderDataController);
MARK_REF_PTR_T(::VROSC::TapeRecorderDataController___c__DisplayClass44_0);
MARK_REF_PTR_T(::VROSC::TapeRecorderDataController___c__DisplayClass45_0);
MARK_REF_PTR_T(::VROSC::TapeRecorderDataController___c__DisplayClass45_1);
MARK_REF_PTR_T(::VROSC::TapeRecorderDataController___c__DisplayClass46_0);
MARK_VAL_T(::VROSC::TapeRecorderDataController__ClearAudioData_d__30);
MARK_VAL_T(::VROSC::TapeRecorderDataController__LoadData_d__45);
MARK_VAL_T(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46);
MARK_VAL_T(::VROSC::TapeRecorderDataController__SaveData_d__44);
MARK_VAL_T(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d);
MARK_VAL_T(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderDataController/<>c__DisplayClass44_0
class CORDL_TYPE TapeRecorderDataController___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::TapeRecorderDataController*  __4__this;

/// @brief Field onFailure, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

static inline ::VROSC::TapeRecorderDataController___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <SaveData>b__0, addr 0x1874ff8, size 0x34, virtual false, abstract: false, final false
inline void _SaveData_b__0() ;

/// @brief Method <SaveData>b__1, addr 0x187502c, size 0x1c, virtual false, abstract: false, final false
inline void _SaveData_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::TapeRecorderDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::TapeRecorderDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr void __cordl_internal_set___4__this(::VROSC::TapeRecorderDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x1874ff0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass44_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderDataController___c__DisplayClass44_0(TapeRecorderDataController___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass44_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderDataController___c__DisplayClass44_0(TapeRecorderDataController___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{540};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  _____4__this;

/// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass44_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass44_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController___c__DisplayClass44_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderDataController/<>c__DisplayClass45_0/<<LoadData>b__0>d
struct CORDL_TYPE __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18751e8, size 0x308, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18754f0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController___c__DisplayClass45_0*", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __4__this, ::StringW  data, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __4__this;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderDataController/<>c__DisplayClass45_0/<<LoadData>b__1>d
struct CORDL_TYPE __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18754fc, size 0x2e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18757e4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController___c__DisplayClass45_0*", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __4__this, int32_t  channels, int32_t  length, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __4__this;

/// @brief Field channels, offset: 0x30, size: 0x4, def value: None
 int32_t  channels;

/// @brief Field length, offset: 0x34, size: 0x4, def value: None
 int32_t  length;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, channels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, 0x40>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderDataController/<>c__DisplayClass45_0
class CORDL_TYPE TapeRecorderDataController___c__DisplayClass45_0 : public ::System::Object {
public:
// Declarations
using __LoadData_b__0_d = ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d;

using __LoadData_b__1_d = ::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::TapeRecorderDataController*  __4__this;

/// @brief Field <>9__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  __9__1;

/// @brief Field <>9__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::VROSC::Error>*  __9__2;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::TapeRecorderDataController___c__DisplayClass45_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x1875050, size 0x98, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

/// @brief Method <LoadData>b__1, addr 0x18750e8, size 0xa0, virtual false, abstract: false, final false
inline void _LoadData_b__1(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audioData, int32_t  length, int32_t  channels) ;

/// @brief Method <LoadData>b__2, addr 0x1875188, size 0x60, virtual false, abstract: false, final false
inline void _LoadData_b__2(::VROSC::Error  error) ;

constexpr ::VROSC::TapeRecorderDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::TapeRecorderDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::TapeRecorderDataController*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1875048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController___c__DisplayClass45_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass45_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderDataController___c__DisplayClass45_0(TapeRecorderDataController___c__DisplayClass45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass45_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderDataController___c__DisplayClass45_0(TapeRecorderDataController___c__DisplayClass45_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{543};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>,int32_t,int32_t>*  _____9__1;

/// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_0, _____9__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController___c__DisplayClass45_0, 0x38>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderDataController/<>c__DisplayClass45_1
class CORDL_TYPE TapeRecorderDataController___c__DisplayClass45_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  CS$__8__locals1;

/// @brief Field channels, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field length, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

static inline ::VROSC::TapeRecorderDataController___c__DisplayClass45_1* New_ctor() ;

/// @brief Method <LoadData>b__3, addr 0x18757f0, size 0xd4, virtual false, abstract: false, final false
inline void _LoadData_b__3() ;

constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass45_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

/// @brief Method .ctor, addr 0x18757dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController___c__DisplayClass45_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass45_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderDataController___c__DisplayClass45_1(TapeRecorderDataController___c__DisplayClass45_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass45_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderDataController___c__DisplayClass45_1(TapeRecorderDataController___c__DisplayClass45_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{544};

/// @brief Field channels, offset: 0x10, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field length, offset: 0x14, size: 0x4, def value: None
 int32_t  ___length;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_1, ___channels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_1, ___length) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass45_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController___c__DisplayClass45_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderDataController/<>c__DisplayClass46_0
class CORDL_TYPE TapeRecorderDataController___c__DisplayClass46_0 : public ::System::Object {
public:
// Declarations
/// @brief Field normalizeMultiplier, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeMultiplier, put=__cordl_internal_set_normalizeMultiplier)) float_t  normalizeMultiplier;

/// @brief Field onSuccess, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action_2<bool,float_t>*  onSuccess;

static inline ::VROSC::TapeRecorderDataController___c__DisplayClass46_0* New_ctor() ;

/// @brief Method <SaveAudioPreview>b__0, addr 0x18758cc, size 0x2c, virtual false, abstract: false, final false
inline void _SaveAudioPreview_b__0() ;

constexpr float_t const& __cordl_internal_get_normalizeMultiplier() const;

constexpr float_t& __cordl_internal_get_normalizeMultiplier() ;

constexpr ::System::Action_2<bool,float_t>* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action_2<bool,float_t>*& __cordl_internal_get_onSuccess() ;

constexpr void __cordl_internal_set_normalizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action_2<bool,float_t>*  value) ;

/// @brief Method .ctor, addr 0x18758c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController___c__DisplayClass46_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass46_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderDataController___c__DisplayClass46_0(TapeRecorderDataController___c__DisplayClass46_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController___c__DisplayClass46_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderDataController___c__DisplayClass46_0(TapeRecorderDataController___c__DisplayClass46_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{545};

/// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<bool,float_t>*  ___onSuccess;

/// @brief Field normalizeMultiplier, offset: 0x18, size: 0x4, def value: None
 float_t  ___normalizeMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass46_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController___c__DisplayClass46_0, ___normalizeMultiplier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController___c__DisplayClass46_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderDataController/<ClearAudioData>d__30
struct CORDL_TYPE TapeRecorderDataController__ClearAudioData_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18758f8, size 0x258, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1875b50, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController__ClearAudioData_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr TapeRecorderDataController__ClearAudioData_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController__ClearAudioData_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__ClearAudioData_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__ClearAudioData_d__30, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__ClearAudioData_d__30, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController__ClearAudioData_d__30, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderDataController/<LoadData>d__45
struct CORDL_TYPE TapeRecorderDataController__LoadData_d__45 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1875bb8, size 0x2c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1875e80, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController__LoadData_d__45() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: None }, CppParam { name: "sessionId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::TapeRecorderDataController___c__DisplayClass45_0*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr TapeRecorderDataController__LoadData_d__45(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController*  __4__this, ::StringW  sessionId, ::System::Action*  onSuccess, ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __8__1, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{547};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  __4__this;

/// @brief Field sessionId, offset: 0x30, size: 0x8, def value: None
 ::StringW  sessionId;

/// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController___c__DisplayClass45_0*  __8__1;

/// @brief Field onFailure, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, sessionId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, onFailure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__LoadData_d__45, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController__LoadData_d__45, 0x58>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderDataController/<SaveAudioPreview>d__46
struct CORDL_TYPE TapeRecorderDataController__SaveAudioPreview_d__46 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1875e8c, size 0x370, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18761fc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController__SaveAudioPreview_d__46() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action_2<bool,float_t>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: None }, CppParam { name: "folderName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useOgg", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "onProgress", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr TapeRecorderDataController__SaveAudioPreview_d__46(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_2<bool,float_t>*  onSuccess, ::VROSC::TapeRecorderDataController*  __4__this, ::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{548};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<bool,float_t>*  onSuccess;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  __4__this;

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
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, folderName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, fileName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, useOgg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, onFailure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, onProgress) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, 0x60>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.TapeRecorderDataController/<SaveData>d__44
struct CORDL_TYPE TapeRecorderDataController__SaveData_d__44 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1876264, size 0x3c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x187662c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController__SaveData_d__44() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::TapeRecorderDataController*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr TapeRecorderDataController__SaveData_d__44(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::TapeRecorderDataController*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  sessionName, ::System::Action*  onSuccess, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{549};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::TapeRecorderDataController*  __4__this;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field sessionName, offset: 0x38, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, sessionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController__SaveData_d__44, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController__SaveData_d__44, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.ToolDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TapeRecorderDataController
class CORDL_TYPE TapeRecorderDataController : public ::VROSC::ToolDataController {
public:
// Declarations
using _ClearAudioData_d__30 = ::VROSC::TapeRecorderDataController__ClearAudioData_d__30;

using _LoadData_d__45 = ::VROSC::TapeRecorderDataController__LoadData_d__45;

using _SaveAudioPreview_d__46 = ::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46;

using _SaveData_d__44 = ::VROSC::TapeRecorderDataController__SaveData_d__44;

using __c__DisplayClass44_0 = ::VROSC::TapeRecorderDataController___c__DisplayClass44_0;

using __c__DisplayClass45_0 = ::VROSC::TapeRecorderDataController___c__DisplayClass45_0;

using __c__DisplayClass45_1 = ::VROSC::TapeRecorderDataController___c__DisplayClass45_1;

using __c__DisplayClass46_0 = ::VROSC::TapeRecorderDataController___c__DisplayClass46_0;

 __declspec(property(get=get_CurrentAudioData, put=set_CurrentAudioData)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  CurrentAudioData;

 __declspec(property(get=get_DataModel)) ::VROSC::TapeRecorderDataModel*  DataModel;

 __declspec(property(get=get_HasAudioData, put=set_HasAudioData)) bool  HasAudioData;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_IsOpen, put=set_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_MaxRecordingLengthSeconds, put=set_MaxRecordingLengthSeconds)) float_t  MaxRecordingLengthSeconds;

 __declspec(property(get=get_NormalizeMultiplier, put=set_NormalizeMultiplier)) float_t  NormalizeMultiplier;

 __declspec(property(get=get_RecordingEndSample, put=set_RecordingEndSample)) int32_t  RecordingEndSample;

 __declspec(property(get=get_RecordingLength, put=set_RecordingLength)) int32_t  RecordingLength;

 __declspec(property(get=get_RecordingStartSample, put=set_RecordingStartSample)) int32_t  RecordingStartSample;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

 __declspec(property(get=get_UseAsPreview, put=set_UseAsPreview)) bool  UseAsPreview;

/// @brief Field <CurrentAudioData>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentAudioData_k__BackingField, put=__cordl_internal_set__CurrentAudioData_k__BackingField)) ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  _CurrentAudioData_k__BackingField;

/// @brief Field <HasAudioData>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasAudioData_k__BackingField, put=__cordl_internal_set__HasAudioData_k__BackingField)) bool  _HasAudioData_k__BackingField;

/// @brief Field <MaxRecordingLengthSeconds>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxRecordingLengthSeconds_k__BackingField, put=__cordl_internal_set__MaxRecordingLengthSeconds_k__BackingField)) float_t  _MaxRecordingLengthSeconds_k__BackingField;

/// @brief Field <RecordingEndSample>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__RecordingEndSample_k__BackingField, put=__cordl_internal_set__RecordingEndSample_k__BackingField)) int32_t  _RecordingEndSample_k__BackingField;

/// @brief Field <RecordingLength>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__RecordingLength_k__BackingField, put=__cordl_internal_set__RecordingLength_k__BackingField)) int32_t  _RecordingLength_k__BackingField;

/// @brief Field <RecordingStartSample>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__RecordingStartSample_k__BackingField, put=__cordl_internal_set__RecordingStartSample_k__BackingField)) int32_t  _RecordingStartSample_k__BackingField;

/// @brief Field _transformData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformData, put=__cordl_internal_set__transformData)) ::VROSC::TransformDataController*  _transformData;

/// @brief Method ApplyDefaults, addr 0x1874b74, size 0xac, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method ClearAudioData, addr 0x18749fc, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ClearAudioData() ;

/// @brief Method LoadData, addr 0x1874d74, size 0xb8, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::TapeRecorderDataController* New_ctor() ;

/// @brief Method SaveAudioPreview, addr 0x1874e2c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SaveAudioPreview(::StringW  folderName, ::StringW  fileName, bool  useOgg, ::System::Action_2<bool,float_t>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure, ::System::Action_1<float_t>*  onProgress) ;

/// @brief Method SaveData, addr 0x1874cc4, size 0xb0, virtual true, abstract: false, final false
inline void SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method <ClearAudioData>b__30_0, addr 0x1874f34, size 0xbc, virtual false, abstract: false, final false
inline void _ClearAudioData_b__30_0() ;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> const& __cordl_internal_get__CurrentAudioData_k__BackingField() const;

constexpr ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>& __cordl_internal_get__CurrentAudioData_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasAudioData_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasAudioData_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxRecordingLengthSeconds_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxRecordingLengthSeconds_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RecordingEndSample_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RecordingEndSample_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RecordingLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RecordingLength_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__RecordingStartSample_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__RecordingStartSample_k__BackingField() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformData() ;

constexpr void __cordl_internal_set__CurrentAudioData_k__BackingField(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

constexpr void __cordl_internal_set__HasAudioData_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MaxRecordingLengthSeconds_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RecordingEndSample_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RecordingLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__RecordingStartSample_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__transformData(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x187482c, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentAudioData, addr 0x1874800, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> get_CurrentAudioData() ;

/// @brief Method get_DataModel, addr 0x1874748, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::TapeRecorderDataModel* get_DataModel() ;

/// @brief Method get_HasAudioData, addr 0x1874810, size 0x8, virtual false, abstract: false, final false
inline bool get_HasAudioData() ;

/// @brief Method get_HasBeenOpened, addr 0x1874b20, size 0x1c, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_IsOpen, addr 0x1874abc, size 0x24, virtual true, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_MaxRecordingLengthSeconds, addr 0x18747c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxRecordingLengthSeconds() ;

/// @brief Method get_NormalizeMultiplier, addr 0x1874c20, size 0x1c, virtual false, abstract: false, final false
inline float_t get_NormalizeMultiplier() ;

/// @brief Method get_RecordingEndSample, addr 0x18747f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RecordingEndSample() ;

/// @brief Method get_RecordingLength, addr 0x18747d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RecordingLength() ;

/// @brief Method get_RecordingStartSample, addr 0x18747e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RecordingStartSample() ;

/// @brief Method get_TransformData, addr 0x1874824, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method get_UseAsPreview, addr 0x1874c70, size 0x1c, virtual false, abstract: false, final false
inline bool get_UseAsPreview() ;

/// @brief Method set_CurrentAudioData, addr 0x1874808, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentAudioData(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  value) ;

/// @brief Method set_HasAudioData, addr 0x1874818, size 0xc, virtual false, abstract: false, final false
inline void set_HasAudioData(bool  value) ;

/// @brief Method set_HasBeenOpened, addr 0x1874b3c, size 0x38, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_IsOpen, addr 0x1874ae0, size 0x40, virtual true, abstract: false, final false
inline void set_IsOpen(bool  value) ;

/// @brief Method set_MaxRecordingLengthSeconds, addr 0x18747c8, size 0x8, virtual false, abstract: false, final false
inline void set_MaxRecordingLengthSeconds(float_t  value) ;

/// @brief Method set_NormalizeMultiplier, addr 0x1874c3c, size 0x34, virtual false, abstract: false, final false
inline void set_NormalizeMultiplier(float_t  value) ;

/// @brief Method set_RecordingEndSample, addr 0x18747f8, size 0x8, virtual false, abstract: false, final false
inline void set_RecordingEndSample(int32_t  value) ;

/// @brief Method set_RecordingLength, addr 0x18747d8, size 0x8, virtual false, abstract: false, final false
inline void set_RecordingLength(int32_t  value) ;

/// @brief Method set_RecordingStartSample, addr 0x18747e8, size 0x8, virtual false, abstract: false, final false
inline void set_RecordingStartSample(int32_t  value) ;

/// @brief Method set_UseAsPreview, addr 0x1874c8c, size 0x38, virtual false, abstract: false, final false
inline void set_UseAsPreview(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TapeRecorderDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TapeRecorderDataController(TapeRecorderDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TapeRecorderDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TapeRecorderDataController(TapeRecorderDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{550};

/// @brief Field <MaxRecordingLengthSeconds>k__BackingField, offset: 0x28, size: 0x4, def value: None
 float_t  ____MaxRecordingLengthSeconds_k__BackingField;

/// @brief Field <RecordingLength>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____RecordingLength_k__BackingField;

/// @brief Field <RecordingStartSample>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____RecordingStartSample_k__BackingField;

/// @brief Field <RecordingEndSample>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____RecordingEndSample_k__BackingField;

/// @brief Field <CurrentAudioData>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  ____CurrentAudioData_k__BackingField;

/// @brief Field <HasAudioData>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____HasAudioData_k__BackingField;

/// @brief Field _transformData, offset: 0x48, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TapeRecorderDataController, ____MaxRecordingLengthSeconds_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController, ____RecordingLength_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController, ____RecordingStartSample_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController, ____RecordingEndSample_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController, ____CurrentAudioData_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController, ____HasAudioData_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::TapeRecorderDataController, ____transformData) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TapeRecorderDataController, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TapeRecorderDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController*, "VROSC", "TapeRecorderDataController");
NEED_NO_BOX(::VROSC::TapeRecorderDataController___c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController___c__DisplayClass44_0*, "VROSC", "TapeRecorderDataController/<>c__DisplayClass44_0");
NEED_NO_BOX(::VROSC::TapeRecorderDataController___c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController___c__DisplayClass45_0*, "VROSC", "TapeRecorderDataController/<>c__DisplayClass45_0");
NEED_NO_BOX(::VROSC::TapeRecorderDataController___c__DisplayClass45_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController___c__DisplayClass45_1*, "VROSC", "TapeRecorderDataController/<>c__DisplayClass45_1");
NEED_NO_BOX(::VROSC::TapeRecorderDataController___c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController___c__DisplayClass46_0*, "VROSC", "TapeRecorderDataController/<>c__DisplayClass46_0");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController__ClearAudioData_d__30, "VROSC", "TapeRecorderDataController/<ClearAudioData>d__30");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController__LoadData_d__45, "VROSC", "TapeRecorderDataController/<LoadData>d__45");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController__SaveAudioPreview_d__46, "VROSC", "TapeRecorderDataController/<SaveAudioPreview>d__46");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController__SaveData_d__44, "VROSC", "TapeRecorderDataController/<SaveData>d__44");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__0_d, "VROSC", "TapeRecorderDataController/<>c__DisplayClass45_0/<<LoadData>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass45_0_TapeRecorderDataController___LoadData_b__1_d, "VROSC", "TapeRecorderDataController/<>c__DisplayClass45_0/<<LoadData>b__1>d");
