#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IBufferSystemCalls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBufferSystemCalls)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IBufferSystemCalls;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IBufferSystemCalls);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IBufferSystemCalls
class CORDL_TYPE IBufferSystemCalls {
public:
// Declarations
/// @brief Method GenerateGuid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GenerateGuid() ;

// Ctor Parameters [CppParam { name: "", ty: "IBufferSystemCalls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBufferSystemCalls(IBufferSystemCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IBufferSystemCalls);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IBufferSystemCalls*, "Unity.Services.Analytics.Internal", "IBufferSystemCalls");
