#pragma once
// IWYU pragma private; include "MiniJSON/Json.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Json)
namespace MiniJSON {
class Json_Parser;
}
namespace MiniJSON {
class Json_Serializer;
}
namespace MiniJSON {
struct Parser_Json_TOKEN;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class StringReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MiniJSON {
struct Parser_Json_TOKEN;
}
namespace MiniJSON {
class Json;
}
namespace MiniJSON {
class Json_Parser;
}
namespace MiniJSON {
class Json_Serializer;
}
// Write type traits
MARK_VAL_T(::MiniJSON::Parser_Json_TOKEN);
MARK_REF_PTR_T(::MiniJSON::Json);
MARK_REF_PTR_T(::MiniJSON::Json_Parser);
MARK_REF_PTR_T(::MiniJSON::Json_Serializer);
// Dependencies 
namespace MiniJSON {
// Is value type: true
// CS Name: MiniJSON.Json/Parser/TOKEN
struct CORDL_TYPE Parser_Json_TOKEN {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Parser_Json_TOKEN_Unwrapped
enum struct __Parser_Json_TOKEN_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_CURLY_OPEN = static_cast<int32_t>(0x1),
__E_CURLY_CLOSE = static_cast<int32_t>(0x2),
__E_SQUARED_OPEN = static_cast<int32_t>(0x3),
__E_SQUARED_CLOSE = static_cast<int32_t>(0x4),
__E_COLON = static_cast<int32_t>(0x5),
__E_COMMA = static_cast<int32_t>(0x6),
__E_STRING = static_cast<int32_t>(0x7),
__E_NUMBER = static_cast<int32_t>(0x8),
__E_TRUE = static_cast<int32_t>(0x9),
__E_FALSE = static_cast<int32_t>(0xa),
__E_NULL = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Parser_Json_TOKEN_Unwrapped () const noexcept {
return static_cast<__Parser_Json_TOKEN_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Parser_Json_TOKEN() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Parser_Json_TOKEN(int32_t  value__) noexcept;

/// @brief Field COLON value: I32(5)
static ::MiniJSON::Parser_Json_TOKEN const COLON;

/// @brief Field COMMA value: I32(6)
static ::MiniJSON::Parser_Json_TOKEN const COMMA;

/// @brief Field CURLY_CLOSE value: I32(2)
static ::MiniJSON::Parser_Json_TOKEN const CURLY_CLOSE;

/// @brief Field CURLY_OPEN value: I32(1)
static ::MiniJSON::Parser_Json_TOKEN const CURLY_OPEN;

/// @brief Field FALSE value: I32(10)
static ::MiniJSON::Parser_Json_TOKEN const FALSE;

/// @brief Field NONE value: I32(0)
static ::MiniJSON::Parser_Json_TOKEN const NONE;

/// @brief Field NUMBER value: I32(8)
static ::MiniJSON::Parser_Json_TOKEN const NUMBER;

/// @brief Field SQUARED_CLOSE value: I32(4)
static ::MiniJSON::Parser_Json_TOKEN const SQUARED_CLOSE;

/// @brief Field SQUARED_OPEN value: I32(3)
static ::MiniJSON::Parser_Json_TOKEN const SQUARED_OPEN;

/// @brief Field STRING value: I32(7)
static ::MiniJSON::Parser_Json_TOKEN const STRING;

/// @brief Field TRUE value: I32(9)
static ::MiniJSON::Parser_Json_TOKEN const TRUE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NULL value: I32(11)
static ::MiniJSON::Parser_Json_TOKEN const _cordl_NULL;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MiniJSON::Parser_Json_TOKEN, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MiniJSON::Parser_Json_TOKEN, 0x4>, "Size mismatch!");

} // namespace end def MiniJSON
// Dependencies System.IDisposable, System.Object
namespace MiniJSON {
// Is value type: false
// CS Name: MiniJSON.Json/Parser
class CORDL_TYPE Json_Parser : public ::System::Object {
public:
// Declarations
using TOKEN = ::MiniJSON::Parser_Json_TOKEN;

 __declspec(property(get=get_NextChar)) char16_t  NextChar;

 __declspec(property(get=get_NextToken)) ::MiniJSON::Parser_Json_TOKEN  NextToken;

 __declspec(property(get=get_NextWord)) ::StringW  NextWord;

