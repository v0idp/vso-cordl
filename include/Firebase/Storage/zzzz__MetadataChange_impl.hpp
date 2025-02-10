#pragma once
// IWYU pragma private; include "Firebase/Storage/MetadataChange.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/zzzz__MetadataChange_def.hpp"
#include "Firebase/Storage/zzzz__StorageMetadata_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::MetadataChange._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::MetadataChange::*)()>(&::Firebase::Storage::MetadataChange::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x192c0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::MetadataChange.Build
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageMetadata* (::Firebase::Storage::MetadataChange::*)()>(&::Firebase::Storage::MetadataChange::Build)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x192c110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::MetadataChange.Build
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageMetadata* (*)(::Firebase::Storage::MetadataChange*)>(&::Firebase::Storage::MetadataChange::Build)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x192c028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataChange*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::MetadataChange.set_ContentType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::MetadataChange::*)(::StringW)>(&::Firebase::Storage::MetadataChange::set_ContentType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x192c16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        "set_ContentType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::StorageMetadata*& Firebase::Storage::MetadataChange::__cordl_internal_get_metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metadata;
}
constexpr ::Firebase::Storage::StorageMetadata* const& Firebase::Storage::MetadataChange::__cordl_internal_get_metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metadata;
}
constexpr void Firebase::Storage::MetadataChange::__cordl_internal_set_metadata(::Firebase::Storage::StorageMetadata*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___metadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::MetadataChange::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageMetadata* Firebase::Storage::MetadataChange::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageMetadata*, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageMetadata* Firebase::Storage::MetadataChange::Build(::Firebase::Storage::MetadataChange*  metadataChange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        "Build",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataChange*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageMetadata*, false>(nullptr, ___internal_method, metadataChange);
}
inline void Firebase::Storage::MetadataChange::set_ContentType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::MetadataChange*>::get(),
                        "set_ContentType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Storage::MetadataChange* Firebase::Storage::MetadataChange::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::MetadataChange*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::MetadataChange::MetadataChange()   {
}
