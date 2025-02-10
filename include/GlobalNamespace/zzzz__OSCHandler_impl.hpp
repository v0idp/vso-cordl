#pragma once
// IWYU pragma private; include "GlobalNamespace/OSCHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OSCHandler_def.hpp"
#include "GlobalNamespace/zzzz__ClientLog_def.hpp"
#include "GlobalNamespace/zzzz__ServerLog_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "UnityOSC/zzzz__OSCServer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OSCHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)()>(&::GlobalNamespace::OSCHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x16bfc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OSCHandler> (*)()>(&::GlobalNamespace::OSCHandler::get_Instance)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x16bfd10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)()>(&::GlobalNamespace::OSCHandler::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16bfe4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.get_Clients
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>* (::GlobalNamespace::OSCHandler::*)()>(&::GlobalNamespace::OSCHandler::get_Clients)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bfe50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "get_Clients",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.get_Servers
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>* (::GlobalNamespace::OSCHandler::*)()>(&::GlobalNamespace::OSCHandler::get_Servers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bfe58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "get_Servers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)()>(&::GlobalNamespace::OSCHandler::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x16bfe60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "OnApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.CreateClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OSCHandler::*)(::StringW, ::System::Net::IPAddress*, int32_t)>(&::GlobalNamespace::OSCHandler::CreateClient)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x16c015c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "CreateClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.DestroyClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)(::StringW)>(&::GlobalNamespace::OSCHandler::DestroyClient)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x16c02b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "DestroyClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.CreateServer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)(::StringW, int32_t)>(&::GlobalNamespace::OSCHandler::CreateServer)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x16c037c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "CreateServer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.OnPacketReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)(::UnityOSC::OSCServer*, ::UnityOSC::OSCPacket*)>(&::GlobalNamespace::OSCHandler::OnPacketReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16c0504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "OnPacketReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCServer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.UpdateLogs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OSCHandler::*)()>(&::GlobalNamespace::OSCHandler::UpdateLogs)> {
  constexpr static std::size_t size = 0xac8;
  constexpr static std::size_t addrs = 0x16c0508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "UpdateLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.DataToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OSCHandler::*)(::System::Collections::Generic::List_1<::System::Object*>*)>(&::GlobalNamespace::OSCHandler::DataToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x16c1064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "DataToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OSCHandler.FormatMilliseconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OSCHandler::*)(int32_t)>(&::GlobalNamespace::OSCHandler::FormatMilliseconds)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16c0fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "FormatMilliseconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*& GlobalNamespace::OSCHandler::__cordl_internal_get__clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>* const& GlobalNamespace::OSCHandler::__cordl_internal_get__clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clients;
}
constexpr void GlobalNamespace::OSCHandler::__cordl_internal_set__clients(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clients)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*& GlobalNamespace::OSCHandler::__cordl_internal_get__servers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____servers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>* const& GlobalNamespace::OSCHandler::__cordl_internal_get__servers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____servers;
}
constexpr void GlobalNamespace::OSCHandler::__cordl_internal_set__servers(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____servers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OSCHandler::setStaticF__instance(::UnityW<::GlobalNamespace::OSCHandler>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OSCHandler>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get>(std::forward<::UnityW<::GlobalNamespace::OSCHandler>>(value));
}
inline ::UnityW<::GlobalNamespace::OSCHandler> GlobalNamespace::OSCHandler::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OSCHandler>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get>();
}
inline void GlobalNamespace::OSCHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OSCHandler> GlobalNamespace::OSCHandler::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OSCHandler>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OSCHandler::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>* GlobalNamespace::OSCHandler::get_Clients()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "get_Clients",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ClientLog>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>* GlobalNamespace::OSCHandler::get_Servers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "get_Servers",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::ServerLog>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OSCHandler::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "OnApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OSCHandler::CreateClient(::StringW  clientId, ::System::Net::IPAddress*  destination, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "CreateClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clientId, destination, port);
}
inline void GlobalNamespace::OSCHandler::DestroyClient(::StringW  clientId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "DestroyClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientId);
}
inline void GlobalNamespace::OSCHandler::CreateServer(::StringW  serverId, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "CreateServer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverId, port);
}
inline void GlobalNamespace::OSCHandler::OnPacketReceived(::UnityOSC::OSCServer*  server, ::UnityOSC::OSCPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "OnPacketReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCServer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, server, packet);
}
template<typename T>
inline void GlobalNamespace::OSCHandler::SendMessageToClient(::StringW  clientId, ::StringW  address, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                    "SendMessageToClient",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientId, address, value);
}
template<typename T>
inline void GlobalNamespace::OSCHandler::SendMessageToClient(::StringW  clientId, ::StringW  address, ::System::Collections::Generic::List_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                    "SendMessageToClient",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientId, address, values);
}
inline void GlobalNamespace::OSCHandler::UpdateLogs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "UpdateLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OSCHandler::DataToString(::System::Collections::Generic::List_1<::System::Object*>*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "DataToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, data);
}
inline ::StringW GlobalNamespace::OSCHandler::FormatMilliseconds(int32_t  milliseconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OSCHandler*>::get(),
                        "FormatMilliseconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, milliseconds);
}
inline ::GlobalNamespace::OSCHandler* GlobalNamespace::OSCHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OSCHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OSCHandler::OSCHandler()   {
}
