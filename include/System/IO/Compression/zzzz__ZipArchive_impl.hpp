#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipArchive.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveMode_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__ZipArchive_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/IO/Compression/zzzz__CompressionLevel_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveEntry_def.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveMode_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::ZipArchive._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::IO::Stream*, ::System::IO::Compression::ZipArchiveMode, bool, ::System::Text::Encoding*)>(&::System::IO::Compression::ZipArchive::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b10c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.get_Entries
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::get_Entries)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b1143c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_Entries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.get_Mode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveMode (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b1155c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_Mode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.CreateEntry
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (::System::IO::Compression::ZipArchive::*)(::StringW)>(&::System::IO::Compression::ZipArchive::CreateEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b11564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "CreateEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.CreateEntry
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (::System::IO::Compression::ZipArchive::*)(::StringW, ::System::IO::Compression::CompressionLevel)>(&::System::IO::Compression::ZipArchive::CreateEntry)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b1172c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "CreateEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::CompressionLevel>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(bool)>(&::System::IO::Compression::ZipArchive::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b117a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b11c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.get_ArchiveReader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::BinaryReader* (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::get_ArchiveReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b11d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_ArchiveReader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.get_ArchiveStream
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::get_ArchiveStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b11d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_ArchiveStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.get_NumberOfThisDisk
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::get_NumberOfThisDisk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b11d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_NumberOfThisDisk",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.get_EntryNameEncoding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::get_EntryNameEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b11d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_EntryNameEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.set_EntryNameEncoding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::Text::Encoding*)>(&::System::IO::Compression::ZipArchive::set_EntryNameEncoding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b10cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "set_EntryNameEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.DoCreateEntry
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchiveEntry* (::System::IO::Compression::ZipArchive::*)(::StringW, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>)>(&::System::IO::Compression::ZipArchive::DoCreateEntry)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2b1156c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "DoCreateEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::IO::Compression::CompressionLevel>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.AcquireArchiveStream
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&::System::IO::Compression::ZipArchive::AcquireArchiveStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b12030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "AcquireArchiveStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.AddEntry
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&::System::IO::Compression::ZipArchive::AddEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2b11f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "AddEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.ReleaseArchiveStream
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&::System::IO::Compression::ZipArchive::ReleaseArchiveStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b120ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ReleaseArchiveStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.RemoveEntry
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::IO::Compression::ZipArchiveEntry*)>(&::System::IO::Compression::ZipArchive::RemoveEntry)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b120f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "RemoveEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.ThrowIfDisposed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b114c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ThrowIfDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.CloseStreams
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::CloseStreams)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b12178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "CloseStreams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.EnsureCentralDirectoryRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::EnsureCentralDirectoryRead)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b11538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "EnsureCentralDirectoryRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(::System::IO::Stream*, ::System::IO::Compression::ZipArchiveMode, bool)>(&::System::IO::Compression::ZipArchive::Init)> {
  constexpr static std::size_t size = 0x684;
  constexpr static std::size_t addrs = 0x2b10db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.ReadCentralDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::ReadCentralDirectory)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2b121e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ReadCentralDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.ReadEndOfCentralDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::ReadEndOfCentralDirectory)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x2b12408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ReadEndOfCentralDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.WriteFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)()>(&::System::IO::Compression::ZipArchive::WriteFile)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2b11858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "WriteFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::ZipArchive.WriteArchiveEpilogue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::ZipArchive::*)(int64_t, int64_t)>(&::System::IO::Compression::ZipArchive::WriteArchiveEpilogue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b13e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "WriteArchiveEpilogue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveStream;
}
constexpr ::System::IO::Stream* const& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveStream;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__archiveStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____archiveStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::ZipArchiveEntry*& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveStreamOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveStreamOwner;
}
constexpr ::System::IO::Compression::ZipArchiveEntry* const& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveStreamOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveStreamOwner;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__archiveStreamOwner(::System::IO::Compression::ZipArchiveEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____archiveStreamOwner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::BinaryReader*& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveReader;
}
constexpr ::System::IO::BinaryReader* const& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveReader;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__archiveReader(::System::IO::BinaryReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____archiveReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::ZipArchiveMode& System::IO::Compression::ZipArchive::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr ::System::IO::Compression::ZipArchiveMode const& System::IO::Compression::ZipArchive::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__mode(::System::IO::Compression::ZipArchiveMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*& System::IO::Compression::ZipArchive::__cordl_internal_get__entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>* const& System::IO::Compression::ZipArchive::__cordl_internal_get__entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__entries(::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*& System::IO::Compression::ZipArchive::__cordl_internal_get__entriesCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesCollection;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* const& System::IO::Compression::ZipArchive::__cordl_internal_get__entriesCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesCollection;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__entriesCollection(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entriesCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>*& System::IO::Compression::ZipArchive::__cordl_internal_get__entriesDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>* const& System::IO::Compression::ZipArchive::__cordl_internal_get__entriesDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesDictionary;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__entriesDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entriesDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::IO::Compression::ZipArchive::__cordl_internal_get__readEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readEntries;
}
constexpr bool const& System::IO::Compression::ZipArchive::__cordl_internal_get__readEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readEntries;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__readEntries(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readEntries = value;
}
constexpr bool& System::IO::Compression::ZipArchive::__cordl_internal_get__leaveOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr bool const& System::IO::Compression::ZipArchive::__cordl_internal_get__leaveOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leaveOpen;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__leaveOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leaveOpen = value;
}
constexpr int64_t& System::IO::Compression::ZipArchive::__cordl_internal_get__centralDirectoryStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centralDirectoryStart;
}
constexpr int64_t const& System::IO::Compression::ZipArchive::__cordl_internal_get__centralDirectoryStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centralDirectoryStart;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__centralDirectoryStart(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____centralDirectoryStart = value;
}
constexpr bool& System::IO::Compression::ZipArchive::__cordl_internal_get__isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisposed;
}
constexpr bool const& System::IO::Compression::ZipArchive::__cordl_internal_get__isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisposed;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisposed = value;
}
constexpr uint32_t& System::IO::Compression::ZipArchive::__cordl_internal_get__numberOfThisDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfThisDisk;
}
constexpr uint32_t const& System::IO::Compression::ZipArchive::__cordl_internal_get__numberOfThisDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfThisDisk;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__numberOfThisDisk(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfThisDisk = value;
}
constexpr int64_t& System::IO::Compression::ZipArchive::__cordl_internal_get__expectedNumberOfEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expectedNumberOfEntries;
}
constexpr int64_t const& System::IO::Compression::ZipArchive::__cordl_internal_get__expectedNumberOfEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expectedNumberOfEntries;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__expectedNumberOfEntries(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____expectedNumberOfEntries = value;
}
constexpr ::System::IO::Stream*& System::IO::Compression::ZipArchive::__cordl_internal_get__backingStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backingStream;
}
constexpr ::System::IO::Stream* const& System::IO::Compression::ZipArchive::__cordl_internal_get__backingStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backingStream;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__backingStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backingStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveComment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveComment;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::Compression::ZipArchive::__cordl_internal_get__archiveComment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____archiveComment;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__archiveComment(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____archiveComment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::IO::Compression::ZipArchive::__cordl_internal_get__entryNameEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryNameEncoding;
}
constexpr ::System::Text::Encoding* const& System::IO::Compression::ZipArchive::__cordl_internal_get__entryNameEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryNameEncoding;
}
constexpr void System::IO::Compression::ZipArchive::__cordl_internal_set__entryNameEncoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entryNameEncoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::IO::Compression::ZipArchive::_ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveMode  mode, bool  leaveOpen, ::System::Text::Encoding*  entryNameEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, mode, leaveOpen, entryNameEncoding);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* System::IO::Compression::ZipArchive::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_Entries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*, false>(this, ___internal_method);
}
inline ::System::IO::Compression::ZipArchiveMode System::IO::Compression::ZipArchive::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_Mode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchiveMode, false>(this, ___internal_method);
}
inline ::System::IO::Compression::ZipArchiveEntry* System::IO::Compression::ZipArchive::CreateEntry(::StringW  entryName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "CreateEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchiveEntry*, false>(this, ___internal_method, entryName);
}
inline ::System::IO::Compression::ZipArchiveEntry* System::IO::Compression::ZipArchive::CreateEntry(::StringW  entryName, ::System::IO::Compression::CompressionLevel  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "CreateEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::CompressionLevel>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchiveEntry*, false>(this, ___internal_method, entryName, compressionLevel);
}
inline void System::IO::Compression::ZipArchive::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::IO::Compression::ZipArchive::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::BinaryReader* System::IO::Compression::ZipArchive::get_ArchiveReader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_ArchiveReader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::BinaryReader*, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::IO::Compression::ZipArchive::get_ArchiveStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_ArchiveStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline uint32_t System::IO::Compression::ZipArchive::get_NumberOfThisDisk()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_NumberOfThisDisk",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::IO::Compression::ZipArchive::get_EntryNameEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "get_EntryNameEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::set_EntryNameEncoding(::System::Text::Encoding*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "set_EntryNameEncoding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IO::Compression::ZipArchiveEntry* System::IO::Compression::ZipArchive::DoCreateEntry(::StringW  entryName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  compressionLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "DoCreateEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::IO::Compression::CompressionLevel>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::ZipArchiveEntry*, false>(this, ___internal_method, entryName, compressionLevel);
}
inline void System::IO::Compression::ZipArchive::AcquireArchiveStream(::System::IO::Compression::ZipArchiveEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "AcquireArchiveStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void System::IO::Compression::ZipArchive::AddEntry(::System::IO::Compression::ZipArchiveEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "AddEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void System::IO::Compression::ZipArchive::ReleaseArchiveStream(::System::IO::Compression::ZipArchiveEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ReleaseArchiveStream",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void System::IO::Compression::ZipArchive::RemoveEntry(::System::IO::Compression::ZipArchiveEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "RemoveEntry",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveEntry*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
inline void System::IO::Compression::ZipArchive::ThrowIfDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ThrowIfDisposed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::CloseStreams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "CloseStreams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::EnsureCentralDirectoryRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "EnsureCentralDirectoryRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::Init(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveMode  mode, bool  leaveOpen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::ZipArchiveMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, mode, leaveOpen);
}
inline void System::IO::Compression::ZipArchive::ReadCentralDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ReadCentralDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::ReadEndOfCentralDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "ReadEndOfCentralDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::WriteFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "WriteFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::ZipArchive::WriteArchiveEpilogue(int64_t  startOfCentralDirectory, int64_t  sizeOfCentralDirectory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::ZipArchive*>::get(),
                        "WriteArchiveEpilogue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startOfCentralDirectory, sizeOfCentralDirectory);
}
inline ::System::IO::Compression::ZipArchive* System::IO::Compression::ZipArchive::New_ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveMode  mode, bool  leaveOpen, ::System::Text::Encoding*  entryNameEncoding)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Compression::ZipArchive*>(stream, mode, leaveOpen, entryNameEncoding));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::IO::Compression::ZipArchive::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::IO::Compression::ZipArchive::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipArchive::ZipArchive()   {
}
