#pragma once
// IWYU pragma private; include "Firebase/LogUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LogUtil)
namespace Firebase::Platform {
struct PlatformLogLevel;
}
namespace Firebase {
struct LogLevel;
}
namespace Firebase {
class LogUtil_LogMessageDelegate;
}
namespace System {
class EventArgs;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase {
class LogUtil;
}
namespace Firebase {
class LogUtil_LogMessageDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::LogUtil);
MARK_REF_PTR_T(::Firebase::LogUtil_LogMessageDelegate);
// Dependencies System.MulticastDelegate
namespace Firebase {
// Is value type: false
// CS Name: Firebase.LogUtil/LogMessageDelegate
class CORDL_TYPE LogUtil_LogMessageDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x18f6b50, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Firebase::LogLevel  log_level, ::StringW  message) ;

static inline ::Firebase::LogUtil_LogMessageDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18f695c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogUtil_LogMessageDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogUtil_LogMessageDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogUtil_LogMessageDelegate(LogUtil_LogMessageDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogUtil_LogMessageDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogUtil_LogMessageDelegate(LogUtil_LogMessageDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::LogUtil_LogMessageDelegate, 0x80>, "Size mismatch!");

} // namespace end def Firebase
// Dependencies System.IDisposable, System.Object
namespace Firebase {
// Is value type: false
// CS Name: Firebase.LogUtil
class CORDL_TYPE LogUtil : public ::System::Object {
public:
// Declarations
using LogMessageDelegate = ::Firebase::LogUtil_LogMessageDelegate;

/// @brief Field InitializeLoggingLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InitializeLoggingLock, put=setStaticF_InitializeLoggingLock)) ::System::Object*  InitializeLoggingLock;

/// @brief Field <>f__mg$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache0, put=setStaticF___f__mg$cache0)) ::Firebase::LogUtil_LogMessageDelegate*  __f__mg$cache0;

/// @brief Field _disposed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::LogUtil*  _instance;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ConvertLogLevel, addr 0x18f6660, size 0xc, virtual false, abstract: false, final false
static inline ::Firebase::Platform::PlatformLogLevel ConvertLogLevel(::Firebase::LogLevel  logLevel) ;

/// @brief Method Dispose, addr 0x18f6ab8, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x18f6a90, size 0x28, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x18f69e8, size 0xa8, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InitializeLogging, addr 0x18f087c, size 0xe4, virtual false, abstract: false, final false
static inline void InitializeLogging() ;

/// @brief Method LogMessage, addr 0x18f2fd8, size 0x90, virtual false, abstract: false, final false
static inline void LogMessage(::Firebase::LogLevel  logLevel, ::StringW  message) ;

/// @brief Method LogMessageFromCallback, addr 0x18f66d0, size 0xa4, virtual false, abstract: false, final false
static inline void LogMessageFromCallback(::Firebase::LogLevel  logLevel, ::StringW  message) ;

static inline ::Firebase::LogUtil* New_ctor() ;

/// @brief Method <LogUtil>m__0, addr 0x18f6b28, size 0x28, virtual false, abstract: false, final false
inline void _LogUtil_m__0(::System::Object*  sender, ::System::EventArgs*  e) ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

/// @brief Method .ctor, addr 0x18f6808, size 0x154, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Object* getStaticF_InitializeLoggingLock() ;

static inline ::Firebase::LogUtil_LogMessageDelegate* getStaticF___f__mg$cache0() ;

static inline ::Firebase::LogUtil* getStaticF__instance() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_InitializeLoggingLock(::System::Object*  value) ;

static inline void setStaticF___f__mg$cache0(::Firebase::LogUtil_LogMessageDelegate*  value) ;

static inline void setStaticF__instance(::Firebase::LogUtil*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LogUtil(LogUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogUtil(LogUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11840};

/// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::LogUtil, ____disposed) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::LogUtil, 0x18>, "Size mismatch!");

} // namespace end def Firebase
NEED_NO_BOX(::Firebase::LogUtil);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::LogUtil*, "Firebase", "LogUtil");
NEED_NO_BOX(::Firebase::LogUtil_LogMessageDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::LogUtil_LogMessageDelegate*, "Firebase", "LogUtil/LogMessageDelegate");
