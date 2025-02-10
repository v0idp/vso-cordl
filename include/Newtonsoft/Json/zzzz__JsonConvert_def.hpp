#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(JsonConvert)
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConvert;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConvert);
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonConvert
class CORDL_TYPE JsonConvert : public ::System::Object {
public:
// Declarations
/// @brief Field False, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_False, put=setStaticF_False)) ::StringW  False;

/// @brief Field NaN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NaN, put=setStaticF_NaN)) ::StringW  NaN;

/// @brief Field NegativeInfinity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NegativeInfinity, put=setStaticF_NegativeInfinity)) ::StringW  NegativeInfinity;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::StringW  Null;

/// @brief Field PositiveInfinity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PositiveInfinity, put=setStaticF_PositiveInfinity)) ::StringW  PositiveInfinity;

/// @brief Field True, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_True, put=setStaticF_True)) ::StringW  True;

/// @brief Field Undefined, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Undefined, put=setStaticF_Undefined)) ::StringW  Undefined;

/// @brief Field <DefaultSettings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DefaultSettings_k__BackingField, put=setStaticF__DefaultSettings_k__BackingField)) ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  _DefaultSettings_k__BackingField;

/// @brief Method EnsureDecimalPlace, addr 0x27cc454, size 0x74, virtual false, abstract: false, final false
static inline ::StringW EnsureDecimalPlace(::StringW  text) ;

/// @brief Method EnsureDecimalPlace, addr 0x27cc180, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW EnsureDecimalPlace(double_t  value, ::StringW  text) ;

/// @brief Method EnsureFloatFormat, addr 0x27cc244, size 0x124, virtual false, abstract: false, final false
static inline ::StringW EnsureFloatFormat(double_t  value, ::StringW  text, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method SerializeObject, addr 0x27cc708, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value) ;

/// @brief Method SerializeObject, addr 0x27cc7e0, size 0x68, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObject, addr 0x27cc764, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW SerializeObject(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Method SerializeObjectInternal, addr 0x27cc87c, size 0x290, virtual false, abstract: false, final false
static inline ::StringW SerializeObjectInternal(::System::Object*  value, ::System::Type*  type, ::Newtonsoft::Json::JsonSerializer*  jsonSerializer) ;

/// @brief Method ToString, addr 0x27cc038, size 0x58, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value) ;

/// @brief Method ToString, addr 0x27cc5bc, size 0x68, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value, char16_t  delimiter) ;

/// @brief Method ToString, addr 0x27cc624, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW ToString(::StringW  value, char16_t  delimiter, ::Newtonsoft::Json::StringEscapeHandling  stringEscapeHandling) ;

/// @brief Method ToString, addr 0x27cc4c8, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Decimal  value) ;

/// @brief Method ToString, addr 0x27cbf40, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW ToString(bool  value) ;

/// @brief Method ToString, addr 0x27cbfac, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW ToString(char16_t  value) ;

/// @brief Method ToString, addr 0x27cc368, size 0xec, virtual false, abstract: false, final false
static inline ::StringW ToString(double_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

/// @brief Method ToString, addr 0x27cc090, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW ToString(float_t  value, ::Newtonsoft::Json::FloatFormatHandling  floatFormatHandling, char16_t  quoteChar, bool  nullable) ;

static inline ::StringW getStaticF_False() ;

static inline ::StringW getStaticF_NaN() ;

static inline ::StringW getStaticF_NegativeInfinity() ;

static inline ::StringW getStaticF_Null() ;

static inline ::StringW getStaticF_PositiveInfinity() ;

static inline ::StringW getStaticF_True() ;

static inline ::StringW getStaticF_Undefined() ;

static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* getStaticF__DefaultSettings_k__BackingField() ;

/// @brief Method get_DefaultSettings, addr 0x27cbee8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings() ;

static inline void setStaticF_False(::StringW  value) ;

static inline void setStaticF_NaN(::StringW  value) ;

static inline void setStaticF_NegativeInfinity(::StringW  value) ;

static inline void setStaticF_Null(::StringW  value) ;

static inline void setStaticF_PositiveInfinity(::StringW  value) ;

static inline void setStaticF_True(::StringW  value) ;

static inline void setStaticF_Undefined(::StringW  value) ;

static inline void setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonConvert(JsonConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonConvert(JsonConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9662};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConvert, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConvert);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConvert*, "Newtonsoft.Json", "JsonConvert");
