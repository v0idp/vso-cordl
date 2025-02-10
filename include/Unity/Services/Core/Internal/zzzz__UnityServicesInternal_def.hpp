#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/UnityServicesInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/zzzz__IUnityServices_def.hpp"
#include "Unity/Services/Core/zzzz__ServicesInitializationState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityServicesInternal)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace Unity::Services::Core::Internal {
class CoreDiagnostics;
}
namespace Unity::Services::Core::Internal {
class CoreMetrics;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
namespace Unity::Services::Core::Internal {
class PackageInitializationInfo;
}
namespace Unity::Services::Core::Internal {
struct UnityServicesInternal__EnableInitializationAsync_d__25;
}
namespace Unity::Services::Core::Internal {
struct UnityServicesInternal__InitializeAsync_d__19;
}
namespace Unity::Services::Core::Internal {
struct UnityServicesInternal__InitializeServicesAsync_d__22;
}
namespace Unity::Services::Core::Internal {
class UnityServicesInternal___c__DisplayClass22_0;
}
namespace Unity::Services::Core::Internal {
struct __c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
namespace Unity::Services::Core {
struct ServicesInitializationState;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class UnityServicesInternal;
}
namespace Unity::Services::Core::Internal {
class UnityServicesInternal___c__DisplayClass22_0;
}
namespace Unity::Services::Core::Internal {
struct UnityServicesInternal__EnableInitializationAsync_d__25;
}
namespace Unity::Services::Core::Internal {
struct UnityServicesInternal__InitializeAsync_d__19;
}
namespace Unity::Services::Core::Internal {
struct UnityServicesInternal__InitializeServicesAsync_d__22;
}
namespace Unity::Services::Core::Internal {
struct __c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::UnityServicesInternal);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0);
MARK_VAL_T(::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25);
MARK_VAL_T(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19);
MARK_VAL_T(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22);
MARK_VAL_T(::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d
struct CORDL_TYPE __c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea2d90, size 0x25c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea2fec, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value: None }]
constexpr __c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12009};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0
class CORDL_TYPE UnityServicesInternal___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
using __InitializeServicesAsync_g__InitializePackagesAsync_1_d = ::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this;

/// @brief Field dependencyTree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dependencyTree, put=__cordl_internal_set_dependencyTree)) ::Unity::Services::Core::Internal::DependencyTree*  dependencyTree;

/// @brief Field initStopwatch, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_initStopwatch, put=__cordl_internal_set_initStopwatch)) ::System::Diagnostics::Stopwatch*  initStopwatch;

/// @brief Field sortedPackageTypeHashes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortedPackageTypeHashes, put=__cordl_internal_set_sortedPackageTypeHashes)) ::System::Collections::Generic::List_1<int32_t>*  sortedPackageTypeHashes;

static inline ::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <InitializeServicesAsync>g__FailServicesInitialization|2, addr 0x2ea2c8c, size 0x7c, virtual false, abstract: false, final false
inline void _InitializeServicesAsync_g__FailServicesInitialization_2(::System::Exception*  reason) ;

/// @brief Method <InitializeServicesAsync>g__InitializePackagesAsync|1, addr 0x2ea2bcc, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InitializeServicesAsync_g__InitializePackagesAsync_1() ;

/// @brief Method <InitializeServicesAsync>g__SortPackages|0, addr 0x2ea2ba8, size 0x24, virtual false, abstract: false, final false
inline void _InitializeServicesAsync_g__SortPackages_0() ;

/// @brief Method <InitializeServicesAsync>g__SucceedServicesInitialization|3, addr 0x2ea2d08, size 0x88, virtual false, abstract: false, final false
inline void _InitializeServicesAsync_g__SucceedServicesInitialization_3() ;

constexpr ::Unity::Services::Core::Internal::UnityServicesInternal* const& __cordl_internal_get___4__this() const;

constexpr ::Unity::Services::Core::Internal::UnityServicesInternal*& __cordl_internal_get___4__this() ;

constexpr ::Unity::Services::Core::Internal::DependencyTree* const& __cordl_internal_get_dependencyTree() const;

constexpr ::Unity::Services::Core::Internal::DependencyTree*& __cordl_internal_get_dependencyTree() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_initStopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_initStopwatch() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_sortedPackageTypeHashes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_sortedPackageTypeHashes() ;

constexpr void __cordl_internal_set___4__this(::Unity::Services::Core::Internal::UnityServicesInternal*  value) ;

