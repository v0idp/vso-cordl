#pragma once
// IWYU pragma private; include "UnityOSC/OSCServer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSCServer)
namespace System::Net::Sockets {
class UdpClient;
}
namespace System::Threading {
class Thread;
}
namespace UnityOSC {
class OSCPacket;
}
namespace UnityOSC {
class OSCServer___c;
}
namespace UnityOSC {
class PacketReceivedEventHandler;
}
// Forward declare root types
namespace UnityOSC {
class OSCServer;
}
namespace UnityOSC {
class OSCServer___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityOSC::OSCServer);
MARK_REF_PTR_T(::UnityOSC::OSCServer___c);
// Dependencies System.Object
namespace UnityOSC {
// Is value type: false
// CS Name: UnityOSC.OSCServer/<>c
class CORDL_TYPE OSCServer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityOSC::OSCServer___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::UnityOSC::PacketReceivedEventHandler*  __9__3_0;

static inline ::UnityOSC::OSCServer___c* New_ctor() ;

/// @brief Method <.ctor>b__3_0, addr 0x17f2ef4, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__3_0(::UnityOSC::OSCServer*  s, ::UnityOSC::OSCPacket*  p) ;

/// @brief Method .ctor, addr 0x17f2eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityOSC::OSCServer___c* getStaticF___9() ;

static inline ::UnityOSC::PacketReceivedEventHandler* getStaticF___9__3_0() ;

static inline void setStaticF___9(::UnityOSC::OSCServer___c*  value) ;

static inline void setStaticF___9__3_0(::UnityOSC::PacketReceivedEventHandler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCServer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCServer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCServer___c(OSCServer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCServer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCServer___c(OSCServer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOSC::OSCServer___c, 0x10>, "Size mismatch!");

} // namespace end def UnityOSC
// Dependencies System.Object
namespace UnityOSC {
// Is value type: false
// CS Name: UnityOSC.OSCServer
class CORDL_TYPE OSCServer : public ::System::Object {
public:
// Declarations
using __c = ::UnityOSC::OSCServer___c;

 __declspec(property(get=get_LastReceivedPacket)) ::UnityOSC::OSCPacket*  LastReceivedPacket;

 __declspec(property(get=get_LocalPort, put=set_LocalPort)) int32_t  LocalPort;

/// @brief Field PacketReceivedEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PacketReceivedEvent, put=__cordl_internal_set_PacketReceivedEvent)) ::UnityOSC::PacketReceivedEventHandler*  PacketReceivedEvent;

 __declspec(property(get=get_SleepMilliseconds, put=set_SleepMilliseconds)) int32_t  SleepMilliseconds;

 __declspec(property(get=get_UDPClient, put=set_UDPClient)) ::System::Net::Sockets::UdpClient*  UDPClient;

/// @brief Field _lastReceivedPacket, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastReceivedPacket, put=__cordl_internal_set__lastReceivedPacket)) ::UnityOSC::OSCPacket*  _lastReceivedPacket;

/// @brief Field _localPort, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__localPort, put=__cordl_internal_set__localPort)) int32_t  _localPort;

/// @brief Field _receiverThread, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__receiverThread, put=__cordl_internal_set__receiverThread)) ::System::Threading::Thread*  _receiverThread;

/// @brief Field _sleepMilliseconds, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__sleepMilliseconds, put=__cordl_internal_set__sleepMilliseconds)) int32_t  _sleepMilliseconds;

/// @brief Field _udpClient, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__udpClient, put=__cordl_internal_set__udpClient)) ::System::Net::Sockets::UdpClient*  _udpClient;

/// @brief Method Close, addr 0x17f2d4c, size 0x3c, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Connect, addr 0x17f2b88, size 0x18c, virtual false, abstract: false, final false
inline void Connect() ;

static inline ::UnityOSC::OSCServer* New_ctor(int32_t  localPort) ;

/// @brief Method Receive, addr 0x17f2d88, size 0xe8, virtual false, abstract: false, final false
inline void Receive() ;

/// @brief Method ReceivePool, addr 0x17f2e70, size 0x20, virtual false, abstract: false, final false
inline void ReceivePool() ;

constexpr ::UnityOSC::PacketReceivedEventHandler* const& __cordl_internal_get_PacketReceivedEvent() const;

constexpr ::UnityOSC::PacketReceivedEventHandler*& __cordl_internal_get_PacketReceivedEvent() ;

constexpr ::UnityOSC::OSCPacket* const& __cordl_internal_get__lastReceivedPacket() const;

constexpr ::UnityOSC::OSCPacket*& __cordl_internal_get__lastReceivedPacket() ;

constexpr int32_t const& __cordl_internal_get__localPort() const;

constexpr int32_t& __cordl_internal_get__localPort() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__receiverThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__receiverThread() ;

constexpr int32_t const& __cordl_internal_get__sleepMilliseconds() const;

constexpr int32_t& __cordl_internal_get__sleepMilliseconds() ;

constexpr ::System::Net::Sockets::UdpClient* const& __cordl_internal_get__udpClient() const;

constexpr ::System::Net::Sockets::UdpClient*& __cordl_internal_get__udpClient() ;

constexpr void __cordl_internal_set_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler*  value) ;

constexpr void __cordl_internal_set__lastReceivedPacket(::UnityOSC::OSCPacket*  value) ;

constexpr void __cordl_internal_set__localPort(int32_t  value) ;

constexpr void __cordl_internal_set__receiverThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set__sleepMilliseconds(int32_t  value) ;

constexpr void __cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient*  value) ;

/// @brief Method .ctor, addr 0x17f2a90, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(int32_t  localPort) ;

/// @brief Method add_PacketReceivedEvent, addr 0x17f2958, size 0x9c, virtual false, abstract: false, final false
inline void add_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler*  value) ;

/// @brief Method get_LastReceivedPacket, addr 0x17f2d34, size 0x8, virtual false, abstract: false, final false
inline ::UnityOSC::OSCPacket* get_LastReceivedPacket() ;

/// @brief Method get_LocalPort, addr 0x17f2d24, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LocalPort() ;

/// @brief Method get_SleepMilliseconds, addr 0x17f2d3c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SleepMilliseconds() ;

/// @brief Method get_UDPClient, addr 0x17f2d14, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Sockets::UdpClient* get_UDPClient() ;

/// @brief Method remove_PacketReceivedEvent, addr 0x17f29f4, size 0x9c, virtual false, abstract: false, final false
inline void remove_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler*  value) ;

