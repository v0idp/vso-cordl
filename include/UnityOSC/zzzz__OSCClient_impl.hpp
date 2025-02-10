#pragma once
// IWYU pragma private; include "UnityOSC/OSCClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityOSC/zzzz__OSCClient_def.hpp"
#include "System/Net/Sockets/zzzz__UdpClient_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
//  Writing Method size for method: ::UnityOSC::OSCClient.get_IsConnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityOSC::OSCClient::*)()>(&::UnityOSC::OSCClient::get_IsConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f1b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "get_IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient.set_IsConnected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCClient::*)(bool)>(&::UnityOSC::OSCClient::set_IsConnected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17f1b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "set_IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCClient::*)(::System::Net::IPAddress*, int32_t)>(&::UnityOSC::OSCClient::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17f1b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient.get_ClientIPAddress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (::UnityOSC::OSCClient::*)()>(&::UnityOSC::OSCClient::get_ClientIPAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f1ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "get_ClientIPAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient.get_Port
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityOSC::OSCClient::*)()>(&::UnityOSC::OSCClient::get_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f1cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "get_Port",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient.Connect
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCClient::*)()>(&::UnityOSC::OSCClient::Connect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x17f1b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCClient::*)()>(&::UnityOSC::OSCClient::Close)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17f1cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCClient.Send
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCClient::*)(::UnityOSC::OSCPacket*)>(&::UnityOSC::OSCClient::Send)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x17f1d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityOSC::OSCClient::__cordl_internal_get__IsConnected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConnected_k__BackingField;
}
constexpr bool const& UnityOSC::OSCClient::__cordl_internal_get__IsConnected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConnected_k__BackingField;
}
constexpr void UnityOSC::OSCClient::__cordl_internal_set__IsConnected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsConnected_k__BackingField = value;
}
constexpr ::System::Net::IPAddress*& UnityOSC::OSCClient::__cordl_internal_get__ipAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ipAddress;
}
constexpr ::System::Net::IPAddress* const& UnityOSC::OSCClient::__cordl_internal_get__ipAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ipAddress;
}
constexpr void UnityOSC::OSCClient::__cordl_internal_set__ipAddress(::System::Net::IPAddress*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ipAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityOSC::OSCClient::__cordl_internal_get__port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr int32_t const& UnityOSC::OSCClient::__cordl_internal_get__port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr void UnityOSC::OSCClient::__cordl_internal_set__port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____port = value;
}
constexpr ::System::Net::Sockets::UdpClient*& UnityOSC::OSCClient::__cordl_internal_get__udpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpClient;
}
constexpr ::System::Net::Sockets::UdpClient* const& UnityOSC::OSCClient::__cordl_internal_get__udpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udpClient;
}
constexpr void UnityOSC::OSCClient::__cordl_internal_set__udpClient(::System::Net::Sockets::UdpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityOSC::OSCClient::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "get_IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityOSC::OSCClient::set_IsConnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "set_IsConnected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityOSC::OSCClient::_ctor(::System::Net::IPAddress*  address, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, port);
}
inline ::System::Net::IPAddress* UnityOSC::OSCClient::get_ClientIPAddress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "get_ClientIPAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*, false>(this, ___internal_method);
}
inline int32_t UnityOSC::OSCClient::get_Port()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "get_Port",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityOSC::OSCClient::Connect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "Connect",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOSC::OSCClient::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "Close",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityOSC::OSCClient::Send(::UnityOSC::OSCPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCClient*>::get(),
                        "Send",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline ::UnityOSC::OSCClient* UnityOSC::OSCClient::New_ctor(::System::Net::IPAddress*  address, int32_t  port)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityOSC::OSCClient*>(address, port));
}
// Ctor Parameters []
constexpr ::UnityOSC::OSCClient::OSCClient()   {
}
