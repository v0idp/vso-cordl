#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JArray)
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
class IEnumerator_1;
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
class JArray;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JArray);
// Dependencies Newtonsoft.Json.Linq.JContainer, System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IList`1<T>, System.Collections.IEnumerable
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JArray
class CORDL_TYPE JArray : public ::Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  _values;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x28208e4, size 0x10, virtual true, abstract: false, final true
inline void Add(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Clear, addr 0x28208f4, size 0x10, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method CloneToken, addr 0x281ff70, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method Contains, addr 0x2820904, size 0x10, virtual true, abstract: false, final true
inline bool Contains(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method CopyTo, addr 0x2820914, size 0x10, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*,::Array<::Newtonsoft::Json::Linq::JToken*>*>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x282084c, size 0x98, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x2820814, size 0x10, virtual true, abstract: false, final true
inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method IndexOfItem, addr 0x28207b0, size 0x64, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Insert, addr 0x2820824, size 0x18, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Load, addr 0x281ffd8, size 0x1a0, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

static inline ::Newtonsoft::Json::Linq::JArray* New_ctor() ;

static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::System::Object*  content) ;

static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::Newtonsoft::Json::Linq::JArray*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method Remove, addr 0x282092c, size 0x10, virtual true, abstract: false, final true
inline bool Remove(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveAt, addr 0x282083c, size 0x10, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method WriteTo, addr 0x2820474, size 0xcc, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  value) ;

/// @brief Method .ctor, addr 0x281fa18, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x281fedc, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  content) ;

/// @brief Method .ctor, addr 0x281fae8, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JArray*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0x281fa08, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_IsReadOnly, addr 0x2820924, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x2820790, size 0x10, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0x2820540, size 0x124, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object*  key) ;

/// @brief Method get_Type, addr 0x281fa10, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x28207a0, size 0x10, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method set_Item, addr 0x2820664, size 0x12c, virtual true, abstract: false, final false
inline void set_Item(::System::Object*  key, ::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JArray(JArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JArray(JArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9861};

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JArray, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JArray, 0x58>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JArray*, "Newtonsoft.Json.Linq", "JArray");
