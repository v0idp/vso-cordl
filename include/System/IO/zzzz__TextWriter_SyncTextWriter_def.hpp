#pragma once
// IWYU pragma private; include "System/IO/TextWriter_SyncTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter_SyncTextWriter)
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class TextWriter_SyncTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextWriter_SyncTextWriter);
// Dependencies System.IDisposable, System.IO.TextWriter
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.IO.TextWriter/SyncTextWriter
class CORDL_TYPE TextWriter_SyncTextWriter : public ::System::IO::TextWriter {
public:
// Declarations
 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(get=get_FormatProvider)) ::System::IFormatProvider*  FormatProvider;

 __declspec(property(get=get_NewLine)) ::StringW  NewLine;

/// @brief Field _out, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__out, put=__cordl_internal_set__out)) ::System::IO::TextWriter*  _out;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0x26aad9c, size 0x20, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x26aadbc, size 0xb4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x26aae70, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::GlobalNamespace::TextWriter_SyncTextWriter* New_ctor(::System::IO::TextWriter*  t) ;

/// @brief Method Write, addr 0x26aaeb4, size 0x24, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer) ;

/// @brief Method Write, addr 0x26aaed8, size 0x24, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0x26aaefc, size 0x24, virtual true, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0x26aae90, size 0x24, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteAsync, addr 0x26aaf68, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::StringW  value) ;

/// @brief Method WriteLine, addr 0x26aaf20, size 0x24, virtual true, abstract: false, final false
inline void WriteLine() ;

/// @brief Method WriteLine, addr 0x26aaf44, size 0x24, virtual true, abstract: false, final false
inline void WriteLine(::StringW  value) ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get__out() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__out() ;

constexpr void __cordl_internal_set__out(::System::IO::TextWriter*  value) ;

/// @brief Method .ctor, addr 0x26aab88, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  t) ;

/// @brief Method get_Encoding, addr 0x26aad3c, size 0x20, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_FormatProvider, addr 0x26aad5c, size 0x20, virtual true, abstract: false, final false
inline ::System::IFormatProvider* get_FormatProvider() ;

/// @brief Method get_NewLine, addr 0x26aad7c, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_NewLine() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextWriter_SyncTextWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextWriter_SyncTextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWriter_SyncTextWriter(TextWriter_SyncTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter_SyncTextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWriter_SyncTextWriter(TextWriter_SyncTextWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3243};

/// @brief Field _out, offset: 0x30, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____out;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextWriter_SyncTextWriter, ____out) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextWriter_SyncTextWriter, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextWriter_SyncTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextWriter_SyncTextWriter*, "System.IO", "TextWriter/SyncTextWriter");
