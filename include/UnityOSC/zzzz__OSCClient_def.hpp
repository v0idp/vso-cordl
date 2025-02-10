#pragma once
// IWYU pragma private; include "UnityOSC/OSCClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSCClient)
namespace System::Net::Sockets {
class UdpClient;
}
namespace System::Net {
class IPAddress;
}
namespace UnityOSC {
class OSCPacket;
}
// Forward declare root types
namespace UnityOSC {
class OSCClient;
}
// Write type traits
MARK_REF_PTR_T(::UnityOSC::OSCClient);
// Dependencies System.Object
namespace UnityOSC {
// Is value type: false
// CS Name: UnityOSC.OSCClient
class CORDL_TYPE OSCClient : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ClientIPAddress)) ::System::Net::IPAddress*  ClientIPAddress;

 __declspec(property(get=get_IsConnected, put=set_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_Port)) int32_t  Port;

/// @brief Field <IsConnected>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsConnected_k__BackingField, put=__cordl_internal_set__IsConnected_k__BackingField)) bool  _IsConnected_k__BackingField;

/// @brief Field _ipAddress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ipAddress, put=__cordl_internal_set__ipAddress)) ::System::Net::IPAddress*  _ipAddress;

/// @brief Field _port, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__port, put=__cordl_internal_set__port)) int32_t  _port;

/// @brief Field _udpClient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__udpClient, put=__cordl_internal_set__udpClient)) ::System::Net::Sockets::UdpClient*  _udpClient;

/// @brief Method Close, addr 0x17f1cdc, size 0x2c, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Connect, addr 0x17f1b5c, size 0x170, virtual false, abstract: false, final false
inline void Connect() ;

static inline ::UnityOSC::OSCClient* New_ctor(::System::Net::IPAddress*  address, int32_t  port) ;

/// @brief Method Send, addr 0x17f1d08, size 0x134, virtual false, abstract: false, final false
inline void Send(::UnityOSC::OSCPacket*  packet) ;

constexpr bool const& __cordl_internal_get__IsConnected_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsConnected_k__BackingField() ;

constexpr ::System::Net::IPAddress* const& __cordl_internal_get__ipAddress() const;

constexpr ::System::Net::IPAddress*& __cordl_internal_get__ipAddress() ;

constexpr int32_t const& __cordl_internal_get__port() const;

constexpr int32_t& __cordl_internal_get__port() ;

constexpr ::System::Net::Sockets::UdpClient* const& __cordl_internal_get__udpClient() const;

constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get__udpClient() ;

constexpr void __cordl_internal_set__IsConnected_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ipAddress(::System::Net::IPAddress*  value) ;

constexpr void __cordl_internal_set__port(int32_t  value) ;

constexpr void __cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient*  value) ;

/// @brief Method .ctor, addr 0x17f1b28, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::Net::IPAddress*  address, int32_t  port) ;

/// @brief Method get_ClientIPAddress, addr 0x17f1ccc, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::IPAddress* get_ClientIPAddress() ;

/// @brief Method get_IsConnected, addr 0x17f1b14, size 0x8, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_Port, addr 0x17f1cd4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Port() ;

/// @brief Method set_IsConnected, addr 0x17f1b1c, size 0xc, virtual false, abstract: false, final false
inline void set_IsConnected(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCClient(OSCClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCClient(OSCClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1654};

/// @brief Field <IsConnected>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsConnected_k__BackingField;

/// @brief Field _ipAddress, offset: 0x18, size: 0x8, def value: None
 ::System::Net::IPAddress*  ____ipAddress;

/// @brief Field _port, offset: 0x20, size: 0x4, def value: None
 int32_t  ____port;

/// @brief Field _udpClient, offset: 0x28, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  ____udpClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityOSC::OSCClient, ____IsConnected_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCClient, ____ipAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCClient, ____port) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCClient, ____udpClient) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOSC::OSCClient, 0x30>, "Size mismatch!");

} // namespace end def UnityOSC
NEED_NO_BOX(::UnityOSC::OSCClient);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCClient*, "UnityOSC", "OSCClient");
