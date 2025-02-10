#pragma once
// IWYU pragma private; include "System/IO/Compression/OutputWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutputWindow)
namespace System::IO::Compression {
class InputBuffer;
}
// Forward declare root types
namespace System::IO::Compression {
class OutputWindow;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::OutputWindow);
// Dependencies System.Object
namespace System::IO::Compression {
// Is value type: false
// CS Name: System.IO.Compression.OutputWindow
class CORDL_TYPE OutputWindow : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AvailableBytes)) int32_t  AvailableBytes;

 __declspec(property(get=get_FreeBytes)) int32_t  FreeBytes;

/// @brief Field _bytesUsed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bytesUsed, put=__cordl_internal_set__bytesUsed)) int32_t  _bytesUsed;

/// @brief Field _end, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) int32_t  _end;

/// @brief Field _window, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__window, put=__cordl_internal_set__window)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _window;

/// @brief Method CopyFrom, addr 0x2b101d0, size 0x108, virtual false, abstract: false, final false
inline int32_t CopyFrom(::System::IO::Compression::InputBuffer*  input, int32_t  length) ;

/// @brief Method CopyTo, addr 0x2b0efa8, size 0xac, virtual false, abstract: false, final false
inline int32_t CopyTo(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  offset, int32_t  length) ;

static inline ::System::IO::Compression::OutputWindow* New_ctor() ;

/// @brief Method Write, addr 0x2b102e8, size 0x58, virtual false, abstract: false, final false
inline void Write(uint8_t  b) ;

/// @brief Method WriteLengthDistance, addr 0x2b10340, size 0x12c, virtual false, abstract: false, final false
inline void WriteLengthDistance(int32_t  length, int32_t  distance) ;

constexpr int32_t const& __cordl_internal_get__bytesUsed() const;

constexpr int32_t& __cordl_internal_get__bytesUsed() ;

constexpr int32_t const& __cordl_internal_get__end() const;

constexpr int32_t& __cordl_internal_get__end() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__window() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__window() ;

constexpr void __cordl_internal_set__bytesUsed(int32_t  value) ;

constexpr void __cordl_internal_set__end(int32_t  value) ;

constexpr void __cordl_internal_set__window(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x2b0ef10, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AvailableBytes, addr 0x2b10820, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AvailableBytes() ;

/// @brief Method get_FreeBytes, addr 0x2b102d8, size 0x10, virtual false, abstract: false, final false
inline int32_t get_FreeBytes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutputWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutputWindow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OutputWindow(OutputWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutputWindow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutputWindow(OutputWindow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11289};

/// @brief Field _window, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____window;

/// @brief Field _end, offset: 0x18, size: 0x4, def value: None
 int32_t  ____end;

/// @brief Field _bytesUsed, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____bytesUsed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::OutputWindow, ____window) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputWindow, ____end) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::OutputWindow, ____bytesUsed) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::OutputWindow, 0x20>, "Size mismatch!");

} // namespace end def System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::OutputWindow);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::OutputWindow*, "System.IO.Compression", "OutputWindow");
