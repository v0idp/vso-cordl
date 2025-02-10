#pragma once
// IWYU pragma private; include "System/IO/Compression/InflaterManaged.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/Compression/zzzz__BlockType_def.hpp"
#include "System/IO/Compression/zzzz__InflaterState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflaterManaged)
namespace System::IO::Compression {
class HuffmanTree;
}
namespace System::IO::Compression {
class IFileFormatReader;
}
namespace System::IO::Compression {
class InputBuffer;
}
namespace System::IO::Compression {
class OutputWindow;
}
// Forward declare root types
namespace System::IO::Compression {
class InflaterManaged;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::InflaterManaged);
// Dependencies System.IO.Compression.BlockType, System.IO.Compression.InflaterState, System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.InflaterManaged
class CORDL_TYPE InflaterManaged : public ::System::Object {
public:
// Declarations
/// @brief Field _bfinal, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__bfinal, put=__cordl_internal_set__bfinal)) int32_t  _bfinal;

/// @brief Field _blockLength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__blockLength, put=__cordl_internal_set__blockLength)) int32_t  _blockLength;

/// @brief Field _blockLengthBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockLengthBuffer, put=__cordl_internal_set__blockLengthBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _blockLengthBuffer;

/// @brief Field _blockType, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__blockType, put=__cordl_internal_set__blockType)) ::System::IO::Compression::BlockType  _blockType;

/// @brief Field _codeArraySize, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__codeArraySize, put=__cordl_internal_set__codeArraySize)) int32_t  _codeArraySize;

/// @brief Field _codeLengthCodeCount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__codeLengthCodeCount, put=__cordl_internal_set__codeLengthCodeCount)) int32_t  _codeLengthCodeCount;

/// @brief Field _codeLengthTree, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__codeLengthTree, put=__cordl_internal_set__codeLengthTree)) ::System::IO::Compression::HuffmanTree*  _codeLengthTree;

/// @brief Field _codeLengthTreeCodeLength, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__codeLengthTreeCodeLength, put=__cordl_internal_set__codeLengthTreeCodeLength)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _codeLengthTreeCodeLength;

/// @brief Field _codeList, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__codeList, put=__cordl_internal_set__codeList)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _codeList;

/// @brief Field _deflate64, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__deflate64, put=__cordl_internal_set__deflate64)) bool  _deflate64;

/// @brief Field _distanceCode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceCode, put=__cordl_internal_set__distanceCode)) int32_t  _distanceCode;

/// @brief Field _distanceCodeCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceCodeCount, put=__cordl_internal_set__distanceCodeCount)) int32_t  _distanceCodeCount;

/// @brief Field _distanceTree, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__distanceTree, put=__cordl_internal_set__distanceTree)) ::System::IO::Compression::HuffmanTree*  _distanceTree;

/// @brief Field _extraBits, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__extraBits, put=__cordl_internal_set__extraBits)) int32_t  _extraBits;

/// @brief Field _formatReader, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__formatReader, put=__cordl_internal_set__formatReader)) ::System::IO::Compression::IFileFormatReader*  _formatReader;

/// @brief Field _hasFormatReader, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasFormatReader, put=__cordl_internal_set__hasFormatReader)) bool  _hasFormatReader;

/// @brief Field _input, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__input, put=__cordl_internal_set__input)) ::System::IO::Compression::InputBuffer*  _input;

/// @brief Field _length, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) int32_t  _length;

/// @brief Field _lengthCode, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lengthCode, put=__cordl_internal_set__lengthCode)) int32_t  _lengthCode;

/// @brief Field _literalLengthCodeCount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__literalLengthCodeCount, put=__cordl_internal_set__literalLengthCodeCount)) int32_t  _literalLengthCodeCount;

/// @brief Field _literalLengthTree, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__literalLengthTree, put=__cordl_internal_set__literalLengthTree)) ::System::IO::Compression::HuffmanTree*  _literalLengthTree;

/// @brief Field _loopCounter, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__loopCounter, put=__cordl_internal_set__loopCounter)) int32_t  _loopCounter;

/// @brief Field _output, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::System::IO::Compression::OutputWindow*  _output;

/// @brief Field _state, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::System::IO::Compression::InflaterState  _state;

/// @brief Field s_codeOrder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_codeOrder, put=setStaticF_s_codeOrder)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s_codeOrder;

/// @brief Field s_distanceBasePosition, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_distanceBasePosition, put=setStaticF_s_distanceBasePosition)) ::ArrayW<int32_t,::Array<int32_t>*>  s_distanceBasePosition;

/// @brief Field s_extraLengthBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_extraLengthBits, put=setStaticF_s_extraLengthBits)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s_extraLengthBits;

/// @brief Field s_lengthBase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_lengthBase, put=setStaticF_s_lengthBase)) ::ArrayW<int32_t,::Array<int32_t>*>  s_lengthBase;

/// @brief Field s_staticDistanceTreeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_staticDistanceTreeTable, put=setStaticF_s_staticDistanceTreeTable)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s_staticDistanceTreeTable;

/// @brief Method Decode, addr 0x2b0f054, size 0x3e4, virtual false, abstract: false, final false
inline bool Decode() ;

/// @brief Method DecodeBlock, addr 0x2b0fbc4, size 0x404, virtual false, abstract: false, final false
inline bool DecodeBlock(::ByRef<bool>  end_of_block_code_seen) ;

/// @brief Method DecodeDynamicBlockHeader, addr 0x2b0f528, size 0x69c, virtual false, abstract: false, final false
inline bool DecodeDynamicBlockHeader() ;

/// @brief Method DecodeUncompressedBlock, addr 0x2b0ffc8, size 0x1e4, virtual false, abstract: false, final false
inline bool DecodeUncompressedBlock(::ByRef<bool>  end_of_block) ;

/// @brief Method Dispose, addr 0x2b1046c, size 0x4, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finished, addr 0x2b0b6b8, size 0x14, virtual false, abstract: false, final false
inline bool Finished() ;

/// @brief Method Inflate, addr 0x2b0b500, size 0x1b8, virtual false, abstract: false, final false
inline int32_t Inflate(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length) ;

static inline ::System::IO::Compression::InflaterManaged* New_ctor(::System::IO::Compression::IFileFormatReader*  reader, bool  deflate64) ;

/// @brief Method Reset, addr 0x2b0ef70, size 0x28, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetInput, addr 0x2b0b6cc, size 0x24, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t,::Array<uint8_t>*>  inputBytes, int32_t  offset, int32_t  length) ;

constexpr int32_t const& __cordl_internal_get__bfinal() const;

constexpr int32_t& __cordl_internal_get__bfinal() ;

constexpr int32_t const& __cordl_internal_get__blockLength() const;

constexpr int32_t& __cordl_internal_get__blockLength() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__blockLengthBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__blockLengthBuffer() ;

constexpr ::System::IO::Compression::BlockType const& __cordl_internal_get__blockType() const;

constexpr ::System::IO::Compression::BlockType& __cordl_internal_get__blockType() ;

constexpr int32_t const& __cordl_internal_get__codeArraySize() const;

constexpr int32_t& __cordl_internal_get__codeArraySize() ;

constexpr int32_t const& __cordl_internal_get__codeLengthCodeCount() const;

constexpr int32_t& __cordl_internal_get__codeLengthCodeCount() ;

constexpr ::System::IO::Compression::HuffmanTree* const& __cordl_internal_get__codeLengthTree() const;

constexpr ::System::IO::Compression::HuffmanTree*& __cordl_internal_get__codeLengthTree() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__codeLengthTreeCodeLength() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__codeLengthTreeCodeLength() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__codeList() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__codeList() ;

constexpr bool const& __cordl_internal_get__deflate64() const;

constexpr bool& __cordl_internal_get__deflate64() ;

constexpr int32_t const& __cordl_internal_get__distanceCode() const;

constexpr int32_t& __cordl_internal_get__distanceCode() ;

constexpr int32_t const& __cordl_internal_get__distanceCodeCount() const;

constexpr int32_t& __cordl_internal_get__distanceCodeCount() ;

constexpr ::System::IO::Compression::HuffmanTree* const& __cordl_internal_get__distanceTree() const;

constexpr ::System::IO::Compression::HuffmanTree*& __cordl_internal_get__distanceTree() ;

constexpr int32_t const& __cordl_internal_get__extraBits() const;

constexpr int32_t& __cordl_internal_get__extraBits() ;

constexpr ::System::IO::Compression::IFileFormatReader* const& __cordl_internal_get__formatReader() const;

constexpr ::System::IO::Compression::IFileFormatReader*& __cordl_internal_get__formatReader() ;

constexpr bool const& __cordl_internal_get__hasFormatReader() const;

constexpr bool& __cordl_internal_get__hasFormatReader() ;

constexpr ::System::IO::Compression::InputBuffer* const& __cordl_internal_get__input() const;

constexpr ::System::IO::Compression::InputBuffer*& __cordl_internal_get__input() ;

constexpr int32_t const& __cordl_internal_get__length() const;

constexpr int32_t& __cordl_internal_get__length() ;

constexpr int32_t const& __cordl_internal_get__lengthCode() const;

constexpr int32_t& __cordl_internal_get__lengthCode() ;

constexpr int32_t const& __cordl_internal_get__literalLengthCodeCount() const;

constexpr int32_t& __cordl_internal_get__literalLengthCodeCount() ;

constexpr ::System::IO::Compression::HuffmanTree* const& __cordl_internal_get__literalLengthTree() const;

constexpr ::System::IO::Compression::HuffmanTree*& __cordl_internal_get__literalLengthTree() ;

constexpr int32_t const& __cordl_internal_get__loopCounter() const;

constexpr int32_t& __cordl_internal_get__loopCounter() ;

constexpr ::System::IO::Compression::OutputWindow* const& __cordl_internal_get__output() const;

constexpr ::System::IO::Compression::OutputWindow*& __cordl_internal_get__output() ;

constexpr ::System::IO::Compression::InflaterState const& __cordl_internal_get__state() const;

constexpr ::System::IO::Compression::InflaterState& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__bfinal(int32_t  value) ;

constexpr void __cordl_internal_set__blockLength(int32_t  value) ;

constexpr void __cordl_internal_set__blockLengthBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__blockType(::System::IO::Compression::BlockType  value) ;

constexpr void __cordl_internal_set__codeArraySize(int32_t  value) ;

constexpr void __cordl_internal_set__codeLengthCodeCount(int32_t  value) ;

constexpr void __cordl_internal_set__codeLengthTree(::System::IO::Compression::HuffmanTree*  value) ;

constexpr void __cordl_internal_set__codeLengthTreeCodeLength(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__codeList(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__deflate64(bool  value) ;

constexpr void __cordl_internal_set__distanceCode(int32_t  value) ;

constexpr void __cordl_internal_set__distanceCodeCount(int32_t  value) ;

constexpr void __cordl_internal_set__distanceTree(::System::IO::Compression::HuffmanTree*  value) ;

constexpr void __cordl_internal_set__extraBits(int32_t  value) ;

constexpr void __cordl_internal_set__formatReader(::System::IO::Compression::IFileFormatReader*  value) ;

constexpr void __cordl_internal_set__hasFormatReader(bool  value) ;

constexpr void __cordl_internal_set__input(::System::IO::Compression::InputBuffer*  value) ;

constexpr void __cordl_internal_set__length(int32_t  value) ;

constexpr void __cordl_internal_set__lengthCode(int32_t  value) ;

constexpr void __cordl_internal_set__literalLengthCodeCount(int32_t  value) ;

constexpr void __cordl_internal_set__literalLengthTree(::System::IO::Compression::HuffmanTree*  value) ;

constexpr void __cordl_internal_set__loopCounter(int32_t  value) ;

constexpr void __cordl_internal_set__output(::System::IO::Compression::OutputWindow*  value) ;

constexpr void __cordl_internal_set__state(::System::IO::Compression::InflaterState  value) ;

/// @brief Method .ctor, addr 0x2b0ae84, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Compression::IFileFormatReader*  reader, bool  deflate64) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_codeOrder() ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_s_distanceBasePosition() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_extraLengthBits() ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_s_lengthBase() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_staticDistanceTreeTable() ;

static inline void setStaticF_s_codeOrder(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_s_distanceBasePosition(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline void setStaticF_s_extraLengthBits(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_s_lengthBase(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline void setStaticF_s_staticDistanceTreeTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflaterManaged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflaterManaged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InflaterManaged(InflaterManaged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflaterManaged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflaterManaged(InflaterManaged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11282};

/// @brief Field _output, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Compression::OutputWindow*  ____output;

/// @brief Field _input, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Compression::InputBuffer*  ____input;

/// @brief Field _literalLengthTree, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Compression::HuffmanTree*  ____literalLengthTree;

/// @brief Field _distanceTree, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Compression::HuffmanTree*  ____distanceTree;

/// @brief Field _state, offset: 0x30, size: 0x4, def value: None
 ::System::IO::Compression::InflaterState  ____state;

/// @brief Field _hasFormatReader, offset: 0x34, size: 0x1, def value: None
 bool  ____hasFormatReader;

/// @brief Field _bfinal, offset: 0x38, size: 0x4, def value: None
 int32_t  ____bfinal;

/// @brief Field _blockType, offset: 0x3c, size: 0x4, def value: None
 ::System::IO::Compression::BlockType  ____blockType;

/// @brief Field _blockLengthBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____blockLengthBuffer;

/// @brief Field _blockLength, offset: 0x48, size: 0x4, def value: None
 int32_t  ____blockLength;

/// @brief Field _length, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____length;

/// @brief Field _distanceCode, offset: 0x50, size: 0x4, def value: None
 int32_t  ____distanceCode;

/// @brief Field _extraBits, offset: 0x54, size: 0x4, def value: None
 int32_t  ____extraBits;

/// @brief Field _loopCounter, offset: 0x58, size: 0x4, def value: None
 int32_t  ____loopCounter;

/// @brief Field _literalLengthCodeCount, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____literalLengthCodeCount;

/// @brief Field _distanceCodeCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ____distanceCodeCount;

/// @brief Field _codeLengthCodeCount, offset: 0x64, size: 0x4, def value: None
 int32_t  ____codeLengthCodeCount;

/// @brief Field _codeArraySize, offset: 0x68, size: 0x4, def value: None
 int32_t  ____codeArraySize;

/// @brief Field _lengthCode, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____lengthCode;

/// @brief Field _codeList, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____codeList;

/// @brief Field _codeLengthTreeCodeLength, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____codeLengthTreeCodeLength;

/// @brief Field _deflate64, offset: 0x80, size: 0x1, def value: None
 bool  ____deflate64;

/// @brief Field _codeLengthTree, offset: 0x88, size: 0x8, def value: None
 ::System::IO::Compression::HuffmanTree*  ____codeLengthTree;

/// @brief Field _formatReader, offset: 0x90, size: 0x8, def value: None
 ::System::IO::Compression::IFileFormatReader*  ____formatReader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____output) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____literalLengthTree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____distanceTree) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____state) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____hasFormatReader) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____bfinal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____blockType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____blockLengthBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____blockLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____length) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____distanceCode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____extraBits) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____loopCounter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____literalLengthCodeCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____distanceCodeCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____codeLengthCodeCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____codeArraySize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____lengthCode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____codeList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____codeLengthTreeCodeLength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____deflate64) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____codeLengthTree) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::InflaterManaged, ____formatReader) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::InflaterManaged, 0x98>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::InflaterManaged);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::InflaterManaged*, "System.IO.Compression", "InflaterManaged");
