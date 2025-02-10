#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BsonToken)
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonToken);
// Dependencies System.Object
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonToken
class CORDL_TYPE BsonToken : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_Parent)) ::Newtonsoft::Json::Bson::BsonToken*  Parent;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Bson::BsonType  Type;

/// @brief Field <Parent>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parent_k__BackingField, put=__cordl_internal_set__Parent_k__BackingField)) ::Newtonsoft::Json::Bson::BsonToken*  _Parent_k__BackingField;

static inline ::Newtonsoft::Json::Bson::BsonToken* New_ctor() ;

constexpr ::Newtonsoft::Json::Bson::BsonToken* const& __cordl_internal_get__Parent_k__BackingField() const;

constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__Parent_k__BackingField() ;

constexpr void __cordl_internal_set__Parent_k__BackingField(::Newtonsoft::Json::Bson::BsonToken*  value) ;

/// @brief Method .ctor, addr 0x284a6ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Bson::BsonType get_Type() ;

/// @brief Method set_Parent, addr 0x284a6a4, size 0x8, virtual false, abstract: false, final false
inline void set_Parent(::Newtonsoft::Json::Bson::BsonToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BsonToken() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonToken(BsonToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonToken(BsonToken const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9927};

/// @brief Field <Parent>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Bson::BsonToken*  ____Parent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonToken, ____Parent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonToken, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonToken*, "Newtonsoft.Json.Bson", "BsonToken");
