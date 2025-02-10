#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JProperty)
namespace Newtonsoft::Json::Linq {
class JPropertyList_JProperty__GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty_JPropertyList;
}
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
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JPropertyList_JProperty__GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty_JPropertyList;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JProperty);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JProperty_JPropertyList);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
class CORDL_TYPE JPropertyList_JProperty__GetEnumerator_d__1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*  System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x2827e5c, size 0x60, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x2827ebc, size 0x8, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x2827ec4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2827efc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x2827e58, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current() ;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& __cordl_internal_get___4__this() const;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken*  value) ;

constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JProperty_JPropertyList*  value) ;

/// @brief Method .ctor, addr 0x2827cc4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JPropertyList_JProperty__GetEnumerator_d__1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JPropertyList_JProperty__GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JPropertyList_JProperty__GetEnumerator_d__1(JPropertyList_JProperty__GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JPropertyList_JProperty__GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JPropertyList_JProperty__GetEnumerator_d__1(JPropertyList_JProperty__GetEnumerator_d__1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9869};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IList`1<T>, System.Collections.IEnumerable, System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty/JPropertyList
class CORDL_TYPE JProperty_JPropertyList : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::Newtonsoft::Json::Linq::JToken*  Item[];

/// @brief Field _token, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__token, put=__cordl_internal_set__token)) ::Newtonsoft::Json::Linq::JToken*  _token;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x2827cf0, size 0x8, virtual true, abstract: false, final true
inline void Add(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Clear, addr 0x2827cf8, size 0x8, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x2827d00, size 0x10, virtual true, abstract: false, final true
inline bool Contains(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method CopyTo, addr 0x2827d10, size 0x64, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*,::Array<::Newtonsoft::Json::Linq::JToken*>*>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x2827c64, size 0x60, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator() ;

/// @brief Method IndexOf, addr 0x282778c, size 0x10, virtual true, abstract: false, final true
inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method Insert, addr 0x2827da8, size 0x10, virtual true, abstract: false, final true
inline void Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

static inline ::Newtonsoft::Json::Linq::JProperty_JPropertyList* New_ctor() ;

/// @brief Method Remove, addr 0x2827d74, size 0x1c, virtual true, abstract: false, final true
inline bool Remove(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveAt, addr 0x2827db8, size 0x10, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2827cec, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__token() const;

constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__token() ;

constexpr void __cordl_internal_set__token(::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method .ctor, addr 0x2827464, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x2827d90, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x2827da0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x2827dc8, size 0x48, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x2827e10, size 0x48, virtual true, abstract: false, final true
inline void set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JProperty_JPropertyList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JProperty_JPropertyList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JProperty_JPropertyList(JProperty_JPropertyList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JProperty_JPropertyList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JProperty_JPropertyList(JProperty_JPropertyList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9870};

/// @brief Field _token, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JToken*  ____token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty_JPropertyList, ____token) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty_JPropertyList, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
// Dependencies Newtonsoft.Json.Linq.JContainer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty
class CORDL_TYPE JProperty : public ::Newtonsoft::Json::Linq::JContainer {
public:
// Declarations
using JPropertyList = ::Newtonsoft::Json::Linq::JProperty_JPropertyList;

 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Linq::JTokenType  Type;

 __declspec(property(get=get_Value, put=set_Value)) ::Newtonsoft::Json::Linq::JToken*  Value;

/// @brief Field _content, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__content, put=__cordl_internal_set__content)) ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  _content;

/// @brief Field _name, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Method ClearItems, addr 0x28278d8, size 0xac, virtual true, abstract: false, final false
inline void ClearItems() ;

/// @brief Method CloneToken, addr 0x2827984, size 0x68, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method ContainsItem, addr 0x28278b4, size 0x24, virtual true, abstract: false, final false
inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method GetItem, addr 0x282746c, size 0x54, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t  index) ;

/// @brief Method IndexOfItem, addr 0x282775c, size 0x30, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method InsertItem, addr 0x282779c, size 0x118, virtual true, abstract: false, final false
inline bool InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations) ;

/// @brief Method Load, addr 0x2827a74, size 0x1f0, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW  name) ;

static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW  name, ::System::Object*  content) ;

static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::Newtonsoft::Json::Linq::JProperty*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method RemoveItem, addr 0x2827604, size 0xac, virtual true, abstract: false, final false
inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveItemAt, addr 0x28276b0, size 0xac, virtual true, abstract: false, final false
inline void RemoveItemAt(int32_t  index) ;

/// @brief Method SetItem, addr 0x28274c0, size 0x144, virtual true, abstract: false, final false
inline void SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method WriteTo, addr 0x28279f4, size 0x80, virtual true, abstract: false, final false
inline void WriteTo(::Newtonsoft::Json::JsonWriter*  writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>  converters) ;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& __cordl_internal_get__content() const;

constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& __cordl_internal_get__content() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__content(::Newtonsoft::Json::Linq::JProperty_JPropertyList*  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x2824210, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x2825acc, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Object*  content) ;

/// @brief Method .ctor, addr 0x28273dc, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JProperty*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0x28273cc, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_Name, addr 0x28273d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Type, addr 0x28279ec, size 0x8, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method get_Value, addr 0x2823d8c, size 0x1c, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Value() ;

/// @brief Method set_Value, addr 0x2825180, size 0x80, virtual false, abstract: false, final false
inline void set_Value(::Newtonsoft::Json::Linq::JToken*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JProperty(JProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JProperty(JProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9871};

/// @brief Field _content, offset: 0x50, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JProperty_JPropertyList*  ____content;

/// @brief Field _name, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____content) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____name) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty, 0x60>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty*, "Newtonsoft.Json.Linq", "JProperty");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty_JPropertyList);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty_JPropertyList*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
