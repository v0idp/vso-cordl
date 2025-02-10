#pragma once
// IWYU pragma private; include "System/IO/TextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter)
namespace GlobalNamespace {
class TextWriter_NullTextWriter;
}
namespace GlobalNamespace {
class TextWriter_SyncTextWriter;
}
namespace System::IO {
class TextWriter___c;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class TextWriter___c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::TextWriter);
MARK_REF_PTR_T(::System::IO::TextWriter___c);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.TextWriter/<>c
class CORDL_TYPE TextWriter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::TextWriter___c*  __9;

/// @brief Field <>9__57_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__57_0, put=setStaticF___9__57_0)) ::System::Action_1<::System::Object*>*  __9__57_0;

static inline ::System::IO::TextWriter___c* New_ctor() ;

/// @brief Method <WriteAsync>b__57_0, addr 0x26ab07c, size 0xac, virtual false, abstract: false, final false
inline void _WriteAsync_b__57_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x26ab074, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::TextWriter___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__57_0() ;

static inline void setStaticF___9(::System::IO::TextWriter___c*  value) ;

static inline void setStaticF___9__57_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextWriter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextWriter___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWriter___c(TextWriter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWriter___c(TextWriter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::TextWriter___c, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Dependencies System.IDisposable, System.MarshalByRefObject
namespace System::IO {
// Is value type: false
// CS Name: System.IO.TextWriter
class CORDL_TYPE TextWriter : public ::System::MarshalByRefObject {
public:
// Declarations
using NullTextWriter = ::GlobalNamespace::TextWriter_NullTextWriter;

using SyncTextWriter = ::GlobalNamespace::TextWriter_SyncTextWriter;

using __c = ::System::IO::TextWriter___c;

/// @brief Field CoreNewLine, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CoreNewLine, put=__cordl_internal_set_CoreNewLine)) ::ArrayW<char16_t,::Array<char16_t>*>  CoreNewLine;

/// @brief Field CoreNewLineStr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CoreNewLineStr, put=__cordl_internal_set_CoreNewLineStr)) ::StringW  CoreNewLineStr;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(get=get_FormatProvider)) ::System::IFormatProvider*  FormatProvider;

 __declspec(property(get=get_NewLine)) ::StringW  NewLine;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::IO::TextWriter*  Null;

/// @brief Field _internalFormatProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalFormatProvider, put=__cordl_internal_set__internalFormatProvider)) ::System::IFormatProvider*  _internalFormatProvider;

/// @brief Field s_coreNewLine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_coreNewLine, put=setStaticF_s_coreNewLine)) ::ArrayW<char16_t,::Array<char16_t>*>  s_coreNewLine;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0x26aa564, size 0x6c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x26aa5d4, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x26aa5d0, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x26aa640, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::IO::TextWriter* New_ctor() ;

static inline ::System::IO::TextWriter* New_ctor(::System::IFormatProvider*  formatProvider) ;

/// @brief Method Synchronized, addr 0x26aaad4, size 0xb4, virtual false, abstract: false, final false
static inline ::System::IO::TextWriter* Synchronized(::System::IO::TextWriter*  writer) ;

/// @brief Method Write, addr 0x26aa650, size 0x20, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer) ;

/// @brief Method Write, addr 0x26aa670, size 0x1a4, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0x26aa814, size 0x38, virtual true, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0x26aa64c, size 0x4, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteAsync, addr 0x26aa89c, size 0x238, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::StringW  value) ;

/// @brief Method WriteLine, addr 0x26aa84c, size 0x14, virtual true, abstract: false, final false
inline void WriteLine() ;

/// @brief Method WriteLine, addr 0x26aa860, size 0x3c, virtual true, abstract: false, final false
inline void WriteLine(::StringW  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get_CoreNewLine() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get_CoreNewLine() ;

constexpr ::StringW const& __cordl_internal_get_CoreNewLineStr() const;

constexpr ::StringW& __cordl_internal_get_CoreNewLineStr() ;

constexpr ::System::IFormatProvider* const& __cordl_internal_get__internalFormatProvider() const;

constexpr ::System::IFormatProvider*& __cordl_internal_get__internalFormatProvider() ;

constexpr void __cordl_internal_set_CoreNewLine(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set_CoreNewLineStr(::StringW  value) ;

constexpr void __cordl_internal_set__internalFormatProvider(::System::IFormatProvider*  value) ;

/// @brief Method .ctor, addr 0x26aa3f8, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x26aa474, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::IFormatProvider*  formatProvider) ;

static inline ::System::IO::TextWriter* getStaticF_Null() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_coreNewLine() ;

/// @brief Method get_Encoding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_FormatProvider, addr 0x26aa4fc, size 0x68, virtual true, abstract: false, final false
inline ::System::IFormatProvider* get_FormatProvider() ;

/// @brief Method get_NewLine, addr 0x26aa644, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_NewLine() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Null(::System::IO::TextWriter*  value) ;

static inline void setStaticF_s_coreNewLine(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextWriter(TextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextWriter(TextWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3245};

/// @brief Field CoreNewLine, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ___CoreNewLine;

/// @brief Field CoreNewLineStr, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CoreNewLineStr;

/// @brief Field _internalFormatProvider, offset: 0x28, size: 0x8, def value: None
 ::System::IFormatProvider*  ____internalFormatProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::TextWriter, ___CoreNewLine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextWriter, ___CoreNewLineStr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::TextWriter, ____internalFormatProvider) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::TextWriter, 0x30>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::TextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter*, "System.IO", "TextWriter");
NEED_NO_BOX(::System::IO::TextWriter___c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter___c*, "System.IO", "TextWriter/<>c");
