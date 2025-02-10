#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipFileExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__ZipFileExtensions_def.hpp"
#include "System/IO/Compression/zzzz__CompressionLevel_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveEntry_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchive_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipFileExtensions.ExtractToDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Compression::ZipArchive*, ::StringW, bool)>(&::System::IO::Compression::ZipFileExtensions::ExtractToDirectory)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x2b1b490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFileExtensions*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchive*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFileExtensions.DoCreateEntryFromFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (*)(::System::IO::Compression::ZipArchive*, ::StringW, ::StringW, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>)>(&::System::IO::Compression::ZipFileExtensions::DoCreateEntryFromFile)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x2b1bcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFileExtensions*>::get(),
                        "DoCreateEntryFromFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchive*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::IO::Compression::CompressionLevel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipFileExtensions.ExtractToFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Compression::ZipArchiveEntry*, ::StringW, bool)>(&::System::IO::Compression::ZipFileExtensions::ExtractToFile)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x2b1c5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFileExtensions*>::get(),
                        "ExtractToFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::ZipFileExtensions::ExtractToDirectory(::System::IO::Compression::ZipArchive*  source, ::StringW  destinationDirectoryName, bool  overwrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFileExtensions*>::get(),
                        "ExtractToDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchive*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destinationDirectoryName, overwrite);
}
inline ::System::IO::Compression::ZipArchiveEntry* System::IO::Compression::ZipFileExtensions::DoCreateEntryFromFile(::System::IO::Compression::ZipArchive*  destination, ::StringW  sourceFileName, ::StringW  entryName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFileExtensions*>::get(),
                        "DoCreateEntryFromFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchive*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::IO::Compression::CompressionLevel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchiveEntry*, false>(nullptr, ___internal_method, destination, sourceFileName, entryName, compressionLevel);
}
inline void System::IO::Compression::ZipFileExtensions::ExtractToFile(::System::IO::Compression::ZipArchiveEntry*  source, ::StringW  destinationFileName, bool  overwrite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipFileExtensions*>::get(),
                        "ExtractToFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destinationFileName, overwrite);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipFileExtensions::ZipFileExtensions()   {
}
