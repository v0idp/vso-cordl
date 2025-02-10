#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JavaScriptUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JavaScriptUtils)
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::IO {
class TextWriter;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JavaScriptUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::JavaScriptUtils);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils
class CORDL_TYPE JavaScriptUtils : public ::System::Object {
public:
// Declarations
/// @brief Field DoubleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DoubleQuoteCharEscapeFlags, put=setStaticF_DoubleQuoteCharEscapeFlags)) ::ArrayW<bool,::Array<bool>*>  DoubleQuoteCharEscapeFlags;

/// @brief Field HtmlCharEscapeFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HtmlCharEscapeFlags, put=setStaticF_HtmlCharEscapeFlags)) ::ArrayW<bool,::Array<bool>*>  HtmlCharEscapeFlags;

/// @brief Field SingleQuoteCharEscapeFlags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SingleQuoteCharEscapeFlags, put=setStaticF_SingleQuoteCharEscapeFlags)) ::ArrayW<bool,::Array<bool>*>  SingleQuoteCharEscapeFlags;

/// @brief Method FirstCharToEscape, addr 0x27f1804, size 0xb4, virtual false, abstract: false, final false
static inline int32_t FirstCharToEscape(::StringW  s, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method GetCharEscapeFlags, addr 0x27f10f4, size 0x98, virtual false, abstract: false, final false
static inline ::ArrayW<bool,::Array<bool>*> GetCharEscapeFlags(::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, char16_t  quoteChar) ;

/// @brief Method ShouldEscapeJavaScriptString, addr 0x27f118c, size 0x88, virtual false, abstract: false, final false
static inline bool ShouldEscapeJavaScriptString(::StringW  s, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags) ;

/// @brief Method ToEscapedJavaScriptString, addr 0x27f1974, size 0x224, virtual false, abstract: false, final false
static inline ::StringW ToEscapedJavaScriptString(::StringW  value, char16_t  delimiter, bool  appendDelimiters, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method TryGetDateConstructorValue, addr 0x27f20b4, size 0x1a8, virtual false, abstract: false, final false
static inline bool TryGetDateConstructorValue(::Newtonsoft::Json::JsonReader*  reader, ::ByRef<::System::Nullable_1<int64_t>>  integer, ::ByRef<::StringW>  errorMessage) ;

/// @brief Method TryGetDateFromConstructorJson, addr 0x27f1c60, size 0x454, virtual false, abstract: false, final false
static inline bool TryGetDateFromConstructorJson(::Newtonsoft::Json::JsonReader*  reader, ::ByRef<::System::DateTime>  dateTime, ::ByRef<::StringW>  errorMessage) ;

/// @brief Method WriteEscapedJavaScriptString, addr 0x27f1214, size 0x5f0, virtual false, abstract: false, final false
static inline void WriteEscapedJavaScriptString(::System::IO::TextWriter*  writer, ::StringW  s, char16_t  delimiter, bool  appendDelimiters, ::ArrayW<bool,::Array<bool>*>  charEscapeFlags, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling, ::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, ::ByRef<::ArrayW<char16_t,::Array<char16_t>*>>  writeBuffer) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_DoubleQuoteCharEscapeFlags() ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_HtmlCharEscapeFlags() ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_SingleQuoteCharEscapeFlags() ;

static inline void setStaticF_DoubleQuoteCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

static inline void setStaticF_HtmlCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

static inline void setStaticF_SingleQuoteCharEscapeFlags(::ArrayW<bool,::Array<bool>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JavaScriptUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JavaScriptUtils(JavaScriptUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JavaScriptUtils(JavaScriptUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JavaScriptUtils, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JavaScriptUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JavaScriptUtils*, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
