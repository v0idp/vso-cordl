#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/AsyncOperationBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(AsyncOperationBase)
// Forward declare root types
namespace Unity::Services::Core::Internal {
class AsyncOperationBase;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::AsyncOperationBase);
// Dependencies UnityEngine.CustomYieldInstruction
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.AsyncOperationBase
class CORDL_TYPE AsyncOperationBase : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

/// @brief Method get_IsCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_keepWaiting, addr 0x2e9d8b8, size 0x20, virtual true, abstract: false, final false
inline bool get_keepWaiting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationBase(AsyncOperationBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationBase(AsyncOperationBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11972};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::AsyncOperationBase, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::AsyncOperationBase);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::AsyncOperationBase*, "Unity.Services.Core.Internal", "AsyncOperationBase");
