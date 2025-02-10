#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/FileSystemCalls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IFileSystemCalls_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__FileSystemCalls_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::FileSystemCalls.CanAccessFileSystem
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::FileSystemCalls::*)()>(&::Unity::Services::Analytics::Internal::FileSystemCalls::CanAccessFileSystem)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2e91e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "CanAccessFileSystem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::FileSystemCalls.FileExists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::FileSystemCalls::*)(::StringW)>(&::Unity::Services::Analytics::Internal::FileSystemCalls::FileExists)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e91f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "FileExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::FileSystemCalls.DeleteFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::FileSystemCalls::*)(::StringW)>(&::Unity::Services::Analytics::Internal::FileSystemCalls::DeleteFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e91f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "DeleteFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::FileSystemCalls.OpenFileForWriting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Unity::Services::Analytics::Internal::FileSystemCalls::*)(::StringW)>(&::Unity::Services::Analytics::Internal::FileSystemCalls::OpenFileForWriting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e91f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "OpenFileForWriting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::FileSystemCalls._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::FileSystemCalls::*)()>(&::Unity::Services::Analytics::Internal::FileSystemCalls::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8a864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline bool Unity::Services::Analytics::Internal::FileSystemCalls::CanAccessFileSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "CanAccessFileSystem",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Analytics::Internal::FileSystemCalls::FileExists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "FileExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path);
}
inline void Unity::Services::Analytics::Internal::FileSystemCalls::DeleteFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "DeleteFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline ::System::IO::Stream* Unity::Services::Analytics::Internal::FileSystemCalls::OpenFileForWriting(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        "OpenFileForWriting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, path);
}
inline void Unity::Services::Analytics::Internal::FileSystemCalls::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::FileSystemCalls*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::FileSystemCalls* Unity::Services::Analytics::Internal::FileSystemCalls::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::FileSystemCalls*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IFileSystemCalls"
constexpr  Unity::Services::Analytics::Internal::FileSystemCalls::operator ::Unity::Services::Analytics::Internal::IFileSystemCalls*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IFileSystemCalls*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IFileSystemCalls"
constexpr ::Unity::Services::Analytics::Internal::IFileSystemCalls* Unity::Services::Analytics::Internal::FileSystemCalls::i___Unity__Services__Analytics__Internal__IFileSystemCalls() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IFileSystemCalls*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::FileSystemCalls::FileSystemCalls()   {
}
