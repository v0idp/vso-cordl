#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipArchive.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__ZipArchiveMode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipArchive)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
class ZipArchiveEntry;
}
namespace System::IO::Compression {
struct ZipArchiveMode;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::IO::Compression {
class ZipArchive;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::ZipArchive);
// Dependencies System.IDisposable, System.IO.Compression.ZipArchiveMode, System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipArchive
class CORDL_TYPE ZipArchive : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ArchiveReader)) ::System::IO::BinaryReader*  ArchiveReader;

 __declspec(property(get=get_ArchiveStream)) ::System::IO::Stream*  ArchiveStream;

 __declspec(property(get=get_Entries)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*  Entries;

 __declspec(property(get=get_EntryNameEncoding, put=set_EntryNameEncoding)) ::System::Text::Encoding*  EntryNameEncoding;

 __declspec(property(get=get_Mode)) ::System::IO::Compression::ZipArchiveMode  Mode;

 __declspec(property(get=get_NumberOfThisDisk)) uint32_t  NumberOfThisDisk;

/// @brief Field _archiveComment, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__archiveComment, put=__cordl_internal_set__archiveComment)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _archiveComment;

/// @brief Field _archiveReader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__archiveReader, put=__cordl_internal_set__archiveReader)) ::System::IO::BinaryReader*  _archiveReader;

/// @brief Field _archiveStream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__archiveStream, put=__cordl_internal_set__archiveStream)) ::System::IO::Stream*  _archiveStream;

/// @brief Field _archiveStreamOwner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__archiveStreamOwner, put=__cordl_internal_set__archiveStreamOwner)) ::System::IO::Compression::ZipArchiveEntry*  _archiveStreamOwner;

/// @brief Field _backingStream, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__backingStream, put=__cordl_internal_set__backingStream)) ::System::IO::Stream*  _backingStream;

/// @brief Field _centralDirectoryStart, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__centralDirectoryStart, put=__cordl_internal_set__centralDirectoryStart)) int64_t  _centralDirectoryStart;

/// @brief Field _entries, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__entries, put=__cordl_internal_set__entries)) ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*  _entries;

/// @brief Field _entriesCollection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__entriesCollection, put=__cordl_internal_set__entriesCollection)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*  _entriesCollection;

/// @brief Field _entriesDictionary, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__entriesDictionary, put=__cordl_internal_set__entriesDictionary)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>*  _entriesDictionary;

/// @brief Field _entryNameEncoding, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryNameEncoding, put=__cordl_internal_set__entryNameEncoding)) ::System::Text::Encoding*  _entryNameEncoding;

/// @brief Field _expectedNumberOfEntries, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__expectedNumberOfEntries, put=__cordl_internal_set__expectedNumberOfEntries)) int64_t  _expectedNumberOfEntries;

/// @brief Field _isDisposed, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposed, put=__cordl_internal_set__isDisposed)) bool  _isDisposed;

/// @brief Field _leaveOpen, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpen, put=__cordl_internal_set__leaveOpen)) bool  _leaveOpen;

/// @brief Field _mode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::System::IO::Compression::ZipArchiveMode  _mode;

/// @brief Field _numberOfThisDisk, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfThisDisk, put=__cordl_internal_set__numberOfThisDisk)) uint32_t  _numberOfThisDisk;

/// @brief Field _readEntries, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__readEntries, put=__cordl_internal_set__readEntries)) bool  _readEntries;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AcquireArchiveStream, addr 0x2b12030, size 0x7c, virtual false, abstract: false, final false
inline void AcquireArchiveStream(::System::IO::Compression::ZipArchiveEntry*  entry) ;

/// @brief Method AddEntry, addr 0x2b11f28, size 0x108, virtual false, abstract: false, final false
inline void AddEntry(::System::IO::Compression::ZipArchiveEntry*  entry) ;

/// @brief Method CloseStreams, addr 0x2b12178, size 0x6c, virtual false, abstract: false, final false
inline void CloseStreams() ;

/// @brief Method CreateEntry, addr 0x2b11564, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Compression::ZipArchiveEntry* CreateEntry(::StringW  entryName) ;

/// @brief Method CreateEntry, addr 0x2b1172c, size 0x7c, virtual false, abstract: false, final false
inline ::System::IO::Compression::ZipArchiveEntry* CreateEntry(::StringW  entryName, ::System::IO::Compression::CompressionLevel  compressionLevel) ;

/// @brief Method Dispose, addr 0x2b11c94, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x2b117a8, size 0xb0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DoCreateEntry, addr 0x2b1156c, size 0x1c0, virtual false, abstract: false, final false
inline ::System::IO::Compression::ZipArchiveEntry* DoCreateEntry(::StringW  entryName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  compressionLevel) ;

/// @brief Method EnsureCentralDirectoryRead, addr 0x2b11538, size 0x24, virtual false, abstract: false, final false
inline void EnsureCentralDirectoryRead() ;

/// @brief Method Init, addr 0x2b10db8, size 0x684, virtual false, abstract: false, final false
inline void Init(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveMode  mode, bool  leaveOpen) ;

static inline ::System::IO::Compression::ZipArchive* New_ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveMode  mode, bool  leaveOpen, ::System::Text::Encoding*  entryNameEncoding) ;

