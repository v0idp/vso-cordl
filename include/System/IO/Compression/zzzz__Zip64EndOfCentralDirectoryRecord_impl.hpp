#pragma once
// IWYU pragma private; include "System/IO/Compression/Zip64EndOfCentralDirectoryRecord.hpp"
#include "System/IO/Compression/zzzz__Zip64EndOfCentralDirectoryRecord_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::Zip64EndOfCentralDirectoryRecord.TryReadBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, ::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>)>(&::System::IO::Compression::Zip64EndOfCentralDirectoryRecord::TryReadBlock)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2b1351c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::Zip64EndOfCentralDirectoryRecord.WriteBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, int64_t, int64_t, int64_t)>(&::System::IO::Compression::Zip64EndOfCentralDirectoryRecord::WriteBlock)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2b13f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool System::IO::Compression::Zip64EndOfCentralDirectoryRecord::TryReadBlock(::System::IO::BinaryReader*  reader, ::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>  zip64EOCDRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, zip64EOCDRecord);
}
inline void System::IO::Compression::Zip64EndOfCentralDirectoryRecord::WriteBlock(::System::IO::Stream*  stream, int64_t  numberOfEntries, int64_t  startOfCentralDirectory, int64_t  sizeOfCentralDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryRecord>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream, numberOfEntries, startOfCentralDirectory, sizeOfCentralDirectory);
}
// Ctor Parameters [CppParam { name: "SizeOfThisRecord", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VersionMadeBy", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VersionNeededToExtract", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfThisDisk", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfDiskWithStartOfCD", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfEntriesOnThisDisk", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumberOfEntriesTotal", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SizeOfCentralDirectory", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetOfCentralDirectory", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::Zip64EndOfCentralDirectoryRecord::Zip64EndOfCentralDirectoryRecord(uint64_t  SizeOfThisRecord, uint16_t  VersionMadeBy, uint16_t  VersionNeededToExtract, uint32_t  NumberOfThisDisk, uint32_t  NumberOfDiskWithStartOfCD, uint64_t  NumberOfEntriesOnThisDisk, uint64_t  NumberOfEntriesTotal, uint64_t  SizeOfCentralDirectory, uint64_t  OffsetOfCentralDirectory) noexcept  {
this->SizeOfThisRecord = SizeOfThisRecord;
this->VersionMadeBy = VersionMadeBy;
this->VersionNeededToExtract = VersionNeededToExtract;
this->NumberOfThisDisk = NumberOfThisDisk;
this->NumberOfDiskWithStartOfCD = NumberOfDiskWithStartOfCD;
this->NumberOfEntriesOnThisDisk = NumberOfEntriesOnThisDisk;
this->NumberOfEntriesTotal = NumberOfEntriesTotal;
this->SizeOfCentralDirectory = SizeOfCentralDirectory;
this->OffsetOfCentralDirectory = OffsetOfCentralDirectory;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::Zip64EndOfCentralDirectoryRecord::Zip64EndOfCentralDirectoryRecord()   {
}
