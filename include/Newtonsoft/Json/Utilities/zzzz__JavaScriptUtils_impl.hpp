#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JavaScriptUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__JavaScriptUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.GetCharEscapeFlags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool,::Array<bool>*> (*)(::Newtonsoft::Json::StringEscapeHandling, char16_t)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27f10f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "GetCharEscapeFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ShouldEscapeJavaScriptString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<bool,::Array<bool>*>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27f118c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "ShouldEscapeJavaScriptString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.WriteEscapedJavaScriptString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::TextWriter*, ::StringW, char16_t, bool, ::ArrayW<bool,::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*, ::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x27f1214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "WriteEscapedJavaScriptString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.ToEscapedJavaScriptString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, char16_t, bool, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x27f1974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "ToEscapedJavaScriptString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.FirstCharToEscape
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<bool,::Array<bool>*>, ::Newtonsoft::Json::StringEscapeHandling)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27f1804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "FirstCharToEscape",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateFromConstructorJson
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ::ByRef<::System::DateTime>, ::ByRef<::StringW>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x27f1c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "TryGetDateFromConstructorJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JavaScriptUtils.TryGetDateConstructorValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonReader*, ::ByRef<::System::Nullable_1<int64_t>>, ::ByRef<::StringW>)>(&::Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x27f20b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "TryGetDateConstructorValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool,::Array<bool>*>, "SingleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>(std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
inline ::ArrayW<bool,::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_SingleQuoteCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool,::Array<bool>*>, "SingleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool,::Array<bool>*>, "DoubleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>(std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
inline ::ArrayW<bool,::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_DoubleQuoteCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool,::Array<bool>*>, "DoubleQuoteCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>();
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::setStaticF_HtmlCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool,::Array<bool>*>, "HtmlCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>(std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
inline ::ArrayW<bool,::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::getStaticF_HtmlCharEscapeFlags()  {
return ::cordl_internals::getStaticField<::ArrayW<bool,::Array<bool>*>, "HtmlCharEscapeFlags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get>();
}
inline ::ArrayW<bool,::Array<bool>*> Newtonsoft::Json::Utilities::JavaScriptUtils::GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, char16_t  quoteChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "GetCharEscapeFlags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool,::Array<bool>*>, false>(nullptr, ___internal_method, stringEscapeHandling, quoteChar);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::ShouldEscapeJavaScriptString(::StringW  s, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "ShouldEscapeJavaScriptString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, charEscapeFlags);
}
inline void Newtonsoft::Json::Utilities::JavaScriptUtils::WriteEscapedJavaScriptString(::System::IO::TextWriter*  writer, ::StringW  s, char16_t  delimiter, bool  appendDelimiters, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, ::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  writeBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "WriteEscapedJavaScriptString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::IArrayPool_1<char16_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, s, delimiter, appendDelimiters, charEscapeFlags, stringEscapeHandling, bufferPool, writeBuffer);
}
inline ::StringW Newtonsoft::Json::Utilities::JavaScriptUtils::ToEscapedJavaScriptString(::StringW  value, char16_t  delimiter, bool  appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "ToEscapedJavaScriptString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value, delimiter, appendDelimiters, stringEscapeHandling);
}
inline int32_t Newtonsoft::Json::Utilities::JavaScriptUtils::FirstCharToEscape(::StringW  s, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "FirstCharToEscape",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool,::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::StringEscapeHandling>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, charEscapeFlags, stringEscapeHandling);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader*  reader, ::ByRef<::System::DateTime>  dateTime, ::ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "TryGetDateFromConstructorJson",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, dateTime, errorMessage);
}
inline bool Newtonsoft::Json::Utilities::JavaScriptUtils::TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader*  reader, ::ByRef<::System::Nullable_1<int64_t>>  integer, ::ByRef<::StringW>  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JavaScriptUtils*>::get(),
                        "TryGetDateConstructorValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reader, integer, errorMessage);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JavaScriptUtils::JavaScriptUtils()   {
}
