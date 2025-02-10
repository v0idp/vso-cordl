#pragma once
// IWYU pragma private; include "System/Collections/CollectionBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionBase)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class CollectionBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CollectionBase);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.CollectionBase
class CORDL_TYPE CollectionBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_InnerList)) ::System::Collections::ArrayList*  InnerList;

 __declspec(property(get=get_List)) ::System::Collections::IList*  List;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

/// @brief Field _list, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__list, put=__cordl_internal_set__list)) ::System::Collections::ArrayList*  _list;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Method Clear, addr 0x2716810, size 0x4c, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method GetEnumerator, addr 0x2717250, size 0x24, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Collections::CollectionBase* New_ctor() ;

/// @brief Method OnClear, addr 0x271727c, size 0x4, virtual true, abstract: false, final false
inline void OnClear() ;

/// @brief Method OnClearComplete, addr 0x27172e0, size 0x4, virtual true, abstract: false, final false
inline void OnClearComplete() ;

/// @brief Method OnInsert, addr 0x2717278, size 0x4, virtual true, abstract: false, final false
inline void OnInsert(int32_t  index, ::System::Object*  value) ;

/// @brief Method OnInsertComplete, addr 0x27172dc, size 0x4, virtual true, abstract: false, final false
inline void OnInsertComplete(int32_t  index, ::System::Object*  value) ;

/// @brief Method OnRemove, addr 0x2717280, size 0x4, virtual true, abstract: false, final false
inline void OnRemove(int32_t  index, ::System::Object*  value) ;

/// @brief Method OnRemoveComplete, addr 0x27172e4, size 0x4, virtual true, abstract: false, final false
inline void OnRemoveComplete(int32_t  index, ::System::Object*  value) ;

/// @brief Method OnSet, addr 0x2717274, size 0x4, virtual true, abstract: false, final false
inline void OnSet(int32_t  index, ::System::Object*  oldValue, ::System::Object*  newValue) ;

/// @brief Method OnSetComplete, addr 0x27172d8, size 0x4, virtual true, abstract: false, final false
inline void OnSetComplete(int32_t  index, ::System::Object*  oldValue, ::System::Object*  newValue) ;

/// @brief Method OnValidate, addr 0x2717284, size 0x54, virtual true, abstract: false, final false
inline void OnValidate(::System::Object*  value) ;

/// @brief Method RemoveAt, addr 0x271685c, size 0x1d4, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.ICollection.CopyTo, addr 0x2716ac0, size 0x24, virtual true, abstract: false, final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2716a78, size 0x24, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2716a9c, size 0x24, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IList.Add, addr 0x2716da4, size 0x140, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Contains, addr 0x2716d80, size 0x24, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0x271707c, size 0x24, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0x27170a0, size 0x1b0, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0x2716ee4, size 0x198, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x2716a54, size 0x24, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x2716a30, size 0x24, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x2716ae4, size 0xb8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  index) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x2716b9c, size 0x1e4, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  index, ::System::Object*  value) ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list() ;

constexpr void __cordl_internal_set__list(::System::Collections::ArrayList*  value) ;

/// @brief Method .ctor, addr 0x271677c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x27167ec, size 0x24, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_InnerList, addr 0x27167e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::ArrayList* get_InnerList() ;

/// @brief Method get_List, addr 0x27167e8, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::IList* get_List() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionBase(CollectionBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionBase(CollectionBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3421};

/// @brief Field _list, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ____list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::CollectionBase, ____list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::CollectionBase, 0x18>, "Size mismatch!");

} // namespace end def System::Collections
NEED_NO_BOX(::System::Collections::CollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CollectionBase*, "System.Collections", "CollectionBase");
