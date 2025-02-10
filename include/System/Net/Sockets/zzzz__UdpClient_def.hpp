#pragma once
// IWYU pragma private; include "System/Net/Sockets/UdpClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UdpClient)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace System::Net::Sockets {
class UdpClient;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::UdpClient);
// Dependencies System.IDisposable, System.Net.Sockets.AddressFamily, System.Object
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.UdpClient
class CORDL_TYPE UdpClient : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Client, put=set_Client)) ::System::Net::Sockets::Socket*  Client;

/// @brief Field m_Active, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Active, put=__cordl_internal_set_m_Active)) bool  m_Active;

/// @brief Field m_Buffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Buffer, put=__cordl_internal_set_m_Buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_Buffer;

/// @brief Field m_CleanedUp, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CleanedUp, put=__cordl_internal_set_m_CleanedUp)) bool  m_CleanedUp;

/// @brief Field m_ClientSocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClientSocket, put=__cordl_internal_set_m_ClientSocket)) ::System::Net::Sockets::Socket*  m_ClientSocket;

/// @brief Field m_Family, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Family, put=__cordl_internal_set_m_Family)) ::System::Net::Sockets::AddressFamily  m_Family;

/// @brief Field m_IsBroadcast, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsBroadcast, put=__cordl_internal_set_m_IsBroadcast)) bool  m_IsBroadcast;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CheckForBroadcast, addr 0x2cd3dc4, size 0x58, virtual false, abstract: false, final false
inline void CheckForBroadcast(::System::Net::IPAddress*  ipAddress) ;

/// @brief Method Close, addr 0x2cd3a48, size 0x10, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Connect, addr 0x2cd3b30, size 0x194, virtual false, abstract: false, final false
inline void Connect(::System::Net::IPAddress*  addr, int32_t  port) ;

/// @brief Method Connect, addr 0x2cd3cc4, size 0x100, virtual false, abstract: false, final false
inline void Connect(::System::Net::IPEndPoint*  endPoint) ;

/// @brief Method Dispose, addr 0x2cd3aa8, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x2cd3ab8, size 0x78, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FreeResources, addr 0x2cd3a58, size 0x50, virtual false, abstract: false, final false
inline void FreeResources() ;

/// @brief Method IsBroadcast, addr 0x2cd3e1c, size 0x94, virtual false, abstract: false, final false
static inline bool IsBroadcast(::System::Net::IPAddress*  address) ;

static inline ::System::Net::Sockets::UdpClient* New_ctor() ;

static inline ::System::Net::Sockets::UdpClient* New_ctor(::System::Net::Sockets::AddressFamily  family) ;

static inline ::System::Net::Sockets::UdpClient* New_ctor(int32_t  port) ;

static inline ::System::Net::Sockets::UdpClient* New_ctor(int32_t  port, ::System::Net::Sockets::AddressFamily  family) ;

/// @brief Method Receive, addr 0x2cd3fd8, size 0x1dc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Receive(::ByRef<::System::Net::IPEndPoint*>  remoteEP) ;

/// @brief Method Send, addr 0x2cd3eb0, size 0x128, virtual false, abstract: false, final false
inline int32_t Send(::ArrayW<uint8_t,::Array<uint8_t>*>  dgram, int32_t  bytes) ;

constexpr bool const& __cordl_internal_get_m_Active() const;

constexpr bool& __cordl_internal_get_m_Active() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_m_Buffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_m_Buffer() ;

constexpr bool const& __cordl_internal_get_m_CleanedUp() const;

constexpr bool& __cordl_internal_get_m_CleanedUp() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_m_ClientSocket() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_m_ClientSocket() ;

constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get_m_Family() const;

constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get_m_Family() ;

constexpr bool const& __cordl_internal_get_m_IsBroadcast() const;

constexpr bool& __cordl_internal_get_m_IsBroadcast() ;

constexpr void __cordl_internal_set_m_Active(bool  value) ;

constexpr void __cordl_internal_set_m_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_m_CleanedUp(bool  value) ;

constexpr void __cordl_internal_set_m_ClientSocket(::System::Net::Sockets::Socket*  value) ;

constexpr void __cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily  value) ;

constexpr void __cordl_internal_set_m_IsBroadcast(bool  value) ;

/// @brief Method .ctor, addr 0x2cd3684, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2cd368c, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::AddressFamily  family) ;

/// @brief Method .ctor, addr 0x2cd3834, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  port) ;

/// @brief Method .ctor, addr 0x2cd383c, size 0x1fc, virtual false, abstract: false, final false
inline void _ctor(int32_t  port, ::System::Net::Sockets::AddressFamily  family) ;

/// @brief Method createClientSocket, addr 0x2cd37cc, size 0x68, virtual false, abstract: false, final false
inline void createClientSocket() ;

/// @brief Method get_Client, addr 0x2cd3a38, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Sockets::Socket* get_Client() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Client, addr 0x2cd3a40, size 0x8, virtual false, abstract: false, final false
inline void set_Client(::System::Net::Sockets::Socket*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UdpClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UdpClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UdpClient(UdpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UdpClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UdpClient(UdpClient const& ) = delete;

/// @brief Field MaxUDPSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxUDPSize{static_cast<int32_t>(0x10000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8000};

/// @brief Field m_ClientSocket, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___m_ClientSocket;

/// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Active;

/// @brief Field m_Buffer, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___m_Buffer;

/// @brief Field m_Family, offset: 0x28, size: 0x4, def value: None
 ::System::Net::Sockets::AddressFamily  ___m_Family;

/// @brief Field m_CleanedUp, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_CleanedUp;

/// @brief Field m_IsBroadcast, offset: 0x2d, size: 0x1, def value: None
 bool  ___m_IsBroadcast;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_ClientSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_Buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_Family) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_CleanedUp) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::UdpClient, ___m_IsBroadcast) == 0x2d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::UdpClient, 0x30>, "Size mismatch!");

} // namespace end def System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::UdpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::UdpClient*, "System.Net.Sockets", "UdpClient");
