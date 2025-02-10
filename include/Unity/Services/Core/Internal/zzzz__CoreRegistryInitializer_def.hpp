#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreRegistryInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreRegistryInitializer)
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
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace Unity::Services::Core::Internal {
struct CoreRegistryInitializer__InitializeRegistryAsync_d__3;
}
namespace Unity::Services::Core::Internal {
class CoreRegistryInitializer___c__DisplayClass3_0;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
namespace Unity::Services::Core::Internal {
class DependencyTree;
}
namespace Unity::Services::Core::Internal {
class IInitializablePackage;
}
namespace Unity::Services::Core::Internal {
class PackageInitializationInfo;
}
namespace Unity::Services::Core::Internal {
struct __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d;
}
namespace Unity::Services::Core::Internal {
struct __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreRegistryInitializer;
}
namespace Unity::Services::Core::Internal {
class CoreRegistryInitializer___c__DisplayClass3_0;
}
namespace Unity::Services::Core::Internal {
struct CoreRegistryInitializer__InitializeRegistryAsync_d__3;
}
namespace Unity::Services::Core::Internal {
struct __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d;
}
namespace Unity::Services::Core::Internal {
struct __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreRegistryInitializer);
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0);
MARK_VAL_T(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3);
MARK_VAL_T(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d);
MARK_VAL_T(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__InitializePackageAsync|2>d
struct CORDL_TYPE __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e9e8e8, size 0x410, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e9ecf8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*", modifiers: "", def_value: None }, CppParam { name: "package", ty: "::Unity::Services::Core::Internal::IInitializablePackage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __4__this, ::Unity::Services::Core::Internal::IInitializablePackage*  package, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11982};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __4__this;

/// @brief Field package, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IInitializablePackage*  package;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, package) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d
struct CORDL_TYPE __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e9ed60, size 0x458, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e9f1c0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*", modifiers: "", def_value: None }, CppParam { name: "package", ty: "::Unity::Services::Core::Internal::IInitializablePackage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __4__this, ::Unity::Services::Core::Internal::IInitializablePackage*  package, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11983};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __4__this;

/// @brief Field package, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::IInitializablePackage*  package;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, package) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0
class CORDL_TYPE CoreRegistryInitializer___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
using __InitializeRegistryAsync_g__InitializePackageAsync_2_d = ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d;

using __InitializeRegistryAsync_g__TryInitializePackageAsync_0_d = ::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Unity::Services::Core::Internal::CoreRegistryInitializer*  __4__this;

/// @brief Field dependencyTree, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dependencyTree, put=__cordl_internal_set_dependencyTree)) ::Unity::Services::Core::Internal::DependencyTree*  dependencyTree;

/// @brief Field failureReasons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureReasons, put=__cordl_internal_set_failureReasons)) ::System::Collections::Generic::List_1<::System::Exception*>*  failureReasons;

/// @brief Field packagesInitInfos, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_packagesInitInfos, put=__cordl_internal_set_packagesInitInfos)) ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*  packagesInitInfos;

/// @brief Field stopwatch, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopwatch, put=__cordl_internal_set_stopwatch)) ::System::Diagnostics::Stopwatch*  stopwatch;

static inline ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <InitializeRegistryAsync>g__Fail|3, addr 0x2e9e870, size 0x78, virtual false, abstract: false, final false
inline void _InitializeRegistryAsync_g__Fail_3() ;

/// @brief Method <InitializeRegistryAsync>g__GetPackageAt|1, addr 0x2e9e70c, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Services::Core::Internal::IInitializablePackage* _InitializeRegistryAsync_g__GetPackageAt_1(int32_t  index) ;

/// @brief Method <InitializeRegistryAsync>g__InitializePackageAsync|2, addr 0x2e9e79c, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InitializeRegistryAsync_g__InitializePackageAsync_2(::Unity::Services::Core::Internal::IInitializablePackage*  package) ;

/// @brief Method <InitializeRegistryAsync>g__TryInitializePackageAsync|0, addr 0x2e9e638, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _InitializeRegistryAsync_g__TryInitializePackageAsync_0(::Unity::Services::Core::Internal::IInitializablePackage*  package) ;

constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer* const& __cordl_internal_get___4__this() const;

constexpr ::Unity::Services::Core::Internal::CoreRegistryInitializer*& __cordl_internal_get___4__this() ;

constexpr ::Unity::Services::Core::Internal::DependencyTree* const& __cordl_internal_get_dependencyTree() const;

constexpr ::Unity::Services::Core::Internal::DependencyTree*& __cordl_internal_get_dependencyTree() ;

constexpr ::System::Collections::Generic::List_1<::System::Exception*>* const& __cordl_internal_get_failureReasons() const;

