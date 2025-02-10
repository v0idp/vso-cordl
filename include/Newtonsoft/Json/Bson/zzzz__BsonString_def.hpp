#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
CORDL_MODULE_EXPORT(BsonString)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonString;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonString);
// Dependencies Newtonsoft.Json.Bson.BsonValue
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonString
class CORDL_TYPE BsonString : public ::Newtonsoft::Json::Bson::BsonValue {
public:
// Declarations
/// @brief Field <IncludeLength>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__IncludeLength_k__BackingField, put=__cordl_internal_set__IncludeLength_k__BackingField)) bool  _IncludeLength_k__BackingField;

static inline ::Newtonsoft::Json::Bson::BsonString* New_ctor(::System::Object*  value, bool  includeLength) ;

constexpr bool const& __cordl_internal_get__IncludeLength_k__BackingField() const;

constexpr bool& __cordl_internal_get__IncludeLength_k__BackingField() ;

constexpr void __cordl_internal_set__IncludeLength_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x284a7e0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value, bool  includeLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BsonString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BsonString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonString(BsonString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonString(BsonString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9931};

/// @brief Field <IncludeLength>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____IncludeLength_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonString, ____IncludeLength_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonString, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonString);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonString*, "Newtonsoft.Json.Bson", "BsonString");
