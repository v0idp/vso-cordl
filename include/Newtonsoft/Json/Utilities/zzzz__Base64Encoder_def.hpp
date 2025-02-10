#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/Base64Encoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoder)
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::Base64Encoder);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.Base64Encoder
class CORDL_TYPE Base64Encoder : public ::System::Object {
public:
// Declarations
/// @brief Field _charsLine, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__charsLine, put=__cordl_internal_set__charsLine)) ::ArrayW<char16_t,::Array<char16_t>*>  _charsLine;

/// @brief Field _leftOverBytes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftOverBytes, put=__cordl_internal_set__leftOverBytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _leftOverBytes;

/// @brief Field _leftOverBytesCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftOverBytesCount, put=__cordl_internal_set__leftOverBytesCount)) int32_t  _leftOverBytesCount;

/// @brief Field _writer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::TextWriter*  _writer;

/// @brief Method Encode, addr 0x27e128c, size 0x1a0, virtual false, abstract: false, final false
inline void Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Flush, addr 0x27e1610, size 0xb8, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method FulfillFromLeftover, addr 0x27e142c, size 0x9c, virtual false, abstract: false, final false
inline bool FulfillFromLeftover(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, ::ByRef<int32_t>  count) ;

static inline ::Newtonsoft::Json::Utilities::Base64Encoder* New_ctor(::System::IO::TextWriter*  writer) ;

/// @brief Method StoreLeftOverBytes, addr 0x27e14ec, size 0x124, virtual false, abstract: false, final false
inline void StoreLeftOverBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, ::ByRef<int32_t>  count) ;

/// @brief Method ValidateEncode, addr 0x27e11c8, size 0xc4, virtual false, abstract: false, final false
inline void ValidateEncode(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteChars, addr 0x27e14c8, size 0x24, virtual false, abstract: false, final false
inline void WriteChars(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  index, int32_t  count) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __cordl_internal_get__charsLine() const;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __cordl_internal_get__charsLine() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__leftOverBytes() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__leftOverBytes() ;

constexpr int32_t const& __cordl_internal_get__leftOverBytesCount() const;

constexpr int32_t& __cordl_internal_get__leftOverBytesCount() ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get__writer() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__writer() ;

constexpr void __cordl_internal_set__charsLine(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr void __cordl_internal_set__leftOverBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__leftOverBytesCount(int32_t  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::TextWriter*  value) ;

/// @brief Method .ctor, addr 0x27e10f0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  writer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64Encoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64Encoder(Base64Encoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64Encoder(Base64Encoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9701};

/// @brief Field _charsLine, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<char16_t,::Array<char16_t>*>  ____charsLine;

/// @brief Field _writer, offset: 0x18, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____writer;

/// @brief Field _leftOverBytes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____leftOverBytes;

/// @brief Field _leftOverBytesCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ____leftOverBytesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____charsLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____leftOverBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____leftOverBytesCount) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::Base64Encoder, 0x30>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::Base64Encoder*, "Newtonsoft.Json.Utilities", "Base64Encoder");
