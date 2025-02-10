#pragma once
// IWYU pragma private; include "System/IO/Compression/Zip64ExtraField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Zip64ExtraField)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO::Compression {
struct ZipGenericExtraField;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::IO::Compression {
struct Zip64ExtraField;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::Zip64ExtraField);
// Dependencies System.Nullable`1<T>
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.Zip64ExtraField
struct CORDL_TYPE Zip64ExtraField {
public:
// Declarations
 __declspec(property(get=get_CompressedSize, put=set_CompressedSize)) ::System::Nullable_1<int64_t>  CompressedSize;

 __declspec(property(get=get_LocalHeaderOffset, put=set_LocalHeaderOffset)) ::System::Nullable_1<int64_t>  LocalHeaderOffset;

 __declspec(property(get=get_StartDiskNumber)) ::System::Nullable_1<int32_t>  StartDiskNumber;

 __declspec(property(get=get_TotalSize)) uint16_t  TotalSize;

 __declspec(property(get=get_UncompressedSize, put=set_UncompressedSize)) ::System::Nullable_1<int64_t>  UncompressedSize;

/// @brief Method GetAndRemoveZip64Block, addr 0x2b18524, size 0x370, virtual false, abstract: false, final false
static inline ::System::IO::Compression::Zip64ExtraField GetAndRemoveZip64Block(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  extraFields, bool  readUncompressedSize, bool  readCompressedSize, bool  readLocalHeaderOffset, bool  readStartDiskNumber) ;

/// @brief Method GetJustZip64Block, addr 0x2b17c68, size 0x28c, virtual false, abstract: false, final false
static inline ::System::IO::Compression::Zip64ExtraField GetJustZip64Block(::System::IO::Stream*  extraFieldStream, bool  readUncompressedSize, bool  readCompressedSize, bool  readLocalHeaderOffset, bool  readStartDiskNumber) ;

/// @brief Method RemoveZip64Blocks, addr 0x2b18894, size 0x2c4, virtual false, abstract: false, final false
static inline void RemoveZip64Blocks(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  extraFields) ;

/// @brief Method TryGetZip64BlockFromGenericExtraField, addr 0x2b17ef4, size 0x630, virtual false, abstract: false, final false
static inline bool TryGetZip64BlockFromGenericExtraField(::System::IO::Compression::ZipGenericExtraField  extraField, bool  readUncompressedSize, bool  readCompressedSize, bool  readLocalHeaderOffset, bool  readStartDiskNumber, ::ByRef<::System::IO::Compression::Zip64ExtraField>  zip64Block) ;

/// @brief Method UpdateSize, addr 0x2b17bbc, size 0x8c, virtual false, abstract: false, final false
inline void UpdateSize() ;

/// @brief Method WriteBlock, addr 0x2b15abc, size 0x198, virtual false, abstract: false, final false
inline void WriteBlock(::System::IO::Stream*  stream) ;

/// @brief Method get_CompressedSize, addr 0x2b17c48, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_CompressedSize() ;

/// @brief Method get_LocalHeaderOffset, addr 0x2b17c54, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_LocalHeaderOffset() ;

/// @brief Method get_StartDiskNumber, addr 0x2b17c60, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_StartDiskNumber() ;

/// @brief Method get_TotalSize, addr 0x2b1587c, size 0xc, virtual false, abstract: false, final false
inline uint16_t get_TotalSize() ;

/// @brief Method get_UncompressedSize, addr 0x2b17bb0, size 0xc, virtual false, abstract: false, final false
inline ::System::Nullable_1<int64_t> get_UncompressedSize() ;

/// @brief Method set_CompressedSize, addr 0x2b15864, size 0x8, virtual false, abstract: false, final false
inline void set_CompressedSize(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_LocalHeaderOffset, addr 0x2b15874, size 0x8, virtual false, abstract: false, final false
inline void set_LocalHeaderOffset(::System::Nullable_1<int64_t>  value) ;

/// @brief Method set_UncompressedSize, addr 0x2b1586c, size 0x8, virtual false, abstract: false, final false
inline void set_UncompressedSize(::System::Nullable_1<int64_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Zip64ExtraField() ;

// Ctor Parameters [CppParam { name: "_size", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_uncompressedSize", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "_compressedSize", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "_localHeaderOffset", ty: "::System::Nullable_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "_startDiskNumber", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
constexpr Zip64ExtraField(uint16_t  _size, ::System::Nullable_1<int64_t>  _uncompressedSize, ::System::Nullable_1<int64_t>  _compressedSize, ::System::Nullable_1<int64_t>  _localHeaderOffset, ::System::Nullable_1<int32_t>  _startDiskNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11299};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field _size, offset: 0x0, size: 0x2, def value: None
 uint16_t  _size;

/// @brief Field _uncompressedSize, offset: 0x8, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  _uncompressedSize;

/// @brief Field _compressedSize, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  _compressedSize;

/// @brief Field _localHeaderOffset, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  _localHeaderOffset;

/// @brief Field _startDiskNumber, offset: 0x38, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  _startDiskNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::Zip64ExtraField, _size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64ExtraField, _uncompressedSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64ExtraField, _compressedSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64ExtraField, _localHeaderOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::Zip64ExtraField, _startDiskNumber) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::Zip64ExtraField, 0x40>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::Zip64ExtraField, "System.IO.Compression", "Zip64ExtraField");
