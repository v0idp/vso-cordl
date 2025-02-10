#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/Logger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Authentication {
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Authentication::Logger);
// Dependencies System.Object
namespace Unity::Services::Authentication {
// Is value type: false
// CS Name: Unity.Services.Authentication.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief Method Log, addr 0x2e95648, size 0x120, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message) ;

/// @brief Method LogError, addr 0x2e9a1ac, size 0x120, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message) ;

/// @brief Method LogException, addr 0x2e94de4, size 0x124, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception) ;

/// @brief Method LogWarning, addr 0x2e95c84, size 0x120, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Logger(Logger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logger(Logger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11588};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Authentication::Logger, 0x10>, "Size mismatch!");

} // namespace end def Unity::Services::Authentication
NEED_NO_BOX(::Unity::Services::Authentication::Logger);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Authentication::Logger*, "Unity.Services.Authentication", "Logger");
