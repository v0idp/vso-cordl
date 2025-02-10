#pragma once
// IWYU pragma private; include "OggVorbis/NativeErrorException.hpp"
#include "OggVorbis/zzzz__NativeErrorCode_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "OggVorbis/zzzz__NativeErrorException_def.hpp"
#include "OggVorbis/zzzz__NativeErrorCode_def.hpp"
//  Writing Method size for method: ::OggVorbis::NativeErrorException.get_NativeErrorCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbis::NativeErrorCode (::OggVorbis::NativeErrorException::*)()>(&::OggVorbis::NativeErrorException::get_NativeErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x319c8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                        "get_NativeErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OggVorbis::NativeErrorException._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OggVorbis::NativeErrorException::*)(::OggVorbis::NativeErrorCode)>(&::OggVorbis::NativeErrorException::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x319c8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OggVorbis::NativeErrorCode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OggVorbis::NativeErrorException.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OggVorbis::NativeErrorException::*)()>(&::OggVorbis::NativeErrorException::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x319c9b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OggVorbis::NativeErrorException.ThrowExceptionIfNecessary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::OggVorbis::NativeErrorException::ThrowExceptionIfNecessary)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x319ca10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                        "ThrowExceptionIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::OggVorbis::NativeErrorCode& OggVorbis::NativeErrorException::__cordl_internal_get__NativeErrorCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NativeErrorCode_k__BackingField;
}
constexpr ::OggVorbis::NativeErrorCode const& OggVorbis::NativeErrorException::__cordl_internal_get__NativeErrorCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NativeErrorCode_k__BackingField;
}
constexpr void OggVorbis::NativeErrorException::__cordl_internal_set__NativeErrorCode_k__BackingField(::OggVorbis::NativeErrorCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NativeErrorCode_k__BackingField = value;
}
inline ::OggVorbis::NativeErrorCode OggVorbis::NativeErrorException::get_NativeErrorCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                        "get_NativeErrorCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::OggVorbis::NativeErrorCode, false>(this, ___internal_method);
}
inline void OggVorbis::NativeErrorException::_ctor(::OggVorbis::NativeErrorCode  nativeErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OggVorbis::NativeErrorCode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativeErrorCode);
}
inline ::StringW OggVorbis::NativeErrorException::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OggVorbis::NativeErrorException::ThrowExceptionIfNecessary(int32_t  returnValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OggVorbis::NativeErrorException*>::get(),
                        "ThrowExceptionIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, returnValue);
}
inline ::OggVorbis::NativeErrorException* OggVorbis::NativeErrorException::New_ctor(::OggVorbis::NativeErrorCode  nativeErrorCode)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OggVorbis::NativeErrorException*>(nativeErrorCode));
}
// Ctor Parameters []
constexpr ::OggVorbis::NativeErrorException::NativeErrorException()   {
}