 __declspec(property(get=get_PeekChar)) char16_t  PeekChar;

/// @brief Field json, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_json, put=__cordl_internal_set_json)) ::System::IO::StringReader*  json;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1802bf4, size 0x28, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EatWhitespace, addr 0x1803598, size 0xa4, virtual false, abstract: false, final false
inline void EatWhitespace() ;

/// @brief Method IsWordBreak, addr 0x1802ac8, size 0x9c, virtual false, abstract: false, final false
static inline bool IsWordBreak(char16_t  c) ;

static inline ::MiniJSON::Json_Parser* New_ctor(::StringW  jsonString) ;

/// @brief Method Parse, addr 0x18028a8, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::Object* Parse(::StringW  jsonString) ;

/// @brief Method ParseArray, addr 0x1803184, size 0x128, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Object*>* ParseArray() ;

/// @brief Method ParseByToken, addr 0x18032ac, size 0xf0, virtual false, abstract: false, final false
inline ::System::Object* ParseByToken(::MiniJSON::Parser_Json_TOKEN  token) ;

/// @brief Method ParseNumber, addr 0x180339c, size 0xd0, virtual false, abstract: false, final false
inline ::System::Object* ParseNumber() ;

/// @brief Method ParseObject, addr 0x1802c1c, size 0x124, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* ParseObject() ;

/// @brief Method ParseString, addr 0x1802f04, size 0x280, virtual false, abstract: false, final false
inline ::StringW ParseString() ;

/// @brief Method ParseValue, addr 0x1802bd8, size 0x1c, virtual false, abstract: false, final false
inline ::System::Object* ParseValue() ;

constexpr ::System::IO::StringReader* const& __cordl_internal_get_json() const;

constexpr ::System::IO::StringReader*& __cordl_internal_get_json() ;

constexpr void __cordl_internal_set_json(::System::IO::StringReader*  value) ;

/// @brief Method .ctor, addr 0x1802b64, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  jsonString) ;

/// @brief Method get_NextChar, addr 0x180346c, size 0x78, virtual false, abstract: false, final false
inline char16_t get_NextChar() ;

/// @brief Method get_NextToken, addr 0x1802d40, size 0x1c4, virtual false, abstract: false, final false
inline ::MiniJSON::Parser_Json_TOKEN get_NextToken() ;

/// @brief Method get_NextWord, addr 0x18034e4, size 0xb4, virtual false, abstract: false, final false
inline ::StringW get_NextWord() ;

/// @brief Method get_PeekChar, addr 0x180363c, size 0x78, virtual false, abstract: false, final false
inline char16_t get_PeekChar() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Json_Parser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Json_Parser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Json_Parser(Json_Parser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Json_Parser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Json_Parser(Json_Parser const& ) = delete;

/// @brief Field WORD_BREAK offset 0xffffffff size 0x8
static constexpr ::ConstString  WORD_BREAK{u"{}[],:\""};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1797};

/// @brief Field json, offset: 0x10, size: 0x8, def value: None
 ::System::IO::StringReader*  ___json;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MiniJSON::Json_Parser, ___json) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MiniJSON::Json_Parser, 0x18>, "Size mismatch!");

} // namespace end def MiniJSON
// Dependencies System.Object
namespace MiniJSON {
// Is value type: false
// CS Name: MiniJSON.Json/Serializer
class CORDL_TYPE Json_Serializer : public ::System::Object {
public:
// Declarations
/// @brief Field builder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_builder, put=__cordl_internal_set_builder)) ::System::Text::StringBuilder*  builder;

static inline ::MiniJSON::Json_Serializer* New_ctor() ;

/// @brief Method Serialize, addr 0x1802a54, size 0x74, virtual false, abstract: false, final false
static inline ::StringW Serialize(::System::Object*  obj) ;

/// @brief Method SerializeArray, addr 0x1803ba4, size 0x360, virtual false, abstract: false, final false
inline void SerializeArray(::System::Collections::IList*  anArray) ;

/// @brief Method SerializeObject, addr 0x1803f04, size 0x48c, virtual false, abstract: false, final false
inline void SerializeObject(::System::Collections::IDictionary*  obj) ;

/// @brief Method SerializeOther, addr 0x1804390, size 0x284, virtual false, abstract: false, final false
inline void SerializeOther(::System::Object*  value) ;

/// @brief Method SerializeString, addr 0x18038e8, size 0x2bc, virtual false, abstract: false, final false
inline void SerializeString(::StringW  str) ;

/// @brief Method SerializeValue, addr 0x1803718, size 0x1d0, virtual false, abstract: false, final false
inline void SerializeValue(::System::Object*  value) ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_builder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_builder() ;

constexpr void __cordl_internal_set_builder(::System::Text::StringBuilder*  value) ;

/// @brief Method .ctor, addr 0x18036b4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Json_Serializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Json_Serializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Json_Serializer(Json_Serializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Json_Serializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Json_Serializer(Json_Serializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1798};

/// @brief Field builder, offset: 0x10, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MiniJSON::Json_Serializer, ___builder) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MiniJSON::Json_Serializer, 0x18>, "Size mismatch!");

} // namespace end def MiniJSON
// Dependencies System.Object
namespace MiniJSON {
// Is value type: false
// CS Name: MiniJSON.Json
class CORDL_TYPE Json : public ::System::Object {
public:
// Declarations
using Parser = ::MiniJSON::Json_Parser;

using Serializer = ::MiniJSON::Json_Serializer;

/// @brief Method Deserialize, addr 0x180289c, size 0xc, virtual false, abstract: false, final false
static inline ::System::Object* Deserialize(::StringW  json) ;

/// @brief Method Serialize, addr 0x1802a50, size 0x4, virtual false, abstract: false, final false
static inline ::StringW Serialize(::System::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Json() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Json", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Json(Json && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Json", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Json(Json const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MiniJSON::Json, 0x10>, "Size mismatch!");

} // namespace end def MiniJSON
DEFINE_IL2CPP_ARG_TYPE(::MiniJSON::Parser_Json_TOKEN, "MiniJSON", "Json/Parser/TOKEN");
NEED_NO_BOX(::MiniJSON::Json);
DEFINE_IL2CPP_ARG_TYPE(::MiniJSON::Json*, "MiniJSON", "Json");
NEED_NO_BOX(::MiniJSON::Json_Parser);
DEFINE_IL2CPP_ARG_TYPE(::MiniJSON::Json_Parser*, "MiniJSON", "Json/Parser");
NEED_NO_BOX(::MiniJSON::Json_Serializer);
DEFINE_IL2CPP_ARG_TYPE(::MiniJSON::Json_Serializer*, "MiniJSON", "Json/Serializer");
