#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchViewerList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCowatchViewerList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCowatchViewerList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchViewerList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x286d70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerList.GetCowatchViewerList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CowatchViewerList* (::Oculus::Platform::MessageWithCowatchViewerList::*)()>(&::Oculus::Platform::MessageWithCowatchViewerList::GetCowatchViewerList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2870c20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerList.GetDataFromMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CowatchViewerList* (::Oculus::Platform::MessageWithCowatchViewerList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchViewerList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2870c5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithCowatchViewerList::_ctor(::System::IntPtr  c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CowatchViewerList* Oculus::Platform::MessageWithCowatchViewerList::GetCowatchViewerList()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchViewerList* Oculus::Platform::MessageWithCowatchViewerList::GetDataFromMessage(::System::IntPtr  c_message)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCowatchViewerList*>::get(),
                    75
                )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerList*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithCowatchViewerList* Oculus::Platform::MessageWithCowatchViewerList::New_ctor(::System::IntPtr  c_message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCowatchViewerList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCowatchViewerList::MessageWithCowatchViewerList()   {
}
