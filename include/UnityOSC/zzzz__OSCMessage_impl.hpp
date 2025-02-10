#pragma once
// IWYU pragma private; include "UnityOSC/OSCMessage.hpp"
#include "UnityOSC/zzzz__OSCPacket_impl.hpp"
#include "UnityOSC/zzzz__OSCMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityOSC::OSCMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCMessage::*)(::StringW)>(&::UnityOSC::OSCMessage::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x17f1e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCMessage._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCMessage::*)(::StringW, ::System::Object*)>(&::UnityOSC::OSCMessage::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x17f1edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCMessage.IsBundle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityOSC::OSCMessage::*)()>(&::UnityOSC::OSCMessage::IsBundle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f1fa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCMessage.Pack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityOSC::OSCMessage::*)()>(&::UnityOSC::OSCMessage::Pack)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x17f1fb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityOSC::OSCMessage.Unpack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityOSC::OSCMessage* (*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::UnityOSC::OSCMessage::Unpack)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x17f2348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                        "Unpack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityOSC::OSCMessage::__cordl_internal_get__typeTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeTag;
}
constexpr ::StringW const& UnityOSC::OSCMessage::__cordl_internal_get__typeTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeTag;
}
constexpr void UnityOSC::OSCMessage::__cordl_internal_set__typeTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityOSC::OSCMessage::_ctor(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address);
}
inline void UnityOSC::OSCMessage::_ctor(::StringW  address, ::System::Object*  msgvalue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, msgvalue);
}
inline bool UnityOSC::OSCMessage::IsBundle()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityOSC::OSCMessage::Pack()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityOSC::OSCMessage* UnityOSC::OSCMessage::Unpack(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ByRef<int32_t>  start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                        "Unpack",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityOSC::OSCMessage*, false>(nullptr, ___internal_method, data, start);
}
template<typename T>
inline void UnityOSC::OSCMessage::Append(T  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityOSC::OSCMessage*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityOSC::OSCMessage* UnityOSC::OSCMessage::New_ctor(::StringW  address)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityOSC::OSCMessage*>(address));
}
inline ::UnityOSC::OSCMessage* UnityOSC::OSCMessage::New_ctor(::StringW  address, ::System::Object*  msgvalue)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityOSC::OSCMessage*>(address, msgvalue));
}
// Ctor Parameters []
constexpr ::UnityOSC::OSCMessage::OSCMessage()   {
}
