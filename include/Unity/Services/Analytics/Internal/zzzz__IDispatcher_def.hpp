#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDispatcher)
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class IDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::IDispatcher);
// Dependencies 
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.IDispatcher
class CORDL_TYPE IDispatcher {
public:
// Declarations
 __declspec(property(get=get_ConsecutiveFailedUploadCount)) int32_t  ConsecutiveFailedUploadCount;

/// @brief Method Flush, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method SetBuffer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer) ;

/// @brief Method get_ConsecutiveFailedUploadCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_ConsecutiveFailedUploadCount() ;

// Ctor Parameters [CppParam { name: "", ty: "IDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDispatcher(IDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::IDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::IDispatcher*, "Unity.Services.Analytics.Internal", "IDispatcher");
