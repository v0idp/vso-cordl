#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationException.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationException::*)(int32_t, ::StringW, ::System::Exception*)>(&::Unity::Services::Authentication::AuthenticationException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e97084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationException.Create
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (*)(int32_t, ::StringW, ::System::Exception*)>(&::Unity::Services::Authentication::AuthenticationException::Create)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2e94814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationException*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Authentication::AuthenticationException::_ctor(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message, innerException);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::AuthenticationException::Create(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationException*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(nullptr, ___internal_method, errorCode, message, innerException);
}
inline ::Unity::Services::Authentication::AuthenticationException* Unity::Services::Authentication::AuthenticationException::New_ctor(int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationException*>(errorCode, message, innerException));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationException::AuthenticationException()   {
}
