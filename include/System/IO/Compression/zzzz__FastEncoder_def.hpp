#pragma once
// IWYU pragma private; include "System/IO/Compression/FastEncoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FastEncoder)
namespace System::IO::Compression {
class DeflateInput;
}
namespace System::IO::Compression {
class FastEncoderWindow;
}
namespace System::IO::Compression {
class Match;
}
namespace System::IO::Compression {
class OutputBuffer;
}
// Forward declare root types
namespace System::IO::Compression {
class FastEncoder;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::FastEncoder);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.FastEncoder
class CORDL_TYPE FastEncoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BytesInHistory)) int32_t  BytesInHistory;

 __declspec(property(get=get_LastCompressionRatio)) double_t  LastCompressionRatio;

 __declspec(property(get=get_UnprocessedInput)) ::System::IO::Compression::DeflateInput*  UnprocessedInput;

/// @brief Field _currentMatch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMatch, put=__cordl_internal_set__currentMatch)) ::System::IO::Compression::Match*  _currentMatch;

/// @brief Field _inputWindow, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputWindow, put=__cordl_internal_set__inputWindow)) ::System::IO::Compression::FastEncoderWindow*  _inputWindow;

/// @brief Field _lastCompressionRatio, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastCompressionRatio, put=__cordl_internal_set__lastCompressionRatio)) double_t  _lastCompressionRatio;

/// @brief Method FlushInput, addr 0x2b0d3dc, size 0x18, virtual false, abstract: false, final false
inline void FlushInput() ;

/// @brief Method GetBlock, addr 0x2b0d3f4, size 0x4c, virtual false, abstract: false, final false
inline void GetBlock(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output, int32_t  maxBytesToCopy) ;

/// @brief Method GetBlockFooter, addr 0x2b0d3d8, size 0x4, virtual false, abstract: false, final false
inline void GetBlockFooter(::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method GetBlockHeader, addr 0x2b0d370, size 0x8, virtual false, abstract: false, final false
inline void GetBlockHeader(::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method GetCompressedData, addr 0x2b0d378, size 0x8, virtual false, abstract: false, final false
inline void GetCompressedData(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method GetCompressedOutput, addr 0x2b0d584, size 0x1c4, virtual false, abstract: false, final false
inline void GetCompressedOutput(::System::IO::Compression::DeflateInput*  input, ::System::IO::Compression::OutputBuffer*  output, int32_t  maxBytesToCopy) ;

/// @brief Method GetCompressedOutput, addr 0x2b0d828, size 0xa8, virtual false, abstract: false, final false
inline void GetCompressedOutput(::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method InputAvailable, addr 0x2b0d900, size 0x40, virtual false, abstract: false, final false
inline bool InputAvailable(::System::IO::Compression::DeflateInput*  input) ;

/// @brief Method SafeToWriteTo, addr 0x2b0d8d0, size 0x30, virtual false, abstract: false, final false
inline bool SafeToWriteTo(::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method WriteChar, addr 0x2b0db3c, size 0x98, virtual false, abstract: false, final false
static inline void WriteChar(uint8_t  b, ::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method WriteDeflatePreamble, addr 0x2b0d500, size 0x84, virtual false, abstract: false, final false
static inline void WriteDeflatePreamble(::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method WriteEndOfBlock, addr 0x2b0d748, size 0x88, virtual false, abstract: false, final false
inline void WriteEndOfBlock(::System::IO::Compression::OutputBuffer*  output) ;

/// @brief Method WriteMatch, addr 0x2b0dbd4, size 0x170, virtual false, abstract: false, final false
static inline void WriteMatch(int32_t  matchLen, int32_t  matchPos, ::System::IO::Compression::OutputBuffer*  output) ;

constexpr ::System::IO::Compression::Match* const& __cordl_internal_get__currentMatch() const;

constexpr ::System::IO::Compression::Match*& __cordl_internal_get__currentMatch() ;

constexpr ::System::IO::Compression::FastEncoderWindow* const& __cordl_internal_get__inputWindow() const;

constexpr ::System::IO::Compression::FastEncoderWindow*& __cordl_internal_get__inputWindow() ;

constexpr double_t const& __cordl_internal_get__lastCompressionRatio() const;

constexpr double_t& __cordl_internal_get__lastCompressionRatio() ;

constexpr void __cordl_internal_set__currentMatch(::System::IO::Compression::Match*  value) ;

constexpr void __cordl_internal_set__inputWindow(::System::IO::Compression::FastEncoderWindow*  value) ;

constexpr void __cordl_internal_set__lastCompressionRatio(double_t  value) ;

/// @brief Method get_BytesInHistory, addr 0x2b0d338, size 0x20, virtual false, abstract: false, final false
inline int32_t get_BytesInHistory() ;

/// @brief Method get_LastCompressionRatio, addr 0x2b0d4f8, size 0x8, virtual false, abstract: false, final false
inline double_t get_LastCompressionRatio() ;

/// @brief Method get_UnprocessedInput, addr 0x2b0d3c0, size 0x18, virtual false, abstract: false, final false
inline ::System::IO::Compression::DeflateInput* get_UnprocessedInput() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastEncoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastEncoder(FastEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastEncoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastEncoder(FastEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11276};

/// @brief Field _inputWindow, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Compression::FastEncoderWindow*  ____inputWindow;

/// @brief Field _currentMatch, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Compression::Match*  ____currentMatch;

/// @brief Field _lastCompressionRatio, offset: 0x20, size: 0x8, def value: None
 double_t  ____lastCompressionRatio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::FastEncoder, ____inputWindow) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::FastEncoder, ____currentMatch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::FastEncoder, ____lastCompressionRatio) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::FastEncoder, 0x28>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::FastEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::FastEncoder*, "System.IO.Compression", "FastEncoder");
