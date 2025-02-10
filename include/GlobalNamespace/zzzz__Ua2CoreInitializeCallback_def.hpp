#pragma once
// IWYU pragma private; include "GlobalNamespace/Ua2CoreInitializeCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ua2CoreInitializeCallback)
namespace GlobalNamespace {
struct Ua2CoreInitializeCallback__Initialize_d__2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Forward declare root types
namespace GlobalNamespace {
class Ua2CoreInitializeCallback;
}
namespace GlobalNamespace {
struct Ua2CoreInitializeCallback__Initialize_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Ua2CoreInitializeCallback);
MARK_VAL_T(::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Ua2CoreInitializeCallback/<Initialize>d__2
struct CORDL_TYPE Ua2CoreInitializeCallback__Initialize_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x2e89ecc, size 0x920, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x2e8b68c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Ua2CoreInitializeCallback__Initialize_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "registry", ty: "::Unity::Services::Core::Internal::CoreRegistry*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr Ua2CoreInitializeCallback__Initialize_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Unity::Services::Core::Internal::CoreRegistry*  registry, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11846};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field registry, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Core::Internal::CoreRegistry*  registry;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2, registry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, Unity.Services.Core.Internal.IInitializablePackage
namespace GlobalNamespace {
// Is value type: false
// CS Name: Ua2CoreInitializeCallback
class CORDL_TYPE Ua2CoreInitializeCallback : public ::System::Object {
public:
// Declarations
using _Initialize_d__2 = ::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2;

/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr operator  ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept;

/// @brief Method Initialize, addr 0x2e89e0c, size 0xc0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

static inline ::GlobalNamespace::Ua2CoreInitializeCallback* New_ctor() ;

/// @brief Method Register, addr 0x2e89c18, size 0x1ec, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0x2e89e04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* i___Unity__Services__Core__Internal__IInitializablePackage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ua2CoreInitializeCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ua2CoreInitializeCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ua2CoreInitializeCallback(Ua2CoreInitializeCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ua2CoreInitializeCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ua2CoreInitializeCallback(Ua2CoreInitializeCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Ua2CoreInitializeCallback, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Ua2CoreInitializeCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Ua2CoreInitializeCallback*, "", "Ua2CoreInitializeCallback");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Ua2CoreInitializeCallback__Initialize_d__2, "", "Ua2CoreInitializeCallback/<Initialize>d__2");
