#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipArchiveEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__CompressionLevel_def.hpp"
#include "System/IO/Compression/zzzz__ZipVersionMadeByPlatform_def.hpp"
#include "System/IO/Compression/zzzz__ZipVersionNeededValues_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipArchiveEntry)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO::Compression {
class CheckSumAndSizeWriteStream;
}
namespace System::IO::Compression {
struct CompressionLevel;
}
namespace System::IO::Compression {
struct ZipArchiveEntry_BitFlagValues;
}
namespace System::IO::Compression {
struct ZipArchiveEntry_CompressionMethodValues;
}
namespace System::IO::Compression {
class ZipArchiveEntry_DirectToArchiveWriterStream;
}
namespace System::IO::Compression {
class ZipArchiveEntry___c;
}
namespace System::IO::Compression {
class ZipArchive;
}
namespace System::IO::Compression {
struct ZipCentralDirectoryFileHeader;
}
namespace System::IO::Compression {
struct ZipGenericExtraField;
}
namespace System::IO::Compression {
struct ZipVersionMadeByPlatform;
}
namespace System::IO::Compression {
struct ZipVersionNeededValues;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO::Compression {
struct ZipArchiveEntry_BitFlagValues;
}
namespace System::IO::Compression {
struct ZipArchiveEntry_CompressionMethodValues;
}
namespace System::IO::Compression {
class ZipArchiveEntry;
}
namespace System::IO::Compression {
class ZipArchiveEntry_DirectToArchiveWriterStream;
}
namespace System::IO::Compression {
class ZipArchiveEntry___c;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipArchiveEntry_BitFlagValues);
MARK_VAL_T(::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues);
MARK_REF_PTR_T(::System::IO::Compression::ZipArchiveEntry);
MARK_REF_PTR_T(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream);
MARK_REF_PTR_T(::System::IO::Compression::ZipArchiveEntry___c);
// Dependencies System.IO.Stream
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipArchiveEntry/DirectToArchiveWriterStream
class CORDL_TYPE ZipArchiveEntry_DirectToArchiveWriterStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _canWrite, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__canWrite, put=__cordl_internal_set__canWrite)) bool  _canWrite;

/// @brief Field _crcSizeStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__crcSizeStream, put=__cordl_internal_set__crcSizeStream)) ::System::IO::Compression::CheckSumAndSizeWriteStream*  _crcSizeStream;

/// @brief Field _entry, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__entry, put=__cordl_internal_set__entry)) ::System::IO::Compression::ZipArchiveEntry*  _entry;

/// @brief Field _everWritten, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__everWritten, put=__cordl_internal_set__everWritten)) bool  _everWritten;

/// @brief Field _isDisposed, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposed, put=__cordl_internal_set__isDisposed)) bool  _isDisposed;

/// @brief Field _position, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) int64_t  _position;

/// @brief Field _usedZip64inLH, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__usedZip64inLH, put=__cordl_internal_set__usedZip64inLH)) bool  _usedZip64inLH;

/// @brief Method Dispose, addr 0x2b17508, size 0xb4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x2b174dc, size 0x2c, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream* New_ctor(::System::IO::Compression::CheckSumAndSizeWriteStream*  crcSizeStream, ::System::IO::Compression::ZipArchiveEntry*  entry) ;

/// @brief Method Read, addr 0x2b1725c, size 0x50, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x2b172ac, size 0x50, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x2b172fc, size 0x50, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ThrowIfDisposed, addr 0x2b17150, size 0x8c, virtual false, abstract: false, final false
inline void ThrowIfDisposed() ;

/// @brief Method Write, addr 0x2b1734c, size 0x190, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

constexpr bool const& __cordl_internal_get__canWrite() const;

constexpr bool& __cordl_internal_get__canWrite() ;

constexpr ::System::IO::Compression::CheckSumAndSizeWriteStream* const& __cordl_internal_get__crcSizeStream() const;

constexpr ::System::IO::Compression::CheckSumAndSizeWriteStream*& __cordl_internal_get__crcSizeStream() ;

constexpr ::System::IO::Compression::ZipArchiveEntry* const& __cordl_internal_get__entry() const;

constexpr ::System::IO::Compression::ZipArchiveEntry*& __cordl_internal_get__entry() ;

constexpr bool const& __cordl_internal_get__everWritten() const;

constexpr bool& __cordl_internal_get__everWritten() ;

constexpr bool const& __cordl_internal_get__isDisposed() const;

constexpr bool& __cordl_internal_get__isDisposed() ;

constexpr int64_t const& __cordl_internal_get__position() const;

constexpr int64_t& __cordl_internal_get__position() ;

constexpr bool const& __cordl_internal_get__usedZip64inLH() const;

constexpr bool& __cordl_internal_get__usedZip64inLH() ;