/// @brief Method ReadCentralDirectory, addr 0x2b121e4, size 0x224, virtual false, abstract: false, final false
inline void ReadCentralDirectory() ;

/// @brief Method ReadEndOfCentralDirectory, addr 0x2b12408, size 0x5ec, virtual false, abstract: false, final false
inline void ReadEndOfCentralDirectory() ;

/// @brief Method ReleaseArchiveStream, addr 0x2b120ec, size 0x8, virtual false, abstract: false, final false
inline void ReleaseArchiveStream(::System::IO::Compression::ZipArchiveEntry*  entry) ;

/// @brief Method RemoveEntry, addr 0x2b120f4, size 0x84, virtual false, abstract: false, final false
inline void RemoveEntry(::System::IO::Compression::ZipArchiveEntry*  entry) ;

/// @brief Method ThrowIfDisposed, addr 0x2b114c0, size 0x78, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

/// @brief Method WriteArchiveEpilogue, addr 0x2b13e2c, size 0xd8, virtual false, abstract: false, final false
inline void WriteArchiveEpilogue(int64_t  startOfCentralDirectory, int64_t  sizeOfCentralDirectory) ;

/// @brief Method WriteFile, addr 0x2b11858, size 0x43c, virtual false, abstract: false, final false
inline void WriteFile() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__archiveComment() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__archiveComment() ;

constexpr ::System::IO::BinaryReader* const& __cordl_internal_get__archiveReader() const;

constexpr ::System::IO::BinaryReader*& __cordl_internal_get__archiveReader() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__archiveStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__archiveStream() ;

constexpr ::System::IO::Compression::ZipArchiveEntry* const& __cordl_internal_get__archiveStreamOwner() const;

constexpr ::System::IO::Compression::ZipArchiveEntry*& __cordl_internal_get__archiveStreamOwner() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__backingStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__backingStream() ;

constexpr int64_t const& __cordl_internal_get__centralDirectoryStart() const;

constexpr int64_t& __cordl_internal_get__centralDirectoryStart() ;

constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>* const& __cordl_internal_get__entries() const;

constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*& __cordl_internal_get__entries() ;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* const& __cordl_internal_get__entriesCollection() const;

constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*& __cordl_internal_get__entriesCollection() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>* const& __cordl_internal_get__entriesDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>*& __cordl_internal_get__entriesDictionary() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__entryNameEncoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__entryNameEncoding() ;

constexpr int64_t const& __cordl_internal_get__expectedNumberOfEntries() const;

constexpr int64_t& __cordl_internal_get__expectedNumberOfEntries() ;

constexpr bool const& __cordl_internal_get__isDisposed() const;

constexpr bool& __cordl_internal_get__isDisposed() ;

constexpr bool const& __cordl_internal_get__leaveOpen() const;

constexpr bool& __cordl_internal_get__leaveOpen() ;

constexpr ::System::IO::Compression::ZipArchiveMode const& __cordl_internal_get__mode() const;

constexpr ::System::IO::Compression::ZipArchiveMode& __cordl_internal_get__mode() ;

constexpr uint32_t const& __cordl_internal_get__numberOfThisDisk() const;

constexpr uint32_t& __cordl_internal_get__numberOfThisDisk() ;

constexpr bool const& __cordl_internal_get__readEntries() const;

constexpr bool& __cordl_internal_get__readEntries() ;

