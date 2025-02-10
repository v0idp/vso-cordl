#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompilerService)
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace Unity::Burst::LowLevel {
class BurstCompilerService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::LowLevel::BurstCompilerService);
// Dependencies System.Object
namespace Unity::Burst::LowLevel {
// Is value type: false
// CS Name: Unity.Burst.LowLevel.BurstCompilerService
class CORDL_TYPE BurstCompilerService : public ::System::Object {
public:
// Declarations
/// @brief Method GetOrCreateSharedMemory, addr 0x2f5c00c, size 0x54, virtual false, abstract: false, final false
static inline ::cordl_internals::Ptr<void> GetOrCreateSharedMemory(::ByRef<::UnityEngine::Hash128>  key, uint32_t  size_of, uint32_t  alignment) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompilerService(BurstCompilerService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompilerService(BurstCompilerService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::LowLevel::BurstCompilerService, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::LowLevel
NEED_NO_BOX(::Unity::Burst::LowLevel::BurstCompilerService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::LowLevel::BurstCompilerService*, "Unity.Burst.LowLevel", "BurstCompilerService");
