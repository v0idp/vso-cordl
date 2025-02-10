#pragma once
// IWYU pragma private; include "VROSC/Server.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Server)
namespace UnityOSC {
class OSCPacket;
}
namespace UnityOSC {
class OSCServer;
}
// Forward declare root types
namespace VROSC {
class Server;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Server);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Server
class CORDL_TYPE Server : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _isStarted, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isStarted, put=__cordl_internal_set__isStarted)) bool  _isStarted;

/// @brief Field _port, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__port, put=__cordl_internal_set__port)) int32_t  _port;

/// @brief Field _serverName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverName, put=__cordl_internal_set__serverName)) ::StringW  _serverName;

/// @brief Field server, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::UnityOSC::OSCServer*  server;

static inline ::VROSC::Server* New_ctor() ;

/// @brief Method OnPacketReceived, addr 0x16f7928, size 0x1b0, virtual false, abstract: false, final false
inline void OnPacketReceived(::UnityOSC::OSCServer*  server, ::UnityOSC::OSCPacket*  packet) ;

/// @brief Method StartOSCServer, addr 0x16f7808, size 0x120, virtual false, abstract: false, final false
inline void StartOSCServer() ;

constexpr bool const& __cordl_internal_get__isStarted() const;

constexpr bool& __cordl_internal_get__isStarted() ;

constexpr int32_t const& __cordl_internal_get__port() const;

constexpr int32_t& __cordl_internal_get__port() ;

constexpr ::StringW const& __cordl_internal_get__serverName() const;

constexpr ::StringW& __cordl_internal_get__serverName() ;

constexpr ::UnityOSC::OSCServer* const& __cordl_internal_get_server() const;

constexpr ::UnityOSC::OSCServer*& __cordl_internal_get_server() ;

constexpr void __cordl_internal_set__isStarted(bool  value) ;

constexpr void __cordl_internal_set__port(int32_t  value) ;

constexpr void __cordl_internal_set__serverName(::StringW  value) ;

constexpr void __cordl_internal_set_server(::UnityOSC::OSCServer*  value) ;

/// @brief Method .ctor, addr 0x16f7ad8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Server() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Server", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Server(Server && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Server", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Server(Server const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{795};

/// @brief Field _serverName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____serverName;

/// @brief Field _port, offset: 0x28, size: 0x4, def value: None
 int32_t  ____port;

/// @brief Field server, offset: 0x30, size: 0x8, def value: None
 ::UnityOSC::OSCServer*  ___server;

/// @brief Field _isStarted, offset: 0x38, size: 0x1, def value: None
 bool  ____isStarted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Server, ____serverName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Server, ____port) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Server, ___server) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Server, ____isStarted) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Server, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Server);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Server*, "VROSC", "Server");
