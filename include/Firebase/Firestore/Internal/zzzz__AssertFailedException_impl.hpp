#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/AssertFailedException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Firebase/Firestore/Internal/zzzz__AssertFailedException_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::Internal::AssertFailedException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::Internal::AssertFailedException::*)(::StringW)>(&::Firebase::Firestore::Internal::AssertFailedException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x190dd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::AssertFailedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Firestore::Internal::AssertFailedException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::Internal::AssertFailedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Firebase::Firestore::Internal::AssertFailedException* Firebase::Firestore::Internal::AssertFailedException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::Internal::AssertFailedException*>(message));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Internal::AssertFailedException::AssertFailedException()   {
}
