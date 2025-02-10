#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__ZipFile_def.hpp"
#include "System/IO/Compression/zzzz__CompressionLevel_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveMode_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchive_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipFile.Open
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchive* (*)(::StringW, ::System::IO::Compression::ZipArchiveMode)>(&::System::IO::Compression::ZipFile::Open)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b1a88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "Open",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.Open
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchive* (*)(::StringW, ::System::IO::Compression::ZipArchiveMode, ::System::Text::Encoding*)>(&::System::IO::Compression::ZipFile::Open)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2b1a894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "Open",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.CreateFromDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::Compression::ZipFile::CreateFromDirectory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b1aa54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "CreateFromDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.ExtractToDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::Compression::ZipFile::ExtractToDirectory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b1b2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.ExtractToDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Text::Encoding*)>(&::System::IO::Compression::ZipFile::ExtractToDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b1b2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.ExtractToDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Text::Encoding*, bool)>(&::System::IO::Compression::ZipFile::ExtractToDirectory)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2b1b2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.DoCreateFromDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>, bool, ::System::Text::Encoding*)>(&::System::IO::Compression::ZipFile::DoCreateFromDirectory)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x2b1aa64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "DoCreateFromDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::IO::Compression::CompressionLevel>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.EntryFromPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t, int32_t, ::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>, bool)>(&::System::IO::Compression::ZipFile::EntryFromPath)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2b1ba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "EntryFromPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.EnsureCapacity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>, int32_t)>(&::System::IO::Compression::ZipFile::EnsureCapacity)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2b1c478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "EnsureCapacity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFile.IsDirEmpty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::DirectoryInfo*)>(&::System::IO::Compression::ZipFile::IsDirEmpty)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2b1c204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "IsDirEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::DirectoryInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::Compression::ZipArchive* System::IO::Compression::ZipFile::Open(::StringW  archiveFileName, ::System::IO::Compression::ZipArchiveMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "Open",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchive*, false>(nullptr, ___internal_method, archiveFileName, mode);
}
inline ::System::IO::Compression::ZipArchive* System::IO::Compression::ZipFile::Open(::StringW  archiveFileName, ::System::IO::Compression::ZipArchiveMode  mode, ::System::Text::Encoding*  entryNameEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "Open",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchive*, false>(nullptr, ___internal_method, archiveFileName, mode, entryNameEncoding);
}
inline void System::IO::Compression::ZipFile::CreateFromDirectory(::StringW  sourceDirectoryName, ::StringW  destinationArchiveFileName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "CreateFromDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceDirectoryName, destinationArchiveFileName);
}
inline void System::IO::Compression::ZipFile::ExtractToDirectory(::StringW  sourceArchiveFileName, ::StringW  destinationDirectoryName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceArchiveFileName, destinationDirectoryName);
}
inline void System::IO::Compression::ZipFile::ExtractToDirectory(::StringW  sourceArchiveFileName, ::StringW  destinationDirectoryName, ::System::Text::Encoding*  entryNameEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceArchiveFileName, destinationDirectoryName, entryNameEncoding);
}
inline void System::IO::Compression::ZipFile::ExtractToDirectory(::StringW  sourceArchiveFileName, ::StringW  destinationDirectoryName, ::System::Text::Encoding*  entryNameEncoding, bool  overwrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceArchiveFileName, destinationDirectoryName, entryNameEncoding, overwrite);
}
inline void System::IO::Compression::ZipFile::DoCreateFromDirectory(::StringW  sourceDirectoryName, ::StringW  destinationArchiveFileName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  compressionLevel, bool  includeBaseDirectory, ::System::Text::Encoding*  entryNameEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "DoCreateFromDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::IO::Compression::CompressionLevel>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceDirectoryName, destinationArchiveFileName, compressionLevel, includeBaseDirectory, entryNameEncoding);
}
inline ::StringW System::IO::Compression::ZipFile::EntryFromPath(::StringW  entry, int32_t  offset, int32_t  length, ::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  buffer, bool  appendPathSeparator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "EntryFromPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, entry, offset, length, buffer, appendPathSeparator);
}
inline void System::IO::Compression::ZipFile::EnsureCapacity(::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  buffer, int32_t  min)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "EnsureCapacity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, min);
}
inline bool System::IO::Compression::ZipFile::IsDirEmpty(::System::IO::DirectoryInfo*  possiblyEmptyDir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFile*>::get(),
                        "IsDirEmpty",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::DirectoryInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, possiblyEmptyDir);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipFile::ZipFile()   {
}
