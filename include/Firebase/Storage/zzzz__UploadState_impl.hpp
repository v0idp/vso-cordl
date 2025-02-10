#pragma once
// IWYU pragma private; include "Firebase/Storage/UploadState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/zzzz__UploadState_def.hpp"
#include "Firebase/Storage/Internal/zzzz__TransferState_def.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::UploadState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::UploadState::*)(::Firebase::Storage::StorageReference*, int64_t)>(&::Firebase::Storage::UploadState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x19298b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::UploadState.get_BytesTransferred
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Storage::UploadState::*)()>(&::Firebase::Storage::UploadState::get_BytesTransferred)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1929958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "get_BytesTransferred",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::UploadState.get_TotalByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Storage::UploadState::*)()>(&::Firebase::Storage::UploadState::get_TotalByteCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1929974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "get_TotalByteCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::UploadState.get_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::Internal::TransferState* (::Firebase::Storage::UploadState::*)()>(&::Firebase::Storage::UploadState::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1929990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::UploadState.set_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::UploadState::*)(::Firebase::Storage::Internal::TransferState*)>(&::Firebase::Storage::UploadState::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1929998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::TransferState*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::Internal::TransferState*& Firebase::Storage::UploadState::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Firebase::Storage::Internal::TransferState* const& Firebase::Storage::UploadState::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Firebase::Storage::UploadState::__cordl_internal_set__State_k__BackingField(::Firebase::Storage::Internal::TransferState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____State_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::UploadState::_ctor(::Firebase::Storage::StorageReference*  reference, int64_t  totalByteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reference, totalByteCount);
}
inline int64_t Firebase::Storage::UploadState::get_BytesTransferred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "get_BytesTransferred",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Firebase::Storage::UploadState::get_TotalByteCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "get_TotalByteCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Firebase::Storage::Internal::TransferState* Firebase::Storage::UploadState::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::Internal::TransferState*, false>(this, ___internal_method);
}
inline void Firebase::Storage::UploadState::set_State(::Firebase::Storage::Internal::TransferState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::UploadState*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::TransferState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Storage::UploadState* Firebase::Storage::UploadState::New_ctor(::Firebase::Storage::StorageReference*  reference, int64_t  totalByteCount)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::UploadState*>(reference, totalByteCount));
}
// Ctor Parameters []
constexpr ::Firebase::Storage::UploadState::UploadState()   {
}
