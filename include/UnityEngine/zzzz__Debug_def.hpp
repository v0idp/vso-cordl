#pragma once
// IWYU pragma private; include "UnityEngine/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Debug)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct LogOption;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Debug;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Debug);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
// Declarations
/// @brief Field s_DefaultLogger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultLogger, put=setStaticF_s_DefaultLogger)) ::UnityEngine::ILogger*  s_DefaultLogger;

/// @brief Field s_Logger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Logger, put=setStaticF_s_Logger)) ::UnityEngine::ILogger*  s_Logger;

/// @brief Method CallOverridenDebugHandler, addr 0x2f628f4, size 0x3f8, virtual false, abstract: false, final false
static inline bool CallOverridenDebugHandler(::System::Exception*  exception, ::UnityEngine::Object*  obj) ;

/// @brief Method ExtractStackTraceNoAlloc, addr 0x2f61440, size 0x54, virtual false, abstract: false, final false
static inline int32_t ExtractStackTraceNoAlloc(::cordl_internals::Ptr<uint8_t>  buffer, int32_t  bufferMax, ::StringW  projectFolder) ;

/// @brief Method IsLoggingEnabled, addr 0x2f62cec, size 0x224, virtual false, abstract: false, final false
static inline bool IsLoggingEnabled() ;

/// @brief Method Log, addr 0x2f61494, size 0x108, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message) ;

/// @brief Method Log, addr 0x2f6159c, size 0x118, virtual false, abstract: false, final false
static inline void Log(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogAssertion, addr 0x2f626ac, size 0x108, virtual false, abstract: false, final false
static inline void LogAssertion(::System::Object*  message) ;

/// @brief Method LogAssertionFormat, addr 0x2f627b4, size 0x118, virtual false, abstract: false, final false
static inline void LogAssertionFormat(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogError, addr 0x2f61aa4, size 0x108, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message) ;

/// @brief Method LogError, addr 0x2f61bac, size 0x118, virtual false, abstract: false, final false
static inline void LogError(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogErrorFormat, addr 0x2f61ddc, size 0x11c, virtual false, abstract: false, final false
static inline void LogErrorFormat(::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogErrorFormat, addr 0x2f61cc4, size 0x118, virtual false, abstract: false, final false
static inline void LogErrorFormat(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogException, addr 0x2f5e628, size 0x108, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception) ;

/// @brief Method LogException, addr 0x2f61ef8, size 0x114, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::UnityEngine::Object*  context) ;

/// @brief Method LogFormat, addr 0x2f616b4, size 0x118, virtual false, abstract: false, final false
static inline void LogFormat(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogFormat, addr 0x2f617cc, size 0x2d8, virtual false, abstract: false, final false
static inline void LogFormat(::UnityEngine::LogType  logType, ::UnityEngine::LogOption  logOptions, ::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogWarning, addr 0x2f6200c, size 0x108, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message) ;

/// @brief Method LogWarning, addr 0x2f62114, size 0x118, virtual false, abstract: false, final false
static inline void LogWarning(::System::Object*  message, ::UnityEngine::Object*  context) ;

/// @brief Method LogWarningFormat, addr 0x2f62344, size 0x11c, virtual false, abstract: false, final false
static inline void LogWarningFormat(::UnityEngine::Object*  context, ::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method LogWarningFormat, addr 0x2f6222c, size 0x118, virtual false, abstract: false, final false
static inline void LogWarningFormat(::StringW  format, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Assert, addr 0x2f62460, size 0x130, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition) ;

/// @brief Method Assert, addr 0x2f62590, size 0x11c, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition, ::StringW  message) ;

static inline ::UnityEngine::ILogger* getStaticF_s_DefaultLogger() ;

static inline ::UnityEngine::ILogger* getStaticF_s_Logger() ;

/// @brief Method get_isDebugBuild, addr 0x2f628cc, size 0x28, virtual false, abstract: false, final false
static inline bool get_isDebugBuild() ;

/// @brief Method get_unityLogger, addr 0x2f613e8, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::ILogger* get_unityLogger() ;

static inline void setStaticF_s_DefaultLogger(::UnityEngine::ILogger*  value) ;

static inline void setStaticF_s_Logger(::UnityEngine::ILogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug(Debug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug(Debug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Debug, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Debug*, "UnityEngine", "Debug");
