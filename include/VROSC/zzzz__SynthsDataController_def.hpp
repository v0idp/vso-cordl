#pragma once
// IWYU pragma private; include "VROSC/SynthsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__InstrumentsDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthsDataController)
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
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
struct Error;
}
namespace VROSC {
class InstrumentsDataController_PatchSettings;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
struct Scale;
}
namespace VROSC {
class SynthData;
}
namespace VROSC {
struct SynthsDataController__SaveData_d__5;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass5_0;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass6_0;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass6_1;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass6_2;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
class WidgetSettings;
}
namespace VROSC {
struct __c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d;
}
// Forward declare root types
namespace VROSC {
class SynthsDataController;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass5_0;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass6_0;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass6_1;
}
namespace VROSC {
class SynthsDataController___c__DisplayClass6_2;
}
namespace VROSC {
struct SynthsDataController__SaveData_d__5;
}
namespace VROSC {
struct __c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthsDataController);
MARK_REF_PTR_T(::VROSC::SynthsDataController___c__DisplayClass5_0);
MARK_REF_PTR_T(::VROSC::SynthsDataController___c__DisplayClass6_0);
MARK_REF_PTR_T(::VROSC::SynthsDataController___c__DisplayClass6_1);
MARK_REF_PTR_T(::VROSC::SynthsDataController___c__DisplayClass6_2);
MARK_VAL_T(::VROSC::SynthsDataController__SaveData_d__5);
MARK_VAL_T(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthsDataController/<>c__DisplayClass5_0
class CORDL_TYPE SynthsDataController___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SynthsDataController*  __4__this;

/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action*  __9__0;

/// @brief Field <>9__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::VROSC::Error>*  __9__1;

/// @brief Field onFailure, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

static inline ::VROSC::SynthsDataController___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <SaveData>b__0, addr 0x18481c8, size 0x34, virtual false, abstract: false, final false
inline void _SaveData_b__0() ;

/// @brief Method <SaveData>b__1, addr 0x18481fc, size 0x1c, virtual false, abstract: false, final false
inline void _SaveData_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SynthsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SynthsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action*& __cordl_internal_get___9__0() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SynthsDataController*  value) ;

