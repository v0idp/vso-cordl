#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipEndOfCentralDirectoryBlock.hpp"
#include "System/IO/Compression/zzzz__ZipEndOfCentralDirectoryBlock_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipEndOfCentralDirectoryBlock.WriteBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, int64_t, int64_t, int64_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::IO::Compression::ZipEndOfCentralDirectoryBlock::WriteBlock)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2b1413c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipEndOfCentralDirectoryBlock.TryReadBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, ::ByRef<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>)>(&::System::IO::Compression::ZipEndOfCentralDirectoryBlock::TryReadBlock)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2b13350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::IO::Compression::ZipEndOfCentralDirectoryBlock::WriteBlock(::System::IO::Stream*  stream, int64_t  numberOfEntries, int64_t  startOfCentralDirectory, int64_t  sizeOfCentralDirectory, ::ArrayW<uint8_t,::Array<uint8_t>*>  archiveComment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream, numberOfEntries, startOfCentralDirectory, sizeOfCentralDirectory, archiveComment);
}
inline bool System::IO::Compression::ZipEndOfCentralDirectoryBlock::TryReadBlock(::System::IO::BinaryReader*  reader, ::ByRef<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>  eocdBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::ZipEndOfCentralDirectoryBlock>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, eocdBlock);
}
// Ctor Parameters [CppParam { name: "Signature", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfThisDisk", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfTheDiskWithTheStartOfTheCentralDirectory", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfEntriesInTheCentralDirectoryOnThisDisk", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfEntriesInTheCentralDirectory", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SizeOfCentralDirectory", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ArchiveComment", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::ZipEndOfCentralDirectoryBlock::ZipEndOfCentralDirectoryBlock(uint32_t  Signature, uint16_t  NumberOfThisDisk, uint16_t  NumberOfTheDiskWithTheStartOfTheCentralDirectory, uint16_t  NumberOfEntriesInTheCentralDirectoryOnThisDisk, uint16_t  NumberOfEntriesInTheCentralDirectory, uint32_t  SizeOfCentralDirectory, uint32_t  OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber, ::ArrayW<uint8_t,::Array<uint8_t>*>  ArchiveComment) noexcept  {
this->Signature = Signature;
this->NumberOfThisDisk = NumberOfThisDisk;
this->NumberOfTheDiskWithTheStartOfTheCentralDirectory = NumberOfTheDiskWithTheStartOfTheCentralDirectory;
this->NumberOfEntriesInTheCentralDirectoryOnThisDisk = NumberOfEntriesInTheCentralDirectoryOnThisDisk;
this->NumberOfEntriesInTheCentralDirectory = NumberOfEntriesInTheCentralDirectory;
this->SizeOfCentralDirectory = SizeOfCentralDirectory;
this->OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
this->ArchiveComment = ArchiveComment;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipEndOfCentralDirectoryBlock::ZipEndOfCentralDirectoryBlock()   {
}
