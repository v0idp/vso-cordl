#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchViewerUpdate.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCowatchViewerUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerUpdate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCowatchViewerUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchViewerUpdate::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x286d764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerUpdate.GetCowatchViewerUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CowatchViewerUpdate* (::Oculus::Platform::MessageWithCowatchViewerUpdate::*)()>(&::Oculus::Platform::MessageWithCowatchViewerUpdate::GetCowatchViewerUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2870cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerUpdate.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CowatchViewerUpdate* (::Oculus::Platform::MessageWithCowatchViewerUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchViewerUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2870d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithCowatchViewerUpdate::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::MessageWithCowatchViewerUpdate::GetCowatchViewerUpdate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerUpdate*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::MessageWithCowatchViewerUpdate::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerUpdate*>::get(),
                    75
                )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerUpdate*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithCowatchViewerUpdate* Oculus::Platform::MessageWithCowatchViewerUpdate::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCowatchViewerUpdate::MessageWithCowatchViewerUpdate()   {
}
