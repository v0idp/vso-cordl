#pragma once
// IWYU pragma private; include "Firebase/Platform/DebugLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Platform/zzzz__ILoggingService_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugLogger)
// Forward declare root types
namespace Firebase::Platform {
class DebugLogger;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Platform::DebugLogger);
// Dependencies Firebase.Platform.ILoggingService, System.Object
namespace Firebase::Platform {
// Is value type: false
// CS Name: Firebase.Platform.DebugLogger
class CORDL_TYPE DebugLogger : public ::System::Object {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Firebase::Platform::DebugLogger*  _instance;

/// @brief Convert operator to "::Firebase::Platform::ILoggingService"
constexpr operator  ::Firebase::Platform::ILoggingService*() noexcept;

static inline ::Firebase::Platform::DebugLogger* New_ctor() ;

/// @brief Method .ctor, addr 0x192228c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Firebase::Platform::DebugLogger* getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x1922294, size 0x58, virtual false, abstract: false, final false
static inline ::Firebase::Platform::DebugLogger* get_Instance() ;

/// @brief Convert to "::Firebase::Platform::ILoggingService"
constexpr ::Firebase::Platform::ILoggingService* i___Firebase__Platform__ILoggingService() noexcept;

static inline void setStaticF__instance(::Firebase::Platform::DebugLogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugLogger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugLogger(DebugLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugLogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugLogger(DebugLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12201};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Platform::DebugLogger, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Platform
NEED_NO_BOX(::Firebase::Platform::DebugLogger);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::DebugLogger*, "Firebase.Platform", "DebugLogger");
