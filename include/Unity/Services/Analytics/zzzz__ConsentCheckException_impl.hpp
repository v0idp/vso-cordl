#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/ConsentCheckException.hpp"
#include "Unity/Services/Analytics/zzzz__ConsentCheckExceptionReason_impl.hpp"
#include "Unity/Services/Core/zzzz__RequestFailedException_impl.hpp"
#include "Unity/Services/Analytics/zzzz__ConsentCheckException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Analytics/zzzz__ConsentCheckExceptionReason_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::ConsentCheckException.get_Reason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Analytics::ConsentCheckExceptionReason (::Unity::Services::Analytics::ConsentCheckException::*)()>(&::Unity::Services::Analytics::ConsentCheckException::get_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8eed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ConsentCheckException*>::get(),
                        "get_Reason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::ConsentCheckException.set_Reason
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::ConsentCheckException::*)(::Unity::Services::Analytics::ConsentCheckExceptionReason)>(&::Unity::Services::Analytics::ConsentCheckException::set_Reason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8eee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ConsentCheckException*>::get(),
                        "set_Reason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ConsentCheckExceptionReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::ConsentCheckException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::ConsentCheckException::*)(::Unity::Services::Analytics::ConsentCheckExceptionReason, int32_t, ::StringW, ::System::Exception*)>(&::Unity::Services::Analytics::ConsentCheckException::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e8eee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ConsentCheckException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ConsentCheckExceptionReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason& Unity::Services::Analytics::ConsentCheckException::__cordl_internal_get__Reason_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reason_k__BackingField;
}
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason const& Unity::Services::Analytics::ConsentCheckException::__cordl_internal_get__Reason_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reason_k__BackingField;
}
constexpr void Unity::Services::Analytics::ConsentCheckException::__cordl_internal_set__Reason_k__BackingField(::Unity::Services::Analytics::ConsentCheckExceptionReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reason_k__BackingField = value;
}
inline ::Unity::Services::Analytics::ConsentCheckExceptionReason Unity::Services::Analytics::ConsentCheckException::get_Reason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ConsentCheckException*>::get(),
                        "get_Reason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Analytics::ConsentCheckExceptionReason, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::ConsentCheckException::set_Reason(::Unity::Services::Analytics::ConsentCheckExceptionReason  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ConsentCheckException*>::get(),
                        "set_Reason",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ConsentCheckExceptionReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Analytics::ConsentCheckException::_ctor(::Unity::Services::Analytics::ConsentCheckExceptionReason  reason, int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::ConsentCheckException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ConsentCheckExceptionReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason, errorCode, message, innerException);
}
inline ::Unity::Services::Analytics::ConsentCheckException* Unity::Services::Analytics::ConsentCheckException::New_ctor(::Unity::Services::Analytics::ConsentCheckExceptionReason  reason, int32_t  errorCode, ::StringW  message, ::System::Exception*  innerException)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::ConsentCheckException*>(reason, errorCode, message, innerException));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::ConsentCheckException::ConsentCheckException()   {
}
