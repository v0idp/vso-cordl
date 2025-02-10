#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonWriter)
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonWriter);
// Dependencies Newtonsoft.Json.JsonWriter
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonWriter
class CORDL_TYPE BsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief Field _parent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::Newtonsoft::Json::Bson::BsonToken*  _parent;

/// @brief Field _propertyName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__propertyName, put=__cordl_internal_set__propertyName)) ::StringW  _propertyName;

/// @brief Field _root, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::Newtonsoft::Json::Bson::BsonToken*  _root;

/// @brief Method AddToken, addr 0x284aa4c, size 0x1c4, virtual false, abstract: false, final false
inline void AddToken(::Newtonsoft::Json::Bson::BsonToken*  token) ;

/// @brief Method AddValue, addr 0x284a9d8, size 0x74, virtual false, abstract: false, final false
inline void AddValue(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type) ;

/// @brief Method WriteObjectId, addr 0x284ac10, size 0xcc, virtual false, abstract: false, final false
inline void WriteObjectId(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method WriteRegex, addr 0x283ca20, size 0xb0, virtual false, abstract: false, final false
inline void WriteRegex(::StringW  pattern, ::StringW  options) ;

constexpr ::Newtonsoft::Json::Bson::BsonToken* const& __cordl_internal_get__parent() const;

constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__parent() ;

constexpr ::StringW const& __cordl_internal_get__propertyName() const;

constexpr ::StringW& __cordl_internal_get__propertyName() ;

constexpr ::Newtonsoft::Json::Bson::BsonToken* const& __cordl_internal_get__root() const;

constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__root() ;

constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Bson::BsonToken*  value) ;

constexpr void __cordl_internal_set__propertyName(::StringW  value) ;

constexpr void __cordl_internal_set__root(::Newtonsoft::Json::Bson::BsonToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BsonWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonWriter(BsonWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonWriter(BsonWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9935};

/// @brief Field _root, offset: 0x60, size: 0x8, def value: None
 ::Newtonsoft::Json::Bson::BsonToken*  ____root;

/// @brief Field _parent, offset: 0x68, size: 0x8, def value: None
 ::Newtonsoft::Json::Bson::BsonToken*  ____parent;

/// @brief Field _propertyName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____propertyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____root) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____parent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____propertyName) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonWriter, 0x78>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonWriter*, "Newtonsoft.Json.Bson", "BsonWriter");
