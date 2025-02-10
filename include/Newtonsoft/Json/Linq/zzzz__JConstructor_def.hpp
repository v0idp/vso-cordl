#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JConstructor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JConstructor)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JConstructor);
// Dependencies Newtonsoft.Json.Linq.JContainer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JConstructor
class CORDL_TYPE JConstructor : public ::Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

/// @brief Field _name, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _values, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  _values;

/// @brief Method CloneToken, addr 0x2820b7c, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method IndexOfItem, addr 0x2820944, size 0x64, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Load, addr 0x2820f14, size 0x1f0, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::StringW  name) ;

static inline ::Newtonsoft::Json::Linq::JConstructor* New_ctor(::Newtonsoft::Json::Linq::JConstructor*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method WriteTo, addr 0x2820be4, size 0xe0, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

/// @brief Method .ctor, addr 0x2820a5c, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x28209b8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JConstructor*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0x282093c, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_Item, addr 0x2820cc4, size 0x124, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object*  key) ;

/// @brief Method get_Name, addr 0x28209a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Type, addr 0x28209b0, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method set_Item, addr 0x2820de8, size 0x12c, virtual true, abstract: false, final false
inline void set_Item(::System::Object*  key, ::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JConstructor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JConstructor(JConstructor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JConstructor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JConstructor(JConstructor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9862};

/// @brief Field _name, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _values, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JConstructor, ____name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JConstructor, ____values) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JConstructor, 0x60>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JConstructor*, "Newtonsoft.Json.Linq", "JConstructor");
