#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JContainer)
namespace Newtonsoft::Json::Linq {
template<typename T>
struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
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
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventArgs;
}
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventHandler;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JContainer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JContainer);
// Dependencies Newtonsoft.Json.Linq.JToken, System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IList`1<T>, System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.ComponentModel.IBindingList
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JContainer
class CORDL_TYPE JContainer : public ::Newtonsoft::Json::Linq::JToken {
public:
// Declarations
 __declspec(property(get=get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*  ChildrenTokens;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_First)) ::Newtonsoft::Json::Linq::JToken*  First;

 __declspec(property(get=get_HasValues)) bool  HasValues;

 __declspec(property(get=get_Last)) ::Newtonsoft::Json::Linq::JToken*  Last;

 __declspec(property(get=System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__IsReadOnly;

 __declspec(property(get=System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item, put=System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item)) ::Newtonsoft::Json::Linq::JToken*  System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Item[];

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

/// @brief Field _busy, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__busy, put=__cordl_internal_set__busy)) bool  _busy;

/// @brief Field _collectionChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__collectionChanged, put=__cordl_internal_set__collectionChanged)) ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  _collectionChanged;

/// @brief Field _listChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__listChanged, put=__cordl_internal_set__listChanged)) ::System::ComponentModel::ListChangedEventHandler*  _listChanged;

/// @brief Field _syncRoot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncRoot, put=__cordl_internal_set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr operator  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr operator  ::System::ComponentModel::IBindingList*() noexcept;

/// @brief Method Add, addr 0x2823624, size 0xd0, virtual true, abstract: false, final false
inline void Add(::System::Object*  content) ;

/// @brief Method AddAndSkipParentCheck, addr 0x28237c4, size 0xd0, virtual false, abstract: false, final false
inline void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken*  token) ;

/// @brief Method CheckReentrancy, addr 0x2821534, size 0xa8, virtual false, abstract: false, final false
inline void CheckReentrancy() ;

/// @brief Method Children, addr 0x2821a24, size 0x74, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children() ;

/// @brief Method ClearItems, addr 0x2822b90, size 0x410, virtual true, abstract: false, final false
inline void ClearItems() ;

/// @brief Method ContainsItem, addr 0x2823004, size 0x24, virtual true, abstract: false, final false
inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method CopyItemsTo, addr 0x2823028, size 0x42c, virtual true, abstract: false, final false
inline void CopyItemsTo(::System::Array*  array, int32_t  arrayIndex) ;

/// @brief Method CreateFromContent, addr 0x2823894, size 0xb4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JToken* CreateFromContent(::System::Object*  content) ;

/// @brief Method EnsureParentToken, addr 0x2821b7c, size 0xfc, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* EnsureParentToken(::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations) ;

/// @brief Method EnsureValue, addr 0x28243c8, size 0xbc, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object*  value) ;

/// @brief Method GetItem, addr 0x2822578, size 0xbc, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t  index) ;

/// @brief Method IndexOfItem, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method InsertItem, addr 0x2821ce8, size 0x3f4, virtual true, abstract: false, final false
inline bool InsertItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item, bool  skipParentCheck, bool  copyAnnotations) ;

/// @brief Method IsMultiContent, addr 0x2821a98, size 0xe4, virtual false, abstract: false, final false
inline bool IsMultiContent(::System::Object*  content) ;

/// @brief Method IsTokenUnchanged, addr 0x2822ae4, size 0xac, virtual false, abstract: false, final false
static inline bool IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken*  currentValue, ::Newtonsoft::Json::Linq::JToken*  newValue) ;

static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor() ;

static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor(::Newtonsoft::Json::Linq::JContainer*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method OnCollectionChanged, addr 0x2821664, size 0x88, virtual true, abstract: false, final false
inline void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*  e) ;

/// @brief Method OnListChanged, addr 0x28215dc, size 0x88, virtual true, abstract: false, final false
inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e) ;

/// @brief Method ReadContentFrom, addr 0x2823988, size 0x404, virtual false, abstract: false, final false
inline void ReadContentFrom(::Newtonsoft::Json::JsonReader*  r, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings) ;

/// @brief Method ReadProperty, addr 0x2823eb4, size 0x1d4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Linq::JProperty* ReadProperty(::Newtonsoft::Json::JsonReader*  r, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::Newtonsoft::Json::IJsonLineInfo*  lineInfo, ::Newtonsoft::Json::Linq::JContainer*  parent) ;

/// @brief Method ReadTokenFrom, addr 0x2820318, size 0x15c, virtual false, abstract: false, final false
inline void ReadTokenFrom(::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  options) ;

