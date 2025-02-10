#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BsonObject)
namespace Newtonsoft::Json::Bson {
class BsonProperty;
}
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
class BsonObject;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonObject);
// Dependencies Newtonsoft.Json.Bson.BsonToken
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonObject
class CORDL_TYPE BsonObject : public ::Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Bson::BsonType  Type;

/// @brief Field _children, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__children, put=__cordl_internal_set__children)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*  _children;

/// @brief Method Add, addr 0x284a6b4, size 0x124, virtual false, abstract: false, final false
inline void Add(::StringW  name, ::Newtonsoft::Json::Bson::BsonToken*  token) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* const& __cordl_internal_get__children() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*& __cordl_internal_get__children() ;

constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*  value) ;

/// @brief Method get_Type, addr 0x284a818, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Bson::BsonType get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BsonObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BsonObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonObject(BsonObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonObject(BsonObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9928};

/// @brief Field _children, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*  ____children;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonObject, ____children) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonObject, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObject*, "Newtonsoft.Json.Bson", "BsonObject");
