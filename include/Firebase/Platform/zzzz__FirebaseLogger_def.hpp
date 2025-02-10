#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseLogger)
namespace Firebase::Platform {
template<typename T>
class MainThreadProperty_1;
}
namespace Firebase::Platform {
struct PlatformLogLevel;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
struct StackTraceLogType;
}
// Forward declare root types
namespace Firebase::Platform {
class FirebaseLogger;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::FirebaseLogger);
// Dependencies System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.FirebaseLogger
class CORDL_TYPE FirebaseLogger : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__mg$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__mg$cache0, put=setStaticF___f__mg$cache0)) ::System::Func_1<bool>*  __f__mg$cache0;

/// @brief Field incompatibleStackUnwindingEnabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_incompatibleStackUnwindingEnabled, put=setStaticF_incompatibleStackUnwindingEnabled)) ::Firebase::Platform::MainThreadProperty_1<bool>*  incompatibleStackUnwindingEnabled;

/// @brief Method CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs, addr 0x19202a4, size 0x258, virtual false, abstract: false, final false
static inline bool CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs() ;

/// @brief Method IsStackTraceLogTypeIncompatibleWithNativeLogs, addr 0x1920298, size 0xc, virtual false, abstract: false, final false
static inline bool IsStackTraceLogTypeIncompatibleWithNativeLogs(::UnityEngine::StackTraceLogType  logType) ;

/// @brief Method LogMessage, addr 0x191f0e8, size 0x1c8, virtual false, abstract: false, final false
static inline void LogMessage(::Firebase::Platform::PlatformLogLevel  logLevel, ::StringW  message) ;

static inline ::System::Func_1<bool>* getStaticF___f__mg$cache0() ;

static inline ::Firebase::Platform::MainThreadProperty_1<bool>* getStaticF_incompatibleStackUnwindingEnabled() ;

/// @brief Method get_CanRedirectNativeLogs, addr 0x19204fc, size 0x170, virtual false, abstract: false, final false
static inline bool get_CanRedirectNativeLogs() ;

static inline void setStaticF___f__mg$cache0(::System::Func_1<bool>*  value) ;

static inline void setStaticF_incompatibleStackUnwindingEnabled(::Firebase::Platform::MainThreadProperty_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseLogger(FirebaseLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseLogger(FirebaseLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::FirebaseLogger, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::FirebaseLogger);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseLogger*, "Firebase.Platform", "FirebaseLogger");
