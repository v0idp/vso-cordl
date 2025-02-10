#pragma once
// IWYU pragma private; include "UnityOSC/PacketReceivedEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityOSC/zzzz__PacketReceivedEventHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "UnityOSC/zzzz__OSCServer_def.hpp"
//  Writing Method size for method: ::UnityOSC::PacketReceivedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::PacketReceivedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityOSC::PacketReceivedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x17f280c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::PacketReceivedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::PacketReceivedEventHandler::*)(::UnityOSC::OSCServer*, ::UnityOSC::OSCPacket*)>(&::UnityOSC::PacketReceivedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x17f2910;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::PacketReceivedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::UnityOSC::PacketReceivedEventHandler::*)(::UnityOSC::OSCServer*, ::UnityOSC::OSCPacket*, ::System::AsyncCallback*, ::System::Object*)>(&::UnityOSC::PacketReceivedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17f2924;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::PacketReceivedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::PacketReceivedEventHandler::*)(::System::IAsyncResult*)>(&::UnityOSC::PacketReceivedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17f294c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
inline void UnityOSC::PacketReceivedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityOSC::PacketReceivedEventHandler::Invoke(::UnityOSC::OSCServer*  sender, ::UnityOSC::OSCPacket*  packet)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, packet);
}
inline ::System::IAsyncResult* UnityOSC::PacketReceivedEventHandler::BeginInvoke(::UnityOSC::OSCServer*  sender, ::UnityOSC::OSCPacket*  packet, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, sender, packet, callback, object);
}
inline void UnityOSC::PacketReceivedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::PacketReceivedEventHandler*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::UnityOSC::PacketReceivedEventHandler* UnityOSC::PacketReceivedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityOSC::PacketReceivedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityOSC::PacketReceivedEventHandler::PacketReceivedEventHandler()   {
}
