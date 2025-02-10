#pragma once
// IWYU pragma private; include "UnityOSC/OSCServer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOSC/zzzz__OSCServer_def.hpp"
#include "System/Net/Sockets/zzzz__UdpClient_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "UnityOSC/zzzz__OSCServer_def.hpp"
#include "UnityOSC/zzzz__PacketReceivedEventHandler_def.hpp"
//  Writing Method size for method: ::UnityOSC::OSCServer___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer___c::*)()>(&::UnityOSC::OSCServer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer___c.__ctor_b__3_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer___c::*)(::UnityOSC::OSCServer*, ::UnityOSC::OSCPacket*)>(&::UnityOSC::OSCServer___c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f2ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get(),
                        "<.ctor>b__3_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCServer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityOSC::OSCServer___c::setStaticF___9(::UnityOSC::OSCServer___c*  value)  {
::cordl_internals::setStaticField<::UnityOSC::OSCServer___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get>(std::forward<::UnityOSC::OSCServer___c*>(value));
}
inline ::UnityOSC::OSCServer___c* UnityOSC::OSCServer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityOSC::OSCServer___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get>();
}
inline void UnityOSC::OSCServer___c::setStaticF___9__3_0(::UnityOSC::PacketReceivedEventHandler*  value)  {
::cordl_internals::setStaticField<::UnityOSC::PacketReceivedEventHandler*, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get>(std::forward<::UnityOSC::PacketReceivedEventHandler*>(value));
}
inline ::UnityOSC::PacketReceivedEventHandler* UnityOSC::OSCServer___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::UnityOSC::PacketReceivedEventHandler*, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get>();
}
inline void UnityOSC::OSCServer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer___c::__ctor_b__3_0(::UnityOSC::OSCServer*  s, ::UnityOSC::OSCPacket*  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer___c*>::get(),
                        "<.ctor>b__3_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCServer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, p);
}
inline ::UnityOSC::OSCServer___c* UnityOSC::OSCServer___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityOSC::OSCServer___c*>());
}
// Ctor Parameters []
constexpr ::UnityOSC::OSCServer___c::OSCServer___c()   {
}
//  Writing Method size for method: ::UnityOSC::OSCServer.add_PacketReceivedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)(::UnityOSC::PacketReceivedEventHandler*)>(&::UnityOSC::OSCServer::add_PacketReceivedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17f2958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "add_PacketReceivedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::PacketReceivedEventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.remove_PacketReceivedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)(::UnityOSC::PacketReceivedEventHandler*)>(&::UnityOSC::OSCServer::remove_PacketReceivedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17f29f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "remove_PacketReceivedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::PacketReceivedEventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)(int32_t)>(&::UnityOSC::OSCServer::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17f2a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.get_UDPClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::UdpClient* (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::get_UDPClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_UDPClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.set_UDPClient
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)(::System::Net::Sockets::UdpClient*)>(&::UnityOSC::OSCServer::set_UDPClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "set_UDPClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::UdpClient*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.get_LocalPort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::get_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_LocalPort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.set_LocalPort
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)(int32_t)>(&::UnityOSC::OSCServer::set_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "set_LocalPort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.get_LastReceivedPacket
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOSC::OSCPacket* (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::get_LastReceivedPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_LastReceivedPacket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.get_SleepMilliseconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::get_SleepMilliseconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_SleepMilliseconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.set_SleepMilliseconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)(int32_t)>(&::UnityOSC::OSCServer::set_SleepMilliseconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f2d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "set_SleepMilliseconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.Connect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::Connect)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x17f2b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17f2d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.Receive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::Receive)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17f2d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCServer.ReceivePool
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCServer::*)()>(&::UnityOSC::OSCServer::ReceivePool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17f2e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "ReceivePool",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityOSC::PacketReceivedEventHandler*& UnityOSC::OSCServer::__cordl_internal_get_PacketReceivedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketReceivedEvent;
}
constexpr ::UnityOSC::PacketReceivedEventHandler* const& UnityOSC::OSCServer::__cordl_internal_get_PacketReceivedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PacketReceivedEvent;
}
constexpr void UnityOSC::OSCServer::__cordl_internal_set_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PacketReceivedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::UdpClient*& UnityOSC::OSCServer::__cordl_internal_get__udpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpClient;
}
constexpr ::System::Net::Sockets::UdpClient* const& UnityOSC::OSCServer::__cordl_internal_get__udpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpClient;
}
constexpr void UnityOSC::OSCServer::__cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityOSC::OSCServer::__cordl_internal_get__localPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPort;
}
constexpr int32_t const& UnityOSC::OSCServer::__cordl_internal_get__localPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPort;
}
constexpr void UnityOSC::OSCServer::__cordl_internal_set__localPort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPort = value;
}
constexpr ::System::Threading::Thread*& UnityOSC::OSCServer::__cordl_internal_get__receiverThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiverThread;
}
constexpr ::System::Threading::Thread* const& UnityOSC::OSCServer::__cordl_internal_get__receiverThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receiverThread;
}
constexpr void UnityOSC::OSCServer::__cordl_internal_set__receiverThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____receiverThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityOSC::OSCPacket*& UnityOSC::OSCServer::__cordl_internal_get__lastReceivedPacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceivedPacket;
}
constexpr ::UnityOSC::OSCPacket* const& UnityOSC::OSCServer::__cordl_internal_get__lastReceivedPacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReceivedPacket;
}
constexpr void UnityOSC::OSCServer::__cordl_internal_set__lastReceivedPacket(::UnityOSC::OSCPacket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastReceivedPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityOSC::OSCServer::__cordl_internal_get__sleepMilliseconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepMilliseconds;
}
constexpr int32_t const& UnityOSC::OSCServer::__cordl_internal_get__sleepMilliseconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sleepMilliseconds;
}
constexpr void UnityOSC::OSCServer::__cordl_internal_set__sleepMilliseconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sleepMilliseconds = value;
}
inline void UnityOSC::OSCServer::add_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "add_PacketReceivedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::PacketReceivedEventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityOSC::OSCServer::remove_PacketReceivedEvent(::UnityOSC::PacketReceivedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "remove_PacketReceivedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::PacketReceivedEventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityOSC::OSCServer::_ctor(int32_t  localPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localPort);
}
inline ::System::Net::Sockets::UdpClient* UnityOSC::OSCServer::get_UDPClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_UDPClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::UdpClient*, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer::set_UDPClient(::System::Net::Sockets::UdpClient*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "set_UDPClient",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::UdpClient*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityOSC::OSCServer::get_LocalPort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_LocalPort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer::set_LocalPort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "set_LocalPort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityOSC::OSCPacket* UnityOSC::OSCServer::get_LastReceivedPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_LastReceivedPacket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityOSC::OSCPacket*, false>(this, ___internal_method);
}
inline int32_t UnityOSC::OSCServer::get_SleepMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "get_SleepMilliseconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer::set_SleepMilliseconds(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "set_SleepMilliseconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityOSC::OSCServer::Connect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer::Receive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "Receive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOSC::OSCServer::ReceivePool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCServer*>::get(),
                        "ReceivePool",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityOSC::OSCServer* UnityOSC::OSCServer::New_ctor(int32_t  localPort)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityOSC::OSCServer*>(localPort));
}
// Ctor Parameters []
constexpr ::UnityOSC::OSCServer::OSCServer()   {
}
