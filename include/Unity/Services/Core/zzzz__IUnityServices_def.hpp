#pragma once
// IWYU pragma private; include "Unity/Services/Core/IUnityServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnityServices)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
// Forward declare root types
namespace Unity::Services::Core {
class IUnityServices;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::IUnityServices);
// Dependencies 
namespace Unity::Services::Core {
// Is value type: false
// CS Name: Unity.Services.Core.IUnityServices
class CORDL_TYPE IUnityServices {
public:
// Declarations
/// @brief Method InitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Core::InitializationOptions*  options) ;

// Ctor Parameters [CppParam { name: "", ty: "IUnityServices", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUnityServices(IUnityServices const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::IUnityServices);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::IUnityServices*, "Unity.Services.Core", "IUnityServices");
