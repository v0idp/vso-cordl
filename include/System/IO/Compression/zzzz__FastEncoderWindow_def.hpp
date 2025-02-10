#pragma once
// IWYU pragma private; include "System/IO/Compression/FastEncoderWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastEncoderWindow)
namespace System::IO::Compression {
class DeflateInput;
}
namespace System::IO::Compression {
class Match;
}
// Forward declare root types
namespace System::IO::Compression {
class FastEncoderWindow;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::FastEncoderWindow);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.FastEncoderWindow
class CORDL_TYPE FastEncoderWindow : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BytesAvailable)) int32_t  BytesAvailable;

 __declspec(property(get=get_FreeWindowSpace)) int32_t  FreeWindowSpace;

 __declspec(property(get=get_UnprocessedInput)) ::System::IO::Compression::DeflateInput*  UnprocessedInput;

/// @brief Field _bufEnd, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufEnd, put=__cordl_internal_set__bufEnd)) int32_t  _bufEnd;

/// @brief Field _bufPos, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufPos, put=__cordl_internal_set__bufPos)) int32_t  _bufPos;

/// @brief Field _lookup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookup, put=__cordl_internal_set__lookup)) ::ArrayW<uint16_t,::Array<uint16_t>*>  _lookup;

/// @brief Field _prev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prev, put=__cordl_internal_set__prev)) ::ArrayW<uint16_t,::Array<uint16_t>*>  _prev;

/// @brief Field _window, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__window, put=__cordl_internal_set__window)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _window;

/// @brief Method CopyBytes, addr 0x2b0d7e0, size 0x48, virtual false, abstract: false, final false
inline void CopyBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  inputBuffer, int32_t  startIndex, int32_t  count) ;

/// @brief Method FindMatch, addr 0x2b0e41c, size 0x174, virtual false, abstract: false, final false
inline int32_t FindMatch(int32_t  search, ::ByRef<int32_t>  matchPos, int32_t  searchDepth, int32_t  niceLength) ;

/// @brief Method FlushWindow, addr 0x2b0d4f4, size 0x4, virtual false, abstract: false, final false
inline void FlushWindow() ;

/// @brief Method GetNextSymbolOrMatch, addr 0x2b0d940, size 0x1fc, virtual false, abstract: false, final false
inline bool GetNextSymbolOrMatch(::System::IO::Compression::Match*  match) ;

/// @brief Method HashValue, addr 0x2b0e314, size 0xc, virtual false, abstract: false, final false
inline uint32_t HashValue(uint32_t  hash, uint8_t  b) ;

/// @brief Method InsertString, addr 0x2b0e320, size 0x90, virtual false, abstract: false, final false
inline uint32_t InsertString(::ByRef<uint32_t>  hash) ;

/// @brief Method InsertStrings, addr 0x2b0e3b0, size 0x6c, virtual false, abstract: false, final false
inline void InsertStrings(::ByRef<uint32_t>  hash, int32_t  matchLen) ;

/// @brief Method MoveWindows, addr 0x2b0e24c, size 0xc8, virtual false, abstract: false, final false
inline void MoveWindows() ;

/// @brief Method ResetWindow, addr 0x2b0e1b8, size 0x94, virtual false, abstract: false, final false
inline void ResetWindow() ;

constexpr int32_t const& __cordl_internal_get__bufEnd() const;

constexpr int32_t& __cordl_internal_get__bufEnd() ;

constexpr int32_t const& __cordl_internal_get__bufPos() const;

constexpr int32_t& __cordl_internal_get__bufPos() ;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*> const& __cordl_internal_get__lookup() const;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*>& __cordl_internal_get__lookup() ;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*> const& __cordl_internal_get__prev() const;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*>& __cordl_internal_get__prev() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__window() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__window() ;

constexpr void __cordl_internal_set__bufEnd(int32_t  value) ;

constexpr void __cordl_internal_set__bufPos(int32_t  value) ;

constexpr void __cordl_internal_set__lookup(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

constexpr void __cordl_internal_set__prev(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

constexpr void __cordl_internal_set__window(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method get_BytesAvailable, addr 0x2b0d46c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_BytesAvailable() ;

/// @brief Method get_FreeWindowSpace, addr 0x2b0d7d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FreeWindowSpace() ;

/// @brief Method get_UnprocessedInput, addr 0x2b0d478, size 0x7c, virtual false, abstract: false, final false
inline ::System::IO::Compression::DeflateInput* get_UnprocessedInput() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastEncoderWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastEncoderWindow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FastEncoderWindow(FastEncoderWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastEncoderWindow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastEncoderWindow(FastEncoderWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11278};

/// @brief Field _window, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____window;

/// @brief Field _bufPos, offset: 0x18, size: 0x4, def value: None
 int32_t  ____bufPos;

/// @brief Field _bufEnd, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____bufEnd;

/// @brief Field _prev, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint16_t,::Array<uint16_t>*>  ____prev;

/// @brief Field _lookup, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint16_t,::Array<uint16_t>*>  ____lookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::FastEncoderWindow, ____window) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::FastEncoderWindow, ____bufPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::FastEncoderWindow, ____bufEnd) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::FastEncoderWindow, ____prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::FastEncoderWindow, ____lookup) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::FastEncoderWindow, 0x30>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::FastEncoderWindow);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::FastEncoderWindow*, "System.IO.Compression", "FastEncoderWindow");
