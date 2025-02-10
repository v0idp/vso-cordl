#pragma once
// IWYU pragma private; include "VROSC/SynthDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__InstrumentDataController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthDataController)
namespace AudioHelm {
class HelmPatchFormat;
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
namespace VROSC {
struct Error;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
struct Scale;
}
namespace VROSC {
struct SynthDataController__SaveData_d__11;
}
namespace VROSC {
class SynthDataController___c__DisplayClass11_0;
}
namespace VROSC {
class SynthDataController___c__DisplayClass12_0;
}
namespace VROSC {
class SynthDataController___c__DisplayClass12_1;
}
namespace VROSC {
class SynthDataModel;
}
namespace VROSC {
class SynthData;
}
namespace VROSC {
class TransformDataController;
}
namespace VROSC {
class WidgetSettings;
}
namespace VROSC {
struct __c__DisplayClass12_0_SynthDataController___LoadData_b__0_d;
}
// Forward declare root types
namespace VROSC {
class SynthDataController;
}
namespace VROSC {
class SynthDataController___c__DisplayClass11_0;
}
namespace VROSC {
class SynthDataController___c__DisplayClass12_0;
}
namespace VROSC {
class SynthDataController___c__DisplayClass12_1;
}
namespace VROSC {
struct SynthDataController__SaveData_d__11;
}
namespace VROSC {
struct __c__DisplayClass12_0_SynthDataController___LoadData_b__0_d;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthDataController);
MARK_REF_PTR_T(::VROSC::SynthDataController___c__DisplayClass11_0);
MARK_REF_PTR_T(::VROSC::SynthDataController___c__DisplayClass12_0);
MARK_REF_PTR_T(::VROSC::SynthDataController___c__DisplayClass12_1);
MARK_VAL_T(::VROSC::SynthDataController__SaveData_d__11);
MARK_VAL_T(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthDataController/<>c__DisplayClass11_0
class CORDL_TYPE SynthDataController___c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SynthDataController*  __4__this;

/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action*  __9__0;

/// @brief Field <>9__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::VROSC::Error>*  __9__1;

/// @brief Field onFailure, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

static inline ::VROSC::SynthDataController___c__DisplayClass11_0* New_ctor() ;

/// @brief Method <SaveData>b__0, addr 0x1843624, size 0x34, virtual false, abstract: false, final false
inline void _SaveData_b__0() ;

/// @brief Method <SaveData>b__1, addr 0x1843658, size 0x1c, virtual false, abstract: false, final false
inline void _SaveData_b__1(::VROSC::Error  error) ;

constexpr ::VROSC::SynthDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SynthDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action*& __cordl_internal_get___9__0() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SynthDataController*  value) ;

constexpr void __cordl_internal_set___9__0(::System::Action*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

/// @brief Method .ctor, addr 0x184361c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthDataController___c__DisplayClass11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthDataController___c__DisplayClass11_0(SynthDataController___c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthDataController___c__DisplayClass11_0(SynthDataController___c__DisplayClass11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{397};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SynthDataController*  _____4__this;

/// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  _____9__0;

/// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass11_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass11_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass11_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass11_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthDataController___c__DisplayClass11_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SynthDataController/<>c__DisplayClass12_0/<<LoadData>b__0>d
struct CORDL_TYPE __c__DisplayClass12_0_SynthDataController___LoadData_b__0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1843710, size 0x414, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1843b2c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass12_0_SynthDataController___LoadData_b__0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::SynthDataController___c__DisplayClass12_0*", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::SynthDataController___c__DisplayClass12_1*", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass12_0_SynthDataController___LoadData_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthDataController___c__DisplayClass12_0*  __4__this, ::StringW  data, ::VROSC::SynthDataController___c__DisplayClass12_1*  __8__1, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SynthDataController___c__DisplayClass12_0*  __4__this;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::VROSC::SynthDataController___c__DisplayClass12_1*  __8__1;

/// @brief Field <i>5__2, offset: 0x40, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, _i_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, 0x50>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthDataController/<>c__DisplayClass12_0
class CORDL_TYPE SynthDataController___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
using __LoadData_b__0_d = ::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::VROSC::SynthDataController*  __4__this;

/// @brief Field onFailure, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFailure, put=__cordl_internal_set_onFailure)) ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field onSuccess, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSuccess, put=__cordl_internal_set_onSuccess)) ::System::Action*  onSuccess;

/// @brief Field sessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionId, put=__cordl_internal_set_sessionId)) ::StringW  sessionId;

static inline ::VROSC::SynthDataController___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <LoadData>b__0, addr 0x1843674, size 0x9c, virtual false, abstract: false, final false
inline void _LoadData_b__0(::StringW  data) ;

constexpr ::VROSC::SynthDataController* const& __cordl_internal_get___4__this() const;

constexpr ::VROSC::SynthDataController*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::VROSC::Error>* const& __cordl_internal_get_onFailure() const;

constexpr ::System::Action_1<::VROSC::Error>*& __cordl_internal_get_onFailure() ;

constexpr ::System::Action* const& __cordl_internal_get_onSuccess() const;

constexpr ::System::Action*& __cordl_internal_get_onSuccess() ;

constexpr ::StringW const& __cordl_internal_get_sessionId() const;

constexpr ::StringW& __cordl_internal_get_sessionId() ;

constexpr void __cordl_internal_set___4__this(::VROSC::SynthDataController*  value) ;

constexpr void __cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value) ;

constexpr void __cordl_internal_set_onSuccess(::System::Action*  value) ;

constexpr void __cordl_internal_set_sessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0x1842184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthDataController___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthDataController___c__DisplayClass12_0(SynthDataController___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthDataController___c__DisplayClass12_0(SynthDataController___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{399};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::VROSC::SynthDataController*  _____4__this;

/// @brief Field sessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___sessionId;

/// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onSuccess;

/// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  ___onFailure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_0, ___sessionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthDataController___c__DisplayClass12_0, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthDataController/<>c__DisplayClass12_1
class CORDL_TYPE SynthDataController___c__DisplayClass12_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::VROSC::SynthDataController___c__DisplayClass12_0*  CS$__8__locals1;

/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::StringW>*  __9__1;

/// @brief Field patchCountToLoad, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_patchCountToLoad, put=__cordl_internal_set_patchCountToLoad)) int32_t  patchCountToLoad;

static inline ::VROSC::SynthDataController___c__DisplayClass12_1* New_ctor() ;

/// @brief Method <LoadData>b__1, addr 0x1843b38, size 0x244, virtual false, abstract: false, final false
inline void _LoadData_b__1(::StringW  text) ;

constexpr ::VROSC::SynthDataController___c__DisplayClass12_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::VROSC::SynthDataController___c__DisplayClass12_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get___9__1() ;

constexpr int32_t const& __cordl_internal_get_patchCountToLoad() const;

constexpr int32_t& __cordl_internal_get_patchCountToLoad() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::VROSC::SynthDataController___c__DisplayClass12_0*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_patchCountToLoad(int32_t  value) ;

/// @brief Method .ctor, addr 0x1843b24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthDataController___c__DisplayClass12_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController___c__DisplayClass12_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthDataController___c__DisplayClass12_1(SynthDataController___c__DisplayClass12_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController___c__DisplayClass12_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthDataController___c__DisplayClass12_1(SynthDataController___c__DisplayClass12_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{400};

/// @brief Field patchCountToLoad, offset: 0x10, size: 0x4, def value: None
 int32_t  ___patchCountToLoad;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SynthDataController___c__DisplayClass12_0*  ___CS$__8__locals1;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_1, ___patchCountToLoad) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController___c__DisplayClass12_1, _____9__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthDataController___c__DisplayClass12_1, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SynthDataController/<SaveData>d__11
struct CORDL_TYPE SynthDataController__SaveData_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x1843d7c, size 0x3d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x184414c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SynthDataController__SaveData_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::VROSC::SynthDataController*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::System::Action_1<::VROSC::Error>*", modifiers: "", def_value: None }, CppParam { name: "sessionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::VROSC::SynthDataController___c__DisplayClass11_0*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr SynthDataController__SaveData_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::SynthDataController*  __4__this, ::System::Action_1<::VROSC::Error>*  onFailure, ::StringW  sessionName, ::VROSC::SynthDataController___c__DisplayClass11_0*  __8__1, ::System::Action*  onSuccess, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{401};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::VROSC::SynthDataController*  __4__this;

/// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Error>*  onFailure;

/// @brief Field sessionName, offset: 0x38, size: 0x8, def value: None
 ::StringW  sessionName;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::VROSC::SynthDataController___c__DisplayClass11_0*  __8__1;

/// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  onSuccess;

/// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, sessionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, _i_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController__SaveData_d__11, __u__1) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthDataController__SaveData_d__11, 0x60>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.InstrumentDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthDataController
class CORDL_TYPE SynthDataController : public ::VROSC::InstrumentDataController {
public:
// Declarations
using _SaveData_d__11 = ::VROSC::SynthDataController__SaveData_d__11;

using __c__DisplayClass11_0 = ::VROSC::SynthDataController___c__DisplayClass11_0;

using __c__DisplayClass12_0 = ::VROSC::SynthDataController___c__DisplayClass12_0;

using __c__DisplayClass12_1 = ::VROSC::SynthDataController___c__DisplayClass12_1;

 __declspec(property(get=get_FrameIsActive, put=set_FrameIsActive)) bool  FrameIsActive;

 __declspec(property(get=get_HasBeenOpened, put=set_HasBeenOpened)) bool  HasBeenOpened;

 __declspec(property(get=get_MaxOctave)) int32_t  MaxOctave;

 __declspec(property(get=get_MinOctave)) int32_t  MinOctave;

 __declspec(property(get=get_Quantize, put=set_Quantize)) bool  Quantize;

 __declspec(property(get=get_QuantizeBeatDivision, put=set_QuantizeBeatDivision)) int32_t  QuantizeBeatDivision;

 __declspec(property(get=get_QuantizeTolerance, put=set_QuantizeTolerance)) float_t  QuantizeTolerance;

 __declspec(property(get=get_SelectedOctave, put=set_SelectedOctave)) int32_t  SelectedOctave;

 __declspec(property(get=get_SelectedPatchIndex)) int32_t  SelectedPatchIndex;

 __declspec(property(get=get_SelectedPatchSettings)) ::VROSC::PatchSettings*  SelectedPatchSettings;

 __declspec(property(get=get_SynthDataModel)) ::VROSC::SynthDataModel*  SynthDataModel;

 __declspec(property(get=get_TransformData)) ::VROSC::TransformDataController*  TransformData;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field _defaultPatches, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultPatches, put=__cordl_internal_set__defaultPatches)) ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  _defaultPatches;

/// @brief Field _patches, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__patches, put=__cordl_internal_set__patches)) ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  _patches;

/// @brief Field _selectedPatchIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedPatchIndex, put=__cordl_internal_set__selectedPatchIndex)) int32_t  _selectedPatchIndex;

/// @brief Field _transformData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformData, put=__cordl_internal_set__transformData)) ::VROSC::TransformDataController*  _transformData;

/// @brief Method AddPatch, addr 0x1841d24, size 0x284, virtual false, abstract: false, final false
inline void AddPatch(::AudioHelm::HelmPatchFormat*  patch) ;

/// @brief Method ApplyDefaults, addr 0x1841640, size 0x6c8, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method CopyOldSynthData, addr 0x1841334, size 0x20, virtual false, abstract: false, final false
inline void CopyOldSynthData(::VROSC::SynthData*  oldSynthData) ;

/// @brief Method GetLoadSteps, addr 0x18421b8, size 0x54, virtual true, abstract: false, final false
inline int32_t GetLoadSteps() ;

/// @brief Method GetPatchesNames, addr 0x1842754, size 0x144, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetPatchesNames() ;

/// @brief Method GetSaveSteps, addr 0x184220c, size 0x54, virtual true, abstract: false, final false
inline int32_t GetSaveSteps() ;

/// @brief Method GetScale, addr 0x1842b70, size 0x134, virtual false, abstract: false, final false
inline ::VROSC::Scale GetScale(int32_t  scaleIndex) ;

/// @brief Method GetSelectedPatchDefaultSettings, addr 0x1842638, size 0x100, virtual false, abstract: false, final false
inline ::VROSC::PatchSettings* GetSelectedPatchDefaultSettings() ;

/// @brief Method GetSelectedPatchName, addr 0x1842738, size 0x1c, virtual false, abstract: false, final false
inline ::StringW GetSelectedPatchName() ;

/// @brief Method GetStartNoteOffset, addr 0x1842dec, size 0x134, virtual false, abstract: false, final false
inline int32_t GetStartNoteOffset(int32_t  scaleIndex) ;

/// @brief Method HasPatch, addr 0x1842260, size 0x18c, virtual false, abstract: false, final false
inline bool HasPatch(::StringW  patchName) ;

/// @brief Method IsScaleRowCustomized, addr 0x18432f4, size 0x13c, virtual false, abstract: false, final false
inline bool IsScaleRowCustomized(int32_t  scaleIndex) ;

/// @brief Method IsScaleRowLocked, addr 0x184306c, size 0x13c, virtual false, abstract: false, final false
inline bool IsScaleRowLocked(int32_t  scaleIndex) ;

/// @brief Method LoadData, addr 0x184205c, size 0x128, virtual true, abstract: false, final false
inline void LoadData(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

static inline ::VROSC::SynthDataController* New_ctor() ;

/// @brief Method SaveData, addr 0x1841fa8, size 0xb4, virtual true, abstract: false, final false
inline void SaveData(::StringW  sessionName, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure) ;

/// @brief Method SelectNextOctave, addr 0x1842940, size 0x74, virtual false, abstract: false, final false
inline void SelectNextOctave() ;

/// @brief Method SelectPatch, addr 0x1842448, size 0x1f0, virtual false, abstract: false, final false
inline void SelectPatch(int32_t  index) ;

/// @brief Method SelectPreviousOctave, addr 0x18429b4, size 0x74, virtual false, abstract: false, final false
inline void SelectPreviousOctave() ;

/// @brief Method SetIsScaleRowCustomized, addr 0x18431a8, size 0x14c, virtual false, abstract: false, final false
inline void SetIsScaleRowCustomized(int32_t  scaleIndex, bool  customized) ;

/// @brief Method SetIsScaleRowLocked, addr 0x1842f20, size 0x14c, virtual false, abstract: false, final false
inline void SetIsScaleRowLocked(int32_t  scaleIndex, bool  locked) ;

/// @brief Method SetScale, addr 0x1842a28, size 0x148, virtual false, abstract: false, final false
inline void SetScale(int32_t  scaleIndex, ::VROSC::Scale  scale) ;

/// @brief Method SetStartNoteOffset, addr 0x1842ca4, size 0x148, virtual false, abstract: false, final false
inline void SetStartNoteOffset(int32_t  scaleIndex, int32_t  startNoteOffset) ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* const& __cordl_internal_get__defaultPatches() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*& __cordl_internal_get__defaultPatches() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>* const& __cordl_internal_get__patches() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*& __cordl_internal_get__patches() ;

constexpr int32_t const& __cordl_internal_get__selectedPatchIndex() const;

constexpr int32_t& __cordl_internal_get__selectedPatchIndex() ;

constexpr ::VROSC::TransformDataController* const& __cordl_internal_get__transformData() const;

constexpr ::VROSC::TransformDataController*& __cordl_internal_get__transformData() ;

constexpr void __cordl_internal_set__defaultPatches(::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  value) ;

constexpr void __cordl_internal_set__patches(::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  value) ;

constexpr void __cordl_internal_set__selectedPatchIndex(int32_t  value) ;

constexpr void __cordl_internal_set__transformData(::VROSC::TransformDataController*  value) ;

/// @brief Method .ctor, addr 0x18410c4, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FrameIsActive, addr 0x1843524, size 0x1c, virtual true, abstract: false, final false
inline bool get_FrameIsActive() ;

/// @brief Method get_HasBeenOpened, addr 0x1843578, size 0x1c, virtual true, abstract: false, final false
inline bool get_HasBeenOpened() ;

/// @brief Method get_MaxOctave, addr 0x18428bc, size 0x24, virtual false, abstract: false, final false
inline int32_t get_MaxOctave() ;

/// @brief Method get_MinOctave, addr 0x1842898, size 0x24, virtual false, abstract: false, final false
inline int32_t get_MinOctave() ;

/// @brief Method get_Quantize, addr 0x1843430, size 0x1c, virtual true, abstract: false, final false
inline bool get_Quantize() ;

/// @brief Method get_QuantizeBeatDivision, addr 0x18434d4, size 0x1c, virtual true, abstract: false, final false
inline int32_t get_QuantizeBeatDivision() ;

/// @brief Method get_QuantizeTolerance, addr 0x1843484, size 0x1c, virtual true, abstract: false, final false
inline float_t get_QuantizeTolerance() ;

/// @brief Method get_SelectedOctave, addr 0x18428e0, size 0x24, virtual false, abstract: false, final false
inline int32_t get_SelectedOctave() ;

/// @brief Method get_SelectedPatchIndex, addr 0x18423ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedPatchIndex() ;

/// @brief Method get_SelectedPatchSettings, addr 0x18423f4, size 0x54, virtual false, abstract: false, final false
inline ::VROSC::PatchSettings* get_SelectedPatchSettings() ;

/// @brief Method get_SynthDataModel, addr 0x1841044, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::SynthDataModel* get_SynthDataModel() ;

/// @brief Method get_TransformData, addr 0x18410bc, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::TransformDataController* get_TransformData() ;

/// @brief Method get_Volume, addr 0x18435cc, size 0x1c, virtual true, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_FrameIsActive, addr 0x1843540, size 0x38, virtual true, abstract: false, final false
inline void set_FrameIsActive(bool  value) ;

/// @brief Method set_HasBeenOpened, addr 0x1843594, size 0x38, virtual true, abstract: false, final false
inline void set_HasBeenOpened(bool  value) ;

/// @brief Method set_Quantize, addr 0x184344c, size 0x38, virtual true, abstract: false, final false
inline void set_Quantize(bool  value) ;

/// @brief Method set_QuantizeBeatDivision, addr 0x18434f0, size 0x34, virtual true, abstract: false, final false
inline void set_QuantizeBeatDivision(int32_t  value) ;

/// @brief Method set_QuantizeTolerance, addr 0x18434a0, size 0x34, virtual true, abstract: false, final false
inline void set_QuantizeTolerance(float_t  value) ;

/// @brief Method set_SelectedOctave, addr 0x1842904, size 0x3c, virtual false, abstract: false, final false
inline void set_SelectedOctave(int32_t  value) ;

/// @brief Method set_Volume, addr 0x18435e8, size 0x34, virtual true, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthDataController(SynthDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthDataController(SynthDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{402};

/// @brief Field _patches, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  ____patches;

/// @brief Field _defaultPatches, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::PatchSettings*>*  ____defaultPatches;

/// @brief Field _selectedPatchIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ____selectedPatchIndex;

/// @brief Field _transformData, offset: 0x40, size: 0x8, def value: None
 ::VROSC::TransformDataController*  ____transformData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthDataController, ____patches) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController, ____defaultPatches) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController, ____selectedPatchIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthDataController, ____transformData) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthDataController, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController*, "VROSC", "SynthDataController");
NEED_NO_BOX(::VROSC::SynthDataController___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController___c__DisplayClass11_0*, "VROSC", "SynthDataController/<>c__DisplayClass11_0");
NEED_NO_BOX(::VROSC::SynthDataController___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController___c__DisplayClass12_0*, "VROSC", "SynthDataController/<>c__DisplayClass12_0");
NEED_NO_BOX(::VROSC::SynthDataController___c__DisplayClass12_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController___c__DisplayClass12_1*, "VROSC", "SynthDataController/<>c__DisplayClass12_1");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController__SaveData_d__11, "VROSC", "SynthDataController/<SaveData>d__11");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::__c__DisplayClass12_0_SynthDataController___LoadData_b__0_d, "VROSC", "SynthDataController/<>c__DisplayClass12_0/<<LoadData>b__0>d");
