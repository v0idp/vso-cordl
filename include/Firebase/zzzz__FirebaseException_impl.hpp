#pragma once
// IWYU pragma private; include "Firebase/FirebaseException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Firebase/zzzz__FirebaseException_def.hpp"
//  Writing Method size for method: ::Firebase::FirebaseException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::FirebaseException::*)(int32_t, ::StringW)>(&::Firebase::FirebaseException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x18f4b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FirebaseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FirebaseException.get_ErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::FirebaseException::*)()>(&::Firebase::FirebaseException::get_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18f6bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FirebaseException*>::get(),
                        "get_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::FirebaseException.set_ErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::FirebaseException::*)(int32_t)>(&::Firebase::FirebaseException::set_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18f6be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FirebaseException*>::get(),
                        "set_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Firebase::FirebaseException::__cordl_internal_get__ErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr int32_t const& Firebase::FirebaseException::__cordl_internal_get__ErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorCode_k__BackingField;
}
constexpr void Firebase::FirebaseException::__cordl_internal_set__ErrorCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorCode_k__BackingField = value;
}
inline void Firebase::FirebaseException::_ctor(int32_t  errorCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FirebaseException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message);
}
inline int32_t Firebase::FirebaseException::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FirebaseException*>::get(),
                        "get_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Firebase::FirebaseException::set_ErrorCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::FirebaseException*>::get(),
                        "set_ErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::FirebaseException* Firebase::FirebaseException::New_ctor(int32_t  errorCode, ::StringW  message)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::FirebaseException*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::Firebase::FirebaseException::FirebaseException()   {
}
