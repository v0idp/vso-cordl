#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiWriter)
namespace Melanchall::DryWetMidi::Core {
class WriterSettings;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MidiWriter);
// Dependencies System.IDisposable, System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MidiWriter
class CORDL_TYPE MidiWriter : public ::System::Object {
public:
// Declarations
/// @brief Field _buffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer;

/// @brief Field _bufferPosition, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferPosition, put=__cordl_internal_set__bufferPosition)) int32_t  _bufferPosition;

/// @brief Field _disposed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _length, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) int64_t  _length;

/// @brief Field _numberBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__numberBuffer, put=__cordl_internal_set__numberBuffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _numberBuffer;

/// @brief Field _settings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Melanchall::DryWetMidi::Core::WriterSettings*  _settings;

/// @brief Field _stream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _useBuffering, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__useBuffering, put=__cordl_internal_set__useBuffering)) bool  _useBuffering;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x25a4c18, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x25a4c20, size 0x50, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FlushBuffer, addr 0x25a4a08, size 0x3c, virtual false, abstract: false, final false
inline void FlushBuffer() ;

static inline ::Melanchall::DryWetMidi::Core::MidiWriter* New_ctor(::System::IO::Stream*  stream, ::Melanchall::DryWetMidi::Core::WriterSettings*  settings) ;

/// @brief Method PrepareBuffer, addr 0x25a49a4, size 0x64, virtual false, abstract: false, final false
inline void PrepareBuffer() ;

/// @brief Method Write3ByteDword, addr 0x25a29f0, size 0x6c, virtual false, abstract: false, final false
inline void Write3ByteDword(uint32_t  value) ;

/// @brief Method WriteByte, addr 0x25a18dc, size 0xa4, virtual false, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteBytes, addr 0x25a0d04, size 0x70, virtual false, abstract: false, final false
inline void WriteBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method WriteBytes, addr 0x25a4a44, size 0x60, virtual false, abstract: false, final false
inline void WriteBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length) ;

/// @brief Method WriteBytesToBuffer, addr 0x25a4bd0, size 0x48, virtual false, abstract: false, final false
inline void WriteBytesToBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length) ;

/// @brief Method WriteBytesWithBuffering, addr 0x25a4b28, size 0xa8, virtual false, abstract: false, final false
inline void WriteBytesWithBuffering(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  length) ;

/// @brief Method WriteDword, addr 0x259f99c, size 0x88, virtual false, abstract: false, final false
inline void WriteDword(uint32_t  value) ;

/// @brief Method WriteInt16, addr 0x259f83c, size 0x50, virtual false, abstract: false, final false
inline void WriteInt16(int16_t  value) ;

/// @brief Method WriteSByte, addr 0x25a26f0, size 0x4, virtual false, abstract: false, final false
inline void WriteSByte(int8_t  value) ;

/// @brief Method WriteString, addr 0x259f92c, size 0x70, virtual false, abstract: false, final false
inline void WriteString(::StringW  value) ;

/// @brief Method WriteVlqNumber, addr 0x25a350c, size 0x8, virtual false, abstract: false, final false
inline void WriteVlqNumber(int32_t  value) ;

/// @brief Method WriteVlqNumber, addr 0x25a0c94, size 0x3c, virtual false, abstract: false, final false
inline void WriteVlqNumber(int64_t  value) ;

/// @brief Method WriteWord, addr 0x259f7ec, size 0x50, virtual false, abstract: false, final false
inline void WriteWord(uint16_t  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__bufferPosition() const;

constexpr int32_t& __cordl_internal_get__bufferPosition() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr int64_t const& __cordl_internal_get__length() const;

constexpr int64_t& __cordl_internal_get__length() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__numberBuffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__numberBuffer() ;

constexpr ::Melanchall::DryWetMidi::Core::WriterSettings* const& __cordl_internal_get__settings() const;

constexpr ::Melanchall::DryWetMidi::Core::WriterSettings*& __cordl_internal_get__settings() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr bool const& __cordl_internal_get__useBuffering() const;

constexpr bool& __cordl_internal_get__useBuffering() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__bufferPosition(int32_t  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__length(int64_t  value) ;

constexpr void __cordl_internal_set__numberBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__settings(::Melanchall::DryWetMidi::Core::WriterSettings*  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__useBuffering(bool  value) ;

/// @brief Method .ctor, addr 0x25a4800, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Melanchall::DryWetMidi::Core::WriterSettings*  settings) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiWriter(MidiWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiWriter(MidiWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11654};

/// @brief Field _settings, offset: 0x10, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::WriterSettings*  ____settings;

/// @brief Field _stream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _numberBuffer, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____numberBuffer;

/// @brief Field _useBuffering, offset: 0x28, size: 0x1, def value: None
 bool  ____useBuffering;

/// @brief Field _buffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____buffer;

/// @brief Field _bufferPosition, offset: 0x38, size: 0x4, def value: None
 int32_t  ____bufferPosition;

/// @brief Field _length, offset: 0x40, size: 0x8, def value: None
 int64_t  ____length;

/// @brief Field _disposed, offset: 0x48, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____numberBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____useBuffering) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____bufferPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____length) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiWriter, ____disposed) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiWriter, 0x50>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MidiWriter);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiWriter*, "Melanchall.DryWetMidi.Core", "MidiWriter");
