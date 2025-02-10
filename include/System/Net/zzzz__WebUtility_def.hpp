#pragma once
// IWYU pragma private; include "System/Net/WebUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebUtility)
// Forward declare root types
namespace System::Net {
class WebUtility;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebUtility);
// Dependencies System.Net.Configuration.UnicodeDecodingConformance, System.Net.Configuration.UnicodeEncodingConformance, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebUtility
class CORDL_TYPE WebUtility : public ::System::Object {
public:
// Declarations
/// @brief Field _htmlDecodeConformance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__htmlDecodeConformance, put=setStaticF__htmlDecodeConformance)) ::System::Net::Configuration::UnicodeDecodingConformance  _htmlDecodeConformance;

/// @brief Field _htmlEncodeConformance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__htmlEncodeConformance, put=setStaticF__htmlEncodeConformance)) ::System::Net::Configuration::UnicodeEncodingConformance  _htmlEncodeConformance;

/// @brief Field _htmlEntityEndingChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__htmlEntityEndingChars, put=setStaticF__htmlEntityEndingChars)) ::ArrayW<char16_t,::Array<char16_t>*>  _htmlEntityEndingChars;

/// @brief Method IntToHex, addr 0x2d69db4, size 0x18, virtual false, abstract: false, final false
static inline char16_t IntToHex(int32_t  n) ;

/// @brief Method IsUrlSafeChar, addr 0x2d69d48, size 0x6c, virtual false, abstract: false, final false
static inline bool IsUrlSafeChar(char16_t  ch) ;

/// @brief Method UrlEncode, addr 0x2d69918, size 0x358, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UrlEncode(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  count) ;

/// @brief Method UrlEncode, addr 0x2d69848, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> UrlEncode(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  count, bool  alwaysCreateNewReturnValue) ;

/// @brief Method UrlEncode, addr 0x2d69dcc, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW UrlEncode(::StringW  value) ;

/// @brief Method ValidateUrlEncodingParameters, addr 0x2d69c70, size 0xd8, virtual false, abstract: false, final false
static inline bool ValidateUrlEncodingParameters(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  offset, int32_t  count) ;

static inline ::System::Net::Configuration::UnicodeDecodingConformance getStaticF__htmlDecodeConformance() ;

static inline ::System::Net::Configuration::UnicodeEncodingConformance getStaticF__htmlEncodeConformance() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF__htmlEntityEndingChars() ;

static inline void setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance  value) ;

static inline void setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance  value) ;

static inline void setStaticF__htmlEntityEndingChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebUtility(WebUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebUtility(WebUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebUtility, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::WebUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebUtility*, "System.Net", "WebUtility");
