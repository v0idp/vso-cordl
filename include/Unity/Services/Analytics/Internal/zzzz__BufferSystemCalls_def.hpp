#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/BufferSystemCalls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBufferSystemCalls_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BufferSystemCalls)
// Forward declare root types
namespace Unity::Services::Analytics::Internal {
class BufferSystemCalls;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Internal::BufferSystemCalls);
// Dependencies System.Object, Unity.Services.Analytics.Internal.IBufferSystemCalls
namespace Unity::Services::Analytics::Internal {
// Is value type: false
// CS Name: Unity.Services.Analytics.Internal.BufferSystemCalls
class CORDL_TYPE BufferSystemCalls : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IBufferSystemCalls"
constexpr operator  ::Unity::Services::Analytics::Internal::IBufferSystemCalls*() noexcept;

/// @brief Method GenerateGuid, addr 0x2e90498, size 0x2c, virtual true, abstract: false, final true
inline ::StringW GenerateGuid() ;

static inline ::Unity::Services::Analytics::Internal::BufferSystemCalls* New_ctor() ;

/// @brief Method .ctor, addr 0x2e8a85c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IBufferSystemCalls"
constexpr ::Unity::Services::Analytics::Internal::IBufferSystemCalls* i___Unity__Services__Analytics__Internal__IBufferSystemCalls() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferSystemCalls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferSystemCalls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferSystemCalls(BufferSystemCalls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferSystemCalls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferSystemCalls(BufferSystemCalls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11877};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Internal::BufferSystemCalls, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Internal
NEED_NO_BOX(::Unity::Services::Analytics::Internal::BufferSystemCalls);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Internal::BufferSystemCalls*, "Unity.Services.Analytics.Internal", "BufferSystemCalls");
