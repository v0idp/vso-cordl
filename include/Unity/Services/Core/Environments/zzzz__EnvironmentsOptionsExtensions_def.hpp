#pragma once
// IWYU pragma private; include "Unity/Services/Core/Environments/EnvironmentsOptionsExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentsOptionsExtensions)
namespace Unity::Services::Core {
class InitializationOptions;
}
// Forward declare root types
namespace Unity::Services::Core::Environments {
class EnvironmentsOptionsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions);
// Dependencies System.Object
namespace Unity::Services::Core::Environments {
// Is value type: false
// CS Name: Unity.Services.Core.Environments.EnvironmentsOptionsExtensions
class CORDL_TYPE EnvironmentsOptionsExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method SetEnvironmentName, addr 0x2e9d7d0, size 0xd0, virtual false, abstract: false, final false
static inline ::Unity::Services::Core::InitializationOptions* SetEnvironmentName(::Unity::Services::Core::InitializationOptions*  self, ::StringW  environmentName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentsOptionsExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentsOptionsExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentsOptionsExtensions(EnvironmentsOptionsExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentsOptionsExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentsOptionsExtensions(EnvironmentsOptionsExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Environments
NEED_NO_BOX(::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Environments::EnvironmentsOptionsExtensions*, "Unity.Services.Core.Environments", "EnvironmentsOptionsExtensions");
