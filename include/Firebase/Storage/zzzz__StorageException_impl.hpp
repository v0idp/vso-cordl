#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Firebase/Storage/zzzz__StorageException_def.hpp"
#include "Firebase/Storage/zzzz__ErrorInternal_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::StorageException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageException::*)(int32_t, int32_t, ::StringW)>(&::Firebase::Storage::StorageException::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x192b988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageException.CreateFromException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageException* (*)(::System::Exception*)>(&::Firebase::Storage::StorageException::CreateFromException)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x192af9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "CreateFromException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageException.get_ErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Storage::StorageException::*)()>(&::Firebase::Storage::StorageException::get_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192bbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "get_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageException.set_ErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageException::*)(int32_t)>(&::Firebase::Storage::StorageException::set_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192bbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "set_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageException.set_HttpResultCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageException::*)(int32_t)>(&::Firebase::Storage::StorageException::set_HttpResultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192bbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "set_HttpResultCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageException.GetErrorMessageForCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::Firebase::Storage::StorageException::GetErrorMessageForCode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x192ba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "GetErrorMessageForCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Firebase::Storage::StorageException::__cordl_internal_get__ErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr int32_t const& Firebase::Storage::StorageException::__cordl_internal_get__ErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr void Firebase::Storage::StorageException::__cordl_internal_set__ErrorCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorCode_k__BackingField = value;
}
constexpr int32_t& Firebase::Storage::StorageException::__cordl_internal_get__HttpResultCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HttpResultCode_k__BackingField;
}
constexpr int32_t const& Firebase::Storage::StorageException::__cordl_internal_get__HttpResultCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HttpResultCode_k__BackingField;
}
constexpr void Firebase::Storage::StorageException::__cordl_internal_set__HttpResultCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HttpResultCode_k__BackingField = value;
}
inline void Firebase::Storage::StorageException::setStaticF_errorToStorageErrorAndHttpStatusCode(::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>*, "errorToStorageErrorAndHttpStatusCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>* Firebase::Storage::StorageException::getStaticF_errorToStorageErrorAndHttpStatusCode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Firebase::Storage::ErrorInternal,::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>*, "errorToStorageErrorAndHttpStatusCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get>();
}
inline void Firebase::Storage::StorageException::setStaticF_unknownError(::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*  value)  {
::cordl_internals::setStaticField<::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*, "unknownError", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get>(std::forward<::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*>(value));
}
inline ::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>* Firebase::Storage::StorageException::getStaticF_unknownError()  {
return ::cordl_internals::getStaticField<::System::Tuple_2<int32_t,::System::Net::HttpStatusCode>*, "unknownError", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get>();
}
inline void Firebase::Storage::StorageException::_ctor(int32_t  errorCode, int32_t  httpResultCode, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, httpResultCode, errorMessage);
}
inline ::Firebase::Storage::StorageException* Firebase::Storage::StorageException::CreateFromException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "CreateFromException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageException*, false>(nullptr, ___internal_method, exception);
}
inline int32_t Firebase::Storage::StorageException::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "get_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageException::set_ErrorCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "set_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Firebase::Storage::StorageException::set_HttpResultCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "set_HttpResultCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Firebase::Storage::StorageException::GetErrorMessageForCode(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageException*>::get(),
                        "GetErrorMessageForCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, errorCode);
}
inline ::Firebase::Storage::StorageException* Firebase::Storage::StorageException::New_ctor(int32_t  errorCode, int32_t  httpResultCode, ::StringW  errorMessage)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageException*>(errorCode, httpResultCode, errorMessage));
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageException::StorageException()   {
}
