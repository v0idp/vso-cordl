#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DependencyTreePackageHashException.hpp"
#include "Unity/Services/Core/Internal/zzzz__HashException_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTreePackageHashException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreePackageHashException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreePackageHashException::*)(int32_t, ::StringW)>(&::Unity::Services::Core::Internal::DependencyTreePackageHashException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ea1e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreePackageHashException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreePackageHashException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreePackageHashException::*)(int32_t, ::StringW, ::System::Exception*)>(&::Unity::Services::Core::Internal::DependencyTreePackageHashException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ea1d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreePackageHashException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::DependencyTreePackageHashException::_ctor(int32_t  hash, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreePackageHashException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, message);
}
inline void Unity::Services::Core::Internal::DependencyTreePackageHashException::_ctor(int32_t  hash, ::StringW  message, ::System::Exception*  inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreePackageHashException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash, message, inner);
}
inline ::Unity::Services::Core::Internal::DependencyTreePackageHashException* Unity::Services::Core::Internal::DependencyTreePackageHashException::New_ctor(int32_t  hash, ::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTreePackageHashException*>(hash, message));
}
inline ::Unity::Services::Core::Internal::DependencyTreePackageHashException* Unity::Services::Core::Internal::DependencyTreePackageHashException::New_ctor(int32_t  hash, ::StringW  message, ::System::Exception*  inner)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTreePackageHashException*>(hash, message, inner));
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::DependencyTreePackageHashException::DependencyTreePackageHashException()   {
}
