#pragma once
// IWYU pragma private; include "GlobalNamespace/OSCHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OSCHandler)
namespace GlobalNamespace {
struct ClientLog;
}
namespace GlobalNamespace {
struct ServerLog;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class IPAddress;
}
namespace System {
class Object;
}
namespace UnityOSC {
class OSCPacket;
}
namespace UnityOSC {
class OSCServer;
}
// Forward declare root types
namespace GlobalNamespace {
class OSCHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OSCHandler);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OSCHandler
class CORDL_TYPE OSCHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Clients)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*  Clients;

 __declspec(property(get=get_Servers)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*  Servers;

/// @brief Field _clients, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__clients, put=__cordl_internal_set__clients)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*  _clients;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::OSCHandler>  _instance;

/// @brief Field _servers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__servers, put=__cordl_internal_set__servers)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*  _servers;

/// @brief Method CreateClient, addr 0x16c015c, size 0x154, virtual false, abstract: false, final false
inline bool CreateClient(::StringW  clientId, ::System::Net::IPAddress*  destination, int32_t  port) ;

/// @brief Method CreateServer, addr 0x16c037c, size 0x188, virtual false, abstract: false, final false
inline void CreateServer(::StringW  serverId, int32_t  port) ;

/// @brief Method DataToString, addr 0x16c1064, size 0x100, virtual false, abstract: false, final false
inline ::StringW DataToString(::System::Collections::Generic::List_1<::System::Object*>*  data) ;

/// @brief Method DestroyClient, addr 0x16c02b0, size 0xcc, virtual false, abstract: false, final false
inline void DestroyClient(::StringW  clientId) ;

/// @brief Method FormatMilliseconds, addr 0x16c0fd0, size 0x94, virtual false, abstract: false, final false
inline ::StringW FormatMilliseconds(int32_t  milliseconds) ;

/// @brief Method Init, addr 0x16bfe4c, size 0x4, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::OSCHandler* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x16bfe60, size 0x2fc, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnPacketReceived, addr 0x16c0504, size 0x4, virtual false, abstract: false, final false
inline void OnPacketReceived(::UnityOSC::OSCServer*  server, ::UnityOSC::OSCPacket*  packet) ;

/// @brief Method SendMessageToClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SendMessageToClient(::StringW  clientId, ::StringW  address, T  value) ;

/// @brief Method SendMessageToClient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SendMessageToClient(::StringW  clientId, ::StringW  address, ::System::Collections::Generic::List_1<T>*  values) ;

/// @brief Method UpdateLogs, addr 0x16c0508, size 0xac8, virtual false, abstract: false, final false
inline void UpdateLogs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>* const& __cordl_internal_get__clients() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*& __cordl_internal_get__clients() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>* const& __cordl_internal_get__servers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*& __cordl_internal_get__servers() ;

constexpr void __cordl_internal_set__clients(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*  value) ;

constexpr void __cordl_internal_set__servers(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*  value) ;

/// @brief Method .ctor, addr 0x16bfc4c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::OSCHandler> getStaticF__instance() ;

/// @brief Method get_Clients, addr 0x16bfe50, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>* get_Clients() ;

/// @brief Method get_Instance, addr 0x16bfd10, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OSCHandler> get_Instance() ;

/// @brief Method get_Servers, addr 0x16bfe58, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>* get_Servers() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OSCHandler>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OSCHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OSCHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OSCHandler(OSCHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OSCHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OSCHandler(OSCHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33};

/// @brief Field _loglength offset 0xffffffff size 0x4
static constexpr int32_t  _loglength{static_cast<int32_t>(0x19)};

/// @brief Field _clients, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*  ____clients;

/// @brief Field _servers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*  ____servers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OSCHandler, ____clients) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OSCHandler, ____servers) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OSCHandler, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OSCHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OSCHandler*, "", "OSCHandler");
