#pragma once
// IWYU pragma private; include "MiniJSON/Json.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MiniJSON/zzzz__Json_def.hpp"
#include "MiniJSON/zzzz__Json_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__StringReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MiniJSON::Parser_Json_TOKEN::Parser_Json_TOKEN(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MiniJSON::Parser_Json_TOKEN::Parser_Json_TOKEN()   {
}
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::NONE{static_cast<int32_t>(0x0)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::CURLY_OPEN{static_cast<int32_t>(0x1)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::CURLY_CLOSE{static_cast<int32_t>(0x2)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::SQUARED_OPEN{static_cast<int32_t>(0x3)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::SQUARED_CLOSE{static_cast<int32_t>(0x4)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::COLON{static_cast<int32_t>(0x5)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::COMMA{static_cast<int32_t>(0x6)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::STRING{static_cast<int32_t>(0x7)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::NUMBER{static_cast<int32_t>(0x8)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::TRUE{static_cast<int32_t>(0x9)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::FALSE{static_cast<int32_t>(0xa)};
constexpr ::MiniJSON::Parser_Json_TOKEN  MiniJSON::Parser_Json_TOKEN::_cordl_NULL{static_cast<int32_t>(0xb)};
//  Writing Method size for method: ::MiniJSON::Json_Parser.IsWordBreak
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::MiniJSON::Json_Parser::IsWordBreak)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1802ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "IsWordBreak",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Parser::*)(::StringW)>(&::MiniJSON::Json_Parser::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1802b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.Parse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::MiniJSON::Json_Parser::Parse)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x18028a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "Parse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1802bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.ParseObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::ParseObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1802c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.ParseArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::ParseArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1803184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.ParseValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::ParseValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1802bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.ParseByToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::MiniJSON::Json_Parser::*)(::MiniJSON::Parser_Json_TOKEN)>(&::MiniJSON::Json_Parser::ParseByToken)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18032ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseByToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MiniJSON::Parser_Json_TOKEN>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.ParseString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::ParseString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1802f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.ParseNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::ParseNumber)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180339c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.EatWhitespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::EatWhitespace)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1803598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "EatWhitespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.get_PeekChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::get_PeekChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x180363c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_PeekChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.get_NextChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::get_NextChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x180346c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_NextChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.get_NextWord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::get_NextWord)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18034e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_NextWord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Parser.get_NextToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MiniJSON::Parser_Json_TOKEN (::MiniJSON::Json_Parser::*)()>(&::MiniJSON::Json_Parser::get_NextToken)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1802d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_NextToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::StringReader*& MiniJSON::Json_Parser::__cordl_internal_get_json()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr ::System::IO::StringReader* const& MiniJSON::Json_Parser::__cordl_internal_get_json() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr void MiniJSON::Json_Parser::__cordl_internal_set_json(::System::IO::StringReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___json)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool MiniJSON::Json_Parser::IsWordBreak(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "IsWordBreak",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline void MiniJSON::Json_Parser::_ctor(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jsonString);
}
inline ::System::Object* MiniJSON::Json_Parser::Parse(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "Parse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, jsonString);
}
inline void MiniJSON::Json_Parser::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* MiniJSON::Json_Parser::ParseObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* MiniJSON::Json_Parser::ParseArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(this, ___internal_method);
}
inline ::System::Object* MiniJSON::Json_Parser::ParseValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* MiniJSON::Json_Parser::ParseByToken(::MiniJSON::Parser_Json_TOKEN  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseByToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MiniJSON::Parser_Json_TOKEN>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, token);
}
inline ::StringW MiniJSON::Json_Parser::ParseString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* MiniJSON::Json_Parser::ParseNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "ParseNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void MiniJSON::Json_Parser::EatWhitespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "EatWhitespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline char16_t MiniJSON::Json_Parser::get_PeekChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_PeekChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline char16_t MiniJSON::Json_Parser::get_NextChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_NextChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::StringW MiniJSON::Json_Parser::get_NextWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_NextWord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::MiniJSON::Parser_Json_TOKEN MiniJSON::Json_Parser::get_NextToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Parser*>::get(),
                        "get_NextToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::MiniJSON::Parser_Json_TOKEN, false>(this, ___internal_method);
}
inline ::MiniJSON::Json_Parser* MiniJSON::Json_Parser::New_ctor(::StringW  jsonString)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MiniJSON::Json_Parser*>(jsonString));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MiniJSON::Json_Parser::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MiniJSON::Json_Parser::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MiniJSON::Json_Parser::Json_Parser()   {
}
//  Writing Method size for method: ::MiniJSON::Json_Serializer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Serializer::*)()>(&::MiniJSON::Json_Serializer::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x18036b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Serializer.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::MiniJSON::Json_Serializer::Serialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1802a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Serializer.SerializeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Serializer::*)(::System::Object*)>(&::MiniJSON::Json_Serializer::SerializeValue)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1803718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Serializer.SerializeObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Serializer::*)(::System::Collections::IDictionary*)>(&::MiniJSON::Json_Serializer::SerializeObject)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x1803f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Serializer.SerializeArray
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Serializer::*)(::System::Collections::IList*)>(&::MiniJSON::Json_Serializer::SerializeArray)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1803ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Serializer.SerializeString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Serializer::*)(::StringW)>(&::MiniJSON::Json_Serializer::SerializeString)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x18038e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json_Serializer.SerializeOther
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MiniJSON::Json_Serializer::*)(::System::Object*)>(&::MiniJSON::Json_Serializer::SerializeOther)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1804390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeOther",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& MiniJSON::Json_Serializer::__cordl_internal_get_builder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr ::System::Text::StringBuilder* const& MiniJSON::Json_Serializer::__cordl_internal_get_builder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builder;
}
constexpr void MiniJSON::Json_Serializer::__cordl_internal_set_builder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___builder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MiniJSON::Json_Serializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW MiniJSON::Json_Serializer::Serialize(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj);
}
inline void MiniJSON::Json_Serializer::SerializeValue(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void MiniJSON::Json_Serializer::SerializeObject(::System::Collections::IDictionary*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void MiniJSON::Json_Serializer::SerializeArray(::System::Collections::IList*  anArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anArray);
}
inline void MiniJSON::Json_Serializer::SerializeString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str);
}
inline void MiniJSON::Json_Serializer::SerializeOther(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json_Serializer*>::get(),
                        "SerializeOther",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::MiniJSON::Json_Serializer* MiniJSON::Json_Serializer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MiniJSON::Json_Serializer*>());
}
// Ctor Parameters []
constexpr ::MiniJSON::Json_Serializer::Json_Serializer()   {
}
//  Writing Method size for method: ::MiniJSON::Json.Deserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::MiniJSON::Json::Deserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x180289c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json*>::get(),
                        "Deserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MiniJSON::Json.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::MiniJSON::Json::Serialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1802a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* MiniJSON::Json::Deserialize(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json*>::get(),
                        "Deserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, json);
}
inline ::StringW MiniJSON::Json::Serialize(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MiniJSON::Json*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::MiniJSON::Json::Json()   {
}