constexpr void __cordl_internal_set_dependencyTree(::Unity::Services::Core::Internal::DependencyTree*  value) ;

constexpr void __cordl_internal_set_initStopwatch(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_sortedPackageTypeHashes(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x2ea2ba0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityServicesInternal___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityServicesInternal___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityServicesInternal___c__DisplayClass22_0(UnityServicesInternal___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityServicesInternal___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityServicesInternal___c__DisplayClass22_0(UnityServicesInternal___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12010};

/// @brief Field dependencyTree, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::DependencyTree*  ___dependencyTree;

/// @brief Field sortedPackageTypeHashes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___sortedPackageTypeHashes;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::UnityServicesInternal*  _____4__this;

/// @brief Field initStopwatch, offset: 0x28, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___initStopwatch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0, ___dependencyTree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0, ___sortedPackageTypeHashes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0, ___initStopwatch) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__25
struct CORDL_TYPE UnityServicesInternal__EnableInitializationAsync_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea3054, size 0x224, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea3278, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityServicesInternal__EnableInitializationAsync_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr UnityServicesInternal__EnableInitializationAsync_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25, 0x30>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__19
struct CORDL_TYPE UnityServicesInternal__InitializeAsync_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea32e0, size 0x3a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea3684, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityServicesInternal__InitializeAsync_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Unity::Services::Core::InitializationOptions*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr UnityServicesInternal__InitializeAsync_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::InitializationOptions*  options, ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12012};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field options, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::InitializationOptions*  options;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22
struct CORDL_TYPE UnityServicesInternal__InitializeServicesAsync_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2ea36ec, size 0x504, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2ea3bf0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityServicesInternal__InitializeServicesAsync_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::UnityServicesInternal*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr UnityServicesInternal__InitializeServicesAsync_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this, ::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::UnityServicesInternal*  __4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Object, Unity.Services.Core.IUnityServices, Unity.Services.Core.ServicesInitializationState
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.UnityServicesInternal
class CORDL_TYPE UnityServicesInternal : public ::System::Object {
public:
// Declarations
using _EnableInitializationAsync_d__25 = ::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25;

using _InitializeAsync_d__19 = ::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19;

using _InitializeServicesAsync_d__22 = ::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22;

using __c__DisplayClass22_0 = ::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0;

/// @brief Field CanInitialize, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_CanInitialize, put=__cordl_internal_set_CanInitialize)) bool  CanInitialize;

 __declspec(property(get=get_Registry)) ::Unity::Services::Core::Internal::CoreRegistry*  Registry;

 __declspec(property(get=get_State, put=set_State)) ::Unity::Services::Core::ServicesInitializationState  State;

/// @brief Field <Diagnostics>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Diagnostics_k__BackingField, put=__cordl_internal_set__Diagnostics_k__BackingField)) ::Unity::Services::Core::Internal::CoreDiagnostics*  _Diagnostics_k__BackingField;

/// @brief Field <Metrics>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Metrics_k__BackingField, put=__cordl_internal_set__Metrics_k__BackingField)) ::Unity::Services::Core::Internal::CoreMetrics*  _Metrics_k__BackingField;

/// @brief Field <Registry>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Registry_k__BackingField, put=__cordl_internal_set__Registry_k__BackingField)) ::Unity::Services::Core::Internal::CoreRegistry*  _Registry_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Unity::Services::Core::ServicesInitializationState  _State_k__BackingField;

/// @brief Field m_Initialization, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Initialization, put=__cordl_internal_set_m_Initialization)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  m_Initialization;

/// @brief Convert operator to "::Unity::Services::Core::IUnityServices"
constexpr operator  ::Unity::Services::Core::IUnityServices*() noexcept;

/// @brief Method EnableInitializationAsync, addr 0x2ea2898, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* EnableInitializationAsync() ;

/// @brief Method HasRequestedInitialization, addr 0x2ea2a4c, size 0x10, virtual false, abstract: false, final false
inline bool HasRequestedInitialization() ;

/// @brief Method InitializeAsync, addr 0x2ea297c, size 0xd0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Core::InitializationOptions*  options) ;

/// @brief Method InitializeServicesAsync, addr 0x2ea2a5c, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeServicesAsync() ;

static inline ::Unity::Services::Core::Internal::UnityServicesInternal* New_ctor(::Unity::Services::Core::Internal::CoreRegistry*  registry, ::Unity::Services::Core::Internal::CoreMetrics*  coreMetrics, ::Unity::Services::Core::Internal::CoreDiagnostics*  coreDiagnostics) ;

/// @brief Method <InitializeAsync>g__HasInitializationFailed|19_0, addr 0x2ea2b20, size 0x80, virtual false, abstract: false, final false
inline bool _InitializeAsync_g__HasInitializationFailed_19_0() ;

constexpr bool const& __cordl_internal_get_CanInitialize() const;

constexpr bool& __cordl_internal_get_CanInitialize() ;

constexpr ::Unity::Services::Core::Internal::CoreDiagnostics* const& __cordl_internal_get__Diagnostics_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::CoreDiagnostics*& __cordl_internal_get__Diagnostics_k__BackingField() ;

constexpr ::Unity::Services::Core::Internal::CoreMetrics* const& __cordl_internal_get__Metrics_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::CoreMetrics*& __cordl_internal_get__Metrics_k__BackingField() ;

constexpr ::Unity::Services::Core::Internal::CoreRegistry* const& __cordl_internal_get__Registry_k__BackingField() const;

constexpr ::Unity::Services::Core::Internal::CoreRegistry*& __cordl_internal_get__Registry_k__BackingField() ;

constexpr ::Unity::Services::Core::ServicesInitializationState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Unity::Services::Core::ServicesInitializationState& __cordl_internal_get__State_k__BackingField() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_m_Initialization() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_m_Initialization() ;

constexpr void __cordl_internal_set_CanInitialize(bool  value) ;

constexpr void __cordl_internal_set__Diagnostics_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics*  value) ;

constexpr void __cordl_internal_set__Metrics_k__BackingField(::Unity::Services::Core::Internal::CoreMetrics*  value) ;

constexpr void __cordl_internal_set__Registry_k__BackingField(::Unity::Services::Core::Internal::CoreRegistry*  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Unity::Services::Core::ServicesInitializationState  value) ;

constexpr void __cordl_internal_set_m_Initialization(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x2ea25b8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::CoreRegistry*  registry, ::Unity::Services::Core::Internal::CoreMetrics*  coreMetrics, ::Unity::Services::Core::Internal::CoreDiagnostics*  coreDiagnostics) ;

/// @brief Method get_Registry, addr 0x2ea2974, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::CoreRegistry* get_Registry() ;

/// @brief Method get_State, addr 0x2ea2964, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Services::Core::ServicesInitializationState get_State() ;

/// @brief Convert to "::Unity::Services::Core::IUnityServices"
constexpr ::Unity::Services::Core::IUnityServices* i___Unity__Services__Core__IUnityServices() noexcept;

/// @brief Method set_State, addr 0x2ea296c, size 0x8, virtual false, abstract: false, final false
inline void set_State(::Unity::Services::Core::ServicesInitializationState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityServicesInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityServicesInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityServicesInternal(UnityServicesInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityServicesInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityServicesInternal(UnityServicesInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12014};

/// @brief Field <State>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Unity::Services::Core::ServicesInitializationState  ____State_k__BackingField;

/// @brief Field CanInitialize, offset: 0x14, size: 0x1, def value: None
 bool  ___CanInitialize;

/// @brief Field m_Initialization, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  ___m_Initialization;

/// @brief Field <Registry>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistry*  ____Registry_k__BackingField;

/// @brief Field <Metrics>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreMetrics*  ____Metrics_k__BackingField;

/// @brief Field <Diagnostics>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreDiagnostics*  ____Diagnostics_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____State_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ___CanInitialize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ___m_Initialization) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Registry_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Metrics_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::UnityServicesInternal, ____Diagnostics_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::UnityServicesInternal, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::UnityServicesInternal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInternal*, "Unity.Services.Core.Internal", "UnityServicesInternal");
NEED_NO_BOX(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInternal___c__DisplayClass22_0*, "Unity.Services.Core.Internal", "UnityServicesInternal/<>c__DisplayClass22_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInternal__EnableInitializationAsync_d__25, "Unity.Services.Core.Internal", "UnityServicesInternal/<EnableInitializationAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeAsync_d__19, "Unity.Services.Core.Internal", "UnityServicesInternal/<InitializeAsync>d__19");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::UnityServicesInternal__InitializeServicesAsync_d__22, "Unity.Services.Core.Internal", "UnityServicesInternal/<InitializeServicesAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__c__DisplayClass22_0_UnityServicesInternal___InitializeServicesAsync_g__InitializePackagesAsync_1_d, "Unity.Services.Core.Internal", "UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d");
