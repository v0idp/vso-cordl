#pragma once
// IWYU pragma private; include "GlobalNamespace/ClientLog.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ClientLog)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityOSC {
class OSCClient;
}
namespace UnityOSC {
class OSCMessage;
}
// Forward declare root types
namespace GlobalNamespace {
struct ClientLog;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ClientLog);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ClientLog
struct CORDL_TYPE ClientLog {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ClientLog() ;

// Ctor Parameters [CppParam { name: "client", ty: "::UnityOSC::OSCClient*", modifiers: "", def_value: None }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::UnityOSC::OSCMessage*>*", modifiers: "", def_value: None }, CppParam { name: "log", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }]
constexpr ClientLog(::UnityOSC::OSCClient*  client, ::System::Collections::Generic::List_1<::UnityOSC::OSCMessage*>*  messages, ::System::Collections::Generic::List_1<::StringW>*  log) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field client, offset: 0x0, size: 0x8, def value: None
 ::UnityOSC::OSCClient*  client;

/// @brief Field messages, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityOSC::OSCMessage*>*  messages;

/// @brief Field log, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  log;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClientLog, client) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClientLog, messages) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClientLog, log) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClientLog, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClientLog, "", "ClientLog");
