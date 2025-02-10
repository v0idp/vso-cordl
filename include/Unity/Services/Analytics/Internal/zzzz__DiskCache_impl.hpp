#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/DiskCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IDiskCache_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__DiskCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IFileSystemCalls_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::DiskCache._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::DiskCache::*)(::Unity::Services::Analytics::Internal::IFileSystemCalls*)>(&::Unity::Services::Analytics::Internal::DiskCache::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e8a86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::DiskCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IFileSystemCalls*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::DiskCache.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::DiskCache::*)(::System::Collections::Generic::List_1<int32_t>*, ::System::IO::Stream*)>(&::Unity::Services::Analytics::Internal::DiskCache::Write)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x2e91f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::DiskCache*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::DiskCache.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::DiskCache::*)()>(&::Unity::Services::Analytics::Internal::DiskCache::Clear)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2e92544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::DiskCache*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_get_k_CacheFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CacheFilePath;
}
constexpr ::StringW const& Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_get_k_CacheFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CacheFilePath;
}
constexpr void Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_set_k_CacheFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_CacheFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IFileSystemCalls*& Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_get_k_SystemCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_SystemCalls;
}
constexpr ::Unity::Services::Analytics::Internal::IFileSystemCalls* const& Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_get_k_SystemCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_SystemCalls;
}
constexpr void Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_set_k_SystemCalls(::Unity::Services::Analytics::Internal::IFileSystemCalls*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_SystemCalls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_get_k_CacheFileMaximumSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CacheFileMaximumSize;
}
constexpr int64_t const& Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_get_k_CacheFileMaximumSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CacheFileMaximumSize;
}
constexpr void Unity::Services::Analytics::Internal::DiskCache::__cordl_internal_set_k_CacheFileMaximumSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k_CacheFileMaximumSize = value;
}
inline void Unity::Services::Analytics::Internal::DiskCache::_ctor(::Unity::Services::Analytics::Internal::IFileSystemCalls*  systemCalls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::DiskCache*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IFileSystemCalls*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, systemCalls);
}
inline void Unity::Services::Analytics::Internal::DiskCache::Write(::System::Collections::Generic::List_1<int32_t>*  eventEndIndices, ::System::IO::Stream*  payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::DiskCache*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventEndIndices, payload);
}
inline void Unity::Services::Analytics::Internal::DiskCache::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::DiskCache*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::DiskCache* Unity::Services::Analytics::Internal::DiskCache::New_ctor(::Unity::Services::Analytics::Internal::IFileSystemCalls*  systemCalls)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::DiskCache*>(systemCalls));
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IDiskCache"
constexpr  Unity::Services::Analytics::Internal::DiskCache::operator ::Unity::Services::Analytics::Internal::IDiskCache*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IDiskCache*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IDiskCache"
constexpr ::Unity::Services::Analytics::Internal::IDiskCache* Unity::Services::Analytics::Internal::DiskCache::i___Unity__Services__Analytics__Internal__IDiskCache() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IDiskCache*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::DiskCache::DiskCache()   {
}
