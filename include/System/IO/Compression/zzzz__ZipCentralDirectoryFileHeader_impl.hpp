#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipCentralDirectoryFileHeader.hpp"
#include "System/IO/Compression/zzzz__ZipCentralDirectoryFileHeader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/Compression/zzzz__ZipGenericExtraField_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipCentralDirectoryFileHeader.TryReadBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, bool, ::ByRef<::System::IO::Compression::ZipCentralDirectoryFileHeader>)>(&::System::IO::Compression::ZipCentralDirectoryFileHeader::TryReadBlock)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x2b12b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipCentralDirectoryFileHeader>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::ZipCentralDirectoryFileHeader>>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool System::IO::Compression::ZipCentralDirectoryFileHeader::TryReadBlock(::System::IO::BinaryReader*  reader, bool  saveExtraFieldsAndComments, ::ByRef<::System::IO::Compression::ZipCentralDirectoryFileHeader>  header)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipCentralDirectoryFileHeader>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::ZipCentralDirectoryFileHeader>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, saveExtraFieldsAndComments, header);
}
// Ctor Parameters [CppParam { name: "VersionMadeByCompatibility", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VersionMadeBySpecification", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VersionNeededToExtract", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GeneralPurposeBitFlag", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompressionMethod", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastModified", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Crc32", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CompressedSize", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UncompressedSize", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FilenameLength", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ExtraFieldLength", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileCommentLength", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DiskNumberStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InternalFileAttributes", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ExternalFileAttributes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RelativeOffsetOfLocalHeader", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Filename", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileComment", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ExtraFields", ty: "::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::ZipCentralDirectoryFileHeader::ZipCentralDirectoryFileHeader(uint8_t  VersionMadeByCompatibility, uint8_t  VersionMadeBySpecification, uint16_t  VersionNeededToExtract, uint16_t  GeneralPurposeBitFlag, uint16_t  CompressionMethod, uint32_t  LastModified, uint32_t  Crc32, int64_t  CompressedSize, int64_t  UncompressedSize, uint16_t  FilenameLength, uint16_t  ExtraFieldLength, uint16_t  FileCommentLength, int32_t  DiskNumberStart, uint16_t  InternalFileAttributes, uint32_t  ExternalFileAttributes, int64_t  RelativeOffsetOfLocalHeader, ::ArrayW<uint8_t,::Array<uint8_t>*>  Filename, ::ArrayW<uint8_t,::Array<uint8_t>*>  FileComment, ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  ExtraFields) noexcept  {
this->VersionMadeByCompatibility = VersionMadeByCompatibility;
this->VersionMadeBySpecification = VersionMadeBySpecification;
this->VersionNeededToExtract = VersionNeededToExtract;
this->GeneralPurposeBitFlag = GeneralPurposeBitFlag;
this->CompressionMethod = CompressionMethod;
this->LastModified = LastModified;
this->Crc32 = Crc32;
this->CompressedSize = CompressedSize;
this->UncompressedSize = UncompressedSize;
this->FilenameLength = FilenameLength;
this->ExtraFieldLength = ExtraFieldLength;
this->FileCommentLength = FileCommentLength;
this->DiskNumberStart = DiskNumberStart;
this->InternalFileAttributes = InternalFileAttributes;
this->ExternalFileAttributes = ExternalFileAttributes;
this->RelativeOffsetOfLocalHeader = RelativeOffsetOfLocalHeader;
this->Filename = Filename;
this->FileComment = FileComment;
this->ExtraFields = ExtraFields;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipCentralDirectoryFileHeader::ZipCentralDirectoryFileHeader()   {
}
