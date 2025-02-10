#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CircularDependencyException.hpp"
#include "Unity/Services/Core/zzzz__ServicesInitializationException_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__CircularDependencyException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::CircularDependencyException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CircularDependencyException::*)()>(&::Unity::Services::Core::Internal::CircularDependencyException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9dccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CircularDependencyException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::CircularDependencyException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CircularDependencyException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CircularDependencyException* Unity::Services::Core::Internal::CircularDependencyException::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::CircularDependencyException*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CircularDependencyException::CircularDependencyException()   {
}