constexpr void __cordl_internal_set__archiveComment(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__archiveReader(::System::IO::BinaryReader*  value) ;

constexpr void __cordl_internal_set__archiveStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__archiveStreamOwner(::System::IO::Compression::ZipArchiveEntry*  value) ;

constexpr void __cordl_internal_set__backingStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__centralDirectoryStart(int64_t  value) ;

constexpr void __cordl_internal_set__entries(::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*  value) ;

constexpr void __cordl_internal_set__entriesCollection(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*  value) ;

constexpr void __cordl_internal_set__entriesDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>*  value) ;

constexpr void __cordl_internal_set__entryNameEncoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__expectedNumberOfEntries(int64_t  value) ;

constexpr void __cordl_internal_set__isDisposed(bool  value) ;

constexpr void __cordl_internal_set__leaveOpen(bool  value) ;

constexpr void __cordl_internal_set__mode(::System::IO::Compression::ZipArchiveMode  value) ;

constexpr void __cordl_internal_set__numberOfThisDisk(uint32_t  value) ;

constexpr void __cordl_internal_set__readEntries(bool  value) ;

/// @brief Method .ctor, addr 0x2b10c58, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::IO::Compression::ZipArchiveMode  mode, bool  leaveOpen, ::System::Text::Encoding*  entryNameEncoding) ;

/// @brief Method get_ArchiveReader, addr 0x2b11d00, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::BinaryReader* get_ArchiveReader() ;

/// @brief Method get_ArchiveStream, addr 0x2b11d08, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_ArchiveStream() ;

/// @brief Method get_Entries, addr 0x2b1143c, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>* get_Entries() ;

/// @brief Method get_EntryNameEncoding, addr 0x2b11d18, size 0x8, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_EntryNameEncoding() ;

/// @brief Method get_Mode, addr 0x2b1155c, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Compression::ZipArchiveMode get_Mode() ;

/// @brief Method get_NumberOfThisDisk, addr 0x2b11d10, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_NumberOfThisDisk() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_EntryNameEncoding, addr 0x2b10cf8, size 0xc0, virtual false, abstract: false, final false
inline void set_EntryNameEncoding(::System::Text::Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipArchive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipArchive", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipArchive(ZipArchive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipArchive", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipArchive(ZipArchive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11291};

/// @brief Field _archiveStream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ____archiveStream;

/// @brief Field _archiveStreamOwner, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Compression::ZipArchiveEntry*  ____archiveStreamOwner;

/// @brief Field _archiveReader, offset: 0x20, size: 0x8, def value: None
 ::System::IO::BinaryReader*  ____archiveReader;

/// @brief Field _mode, offset: 0x28, size: 0x4, def value: None
 ::System::IO::Compression::ZipArchiveMode  ____mode;

/// @brief Field _entries, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IO::Compression::ZipArchiveEntry*>*  ____entries;

/// @brief Field _entriesCollection, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::IO::Compression::ZipArchiveEntry*>*  ____entriesCollection;

/// @brief Field _entriesDictionary, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::IO::Compression::ZipArchiveEntry*>*  ____entriesDictionary;

/// @brief Field _readEntries, offset: 0x48, size: 0x1, def value: None
 bool  ____readEntries;

/// @brief Field _leaveOpen, offset: 0x49, size: 0x1, def value: None
 bool  ____leaveOpen;

/// @brief Field _centralDirectoryStart, offset: 0x50, size: 0x8, def value: None
 int64_t  ____centralDirectoryStart;

/// @brief Field _isDisposed, offset: 0x58, size: 0x1, def value: None
 bool  ____isDisposed;

/// @brief Field _numberOfThisDisk, offset: 0x5c, size: 0x4, def value: None
 uint32_t  ____numberOfThisDisk;

/// @brief Field _expectedNumberOfEntries, offset: 0x60, size: 0x8, def value: None
 int64_t  ____expectedNumberOfEntries;

/// @brief Field _backingStream, offset: 0x68, size: 0x8, def value: None
 ::System::IO::Stream*  ____backingStream;

/// @brief Field _archiveComment, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____archiveComment;

/// @brief Field _entryNameEncoding, offset: 0x78, size: 0x8, def value: None
 ::System::Text::Encoding*  ____entryNameEncoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipArchive, ____archiveStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____archiveStreamOwner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____archiveReader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____entries) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____entriesCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____entriesDictionary) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____readEntries) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____leaveOpen) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____centralDirectoryStart) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____isDisposed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____numberOfThisDisk) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____expectedNumberOfEntries) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____backingStream) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____archiveComment) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchive, ____entryNameEncoding) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchive, 0x80>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::ZipArchive);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchive*, "System.IO.Compression", "ZipArchive");
