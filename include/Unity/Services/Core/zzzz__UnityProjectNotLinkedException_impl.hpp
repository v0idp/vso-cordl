#pragma once
// IWYU pragma private; include "Unity/Services/Core/UnityProjectNotLinkedException.hpp"
#include "Unity/Services/Core/zzzz__ServicesInitializationException_impl.hpp"
#include "Unity/Services/Core/zzzz__UnityProjectNotLinkedException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::UnityProjectNotLinkedException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::UnityProjectNotLinkedException::*)(::StringW)>(&::Unity::Services::Core::UnityProjectNotLinkedException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e9b9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityProjectNotLinkedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::UnityProjectNotLinkedException::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::UnityProjectNotLinkedException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::Unity::Services::Core::UnityProjectNotLinkedException* Unity::Services::Core::UnityProjectNotLinkedException::New_ctor(::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::UnityProjectNotLinkedException*>(message));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::UnityProjectNotLinkedException::UnityProjectNotLinkedException()   {
}
