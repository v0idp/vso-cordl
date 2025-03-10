#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
CORDL_MODULE_EXPORT(BsonArray)
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonArray;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonArray);
// Dependencies Newtonsoft.Json.Bson.BsonToken
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonArray
class CORDL_TYPE BsonArray : public ::Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Bson::BsonType  Type;

/// @brief Field _children, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__children, put=__cordl_internal_set__children)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  _children;

/// @brief Method Add, addr 0x284a820, size 0xa8, virtual false, abstract: false, final false
inline void Add(::Newtonsoft::Json::Bson::BsonToken*  token) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* const& __cordl_internal_get__children() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& __cordl_internal_get__children() ;

constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  value) ;

/// @brief Method get_Type, addr 0x284a8c8, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Bson::BsonType get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BsonArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonArray(BsonArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonArray(BsonArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9929};

/// @brief Field _children, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  ____children;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonArray, ____children) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonArray, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonArray*, "Newtonsoft.Json.Bson", "BsonArray");