/// @brief Method RemoveAll, addr 0x2823978, size 0x10, virtual false, abstract: false, final false
inline void RemoveAll() ;

/// @brief Method RemoveItem, addr 0x282252c, size 0x4c, virtual true, abstract: false, final false
inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method RemoveItemAt, addr 0x28220dc, size 0x450, virtual true, abstract: false, final false
inline void RemoveItemAt(int32_t  index) ;

/// @brief Method ReplaceItem, addr 0x2822fa0, size 0x64, virtual true, abstract: false, final false
inline void ReplaceItem(::Newtonsoft::Json::Linq::JToken*  existing, ::Newtonsoft::Json::Linq::JToken*  replacement) ;

/// @brief Method SetItem, addr 0x2822634, size 0x4b0, virtual true, abstract: false, final false
inline void SetItem(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add, addr 0x2824370, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear, addr 0x2824380, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear() ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains, addr 0x2824390, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo, addr 0x28243a0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*,::Array<::Newtonsoft::Json::Linq::JToken*>*>  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove, addr 0x28243b8, size 0x10, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly, addr 0x28243b0, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly() ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf, addr 0x2824318, size 0x10, virtual true, abstract: false, final true
inline int32_t System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert, addr 0x2824328, size 0x18, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  item) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt, addr 0x2824340, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item, addr 0x2824350, size 0x10, virtual true, abstract: false, final true
inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(int32_t  index) ;

/// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item, addr 0x2824360, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(int32_t  index, ::Newtonsoft::Json::Linq::JToken*  value) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x28245f4, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2824604, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x282460c, size 0x74, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IList.Add, addr 0x2824484, size 0x38, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0x28244bc, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains, addr 0x28244cc, size 0x28, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0x28244f4, size 0x28, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0x282451c, size 0x44, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0x2824570, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0x2824598, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x2824560, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x2824568, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x28245a8, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x28245b8, size 0x3c, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

/// @brief Method TryAdd, addr 0x28236f4, size 0xd0, virtual false, abstract: false, final false
inline bool TryAdd(::System::Object*  content) ;

/// @brief Method TryAddInternal, addr 0x2821198, size 0x39c, virtual false, abstract: false, final false
inline bool TryAddInternal(int32_t  index, ::System::Object*  content, bool  skipParentCheck, bool  copyAnnotations) ;

/// @brief Method ValidateToken, addr 0x2823508, size 0x11c, virtual true, abstract: false, final false
inline void ValidateToken(::Newtonsoft::Json::Linq::JToken*  o, ::Newtonsoft::Json::Linq::JToken*  existing) ;

constexpr bool const& __cordl_internal_get__busy() const;

constexpr bool& __cordl_internal_get__busy() ;

constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* const& __cordl_internal_get__collectionChanged() const;

constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*& __cordl_internal_get__collectionChanged() ;

constexpr ::System::ComponentModel::ListChangedEventHandler* const& __cordl_internal_get__listChanged() const;

constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get__listChanged() ;

constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

constexpr ::System::Object*& __cordl_internal_get__syncRoot() ;

constexpr void __cordl_internal_set__busy(bool  value) ;

constexpr void __cordl_internal_set__collectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__listChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__syncRoot(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x281fa90, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x281fb78, size 0x364, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::Linq::JContainer*  other, ::Newtonsoft::Json::Linq::JsonCloneSettings*  settings) ;

/// @brief Method get_ChildrenTokens, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens() ;

/// @brief Method get_Count, addr 0x2823454, size 0xb4, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_First, addr 0x28217ac, size 0x13c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_First() ;

/// @brief Method get_HasValues, addr 0x28216ec, size 0xc0, virtual true, abstract: false, final false
inline bool get_HasValues() ;

/// @brief Method get_Last, addr 0x28218e8, size 0x13c, virtual true, abstract: false, final false
inline ::Newtonsoft::Json::Linq::JToken* get_Last() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JContainer(JContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JContainer(JContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9863};

/// @brief Field _listChanged, offset: 0x30, size: 0x8, def value: None
 ::System::ComponentModel::ListChangedEventHandler*  ____listChanged;

/// @brief Field _collectionChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*  ____collectionChanged;

/// @brief Field _syncRoot, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ____syncRoot;

/// @brief Field _busy, offset: 0x48, size: 0x1, def value: None
 bool  ____busy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____listChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____collectionChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____syncRoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____busy) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JContainer, 0x50>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JContainer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JContainer*, "Newtonsoft.Json.Linq", "JContainer");
