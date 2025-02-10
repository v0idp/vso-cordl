#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DependencyTreeComponentHashException.hpp"
#include "Unity/Services/Core/Internal/zzzz__HashException_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTreeComponentHashException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeComponentHashException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeComponentHashException::*)(int32_t, ::StringW)>(&::Unity::Services::Core::Internal::DependencyTreeComponentHashException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ea1e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeComponentHashException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::DependencyTreeComponentHashException::_ctor(int32_t  hash, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeComponentHashException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, message);
}
inline ::Unity::Services::Core::Internal::DependencyTreeComponentHashException* Unity::Services::Core::Internal::DependencyTreeComponentHashException::New_ctor(int32_t  hash, ::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTreeComponentHashException*>(hash, message));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::DependencyTreeComponentHashException::DependencyTreeComponentHashException()   {
}
