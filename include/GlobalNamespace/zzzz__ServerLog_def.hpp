#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerLog.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ServerLog)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityOSC {
class OSCPacket;
}
namespace UnityOSC {
class OSCServer;
}
// Forward declare root types
namespace GlobalNamespace {
struct ServerLog;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServerLog);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ServerLog
struct CORDL_TYPE ServerLog {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ServerLog() ;

// Ctor Parameters [CppParam { name: "server", ty: "::UnityOSC::OSCServer*", modifiers: "", def_value: None }, CppParam { name: "packets", ty: "::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*", modifiers: "", def_value: None }, CppParam { name: "log", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }]
constexpr ServerLog(::UnityOSC::OSCServer*  server, ::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*  packets, ::System::Collections::Generic::List_1<::StringW>*  log) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field server, offset: 0x0, size: 0x8, def value: None
 ::UnityOSC::OSCServer*  server;

/// @brief Field packets, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*  packets;

/// @brief Field log, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  log;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerLog, server) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerLog, packets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerLog, log) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerLog, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerLog, "", "ServerLog");
