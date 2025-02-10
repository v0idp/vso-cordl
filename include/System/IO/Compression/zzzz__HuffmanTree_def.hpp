#pragma once
// IWYU pragma private; include "System/IO/Compression/HuffmanTree.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HuffmanTree)
namespace System::IO::Compression {
class InputBuffer;
}
// Forward declare root types
namespace System::IO::Compression {
class HuffmanTree;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::HuffmanTree);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.HuffmanTree
class CORDL_TYPE HuffmanTree : public ::System::Object {
public:
// Declarations
/// @brief Field <StaticDistanceTree>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__StaticDistanceTree_k__BackingField, put=setStaticF__StaticDistanceTree_k__BackingField)) ::System::IO::Compression::HuffmanTree*  _StaticDistanceTree_k__BackingField;

/// @brief Field <StaticLiteralLengthTree>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__StaticLiteralLengthTree_k__BackingField, put=setStaticF__StaticLiteralLengthTree_k__BackingField)) ::System::IO::Compression::HuffmanTree*  _StaticLiteralLengthTree_k__BackingField;

/// @brief Field _codeLengthArray, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__codeLengthArray, put=__cordl_internal_set__codeLengthArray)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _codeLengthArray;

/// @brief Field _left, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__left, put=__cordl_internal_set__left)) ::ArrayW<int16_t,::Array<int16_t>*>  _left;

/// @brief Field _right, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__right, put=__cordl_internal_set__right)) ::ArrayW<int16_t,::Array<int16_t>*>  _right;

/// @brief Field _table, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__table, put=__cordl_internal_set__table)) ::ArrayW<int16_t,::Array<int16_t>*>  _table;

/// @brief Field _tableBits, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__tableBits, put=__cordl_internal_set__tableBits)) int32_t  _tableBits;

/// @brief Field _tableMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__tableMask, put=__cordl_internal_set__tableMask)) int32_t  _tableMask;

/// @brief Method CalculateHuffmanCode, addr 0x2b0ea14, size 0x210, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t,::Array<uint32_t>*> CalculateHuffmanCode() ;

/// @brief Method CreateTable, addr 0x2b0e70c, size 0x198, virtual false, abstract: false, final false
inline void CreateTable() ;

/// @brief Method GetNextSymbol, addr 0x2b0ec24, size 0x154, virtual false, abstract: false, final false
inline int32_t GetNextSymbol(::System::IO::Compression::InputBuffer*  input) ;

/// @brief Method GetStaticDistanceTreeLength, addr 0x2b0e998, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetStaticDistanceTreeLength() ;

/// @brief Method GetStaticLiteralTreeLength, addr 0x2b0e8a4, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetStaticLiteralTreeLength() ;

static inline ::System::IO::Compression::HuffmanTree* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  codeLengths) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__codeLengthArray() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__codeLengthArray() ;

constexpr ::ArrayW<int16_t,::Array<int16_t>*> const& __cordl_internal_get__left() const;

constexpr ::ArrayW<int16_t,::Array<int16_t>*>& __cordl_internal_get__left() ;

constexpr ::ArrayW<int16_t,::Array<int16_t>*> const& __cordl_internal_get__right() const;

constexpr ::ArrayW<int16_t,::Array<int16_t>*>& __cordl_internal_get__right() ;

constexpr ::ArrayW<int16_t,::Array<int16_t>*> const& __cordl_internal_get__table() const;

constexpr ::ArrayW<int16_t,::Array<int16_t>*>& __cordl_internal_get__table() ;

constexpr int32_t const& __cordl_internal_get__tableBits() const;

constexpr int32_t& __cordl_internal_get__tableBits() ;

constexpr int32_t const& __cordl_internal_get__tableMask() const;

constexpr int32_t& __cordl_internal_get__tableMask() ;

constexpr void __cordl_internal_set__codeLengthArray(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__left(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

constexpr void __cordl_internal_set__right(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

constexpr void __cordl_internal_set__table(::ArrayW<int16_t,::Array<int16_t>*>  value) ;

constexpr void __cordl_internal_set__tableBits(int32_t  value) ;

constexpr void __cordl_internal_set__tableMask(int32_t  value) ;

/// @brief Method .ctor, addr 0x2b0e640, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  codeLengths) ;

static inline ::System::IO::Compression::HuffmanTree* getStaticF__StaticDistanceTree_k__BackingField() ;

static inline ::System::IO::Compression::HuffmanTree* getStaticF__StaticLiteralLengthTree_k__BackingField() ;

/// @brief Method get_StaticDistanceTree, addr 0x2b0e5e8, size 0x58, virtual false, abstract: false, final false
static inline ::System::IO::Compression::HuffmanTree* get_StaticDistanceTree() ;

/// @brief Method get_StaticLiteralLengthTree, addr 0x2b0e590, size 0x58, virtual false, abstract: false, final false
static inline ::System::IO::Compression::HuffmanTree* get_StaticLiteralLengthTree() ;

static inline void setStaticF__StaticDistanceTree_k__BackingField(::System::IO::Compression::HuffmanTree*  value) ;

static inline void setStaticF__StaticLiteralLengthTree_k__BackingField(::System::IO::Compression::HuffmanTree*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HuffmanTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HuffmanTree", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HuffmanTree(HuffmanTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HuffmanTree", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HuffmanTree(HuffmanTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11281};

/// @brief Field _tableBits, offset: 0x10, size: 0x4, def value: None
 int32_t  ____tableBits;

/// @brief Field _table, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int16_t,::Array<int16_t>*>  ____table;

/// @brief Field _left, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int16_t,::Array<int16_t>*>  ____left;

/// @brief Field _right, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int16_t,::Array<int16_t>*>  ____right;

/// @brief Field _codeLengthArray, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____codeLengthArray;

/// @brief Field _tableMask, offset: 0x38, size: 0x4, def value: None
 int32_t  ____tableMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::HuffmanTree, ____tableBits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::HuffmanTree, ____table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::HuffmanTree, ____left) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::HuffmanTree, ____right) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::HuffmanTree, ____codeLengthArray) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::HuffmanTree, ____tableMask) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::HuffmanTree, 0x40>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::HuffmanTree);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::HuffmanTree*, "System.IO.Compression", "HuffmanTree");
