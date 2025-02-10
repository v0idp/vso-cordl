#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Platform/Runtime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Runtime)
namespace Unity::Services::Analytics::Platform {
struct UA2PlatformCode;
}
// Forward declare root types
namespace Unity::Services::Analytics::Platform {
class Runtime;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::Platform::Runtime);
// Dependencies System.Object
namespace Unity::Services::Analytics::Platform {
// Is value type: false
// CS Name: Unity.Services.Analytics.Platform.Runtime
class CORDL_TYPE Runtime : public ::System::Object {
public:
// Declarations
/// @brief Method GetPlatform, addr 0x2e8ef88, size 0xe8, virtual false, abstract: false, final false
static inline ::Unity::Services::Analytics::Platform::UA2PlatformCode GetPlatform() ;

/// @brief Method Name, addr 0x2e8d628, size 0x64, virtual false, abstract: false, final false
static inline ::StringW Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Runtime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Runtime(Runtime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Runtime(Runtime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::Platform::Runtime, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics::Platform
NEED_NO_BOX(::Unity::Services::Analytics::Platform::Runtime);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::Platform::Runtime*, "Unity.Services.Analytics.Platform", "Runtime");
