#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncVoipAttenuationValueList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2872460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList.GetNetSyncVoipAttenuationValueList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)()>(&::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x28724b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* (::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28724f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetNetSyncVoipAttenuationValueList()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                    53
                )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>::get(),
                    75
                )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList* Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList::MessageWithNetSyncVoipAttenuationValueList()   {
}
