#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipLocalFileHeader.hpp"
#include "System/IO/Compression/zzzz__ZipLocalFileHeader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/Compression/zzzz__ZipGenericExtraField_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipLocalFileHeader.GetExtraFields
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* (*)(::System::IO::BinaryReader*)>(&::System::IO::Compression::ZipLocalFileHeader::GetExtraFields)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2b15da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipLocalFileHeader>::get(),
                        "GetExtraFields",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipLocalFileHeader.TrySkipBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*)>(&::System::IO::Compression::ZipLocalFileHeader::TrySkipBlock)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2b15074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipLocalFileHeader>::get(),
                        "TrySkipBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* System::IO::Compression::ZipLocalFileHeader::GetExtraFields(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipLocalFileHeader>::get(),
                        "GetExtraFields",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*, false>(nullptr, ___internal_method, reader);
}
inline bool System::IO::Compression::ZipLocalFileHeader::TrySkipBlock(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipLocalFileHeader>::get(),
                        "TrySkipBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipLocalFileHeader::ZipLocalFileHeader()   {
}
