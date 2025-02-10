#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileSystem_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystem.CopyDanglingSymlink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::CopyDanglingSymlink)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x26b297c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "CopyDanglingSymlink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.CopyFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::System::IO::FileSystem::CopyFile)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x26afe78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "CopyFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.LinkOrCopyFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::LinkOrCopyFile)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x26b2d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "LinkOrCopyFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.MoveFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::MoveFile)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26b1d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "MoveFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DeleteFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::DeleteFile)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x26b0414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "DeleteFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.CreateDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::CreateDirectory)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x26ada40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "CreateDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&::System::IO::FileSystem::RemoveDirectory)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26ae85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "RemoveDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectoryInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::DirectoryInfo*, bool, bool)>(&::System::IO::FileSystem::RemoveDirectoryInternal)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x26b2ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "RemoveDirectoryInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::DirectoryInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26ae1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "DirectoryExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::GlobalNamespace::Interop_ErrorInfo>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26b2fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "DirectoryExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Interop_ErrorInfo>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26b0784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "FileExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::ByRef<::GlobalNamespace::Interop_ErrorInfo>)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x26b2edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "FileExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Interop_ErrorInfo>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.ShouldIgnoreDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::ShouldIgnoreDirectory)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26b3754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "ShouldIgnoreDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetLastWriteTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (*)(::StringW)>(&::System::IO::FileSystem::GetLastWriteTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26b0af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "GetLastWriteTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.SetLastWriteTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::DateTimeOffset, bool)>(&::System::IO::FileSystem::SetLastWriteTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26b0984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "SetLastWriteTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool System::IO::FileSystem::CopyDanglingSymlink(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "CopyDanglingSymlink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::CopyFile(::StringW  sourceFullPath, ::StringW  destFullPath, bool  overwrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "CopyFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceFullPath, destFullPath, overwrite);
}
inline void System::IO::FileSystem::LinkOrCopyFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "LinkOrCopyFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::MoveFile(::StringW  sourceFullPath, ::StringW  destFullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "MoveFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::DeleteFile(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "DeleteFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::CreateDirectory(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "CreateDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::RemoveDirectory(::StringW  fullPath, bool  recursive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "RemoveDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullPath, recursive);
}
inline void System::IO::FileSystem::RemoveDirectoryInternal(::System::IO::DirectoryInfo*  directory, bool  recursive, bool  throwOnTopLevelDirectoryNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "RemoveDirectoryInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::DirectoryInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, directory, recursive, throwOnTopLevelDirectoryNotFound);
}
inline bool System::IO::FileSystem::DirectoryExists(::System::ReadOnlySpan_1<char16_t>  fullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "DirectoryExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::DirectoryExists(::System::ReadOnlySpan_1<char16_t>  fullPath, ::ByRef<::GlobalNamespace::Interop_ErrorInfo>  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "DirectoryExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Interop_ErrorInfo>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullPath, errorInfo);
}
inline bool System::IO::FileSystem::FileExists(::System::ReadOnlySpan_1<char16_t>  fullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "FileExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::FileExists(::System::ReadOnlySpan_1<char16_t>  fullPath, int32_t  fileType, ::ByRef<::GlobalNamespace::Interop_ErrorInfo>  errorInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "FileExists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Interop_ErrorInfo>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fullPath, fileType, errorInfo);
}
inline bool System::IO::FileSystem::ShouldIgnoreDirectory(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "ShouldIgnoreDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name);
}
inline ::System::DateTimeOffset System::IO::FileSystem::GetLastWriteTime(::StringW  fullPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "GetLastWriteTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset, false>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::SetLastWriteTime(::StringW  fullPath, ::System::DateTimeOffset  time, bool  asDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::FileSystem*>::get(),
                        "SetLastWriteTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullPath, time, asDirectory);
}
// Ctor Parameters []
constexpr ::System::IO::FileSystem::FileSystem()   {
}
