#pragma once
// IWYU pragma private; include "VROSC/Server.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Server_def.hpp"
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "UnityOSC/zzzz__OSCServer_def.hpp"
//  Writing Method size for method: ::VROSC::Server.StartOSCServer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Server::*)()>(&::VROSC::Server::StartOSCServer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x16f7808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Server*>::get(),
                        "StartOSCServer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Server.OnPacketReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Server::*)(::UnityOSC::OSCServer*, ::UnityOSC::OSCPacket*)>(&::VROSC::Server::OnPacketReceived)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x16f7928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Server*>::get(),
                        "OnPacketReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCServer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Server._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Server::*)()>(&::VROSC::Server::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x16f7ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Server*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::Server::__cordl_internal_get__serverName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverName;
}
constexpr ::StringW const& VROSC::Server::__cordl_internal_get__serverName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverName;
}
constexpr void VROSC::Server::__cordl_internal_set__serverName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::Server::__cordl_internal_get__port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr int32_t const& VROSC::Server::__cordl_internal_get__port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port;
}
constexpr void VROSC::Server::__cordl_internal_set__port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____port = value;
}
constexpr ::UnityOSC::OSCServer*& VROSC::Server::__cordl_internal_get_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr ::UnityOSC::OSCServer* const& VROSC::Server::__cordl_internal_get_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr void VROSC::Server::__cordl_internal_set_server(::UnityOSC::OSCServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::Server::__cordl_internal_get__isStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStarted;
}
constexpr bool const& VROSC::Server::__cordl_internal_get__isStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStarted;
}
constexpr void VROSC::Server::__cordl_internal_set__isStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isStarted = value;
}
inline void VROSC::Server::StartOSCServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Server*>::get(),
                        "StartOSCServer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Server::OnPacketReceived(::UnityOSC::OSCServer*  server, ::UnityOSC::OSCPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Server*>::get(),
                        "OnPacketReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCServer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityOSC::OSCPacket*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, server, packet);
}
inline void VROSC::Server::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Server*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Server* VROSC::Server::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Server*>());
}
// Ctor Parameters []
constexpr ::VROSC::Server::Server()   {
}