/// @brief Method set_LocalPort, addr 0x17f2d2c, size 0x8, virtual false, abstract: false, final false
inline void set_LocalPort(int32_t  value) ;

/// @brief Method set_SleepMilliseconds, addr 0x17f2d44, size 0x8, virtual false, abstract: false, final false
inline void set_SleepMilliseconds(int32_t  value) ;

/// @brief Method set_UDPClient, addr 0x17f2d1c, size 0x8, virtual false, abstract: false, final false
inline void set_UDPClient(::System::Net::Sockets::UdpClient*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCServer(OSCServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCServer(OSCServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1659};

/// @brief Field PacketReceivedEvent, offset: 0x10, size: 0x8, def value: None
 ::UnityOSC::PacketReceivedEventHandler*  ___PacketReceivedEvent;

/// @brief Field _udpClient, offset: 0x18, size: 0x8, def value: None
 ::System::Net::Sockets::UdpClient*  ____udpClient;

/// @brief Field _localPort, offset: 0x20, size: 0x4, def value: None
 int32_t  ____localPort;

/// @brief Field _receiverThread, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Thread*  ____receiverThread;

/// @brief Field _lastReceivedPacket, offset: 0x30, size: 0x8, def value: None
 ::UnityOSC::OSCPacket*  ____lastReceivedPacket;

/// @brief Field _sleepMilliseconds, offset: 0x38, size: 0x4, def value: None
 int32_t  ____sleepMilliseconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityOSC::OSCServer, ___PacketReceivedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCServer, ____udpClient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCServer, ____localPort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCServer, ____receiverThread) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCServer, ____lastReceivedPacket) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityOSC::OSCServer, ____sleepMilliseconds) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOSC::OSCServer, 0x40>, "Size mismatch!");

} // namespace end def UnityOSC
NEED_NO_BOX(::UnityOSC::OSCServer);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCServer*, "UnityOSC", "OSCServer");
NEED_NO_BOX(::UnityOSC::OSCServer___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityOSC::OSCServer___c*, "UnityOSC", "OSCServer/<>c");