constexpr void __cordl_internal_set__canWrite(bool  value) ;

constexpr void __cordl_internal_set__crcSizeStream(::System::IO::Compression::CheckSumAndSizeWriteStream*  value) ;

constexpr void __cordl_internal_set__entry(::System::IO::Compression::ZipArchiveEntry*  value) ;

constexpr void __cordl_internal_set__everWritten(bool  value) ;

constexpr void __cordl_internal_set__isDisposed(bool  value) ;

constexpr void __cordl_internal_set__position(int64_t  value) ;

constexpr void __cordl_internal_set__usedZip64inLH(bool  value) ;

/// @brief Method .ctor, addr 0x2b166bc, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Compression::CheckSumAndSizeWriteStream*  crcSizeStream, ::System::IO::Compression::ZipArchiveEntry*  entry) ;

/// @brief Method get_CanRead, addr 0x2b17244, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x2b1724c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x2b17254, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x2b17100, size 0x50, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x2b171dc, size 0x18, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x2b171f4, size 0x50, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipArchiveEntry_DirectToArchiveWriterStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipArchiveEntry_DirectToArchiveWriterStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipArchiveEntry_DirectToArchiveWriterStream(ZipArchiveEntry_DirectToArchiveWriterStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipArchiveEntry_DirectToArchiveWriterStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipArchiveEntry_DirectToArchiveWriterStream(ZipArchiveEntry_DirectToArchiveWriterStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11292};

/// @brief Field _position, offset: 0x28, size: 0x8, def value: None
 int64_t  ____position;

/// @brief Field _crcSizeStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Compression::CheckSumAndSizeWriteStream*  ____crcSizeStream;

/// @brief Field _everWritten, offset: 0x38, size: 0x1, def value: None
 bool  ____everWritten;

/// @brief Field _isDisposed, offset: 0x39, size: 0x1, def value: None
 bool  ____isDisposed;

/// @brief Field _entry, offset: 0x40, size: 0x8, def value: None
 ::System::IO::Compression::ZipArchiveEntry*  ____entry;

/// @brief Field _usedZip64inLH, offset: 0x48, size: 0x1, def value: None
 bool  ____usedZip64inLH;

/// @brief Field _canWrite, offset: 0x49, size: 0x1, def value: None
 bool  ____canWrite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____position) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____crcSizeStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____everWritten) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____isDisposed) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____entry) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____usedZip64inLH) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, ____canWrite) == 0x49, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream, 0x50>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipArchiveEntry/BitFlagValues
