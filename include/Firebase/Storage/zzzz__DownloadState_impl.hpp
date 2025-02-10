#pragma once
// IWYU pragma private; include "Firebase/Storage/DownloadState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/zzzz__DownloadState_def.hpp"
#include "Firebase/Storage/Internal/zzzz__TransferState_def.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::DownloadState._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::DownloadState::*)(::Firebase::Storage::StorageReference*, int64_t)>(&::Firebase::Storage::DownloadState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x192a7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::DownloadState.get_BytesTransferred
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Storage::DownloadState::*)()>(&::Firebase::Storage::DownloadState::get_BytesTransferred)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x192d548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "get_BytesTransferred",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::DownloadState.get_TotalByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Storage::DownloadState::*)()>(&::Firebase::Storage::DownloadState::get_TotalByteCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x192d564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "get_TotalByteCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::DownloadState.get_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::Internal::TransferState* (::Firebase::Storage::DownloadState::*)()>(&::Firebase::Storage::DownloadState::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192d580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::DownloadState.set_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::DownloadState::*)(::Firebase::Storage::Internal::TransferState*)>(&::Firebase::Storage::DownloadState::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192d588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::TransferState*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::Internal::TransferState*& Firebase::Storage::DownloadState::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Firebase::Storage::Internal::TransferState* const& Firebase::Storage::DownloadState::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Firebase::Storage::DownloadState::__cordl_internal_set__State_k__BackingField(::Firebase::Storage::Internal::TransferState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____State_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::DownloadState::_ctor(::Firebase::Storage::StorageReference*  reference, int64_t  totalByteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reference, totalByteCount);
}
inline int64_t Firebase::Storage::DownloadState::get_BytesTransferred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "get_BytesTransferred",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Firebase::Storage::DownloadState::get_TotalByteCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "get_TotalByteCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Firebase::Storage::Internal::TransferState* Firebase::Storage::DownloadState::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::Internal::TransferState*, false>(this, ___internal_method);
}
inline void Firebase::Storage::DownloadState::set_State(::Firebase::Storage::Internal::TransferState*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::DownloadState*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::TransferState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Storage::DownloadState* Firebase::Storage::DownloadState::New_ctor(::Firebase::Storage::StorageReference*  reference, int64_t  totalByteCount)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::DownloadState*>(reference, totalByteCount));
}
// Ctor Parameters []
constexpr ::Firebase::Storage::DownloadState::DownloadState()   {
}
