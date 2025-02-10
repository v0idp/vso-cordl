#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreException.hpp"
#include "Firebase/Firestore/zzzz__FirestoreError_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Firebase/Firestore/zzzz__FirestoreException_def.hpp"
#include "Firebase/Firestore/zzzz__FirestoreError_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::FirestoreException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::FirestoreException::*)(::Firebase::Firestore::FirestoreError, ::StringW)>(&::Firebase::Firestore::FirestoreException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1903e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FirestoreException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::FirestoreException::*)(int32_t, ::StringW)>(&::Firebase::Firestore::FirestoreException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x190b8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::FirestoreException.set_ErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::FirestoreException::*)(::Firebase::Firestore::FirestoreError)>(&::Firebase::Firestore::FirestoreException::set_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreException*>::get(),
                        "set_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::FirestoreError& Firebase::Firestore::FirestoreException::__cordl_internal_get__ErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr ::Firebase::Firestore::FirestoreError const& Firebase::Firestore::FirestoreException::__cordl_internal_get__ErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr void Firebase::Firestore::FirestoreException::__cordl_internal_set__ErrorCode_k__BackingField(::Firebase::Firestore::FirestoreError  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorCode_k__BackingField = value;
}
inline void Firebase::Firestore::FirestoreException::_ctor(::Firebase::Firestore::FirestoreError  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message);
}
inline void Firebase::Firestore::FirestoreException::_ctor(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message);
}
inline void Firebase::Firestore::FirestoreException::set_ErrorCode(::Firebase::Firestore::FirestoreError  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreException*>::get(),
                        "set_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreError>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Firestore::FirestoreException* Firebase::Firestore::FirestoreException::New_ctor(::Firebase::Firestore::FirestoreError  errorCode, ::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::FirestoreException*>(errorCode, message));
}
inline ::Firebase::Firestore::FirestoreException* Firebase::Firestore::FirestoreException::New_ctor(int32_t  errorCode, ::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::FirestoreException*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FirestoreException::FirestoreException()   {
}
