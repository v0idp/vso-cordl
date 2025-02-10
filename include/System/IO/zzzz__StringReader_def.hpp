#pragma once
// IWYU pragma private; include "System/IO/StringReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringReader)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::IO {
class StringReader;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::StringReader);
// Dependencies System.IO.TextReader
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StringReader
class CORDL_TYPE StringReader : public ::System::IO::TextReader {
public:
// Declarations
/// @brief Field _length, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) int32_t  _length;

/// @brief Field _pos, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__pos, put=__cordl_internal_set__pos)) int32_t  _pos;

/// @brief Field _s, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__s, put=__cordl_internal_set__s)) ::StringW  _s;

/// @brief Method Close, addr 0x26ba9e8, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0x26ba9f8, size 0x8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::IO::StringReader* New_ctor(::StringW  s) ;

/// @brief Method Peek, addr 0x26baa00, size 0x3c, virtual true, abstract: false, final false
inline int32_t Peek() ;

/// @brief Method Read, addr 0x26baa3c, size 0x44, virtual true, abstract: false, final false
inline int32_t Read() ;

/// @brief Method Read, addr 0x26baa80, size 0x1a8, virtual true, abstract: false, final false
inline int32_t Read(::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadLine, addr 0x26bac64, size 0x10c, virtual true, abstract: false, final false
inline ::StringW ReadLine() ;

/// @brief Method ReadToEnd, addr 0x26bac28, size 0x3c, virtual true, abstract: false, final false
inline ::StringW ReadToEnd() ;

/// @brief Method ReadToEndAsync, addr 0x26bad70, size 0x88, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadToEndAsync() ;

constexpr int32_t const& __cordl_internal_get__length() const;

constexpr int32_t& __cordl_internal_get__length() ;

constexpr int32_t const& __cordl_internal_get__pos() const;

constexpr int32_t& __cordl_internal_get__pos() ;

constexpr ::StringW const& __cordl_internal_get__s() const;

constexpr ::StringW& __cordl_internal_get__s() ;

constexpr void __cordl_internal_set__length(int32_t  value) ;

constexpr void __cordl_internal_set__pos(int32_t  value) ;

constexpr void __cordl_internal_set__s(::StringW  value) ;

/// @brief Method .ctor, addr 0x26ba928, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringReader(StringReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringReader(StringReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3273};

/// @brief Field _s, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____s;

/// @brief Field _pos, offset: 0x20, size: 0x4, def value: None
 int32_t  ____pos;

/// @brief Field _length, offset: 0x24, size: 0x4, def value: None
 int32_t  ____length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StringReader, ____s) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::StringReader, ____pos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::StringReader, ____length) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::StringReader, 0x28>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::StringReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StringReader*, "System.IO", "StringReader");
