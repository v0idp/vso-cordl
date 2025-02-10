#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipGenericExtraField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipGenericExtraField)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::IO::Compression {
struct ZipGenericExtraField;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipGenericExtraField);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipGenericExtraField
struct CORDL_TYPE ZipGenericExtraField {
public:
// Declarations
 __declspec(property(get=get_Data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Data;

 __declspec(property(get=get_Size)) uint16_t  Size;

 __declspec(property(get=get_Tag)) uint16_t  Tag;

/// @brief Method ParseExtraField, addr 0x2b17934, size 0x27c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* ParseExtraField(::System::IO::Stream*  extraFieldData) ;

/// @brief Method TotalSize, addr 0x2b15888, size 0x14c, virtual false, abstract: false, final false
static inline int32_t TotalSize(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  fields) ;

/// @brief Method TryReadBlock, addr 0x2b1785c, size 0xd8, virtual false, abstract: false, final false
static inline bool TryReadBlock(::System::IO::BinaryReader*  reader, int64_t  endExtraField, ::ByRef<::System::IO::Compression::ZipGenericExtraField>  field) ;

/// @brief Method WriteAllBlocks, addr 0x2b15c54, size 0x14c, virtual false, abstract: false, final false
static inline void WriteAllBlocks(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*  fields, ::System::IO::Stream*  stream) ;

/// @brief Method WriteBlock, addr 0x2b177b0, size 0xac, virtual false, abstract: false, final false
inline void WriteBlock(::System::IO::Stream*  stream) ;

/// @brief Method get_Data, addr 0x2b177a8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Data() ;

/// @brief Method get_Size, addr 0x2b177a0, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_Size() ;

/// @brief Method get_Tag, addr 0x2b17798, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_Tag() ;

// Ctor Parameters []
// @brief default ctor
constexpr ZipGenericExtraField() ;

// Ctor Parameters [CppParam { name: "_tag", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_size", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr ZipGenericExtraField(uint16_t  _tag, uint16_t  _size, ::ArrayW<uint8_t,::Array<uint8_t>*>  _data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _tag, offset: 0x0, size: 0x2, def value: None
 uint16_t  _tag;

/// @brief Field _size, offset: 0x2, size: 0x2, def value: None
 uint16_t  _size;

/// @brief Field _data, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  _data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipGenericExtraField, _tag) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipGenericExtraField, _size) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::ZipGenericExtraField, _data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipGenericExtraField, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipGenericExtraField, "System.IO.Compression", "ZipGenericExtraField");
