#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/SingleCallIdentity.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__SingleCallIdentity_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::SingleCallIdentity._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::SingleCallIdentity::*)(::StringW, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*)>(&::System::Runtime::Remoting::SingleCallIdentity::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263e400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SingleCallIdentity.SyncObjectProcessMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::SingleCallIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::SingleCallIdentity::SyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x26401f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SingleCallIdentity.AsyncObjectProcessMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (::System::Runtime::Remoting::SingleCallIdentity::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&::System::Runtime::Remoting::SingleCallIdentity::AsyncObjectProcessMessage)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2640418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::SingleCallIdentity::_ctor(::StringW  objectUri, ::System::Runtime::Remoting::Contexts::Context*  context, ::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectUri, context, objectType);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::SingleCallIdentity::SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::SingleCallIdentity::AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SingleCallIdentity*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::SingleCallIdentity* System::Runtime::Remoting::SingleCallIdentity::New_ctor(::StringW  objectUri, ::System::Runtime::Remoting::Contexts::Context*  context, ::System::Type*  objectType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::SingleCallIdentity*>(objectUri, context, objectType));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::SingleCallIdentity::SingleCallIdentity()   {
}