struct CORDL_TYPE ZipArchiveEntry_BitFlagValues {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __ZipArchiveEntry_BitFlagValues_Unwrapped
enum struct __ZipArchiveEntry_BitFlagValues_Unwrapped : uint16_t {
__E_DataDescriptor = static_cast<uint16_t>(0x8u),
__E_UnicodeFileName = static_cast<uint16_t>(0x800u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipArchiveEntry_BitFlagValues_Unwrapped () const noexcept {
return static_cast<__ZipArchiveEntry_BitFlagValues_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipArchiveEntry_BitFlagValues() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ZipArchiveEntry_BitFlagValues(uint16_t  value__) noexcept;

/// @brief Field DataDescriptor value: U16(8)
static ::System::IO::Compression::ZipArchiveEntry_BitFlagValues const DataDescriptor;

/// @brief Field UnicodeFileName value: U16(2048)
static ::System::IO::Compression::ZipArchiveEntry_BitFlagValues const UnicodeFileName;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_BitFlagValues, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchiveEntry_BitFlagValues, 0x2>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipArchiveEntry/CompressionMethodValues
struct CORDL_TYPE ZipArchiveEntry_CompressionMethodValues {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __ZipArchiveEntry_CompressionMethodValues_Unwrapped
enum struct __ZipArchiveEntry_CompressionMethodValues_Unwrapped : uint16_t {
__E_Stored = static_cast<uint16_t>(0x0u),
__E_Deflate = static_cast<uint16_t>(0x8u),
__E_Deflate64 = static_cast<uint16_t>(0x9u),
__E_BZip2 = static_cast<uint16_t>(0xcu),
__E_LZMA = static_cast<uint16_t>(0xeu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipArchiveEntry_CompressionMethodValues_Unwrapped () const noexcept {
return static_cast<__ZipArchiveEntry_CompressionMethodValues_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipArchiveEntry_CompressionMethodValues() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ZipArchiveEntry_CompressionMethodValues(uint16_t  value__) noexcept;

/// @brief Field BZip2 value: U16(12)
static ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues const BZip2;

/// @brief Field Deflate value: U16(8)
static ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues const Deflate;

/// @brief Field Deflate64 value: U16(9)
static ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues const Deflate64;

/// @brief Field LZMA value: U16(14)
static ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues const LZMA;

/// @brief Field Stored value: U16(0)
static ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues const Stored;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues, 0x2>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipArchiveEntry/<>c
class CORDL_TYPE ZipArchiveEntry___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::Compression::ZipArchiveEntry___c*  __9;

/// @brief Field <>9__69_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__69_0, put=setStaticF___9__69_0)) ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  __9__69_0;

/// @brief Field <>9__72_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__72_0, put=setStaticF___9__72_0)) ::System::EventHandler*  __9__72_0;

/// @brief Field <>9__73_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__73_0, put=setStaticF___9__73_0)) ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  __9__73_0;

static inline ::System::IO::Compression::ZipArchiveEntry___c* New_ctor() ;

/// @brief Method <GetDataCompressor>b__69_0, addr 0x2b17620, size 0xd4, virtual false, abstract: false, final false
inline void _GetDataCompressor_b__69_0(int64_t  initialPosition, int64_t  currentPosition, uint32_t  checkSum, ::System::IO::Stream*  backing, ::System::IO::Compression::ZipArchiveEntry*  thisRef, ::System::EventHandler*  closeHandler) ;

/// @brief Method <OpenInUpdateMode>b__73_0, addr 0x2b17780, size 0x18, virtual false, abstract: false, final false
inline void _OpenInUpdateMode_b__73_0(::System::IO::Compression::ZipArchiveEntry*  thisRef) ;

/// @brief Method <OpenInWriteMode>b__72_0, addr 0x2b176f4, size 0x8c, virtual false, abstract: false, final false
inline void _OpenInWriteMode_b__72_0(::System::Object*  o, ::System::EventArgs*  e) ;

/// @brief Method .ctor, addr 0x2b17618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::Compression::ZipArchiveEntry___c* getStaticF___9() ;

static inline ::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>* getStaticF___9__69_0() ;

static inline ::System::EventHandler* getStaticF___9__72_0() ;

static inline ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* getStaticF___9__73_0() ;

static inline void setStaticF___9(::System::IO::Compression::ZipArchiveEntry___c*  value) ;

static inline void setStaticF___9__69_0(::System::Action_6<int64_t,int64_t,uint32_t,::System::IO::Stream*,::System::IO::Compression::ZipArchiveEntry*,::System::EventHandler*>*  value) ;

static inline void setStaticF___9__72_0(::System::EventHandler*  value) ;

static inline void setStaticF___9__73_0(::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipArchiveEntry___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipArchiveEntry___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipArchiveEntry___c(ZipArchiveEntry___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipArchiveEntry___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipArchiveEntry___c(ZipArchiveEntry___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchiveEntry___c, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
// Dependencies System.DateTimeOffset, System.IO.Compression.CompressionLevel, System.IO.Compression.ZipArchiveEntry::BitFlagValues, System.IO.Compression.ZipArchiveEntry::CompressionMethodValues, System.IO.Compression.ZipVersionMadeByPlatform, System.IO.Compression.ZipVersionNeededValues, System.Nullable`1<T>, System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.ZipArchiveEntry
class CORDL_TYPE ZipArchiveEntry : public ::System::Object {
public:
// Declarations
using BitFlagValues = ::System::IO::Compression::ZipArchiveEntry_BitFlagValues;

using CompressionMethodValues = ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues;

using DirectToArchiveWriterStream = ::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream;

using __c = ::System::IO::Compression::ZipArchiveEntry___c;

 __declspec(property(get=get_CompressionMethod, put=set_CompressionMethod)) ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  CompressionMethod;

/// @brief Field CurrentZipPlatform, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_CurrentZipPlatform, put=setStaticF_CurrentZipPlatform)) ::System::IO::Compression::ZipVersionMadeByPlatform  CurrentZipPlatform;

 __declspec(property(get=get_EverOpenedForWrite)) bool  EverOpenedForWrite;

 __declspec(property(get=get_FullName, put=set_FullName)) ::StringW  FullName;

 __declspec(property(get=get_LastWriteTime, put=set_LastWriteTime)) ::System::DateTimeOffset  LastWriteTime;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_OffsetOfCompressedData)) int64_t  OffsetOfCompressedData;

 __declspec(property(get=get_UncompressedData)) ::System::IO::MemoryStream*  UncompressedData;

/// @brief Field _archive, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__archive, put=__cordl_internal_set__archive)) ::System::IO::Compression::ZipArchive*  _archive;

/// @brief Field _cdUnknownExtraFields, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cdUnknownExtraFields, put=__cordl_internal_set__cdUnknownExtraFields)) ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  _cdUnknownExtraFields;

/// @brief Field _compressedBytes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressedBytes, put=__cordl_internal_set__compressedBytes)) ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  _compressedBytes;

/// @brief Field _compressedSize, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressedSize, put=__cordl_internal_set__compressedSize)) int64_t  _compressedSize;

/// @brief Field _compressionLevel, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressionLevel, put=__cordl_internal_set__compressionLevel)) ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  _compressionLevel;

/// @brief Field _crc32, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__crc32, put=__cordl_internal_set__crc32)) uint32_t  _crc32;

/// @brief Field _currentlyOpenForWrite, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentlyOpenForWrite, put=__cordl_internal_set__currentlyOpenForWrite)) bool  _currentlyOpenForWrite;

/// @brief Field _diskNumberStart, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__diskNumberStart, put=__cordl_internal_set__diskNumberStart)) int32_t  _diskNumberStart;

/// @brief Field _everOpenedForWrite, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__everOpenedForWrite, put=__cordl_internal_set__everOpenedForWrite)) bool  _everOpenedForWrite;

/// @brief Field _externalFileAttr, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__externalFileAttr, put=__cordl_internal_set__externalFileAttr)) uint32_t  _externalFileAttr;

/// @brief Field _fileComment, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__fileComment, put=__cordl_internal_set__fileComment)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _fileComment;

/// @brief Field _generalPurposeBitFlag, offset 0x26, size 0x2 
 __declspec(property(get=__cordl_internal_get__generalPurposeBitFlag, put=__cordl_internal_set__generalPurposeBitFlag)) ::System::IO::Compression::ZipArchiveEntry_BitFlagValues  _generalPurposeBitFlag;

/// @brief Field _lastModified, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastModified, put=__cordl_internal_set__lastModified)) ::System::DateTimeOffset  _lastModified;

/// @brief Field _lhUnknownExtraFields, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lhUnknownExtraFields, put=__cordl_internal_set__lhUnknownExtraFields)) ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  _lhUnknownExtraFields;

/// @brief Field _offsetOfLocalHeader, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__offsetOfLocalHeader, put=__cordl_internal_set__offsetOfLocalHeader)) int64_t  _offsetOfLocalHeader;

/// @brief Field _originallyInArchive, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__originallyInArchive, put=__cordl_internal_set__originallyInArchive)) bool  _originallyInArchive;

/// @brief Field _outstandingWriteStream, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__outstandingWriteStream, put=__cordl_internal_set__outstandingWriteStream)) ::System::IO::Stream*  _outstandingWriteStream;

/// @brief Field _storedCompressionMethod, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get__storedCompressionMethod, put=__cordl_internal_set__storedCompressionMethod)) ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  _storedCompressionMethod;

/// @brief Field _storedEntryName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__storedEntryName, put=__cordl_internal_set__storedEntryName)) ::StringW  _storedEntryName;

/// @brief Field _storedEntryNameBytes, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__storedEntryNameBytes, put=__cordl_internal_set__storedEntryNameBytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _storedEntryNameBytes;

/// @brief Field _storedOffsetOfCompressedData, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__storedOffsetOfCompressedData, put=__cordl_internal_set__storedOffsetOfCompressedData)) ::System::Nullable_1<int64_t>  _storedOffsetOfCompressedData;

/// @brief Field _storedUncompressedData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__storedUncompressedData, put=__cordl_internal_set__storedUncompressedData)) ::System::IO::MemoryStream*  _storedUncompressedData;

/// @brief Field _uncompressedSize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__uncompressedSize, put=__cordl_internal_set__uncompressedSize)) int64_t  _uncompressedSize;

/// @brief Field _versionMadeByPlatform, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__versionMadeByPlatform, put=__cordl_internal_set__versionMadeByPlatform)) ::System::IO::Compression::ZipVersionMadeByPlatform  _versionMadeByPlatform;

/// @brief Field _versionMadeBySpecification, offset 0x22, size 0x2 
 __declspec(property(get=__cordl_internal_get__versionMadeBySpecification, put=__cordl_internal_set__versionMadeBySpecification)) ::System::IO::Compression::ZipVersionNeededValues  _versionMadeBySpecification;

/// @brief Field _versionToExtract, offset 0x24, size 0x2 
 __declspec(property(get=__cordl_internal_get__versionToExtract, put=__cordl_internal_set__versionToExtract)) ::System::IO::Compression::ZipVersionNeededValues  _versionToExtract;

/// @brief Field s_allowLargeZipArchiveEntriesInUpdateMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_allowLargeZipArchiveEntriesInUpdateMode, put=setStaticF_s_allowLargeZipArchiveEntriesInUpdateMode)) bool  s_allowLargeZipArchiveEntriesInUpdateMode;

/// @brief Method CloseStreams, addr 0x2b15528, size 0x14, virtual false, abstract: false, final false
inline void CloseStreams() ;

/// @brief Method DecodeEntryName, addr 0x2b14444, size 0x48, virtual false, abstract: false, final false
inline ::StringW DecodeEntryName(::ArrayW<uint8_t,::Array<uint8_t>*>  entryNameBytes) ;

/// @brief Method Delete, addr 0x2b138cc, size 0xdc, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method EncodeEntryName, addr 0x2b145c4, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncodeEntryName(::StringW  entryName, ::ByRef<bool>  isUTF8) ;

/// @brief Method GetDataCompressor, addr 0x2b16314, size 0x1c0, virtual false, abstract: false, final false
inline ::System::IO::Compression::CheckSumAndSizeWriteStream* GetDataCompressor(::System::IO::Stream*  backingStream, bool  leaveBackingStreamOpen, ::System::EventHandler*  onClose) ;

/// @brief Method GetDataDecompressor, addr 0x2b16584, size 0xac, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetDataDecompressor(::System::IO::Stream*  compressedStreamToRead) ;

/// @brief Method GetFileName_Unix, addr 0x2b16ff8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW GetFileName_Unix(::StringW  path) ;

/// @brief Method GetFileName_Windows, addr 0x2b16f68, size 0x90, virtual false, abstract: false, final false
static inline ::StringW GetFileName_Windows(::StringW  path) ;

/// @brief Method IsOpenable, addr 0x2b160c8, size 0x24c, virtual false, abstract: false, final false
inline bool IsOpenable(bool  needToUncompress, bool  needToLoadIntoMemory, ::ByRef<::StringW>  message) ;

/// @brief Method LoadLocalHeaderExtraFieldAndCompressedBytesIfNeeded, addr 0x2b1365c, size 0x270, virtual false, abstract: false, final false
inline bool LoadLocalHeaderExtraFieldAndCompressedBytesIfNeeded() ;

static inline ::System::IO::Compression::ZipArchiveEntry* New_ctor(::System::IO::Compression::ZipArchive*  archive, ::System::IO::Compression::ZipCentralDirectoryFileHeader  cd) ;

static inline ::System::IO::Compression::ZipArchiveEntry* New_ctor(::System::IO::Compression::ZipArchive*  archive, ::StringW  entryName) ;

static inline ::System::IO::Compression::ZipArchiveEntry* New_ctor(::System::IO::Compression::ZipArchive*  archive, ::StringW  entryName, ::System::IO::Compression::CompressionLevel  compressionLevel) ;

/// @brief Method Open, addr 0x2b14ab4, size 0x50, virtual false, abstract: false, final false
inline ::System::IO::Stream* Open() ;

/// @brief Method OpenInReadMode, addr 0x2b14b04, size 0xa8, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenInReadMode(bool  checkOpenable) ;

/// @brief Method OpenInUpdateMode, addr 0x2b14d70, size 0x1b4, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenInUpdateMode() ;

/// @brief Method OpenInWriteMode, addr 0x2b14bac, size 0x1c4, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenInWriteMode() ;

/// @brief Method ParseFileName, addr 0x2b146a4, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW ParseFileName(::StringW  path, ::System::IO::Compression::ZipVersionMadeByPlatform  madeByPlatform) ;

/// @brief Method SizesTooLarge, addr 0x2b15838, size 0x2c, virtual false, abstract: false, final false
inline bool SizesTooLarge() ;

/// @brief Method ThrowIfInvalidArchive, addr 0x2b14970, size 0x5c, virtual false, abstract: false, final false
inline void ThrowIfInvalidArchive() ;

/// @brief Method ThrowIfNotOpenable, addr 0x2b129f4, size 0x68, virtual false, abstract: false, final false
inline void ThrowIfNotOpenable(bool  needToUncompress, bool  needToLoadIntoMemory) ;

/// @brief Method ToString, addr 0x2b14f24, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnloadStreams, addr 0x2b14a8c, size 0x28, virtual false, abstract: false, final false
inline void UnloadStreams() ;

/// @brief Method VersionToExtractAtLeast, addr 0x2b14754, size 0x24, virtual false, abstract: false, final false
inline void VersionToExtractAtLeast(::System::IO::Compression::ZipVersionNeededValues  value) ;

/// @brief Method WriteAndFinishLocalEntry, addr 0x2b120ac, size 0x40, virtual false, abstract: false, final false
inline void WriteAndFinishLocalEntry() ;

/// @brief Method WriteCentralDirectoryFileHeader, addr 0x2b139a8, size 0x484, virtual false, abstract: false, final false
inline void WriteCentralDirectoryFileHeader() ;

/// @brief Method WriteCrcAndSizesInLocalHeader, addr 0x2b16b3c, size 0x310, virtual false, abstract: false, final false
inline void WriteCrcAndSizesInLocalHeader(bool  zip64HeaderUsed) ;

/// @brief Method WriteDataDescriptor, addr 0x2b16e4c, size 0x11c, virtual false, abstract: false, final false
inline void WriteDataDescriptor() ;

/// @brief Method WriteLocalFileHeader, addr 0x2b1675c, size 0x3e0, virtual false, abstract: false, final false
inline bool WriteLocalFileHeader(bool  isEmptyFile) ;

/// @brief Method WriteLocalFileHeaderAndDataIfNeeded, addr 0x2b1553c, size 0x2fc, virtual false, abstract: false, final false
inline void WriteLocalFileHeaderAndDataIfNeeded() ;

constexpr ::System::IO::Compression::ZipArchive* const& __cordl_internal_get__archive() const;

constexpr ::System::IO::Compression::ZipArchive*& __cordl_internal_get__archive() ;

constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* const& __cordl_internal_get__cdUnknownExtraFields() const;

constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*& __cordl_internal_get__cdUnknownExtraFields() ;

constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> const& __cordl_internal_get__compressedBytes() const;

constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>& __cordl_internal_get__compressedBytes() ;

constexpr int64_t const& __cordl_internal_get__compressedSize() const;

constexpr int64_t& __cordl_internal_get__compressedSize() ;

constexpr ::System::Nullable_1<::System::IO::Compression::CompressionLevel> const& __cordl_internal_get__compressionLevel() const;

constexpr ::System::Nullable_1<::System::IO::Compression::CompressionLevel>& __cordl_internal_get__compressionLevel() ;

constexpr uint32_t const& __cordl_internal_get__crc32() const;

constexpr uint32_t& __cordl_internal_get__crc32() ;

constexpr bool const& __cordl_internal_get__currentlyOpenForWrite() const;

constexpr bool& __cordl_internal_get__currentlyOpenForWrite() ;

constexpr int32_t const& __cordl_internal_get__diskNumberStart() const;

constexpr int32_t& __cordl_internal_get__diskNumberStart() ;

constexpr bool const& __cordl_internal_get__everOpenedForWrite() const;

constexpr bool& __cordl_internal_get__everOpenedForWrite() ;

constexpr uint32_t const& __cordl_internal_get__externalFileAttr() const;

constexpr uint32_t& __cordl_internal_get__externalFileAttr() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__fileComment() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__fileComment() ;

constexpr ::System::IO::Compression::ZipArchiveEntry_BitFlagValues const& __cordl_internal_get__generalPurposeBitFlag() const;

constexpr ::System::IO::Compression::ZipArchiveEntry_BitFlagValues& __cordl_internal_get__generalPurposeBitFlag() ;

constexpr ::System::DateTimeOffset const& __cordl_internal_get__lastModified() const;

constexpr ::System::DateTimeOffset& __cordl_internal_get__lastModified() ;

constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* const& __cordl_internal_get__lhUnknownExtraFields() const;

constexpr ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*& __cordl_internal_get__lhUnknownExtraFields() ;

constexpr int64_t const& __cordl_internal_get__offsetOfLocalHeader() const;

constexpr int64_t& __cordl_internal_get__offsetOfLocalHeader() ;

constexpr bool const& __cordl_internal_get__originallyInArchive() const;

constexpr bool& __cordl_internal_get__originallyInArchive() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__outstandingWriteStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__outstandingWriteStream() ;

constexpr ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues const& __cordl_internal_get__storedCompressionMethod() const;

constexpr ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues& __cordl_internal_get__storedCompressionMethod() ;

constexpr ::StringW const& __cordl_internal_get__storedEntryName() const;

constexpr ::StringW& __cordl_internal_get__storedEntryName() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__storedEntryNameBytes() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__storedEntryNameBytes() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__storedOffsetOfCompressedData() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__storedOffsetOfCompressedData() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get__storedUncompressedData() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get__storedUncompressedData() ;

constexpr int64_t const& __cordl_internal_get__uncompressedSize() const;

constexpr int64_t& __cordl_internal_get__uncompressedSize() ;

constexpr ::System::IO::Compression::ZipVersionMadeByPlatform const& __cordl_internal_get__versionMadeByPlatform() const;

constexpr ::System::IO::Compression::ZipVersionMadeByPlatform& __cordl_internal_get__versionMadeByPlatform() ;

constexpr ::System::IO::Compression::ZipVersionNeededValues const& __cordl_internal_get__versionMadeBySpecification() const;

constexpr ::System::IO::Compression::ZipVersionNeededValues& __cordl_internal_get__versionMadeBySpecification() ;

constexpr ::System::IO::Compression::ZipVersionNeededValues const& __cordl_internal_get__versionToExtract() const;

constexpr ::System::IO::Compression::ZipVersionNeededValues& __cordl_internal_get__versionToExtract() ;

constexpr void __cordl_internal_set__archive(::System::IO::Compression::ZipArchive*  value) ;

constexpr void __cordl_internal_set__cdUnknownExtraFields(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  value) ;

constexpr void __cordl_internal_set__compressedBytes(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value) ;

constexpr void __cordl_internal_set__compressedSize(int64_t  value) ;

constexpr void __cordl_internal_set__compressionLevel(::System::Nullable_1<::System::IO::Compression::CompressionLevel>  value) ;

constexpr void __cordl_internal_set__crc32(uint32_t  value) ;

constexpr void __cordl_internal_set__currentlyOpenForWrite(bool  value) ;

constexpr void __cordl_internal_set__diskNumberStart(int32_t  value) ;

constexpr void __cordl_internal_set__everOpenedForWrite(bool  value) ;

constexpr void __cordl_internal_set__externalFileAttr(uint32_t  value) ;

constexpr void __cordl_internal_set__fileComment(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__generalPurposeBitFlag(::System::IO::Compression::ZipArchiveEntry_BitFlagValues  value) ;

constexpr void __cordl_internal_set__lastModified(::System::DateTimeOffset  value) ;

constexpr void __cordl_internal_set__lhUnknownExtraFields(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  value) ;

constexpr void __cordl_internal_set__offsetOfLocalHeader(int64_t  value) ;

constexpr void __cordl_internal_set__originallyInArchive(bool  value) ;

constexpr void __cordl_internal_set__outstandingWriteStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__storedCompressionMethod(::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  value) ;

constexpr void __cordl_internal_set__storedEntryName(::StringW  value) ;

constexpr void __cordl_internal_set__storedEntryNameBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__storedOffsetOfCompressedData(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set__storedUncompressedData(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set__uncompressedSize(int64_t  value) ;

constexpr void __cordl_internal_set__versionMadeByPlatform(::System::IO::Compression::ZipVersionMadeByPlatform  value) ;

constexpr void __cordl_internal_set__versionMadeBySpecification(::System::IO::Compression::ZipVersionNeededValues  value) ;

constexpr void __cordl_internal_set__versionToExtract(::System::IO::Compression::ZipVersionNeededValues  value) ;

/// @brief Method .ctor, addr 0x2b12a5c, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Compression::ZipArchive*  archive, ::System::IO::Compression::ZipCentralDirectoryFileHeader  cd) ;

/// @brief Method .ctor, addr 0x2b11d20, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Compression::ZipArchive*  archive, ::StringW  entryName) ;

/// @brief Method .ctor, addr 0x2b11ea0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Compression::ZipArchive*  archive, ::StringW  entryName, ::System::IO::Compression::CompressionLevel  compressionLevel) ;

static inline ::System::IO::Compression::ZipVersionMadeByPlatform getStaticF_CurrentZipPlatform() ;

static inline bool getStaticF_s_allowLargeZipArchiveEntriesInUpdateMode() ;

/// @brief Method get_CompressionMethod, addr 0x2b154b0, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues get_CompressionMethod() ;

/// @brief Method get_EverOpenedForWrite, addr 0x2b14f2c, size 0x8, virtual false, abstract: false, final false
inline bool get_EverOpenedForWrite() ;

/// @brief Method get_FullName, addr 0x2b145bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_LastWriteTime, addr 0x2b14778, size 0xc, virtual false, abstract: false, final false
inline ::System::DateTimeOffset get_LastWriteTime() ;

/// @brief Method get_Length, addr 0x2b149cc, size 0x60, virtual false, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Name, addr 0x2b14a2c, size 0x60, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_OffsetOfCompressedData, addr 0x2b14f34, size 0x140, virtual false, abstract: false, final false
inline int64_t get_OffsetOfCompressedData() ;

/// @brief Method get_UncompressedData, addr 0x2b151fc, size 0x2b4, virtual false, abstract: false, final false
inline ::System::IO::MemoryStream* get_UncompressedData() ;

static inline void setStaticF_CurrentZipPlatform(::System::IO::Compression::ZipVersionMadeByPlatform  value) ;

static inline void setStaticF_s_allowLargeZipArchiveEntriesInUpdateMode(bool  value) ;

/// @brief Method set_CompressionMethod, addr 0x2b142dc, size 0x6c, virtual false, abstract: false, final false
inline void set_CompressionMethod(::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  value) ;

/// @brief Method set_FullName, addr 0x2b1448c, size 0x130, virtual false, abstract: false, final false
inline void set_FullName(::StringW  value) ;

/// @brief Method set_LastWriteTime, addr 0x2b14784, size 0x1ec, virtual false, abstract: false, final false
inline void set_LastWriteTime(::System::DateTimeOffset  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipArchiveEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipArchiveEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipArchiveEntry(ZipArchiveEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipArchiveEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipArchiveEntry(ZipArchiveEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11296};

/// @brief Field _archive, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Compression::ZipArchive*  ____archive;

/// @brief Field _originallyInArchive, offset: 0x18, size: 0x1, def value: None
 bool  ____originallyInArchive;

/// @brief Field _diskNumberStart, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____diskNumberStart;

/// @brief Field _versionMadeByPlatform, offset: 0x20, size: 0x1, def value: None
 ::System::IO::Compression::ZipVersionMadeByPlatform  ____versionMadeByPlatform;

/// @brief Field _versionMadeBySpecification, offset: 0x22, size: 0x2, def value: None
 ::System::IO::Compression::ZipVersionNeededValues  ____versionMadeBySpecification;

/// @brief Field _versionToExtract, offset: 0x24, size: 0x2, def value: None
 ::System::IO::Compression::ZipVersionNeededValues  ____versionToExtract;

/// @brief Field _generalPurposeBitFlag, offset: 0x26, size: 0x2, def value: None
 ::System::IO::Compression::ZipArchiveEntry_BitFlagValues  ____generalPurposeBitFlag;

/// @brief Field _storedCompressionMethod, offset: 0x28, size: 0x2, def value: None
 ::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues  ____storedCompressionMethod;

/// @brief Field _lastModified, offset: 0x30, size: 0x10, def value: None
 ::System::DateTimeOffset  ____lastModified;

/// @brief Field _compressedSize, offset: 0x40, size: 0x8, def value: None
 int64_t  ____compressedSize;

/// @brief Field _uncompressedSize, offset: 0x48, size: 0x8, def value: None
 int64_t  ____uncompressedSize;

/// @brief Field _offsetOfLocalHeader, offset: 0x50, size: 0x8, def value: None
 int64_t  ____offsetOfLocalHeader;

/// @brief Field _storedOffsetOfCompressedData, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ____storedOffsetOfCompressedData;

/// @brief Field _crc32, offset: 0x68, size: 0x4, def value: None
 uint32_t  ____crc32;

/// @brief Field _compressedBytes, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  ____compressedBytes;

/// @brief Field _storedUncompressedData, offset: 0x78, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ____storedUncompressedData;

/// @brief Field _currentlyOpenForWrite, offset: 0x80, size: 0x1, def value: None
 bool  ____currentlyOpenForWrite;

/// @brief Field _everOpenedForWrite, offset: 0x81, size: 0x1, def value: None
 bool  ____everOpenedForWrite;

/// @brief Field _outstandingWriteStream, offset: 0x88, size: 0x8, def value: None
 ::System::IO::Stream*  ____outstandingWriteStream;

/// @brief Field _externalFileAttr, offset: 0x90, size: 0x4, def value: None
 uint32_t  ____externalFileAttr;

/// @brief Field _storedEntryName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____storedEntryName;

/// @brief Field _storedEntryNameBytes, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____storedEntryNameBytes;

/// @brief Field _cdUnknownExtraFields, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  ____cdUnknownExtraFields;

/// @brief Field _lhUnknownExtraFields, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  ____lhUnknownExtraFields;

/// @brief Field _fileComment, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____fileComment;

/// @brief Field _compressionLevel, offset: 0xc0, size: 0x8, def value: None
 ::System::Nullable_1<::System::IO::Compression::CompressionLevel>  ____compressionLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____archive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____originallyInArchive) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____diskNumberStart) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____versionMadeByPlatform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____versionMadeBySpecification) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____versionToExtract) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____generalPurposeBitFlag) == 0x26, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____storedCompressionMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____lastModified) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____compressedSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____uncompressedSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____offsetOfLocalHeader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____storedOffsetOfCompressedData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____crc32) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____compressedBytes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____storedUncompressedData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____currentlyOpenForWrite) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____everOpenedForWrite) == 0x81, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____outstandingWriteStream) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____externalFileAttr) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____storedEntryName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____storedEntryNameBytes) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____cdUnknownExtraFields) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____lhUnknownExtraFields) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____fileComment) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipArchiveEntry, ____compressionLevel) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchiveEntry, 0xc8>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry_BitFlagValues, "System.IO.Compression", "ZipArchiveEntry/BitFlagValues");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry_CompressionMethodValues, "System.IO.Compression", "ZipArchiveEntry/CompressionMethodValues");
NEED_NO_BOX(::System::IO::Compression::ZipArchiveEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry*, "System.IO.Compression", "ZipArchiveEntry");
NEED_NO_BOX(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry_DirectToArchiveWriterStream*, "System.IO.Compression", "ZipArchiveEntry/DirectToArchiveWriterStream");
NEED_NO_BOX(::System::IO::Compression::ZipArchiveEntry___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry___c*, "System.IO.Compression", "ZipArchiveEntry/<>c");
