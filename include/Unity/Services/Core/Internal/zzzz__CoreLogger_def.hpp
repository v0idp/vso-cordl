#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CoreLogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreLogger;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreLogger);
// Dependencies System.Object
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.CoreLogger
class CORDL_TYPE CoreLogger : public ::System::Object {
public:
// Declarations
/// @brief Method LogError, addr 0x2e9da88, size 0x120, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message) ;

/// @brief Method LogException, addr 0x2e9dba8, size 0x124, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception) ;

/// @brief Method LogWarning, addr 0x2e9d968, size 0x120, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreLogger(CoreLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreLogger(CoreLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11974};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreLogger, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreLogger);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreLogger*, "Unity.Services.Core.Internal", "CoreLogger");
