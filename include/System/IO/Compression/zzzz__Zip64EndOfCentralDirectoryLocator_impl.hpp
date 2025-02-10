#pragma once
// IWYU pragma private; include "System/IO/Compression/Zip64EndOfCentralDirectoryLocator.hpp"
#include "System/IO/Compression/zzzz__Zip64EndOfCentralDirectoryLocator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::Zip64EndOfCentralDirectoryLocator.TryReadBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, ::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>)>(&::System::IO::Compression::Zip64EndOfCentralDirectoryLocator::TryReadBlock)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2b13474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::Zip64EndOfCentralDirectoryLocator.WriteBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, int64_t)>(&::System::IO::Compression::Zip64EndOfCentralDirectoryLocator::WriteBlock)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b14070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool System::IO::Compression::Zip64EndOfCentralDirectoryLocator::TryReadBlock(::System::IO::BinaryReader*  reader, ::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>  zip64EOCDLocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>::get(),
                        "TryReadBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, zip64EOCDLocator);
}
inline void System::IO::Compression::Zip64EndOfCentralDirectoryLocator::WriteBlock(::System::IO::Stream*  stream, int64_t  zip64EOCDRecordStart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::Zip64EndOfCentralDirectoryLocator>::get(),
                        "WriteBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream, zip64EOCDRecordStart);
}
// Ctor Parameters [CppParam { name: "NumberOfDiskWithZip64EOCD", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OffsetOfZip64EOCD", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TotalNumberOfDisks", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::Zip64EndOfCentralDirectoryLocator::Zip64EndOfCentralDirectoryLocator(uint32_t  NumberOfDiskWithZip64EOCD, uint64_t  OffsetOfZip64EOCD, uint32_t  TotalNumberOfDisks) noexcept  {
this->NumberOfDiskWithZip64EOCD = NumberOfDiskWithZip64EOCD;
this->OffsetOfZip64EOCD = OffsetOfZip64EOCD;
this->TotalNumberOfDisks = TotalNumberOfDisks;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::Zip64EndOfCentralDirectoryLocator::Zip64EndOfCentralDirectoryLocator()   {
}