constexpr void __cordl_internal_set___9__0(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x18481c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataController___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthsDataController___c__DisplayClass5_0(SynthsDataController___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthsDataController___c__DisplayClass5_0(SynthsDataController___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{406};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SynthsDataController*  _____4__this;

/// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  _____9__0;

/// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass5_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass5_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass5_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass5_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataController___c__DisplayClass5_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SynthsDataController/<>c__DisplayClass6_0/<<LoadData>b__0>d
struct CORDL_TYPE __c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x18482b8, size 0x6fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18489c4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::SynthsDataController___c__DisplayClass6_0*", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::SynthsDataController___c__DisplayClass6_1*", modifiers: "", def_value: None }, CppParam { name: "__8__2", ty: "::VROSC::SynthsDataController___c__DisplayClass6_2*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1_Enumerator<::VROSC::SynthData*>", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthsDataController___c__DisplayClass6_0*  __4__this, ::StringW  data, ::VROSC::SynthsDataController___c__DisplayClass6_1*  __8__1, ::VROSC::SynthsDataController___c__DisplayClass6_2*  __8__2, ::System::Collections::Generic::List_1_Enumerator<::VROSC::SynthData*>  __7__wrap1, int32_t  _i_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SynthsDataController___c__DisplayClass6_0*  __4__this;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::VROSC::SynthsDataController___c__DisplayClass6_1*  __8__1;

/// @brief Field <>8__2, offset: 0x40, size: 0x8, def value: None
 ::VROSC::SynthsDataController___c__DisplayClass6_2*  __8__2;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<::VROSC::SynthData*>  __7__wrap1;

/// @brief Field <i>5__3, offset: 0x60, size: 0x4, def value: None
 int32_t  _i_5__3;

/// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __8__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __7__wrap1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, _i_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, __u__1) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, 0x70>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthsDataController/<>c__DisplayClass6_0
class CORDL_TYPE SynthsDataController___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
using __LoadData_b__0_d = ::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SynthsDataController*  __4__this;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SynthsDataController___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x1848218, size 0xa0, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

constexpr ::VROSC::SynthsDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SynthsDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SynthsDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x18452ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataController___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthsDataController___c__DisplayClass6_0(SynthsDataController___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthsDataController___c__DisplayClass6_0(SynthsDataController___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{408};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SynthsDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataController___c__DisplayClass6_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthsDataController/<>c__DisplayClass6_1
class CORDL_TYPE SynthsDataController___c__DisplayClass6_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SynthsDataController___c__DisplayClass6_0*  CS$__8__locals1;

/// @brief Field patchCountToLoad, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_patchCountToLoad, put=__cordl_internal_set_patchCountToLoad)) int32_t  patchCountToLoad;

static inline ::VROSC::SynthsDataController___c__DisplayClass6_1* New_ctor() ;

constexpr ::VROSC::SynthsDataController___c__DisplayClass6_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SynthsDataController___c__DisplayClass6_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_patchCountToLoad() const;

constexpr int32_t& __cordl_internal_get_patchCountToLoad() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SynthsDataController___c__DisplayClass6_0*  value) ;

constexpr void __cordl_internal_set_patchCountToLoad(int32_t  value) ;

/// @brief Method .ctor, addr 0x18489b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataController___c__DisplayClass6_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass6_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthsDataController___c__DisplayClass6_1(SynthsDataController___c__DisplayClass6_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass6_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthsDataController___c__DisplayClass6_1(SynthsDataController___c__DisplayClass6_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{409};

/// @brief Field patchCountToLoad, offset: 0x10, size: 0x4, def value: None
 int32_t  ___patchCountToLoad;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SynthsDataController___c__DisplayClass6_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_1, ___patchCountToLoad) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataController___c__DisplayClass6_1, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthsDataController/<>c__DisplayClass6_2
class CORDL_TYPE SynthsDataController___c__DisplayClass6_2 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals2, put=__cordl_internal_set_CS$__8__locals2)) ::VROSC::SynthsDataController___c__DisplayClass6_1*  CS$__8__locals2;

/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::StringW>*  __9__1;

/// @brief Field instrumentData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_instrumentData, put=__cordl_internal_set_instrumentData)) ::VROSC::SynthData*  instrumentData;

static inline ::VROSC::SynthsDataController___c__DisplayClass6_2* New_ctor() ;

/// @brief Method <LoadData>b__1, addr 0x18489d0, size 0x344, virtual false, abstract: false, final false
inline void _LoadData_b__1(::StringW  text) ;

constexpr ::VROSC::SynthsDataController___c__DisplayClass6_1* const& __cordl_internal_get_CS$__8__locals2() const;

constexpr ::VROSC::SynthsDataController___c__DisplayClass6_1*& __cordl_internal_get_CS$__8__locals2() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__1() ;

constexpr ::VROSC::SynthData* const& __cordl_internal_get_instrumentData() const;

constexpr ::VROSC::SynthData*& __cordl_internal_get_instrumentData() ;

constexpr void __cordl_internal_set_CS$__8__locals2(::VROSC::SynthsDataController___c__DisplayClass6_1*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_instrumentData(::VROSC::SynthData*  value) ;

/// @brief Method .ctor, addr 0x18489bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataController___c__DisplayClass6_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass6_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthsDataController___c__DisplayClass6_2(SynthsDataController___c__DisplayClass6_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController___c__DisplayClass6_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthsDataController___c__DisplayClass6_2(SynthsDataController___c__DisplayClass6_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{410};

/// @brief Field instrumentData, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SynthData*  ___instrumentData;

/// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SynthsDataController___c__DisplayClass6_1*  ___CS$__8__locals2;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_2, ___instrumentData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController___c__DisplayClass6_2, _____9__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataController___c__DisplayClass6_2, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SynthsDataController/<SaveData>d__5
struct CORDL_TYPE SynthsDataController__SaveData_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1848d14, size 0x594, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18492a8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataController__SaveData_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::SynthsDataController*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::SynthsDataController___c__DisplayClass5_0*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_instrumentData_5__3", ty: "::VROSC::SynthData*", modifiers: "", def_value: None }, CppParam { name: "_patchSettingsList_5__4", ty: "::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*", modifiers: "", def_value: None }, CppParam { name: "_j_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SynthsDataController__SaveData_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthsDataController*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  sessionName, ::VROSC::SynthsDataController___c__DisplayClass5_0*  __8__1, ::System::Action*  onSuccess, int32_t  _i_5__2, ::VROSC::SynthData*  _instrumentData_5__3, ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*  _patchSettingsList_5__4, int32_t  _j_5__5, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SynthsDataController*  __4__this;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field sessionName, offset: 0x38, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::SynthsDataController___c__DisplayClass5_0*  __8__1;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <instrumentData>5__3, offset: 0x58, size: 0x8, def value: None
 ::VROSC::SynthData*  _instrumentData_5__3;

/// @brief Field <patchSettingsList>5__4, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*  _patchSettingsList_5__4;

/// @brief Field <j>5__5, offset: 0x68, size: 0x4, def value: None
 int32_t  _j_5__5;

/// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, sessionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, _i_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, _instrumentData_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, _patchSettingsList_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, _j_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController__SaveData_d__5, __u__1) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataController__SaveData_d__5, 0x78>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.InstrumentsDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthsDataController
class CORDL_TYPE SynthsDataController : public ::VROSC::InstrumentsDataController {
public:
// Declarations
using _SaveData_d__5 = ::VROSC::SynthsDataController__SaveData_d__5;

using __c__DisplayClass5_0 = ::VROSC::SynthsDataController___c__DisplayClass5_0;

using __c__DisplayClass6_0 = ::VROSC::SynthsDataController___c__DisplayClass6_0;

using __c__DisplayClass6_1 = ::VROSC::SynthsDataController___c__DisplayClass6_1;

using __c__DisplayClass6_2 = ::VROSC::SynthsDataController___c__DisplayClass6_2;

/// @brief Field OnDataLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDataLoaded, put=setStaticF_OnDataLoaded)) ::System::Action_1<::VROSC::SynthsDataController*>*  OnDataLoaded;

/// @brief Field _instrumentsPatches, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentsPatches, put=__cordl_internal_set__instrumentsPatches)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>*  _instrumentsPatches;

/// @brief Field _selectedPatchesIndexes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedPatchesIndexes, put=__cordl_internal_set__selectedPatchesIndexes)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _selectedPatchesIndexes;

/// @brief Method AddPatch, addr 0x1844d54, size 0x378, virtual false, abstract: false, final false
inline void AddPatch(::VROSC::WidgetSettings_Identifier  id, ::System::Object*  patch) ;

/// @brief Method ApplyDefaults, addr 0x1844318, size 0x7ac, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method GetInstrumentData, addr 0x1844ac4, size 0x1b4, virtual false, abstract: false, final false
inline ::VROSC::SynthData* GetInstrumentData(::StringW  instrumentId) ;

/// @brief Method GetInstrumentPatches, addr 0x18459f8, size 0x14c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>* GetInstrumentPatches(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetLoadSteps, addr 0x18452b4, size 0x1b8, virtual true, abstract: false, final false
inline int32_t GetLoadSteps() ;

/// @brief Method GetMinOctave, addr 0x1845e80, size 0x128, virtual false, abstract: false, final false
inline int32_t GetMinOctave(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetPosition, addr 0x184716c, size 0x160, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetQuantize, addr 0x1847e64, size 0x124, virtual true, abstract: false, final false
inline bool GetQuantize(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetQuantizeBeatDivision, addr 0x18480a4, size 0x11c, virtual true, abstract: false, final false
inline int32_t GetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetQuantizeTolerance, addr 0x1847f88, size 0x11c, virtual true, abstract: false, final false
inline float_t GetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetRotation, addr 0x18472cc, size 0x160, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetSaveSteps, addr 0x184546c, size 0x1b8, virtual true, abstract: false, final false
inline int32_t GetSaveSteps() ;

/// @brief Method GetScale, addr 0x184742c, size 0x160, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetScale(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetScale, addr 0x18464f8, size 0x190, virtual false, abstract: false, final false
inline ::VROSC::Scale GetScale(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex) ;

/// @brief Method GetScaleRowCustomized, addr 0x1846ea4, size 0x198, virtual false, abstract: false, final false
inline bool GetScaleRowCustomized(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex) ;

/// @brief Method GetScaleRowLocked, addr 0x1846b64, size 0x198, virtual false, abstract: false, final false
inline bool GetScaleRowLocked(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex) ;

/// @brief Method GetSelectedOctave, addr 0x1845fa8, size 0x128, virtual false, abstract: false, final false
inline int32_t GetSelectedOctave(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetSelectedPatchSettings, addr 0x1845854, size 0x1a4, virtual false, abstract: false, final false
inline ::VROSC::InstrumentsDataController_PatchSettings* GetSelectedPatchSettings(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetStartNote, addr 0x184682c, size 0x190, virtual false, abstract: false, final false
inline ::VROSC::Note GetStartNote(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex) ;

/// @brief Method HasPatch, addr 0x1845624, size 0x230, virtual false, abstract: false, final false
inline bool HasPatch(::VROSC::WidgetSettings_Identifier  id, ::StringW  patchName) ;

/// @brief Method IsOpen, addr 0x184703c, size 0x130, virtual true, abstract: false, final false
inline bool IsOpen(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method LoadData, addr 0x1845188, size 0x124, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::SynthsDataController* New_ctor() ;

/// @brief Method SaveData, addr 0x18450cc, size 0xbc, virtual true, abstract: false, final false
inline void SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SelectNextOctave, addr 0x18460d0, size 0x144, virtual false, abstract: false, final false
inline void SelectNextOctave(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method SelectPatch, addr 0x1845b44, size 0x33c, virtual false, abstract: false, final false
inline void SelectPatch(::VROSC::WidgetSettings_Identifier  id, int32_t  index) ;

/// @brief Method SelectPreviousOctave, addr 0x1846214, size 0x140, virtual false, abstract: false, final false
inline void SelectPreviousOctave(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method SetOpen, addr 0x184758c, size 0x138, virtual true, abstract: false, final false
inline void SetOpen(::VROSC::WidgetSettings_Identifier  id, bool  isOpen) ;

/// @brief Method SetPosition, addr 0x18476c4, size 0x15c, virtual true, abstract: false, final false
inline void SetPosition(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  position) ;

/// @brief Method SetQuantize, addr 0x1847ae0, size 0x12c, virtual true, abstract: false, final false
inline void SetQuantize(::VROSC::WidgetSettings_Identifier  id, bool  quantize) ;

/// @brief Method SetQuantizeBeatDivision, addr 0x1847d3c, size 0x128, virtual true, abstract: false, final false
inline void SetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id, int32_t  division) ;

/// @brief Method SetQuantizeTolerance, addr 0x1847c0c, size 0x130, virtual true, abstract: false, final false
inline void SetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id, float_t  tolerance) ;

/// @brief Method SetRotation, addr 0x1847820, size 0x164, virtual true, abstract: false, final false
inline void SetRotation(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetScale, addr 0x1847984, size 0x15c, virtual true, abstract: false, final false
inline void SetScale(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  scale) ;

/// @brief Method SetScale, addr 0x1846354, size 0x1a4, virtual false, abstract: false, final false
inline void SetScale(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, ::VROSC::Scale  scale) ;

/// @brief Method SetScaleRowCustomized, addr 0x1846cfc, size 0x1a8, virtual false, abstract: false, final false
inline void SetScaleRowCustomized(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, bool  customized) ;

/// @brief Method SetScaleRowLocked, addr 0x18469bc, size 0x1a8, virtual false, abstract: false, final false
inline void SetScaleRowLocked(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, bool  locked) ;

/// @brief Method SetStartNote, addr 0x1846688, size 0x1a4, virtual false, abstract: false, final false
inline void SetStartNote(::VROSC::WidgetSettings_Identifier  id, int32_t  scaleIndex, ::VROSC::Note  startNote) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>* const& __cordl_internal_get__instrumentsPatches() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>*& __cordl_internal_get__instrumentsPatches() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get__selectedPatchesIndexes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get__selectedPatchesIndexes() ;

constexpr void __cordl_internal_set__instrumentsPatches(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>*  value) ;

constexpr void __cordl_internal_set__selectedPatchesIndexes(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x18441ac, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::VROSC::SynthsDataController*>* getStaticF_OnDataLoaded() ;

static inline void setStaticF_OnDataLoaded(::System::Action_1<::VROSC::SynthsDataController*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthsDataController(SynthsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthsDataController(SynthsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{412};

/// @brief Field _instrumentsPatches, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::VROSC::InstrumentsDataController_PatchSettings*>*>*  ____instrumentsPatches;

/// @brief Field _selectedPatchesIndexes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ____selectedPatchesIndexes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthsDataController, ____instrumentsPatches) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthsDataController, ____selectedPatchesIndexes) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthsDataController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController*, "VROSC", "SynthsDataController");
NEED_NO_BOX(::VROSC::SynthsDataController___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController___c__DisplayClass5_0*, "VROSC", "SynthsDataController/<>c__DisplayClass5_0");
NEED_NO_BOX(::VROSC::SynthsDataController___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController___c__DisplayClass6_0*, "VROSC", "SynthsDataController/<>c__DisplayClass6_0");
NEED_NO_BOX(::VROSC::SynthsDataController___c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController___c__DisplayClass6_1*, "VROSC", "SynthsDataController/<>c__DisplayClass6_1");
NEED_NO_BOX(::VROSC::SynthsDataController___c__DisplayClass6_2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController___c__DisplayClass6_2*, "VROSC", "SynthsDataController/<>c__DisplayClass6_2");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController__SaveData_d__5, "VROSC", "SynthsDataController/<SaveData>d__5");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass6_0_SynthsDataController___LoadData_b__0_d, "VROSC", "SynthsDataController/<>c__DisplayClass6_0/<<LoadData>b__0>d");
