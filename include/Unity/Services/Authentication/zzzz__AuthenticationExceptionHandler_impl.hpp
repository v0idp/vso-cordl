#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/AuthenticationExceptionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationExceptionHandler_impl.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationExceptionHandler_def.hpp"
#include "Unity/Services/Authentication/zzzz__AuthenticationState_def.hpp"
#include "Unity/Services/Authentication/zzzz__IAuthenticationMetrics_def.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequestException_def.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationExceptionHandler.get_Metrics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::IAuthenticationMetrics* (::Unity::Services::Authentication::AuthenticationExceptionHandler::*)()>(&::Unity::Services::Authentication::AuthenticationExceptionHandler::get_Metrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9708c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "get_Metrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationExceptionHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::AuthenticationExceptionHandler::*)(::Unity::Services::Authentication::IAuthenticationMetrics*)>(&::Unity::Services::Authentication::AuthenticationExceptionHandler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e935c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationMetrics*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationExceptionHandler.BuildClientInvalidStateException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (::Unity::Services::Authentication::AuthenticationExceptionHandler::*)(::Unity::Services::Authentication::AuthenticationState)>(&::Unity::Services::Authentication::AuthenticationExceptionHandler::BuildClientInvalidStateException)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2e97094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "BuildClientInvalidStateException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationExceptionHandler.BuildClientSessionTokenNotExistsException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (::Unity::Services::Authentication::AuthenticationExceptionHandler::*)()>(&::Unity::Services::Authentication::AuthenticationExceptionHandler::BuildClientSessionTokenNotExistsException)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e971e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "BuildClientSessionTokenNotExistsException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationExceptionHandler.ConvertException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::RequestFailedException* (::Unity::Services::Authentication::AuthenticationExceptionHandler::*)(::Unity::Services::Authentication::WebRequestException*)>(&::Unity::Services::Authentication::AuthenticationExceptionHandler::ConvertException)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2e972dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "ConvertException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::WebRequestException*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::AuthenticationExceptionHandler.MapErrorCodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Authentication::AuthenticationExceptionHandler::*)(::StringW)>(&::Unity::Services::Authentication::AuthenticationExceptionHandler::MapErrorCodes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2e97728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "MapErrorCodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::IAuthenticationMetrics*& Unity::Services::Authentication::AuthenticationExceptionHandler::__cordl_internal_get__Metrics_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Metrics_k__BackingField;
}
constexpr ::Unity::Services::Authentication::IAuthenticationMetrics* const& Unity::Services::Authentication::AuthenticationExceptionHandler::__cordl_internal_get__Metrics_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Metrics_k__BackingField;
}
constexpr void Unity::Services::Authentication::AuthenticationExceptionHandler::__cordl_internal_set__Metrics_k__BackingField(::Unity::Services::Authentication::IAuthenticationMetrics*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Metrics_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Authentication::IAuthenticationMetrics* Unity::Services::Authentication::AuthenticationExceptionHandler::get_Metrics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "get_Metrics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::IAuthenticationMetrics*, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::AuthenticationExceptionHandler::_ctor(::Unity::Services::Authentication::IAuthenticationMetrics*  metrics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::IAuthenticationMetrics*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metrics);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::AuthenticationExceptionHandler::BuildClientInvalidStateException(::Unity::Services::Authentication::AuthenticationState  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "BuildClientInvalidStateException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::AuthenticationState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(this, ___internal_method, state);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::AuthenticationExceptionHandler::BuildClientSessionTokenNotExistsException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "BuildClientSessionTokenNotExistsException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::RequestFailedException* Unity::Services::Authentication::AuthenticationExceptionHandler::ConvertException(::Unity::Services::Authentication::WebRequestException*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "ConvertException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::WebRequestException*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::RequestFailedException*, false>(this, ___internal_method, exception);
}
inline int32_t Unity::Services::Authentication::AuthenticationExceptionHandler::MapErrorCodes(::StringW  serverErrorTitle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::AuthenticationExceptionHandler*>::get(),
                        "MapErrorCodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, serverErrorTitle);
}
inline ::Unity::Services::Authentication::AuthenticationExceptionHandler* Unity::Services::Authentication::AuthenticationExceptionHandler::New_ctor(::Unity::Services::Authentication::IAuthenticationMetrics*  metrics)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::AuthenticationExceptionHandler*>(metrics));
}
/// @brief Convert operator to "::Unity::Services::Authentication::IAuthenticationExceptionHandler"
constexpr  Unity::Services::Authentication::AuthenticationExceptionHandler::operator ::Unity::Services::Authentication::IAuthenticationExceptionHandler*() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::IAuthenticationExceptionHandler"
constexpr ::Unity::Services::Authentication::IAuthenticationExceptionHandler* Unity::Services::Authentication::AuthenticationExceptionHandler::i___Unity__Services__Authentication__IAuthenticationExceptionHandler() noexcept {
return static_cast<::Unity::Services::Authentication::IAuthenticationExceptionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::AuthenticationExceptionHandler::AuthenticationExceptionHandler()   {
}
