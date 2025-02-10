#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/IInitializablePackage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitializablePackage)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core::Internal {
class CoreRegistry;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class IInitializablePackage;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::IInitializablePackage);
// Dependencies 
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.IInitializablePackage
class CORDL_TYPE IInitializablePackage {
public:
// Declarations
/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* Initialize(::Unity::Services::Core::Internal::CoreRegistry*  registry) ;

// Ctor Parameters [CppParam { name: "", ty: "IInitializablePackage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInitializablePackage(IInitializablePackage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11995};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::IInitializablePackage);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::IInitializablePackage*, "Unity.Services.Core.Internal", "IInitializablePackage");