constexpr ::System::Collections::Generic::List_1<::System::Exception*>*& __cordl_internal_get_failureReasons() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>* const& __cordl_internal_get_packagesInitInfos() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*& __cordl_internal_get_packagesInitInfos() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_stopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopwatch() ;

constexpr void __cordl_internal_set___4__this(::Unity::Services::Core::Internal::CoreRegistryInitializer*  value) ;

constexpr void __cordl_internal_set_dependencyTree(::Unity::Services::Core::Internal::DependencyTree*  value) ;

constexpr void __cordl_internal_set_failureReasons(::System::Collections::Generic::List_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_packagesInitInfos(::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*  value) ;

constexpr void __cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x2e9e630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreRegistryInitializer___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreRegistryInitializer___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreRegistryInitializer___c__DisplayClass3_0(CoreRegistryInitializer___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreRegistryInitializer___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreRegistryInitializer___c__DisplayClass3_0(CoreRegistryInitializer___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11984};

/// @brief Field stopwatch, offset: 0x10, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___stopwatch;

/// @brief Field packagesInitInfos, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*  ___packagesInitInfos;

/// @brief Field failureReasons, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Exception*>*  ___failureReasons;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistryInitializer*  _____4__this;

/// @brief Field dependencyTree, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::DependencyTree*  ___dependencyTree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0, ___stopwatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0, ___packagesInitInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0, ___failureReasons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0, ___dependencyTree) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0, 0x38>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3
struct CORDL_TYPE CoreRegistryInitializer__InitializeRegistryAsync_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e9f228, size 0x61c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e9f844, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CoreRegistryInitializer__InitializeRegistryAsync_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr CoreRegistryInitializer__InitializeRegistryAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>  __t__builder, ::Unity::Services::Core::Internal::CoreRegistryInitializer*  __4__this, ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __8__1, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11985};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistryInitializer*  __4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*  __8__1;

/// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, _i_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, 0x40>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CoreRegistryInitializer
class CORDL_TYPE CoreRegistryInitializer : public ::System::Object {
public:
// Declarations
using _InitializeRegistryAsync_d__3 = ::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3;

using __c__DisplayClass3_0 = ::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0;

/// @brief Field m_Registry, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Registry, put=__cordl_internal_set_m_Registry)) ::Unity::Services::Core::Internal::CoreRegistry*  m_Registry;

/// @brief Field m_SortedPackageTypeHashes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SortedPackageTypeHashes, put=__cordl_internal_set_m_SortedPackageTypeHashes)) ::System::Collections::Generic::List_1<int32_t>*  m_SortedPackageTypeHashes;

/// @brief Method InitializeRegistryAsync, addr 0x2e9e54c, size 0xe4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::Unity::Services::Core::Internal::PackageInitializationInfo*>*>* InitializeRegistryAsync() ;

static inline ::Unity::Services::Core::Internal::CoreRegistryInitializer* New_ctor(::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Collections::Generic::List_1<int32_t>*  sortedPackageTypeHashes) ;

constexpr ::Unity::Services::Core::Internal::CoreRegistry* const& __cordl_internal_get_m_Registry() const;

constexpr ::Unity::Services::Core::Internal::CoreRegistry*& __cordl_internal_get_m_Registry() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_SortedPackageTypeHashes() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SortedPackageTypeHashes() ;

constexpr void __cordl_internal_set_m_Registry(::Unity::Services::Core::Internal::CoreRegistry*  value) ;

constexpr void __cordl_internal_set_m_SortedPackageTypeHashes(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x2e9e520, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Collections::Generic::List_1<int32_t>*  sortedPackageTypeHashes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreRegistryInitializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreRegistryInitializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreRegistryInitializer(CoreRegistryInitializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreRegistryInitializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreRegistryInitializer(CoreRegistryInitializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11986};

/// @brief Field m_Registry, offset: 0x10, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistry*  ___m_Registry;

/// @brief Field m_SortedPackageTypeHashes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_SortedPackageTypeHashes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer, ___m_Registry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::CoreRegistryInitializer, ___m_SortedPackageTypeHashes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreRegistryInitializer, 0x20>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreRegistryInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreRegistryInitializer*, "Unity.Services.Core.Internal", "CoreRegistryInitializer");
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreRegistryInitializer___c__DisplayClass3_0*, "Unity.Services.Core.Internal", "CoreRegistryInitializer/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreRegistryInitializer__InitializeRegistryAsync_d__3, "Unity.Services.Core.Internal", "CoreRegistryInitializer/<InitializeRegistryAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__InitializePackageAsync_2_d, "Unity.Services.Core.Internal", "CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__InitializePackageAsync|2>d");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::__c__DisplayClass3_0_CoreRegistryInitializer___InitializeRegistryAsync_g__TryInitializePackageAsync_0_d, "Unity.Services.Core.Internal", "CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d");
