#pragma once
// IWYU pragma private; include "System/Data/DataView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__IBindingList_def.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataView)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System::ComponentModel {
struct ListChangedType;
}
namespace System::Data {
class DataRowView;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewListener;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System::Data {
class DataView_DataRowReferenceComparer;
}
namespace System::Data {
class IFilter;
}
namespace System::Data {
class Index;
}
namespace System {
class Array;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataView;
}
namespace System::Data {
class DataView_DataRowReferenceComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataView);
MARK_REF_PTR_T(::System::Data::DataView_DataRowReferenceComparer);
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataView/DataRowReferenceComparer
class CORDL_TYPE DataView_DataRowReferenceComparer : public ::System::Object {
public:
// Declarations
/// @brief Field s_default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_default, put=setStaticF_s_default)) ::System::Data::DataView_DataRowReferenceComparer*  s_default;

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>*() noexcept;

/// @brief Method Equals, addr 0x2a65e34, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::System::Data::DataRow*  x, ::System::Data::DataRow*  y) ;

/// @brief Method GetHashCode, addr 0x2a65e40, size 0x18, virtual true, abstract: false, final true
inline int32_t GetHashCode(::System::Data::DataRow*  obj) ;

static inline ::System::Data::DataView_DataRowReferenceComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x2a65e2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Data::DataView_DataRowReferenceComparer* getStaticF_s_default() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Data::DataRow*>* i___System__Collections__Generic__IEqualityComparer_1___System__Data__DataRow__() noexcept;

static inline void setStaticF_s_default(::System::Data::DataView_DataRowReferenceComparer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataView_DataRowReferenceComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataView_DataRowReferenceComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataView_DataRowReferenceComparer(DataView_DataRowReferenceComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataView_DataRowReferenceComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataView_DataRowReferenceComparer(DataView_DataRowReferenceComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataView_DataRowReferenceComparer, 0x10>, "Size mismatch!");

} // namespace end def System::Data
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.ComponentModel.IBindingList, System.ComponentModel.MarshalByValueComponent, System.Data.DataViewRowState
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataView
class CORDL_TYPE DataView : public ::System::ComponentModel::MarshalByValueComponent {
public:
// Declarations
using DataRowReferenceComparer = ::System::Data::DataView_DataRowReferenceComparer;

 __declspec(property(get=get_AllowDelete)) bool  AllowDelete;

 __declspec(property(get=get_AllowNew)) bool  AllowNew;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_CountFromIndex)) int32_t  CountFromIndex;

 __declspec(property(get=get_DataViewManager)) ::System::Data::DataViewManager*  DataViewManager;

 __declspec(property(get=get_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_Item)) ::System::Data::DataRowView*  Item[];

 __declspec(property(get=get_ObjectID)) int32_t  ObjectID;

 __declspec(property(get=get_RowStateFilter)) ::System::Data::DataViewRowState  RowStateFilter;

 __declspec(property(get=get_Sort)) ::StringW  Sort;

 __declspec(property(get=get_SortComparison)) ::System::Comparison_1<::System::Data::DataRow*>*  SortComparison;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

 __declspec(property(get=System_Collections_IList_get_IsFixedSize)) bool  System_Collections_IList_IsFixedSize;

 __declspec(property(get=System_Collections_IList_get_IsReadOnly)) bool  System_Collections_IList_IsReadOnly;

 __declspec(property(get=System_Collections_IList_get_Item, put=System_Collections_IList_set_Item)) ::System::Object*  System_Collections_IList_Item[];

 __declspec(property(get=get_Table)) ::System::Data::DataTable*  Table;

/// @brief Field _addNewMoved, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__addNewMoved, put=__cordl_internal_set__addNewMoved)) ::System::ComponentModel::ListChangedEventArgs*  _addNewMoved;

/// @brief Field _addNewRow, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__addNewRow, put=__cordl_internal_set__addNewRow)) ::System::Data::DataRow*  _addNewRow;

/// @brief Field _allowDelete, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowDelete, put=__cordl_internal_set__allowDelete)) bool  _allowDelete;

/// @brief Field _allowEdit, offset 0x67, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowEdit, put=__cordl_internal_set__allowEdit)) bool  _allowEdit;

/// @brief Field _allowNew, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowNew, put=__cordl_internal_set__allowNew)) bool  _allowNew;

/// @brief Field _applyDefaultSort, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__applyDefaultSort, put=__cordl_internal_set__applyDefaultSort)) bool  _applyDefaultSort;

/// @brief Field _comparison, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__comparison, put=__cordl_internal_set__comparison)) ::System::Comparison_1<::System::Data::DataRow*>*  _comparison;

/// @brief Field _dataViewManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataViewManager, put=__cordl_internal_set__dataViewManager)) ::System::Data::DataViewManager*  _dataViewManager;

/// @brief Field _delayedRecordStates, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayedRecordStates, put=__cordl_internal_set__delayedRecordStates)) ::System::Data::DataViewRowState  _delayedRecordStates;

/// @brief Field _dvListener, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__dvListener, put=__cordl_internal_set__dvListener)) ::System::Data::DataViewListener*  _dvListener;

/// @brief Field _fEndInitInProgress, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__fEndInitInProgress, put=__cordl_internal_set__fEndInitInProgress)) bool  _fEndInitInProgress;

/// @brief Field _findIndexes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__findIndexes, put=__cordl_internal_set__findIndexes)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>*  _findIndexes;

/// @brief Field _index, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) ::System::Data::Index*  _index;

/// @brief Field _locked, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__locked, put=__cordl_internal_set__locked)) bool  _locked;

/// @brief Field _objectID, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__objectID, put=__cordl_internal_set__objectID)) int32_t  _objectID;

/// @brief Field _onListChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__onListChanged, put=__cordl_internal_set__onListChanged)) ::System::ComponentModel::ListChangedEventHandler*  _onListChanged;

/// @brief Field _open, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__open, put=__cordl_internal_set__open)) bool  _open;

/// @brief Field _recordStates, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordStates, put=__cordl_internal_set__recordStates)) ::System::Data::DataViewRowState  _recordStates;

/// @brief Field _rowFilter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rowFilter, put=__cordl_internal_set__rowFilter)) ::System::Data::IFilter*  _rowFilter;

/// @brief Field _rowViewBuffer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__rowViewBuffer, put=__cordl_internal_set__rowViewBuffer)) ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  _rowViewBuffer;

/// @brief Field _rowViewCache, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__rowViewCache, put=__cordl_internal_set__rowViewCache)) ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  _rowViewCache;

/// @brief Field _shouldOpen, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldOpen, put=__cordl_internal_set__shouldOpen)) bool  _shouldOpen;

/// @brief Field _sort, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__sort, put=__cordl_internal_set__sort)) ::StringW  _sort;

/// @brief Field _table, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__table, put=__cordl_internal_set__table)) ::System::Data::DataTable*  _table;

/// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_objectTypeCount, put=setStaticF_s_objectTypeCount)) int32_t  s_objectTypeCount;

/// @brief Field s_resetEventArgs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_resetEventArgs, put=setStaticF_s_resetEventArgs)) ::System::ComponentModel::ListChangedEventArgs*  s_resetEventArgs;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IList"
constexpr operator  ::System::Collections::IList*() noexcept;

/// @brief Convert operator to "::System::ComponentModel::IBindingList"
constexpr operator  ::System::ComponentModel::IBindingList*() noexcept;

/// @brief Method AddNew, addr 0x2a63538, size 0x2d4, virtual true, abstract: false, final false
inline ::System::Data::DataRowView* AddNew() ;

/// @brief Method CheckOpen, addr 0x2a6380c, size 0x38, virtual false, abstract: false, final false
inline void CheckOpen() ;

/// @brief Method ChildRelationCollectionChanged, addr 0x2a65730, size 0x224, virtual false, abstract: false, final false
inline void ChildRelationCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e) ;

/// @brief Method Close, addr 0x2a63914, size 0x38, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method ColumnCollectionChanged, addr 0x2a65b78, size 0x224, virtual true, abstract: false, final false
inline void ColumnCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e) ;

/// @brief Method ColumnCollectionChangedInternal, addr 0x2a65d9c, size 0x10, virtual false, abstract: false, final false
inline void ColumnCollectionChangedInternal(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e) ;

/// @brief Method CopyTo, addr 0x2a63aec, size 0x1ac, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::System::Data::DataRowView*,::Array<::System::Data::DataRowView*>*>  array, int32_t  index) ;

/// @brief Method CopyTo, addr 0x2a63968, size 0x150, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Delete, addr 0x2a63c98, size 0x1c, virtual false, abstract: false, final false
inline void Delete(int32_t  index) ;

/// @brief Method Delete, addr 0x2a63cb4, size 0x1cc, virtual false, abstract: false, final false
inline void Delete(::System::Data::DataRow*  row) ;

/// @brief Method Dispose, addr 0x2a64024, size 0x34, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method FinishAddNew, addr 0x2a63e80, size 0x1a4, virtual false, abstract: false, final false
inline void FinishAddNew(bool  success) ;

/// @brief Method GetEnumerator, addr 0x2a64058, size 0x7c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetFilter, addr 0x2a64428, size 0x8, virtual true, abstract: false, final false
inline ::System::Data::IFilter* GetFilter() ;

/// @brief Method GetRecord, addr 0x2a64430, size 0x88, virtual false, abstract: false, final false
inline int32_t GetRecord(int32_t  recordIndex) ;

/// @brief Method GetRow, addr 0x2a63444, size 0x9c, virtual false, abstract: false, final false
inline ::System::Data::DataRow* GetRow(int32_t  index) ;

/// @brief Method GetRowView, addr 0x2a634e0, size 0x58, virtual false, abstract: false, final false
inline ::System::Data::DataRowView* GetRowView(::System::Data::DataRow*  dr) ;

/// @brief Method GetRowView, addr 0x2a63ab8, size 0x34, virtual false, abstract: false, final false
inline ::System::Data::DataRowView* GetRowView(int32_t  record) ;

/// @brief Method IndexListChanged, addr 0x2a644b8, size 0x90, virtual true, abstract: false, final false
inline void IndexListChanged(::System::Object*  sender, ::System::ComponentModel::ListChangedEventArgs*  e) ;

/// @brief Method IndexListChangedInternal, addr 0x2a64548, size 0xb0, virtual false, abstract: false, final false
inline void IndexListChangedInternal(::System::ComponentModel::ListChangedEventArgs*  e) ;

/// @brief Method IndexOf, addr 0x2a63844, size 0xd0, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Data::DataRowView*  rowview) ;

/// @brief Method IndexOfDataRowView, addr 0x2a6426c, size 0x58, virtual false, abstract: false, final false
inline int32_t IndexOfDataRowView(::System::Data::DataRowView*  rowview) ;

/// @brief Method MaintainDataView, addr 0x2a645f8, size 0x254, virtual false, abstract: false, final false
inline void MaintainDataView(::System::ComponentModel::ListChangedType  changedType, ::System::Data::DataRow*  row, bool  trackAddRemove) ;

static inline ::System::Data::DataView* New_ctor(::System::Data::DataTable*  table, bool  locked) ;

/// @brief Method OnListChanged, addr 0x2a64a88, size 0x318, virtual true, abstract: false, final false
inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs*  e) ;

/// @brief Method ParentRelationCollectionChanged, addr 0x2a65954, size 0x224, virtual false, abstract: false, final false
inline void ParentRelationCollectionChanged(::System::Object*  sender, ::System::ComponentModel::CollectionChangeEventArgs*  e) ;

/// @brief Method Reset, addr 0x2a64da0, size 0x2c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetRowViewCache, addr 0x2a6484c, size 0x23c, virtual false, abstract: false, final false
inline void ResetRowViewCache() ;

/// @brief Method SetDataViewManager, addr 0x2a64dcc, size 0x218, virtual false, abstract: false, final false
inline void SetDataViewManager(::System::Data::DataViewManager*  dataViewManager) ;

/// @brief Method SetIndex, addr 0x2a64fec, size 0x8, virtual true, abstract: false, final false
inline void SetIndex(::StringW  newSort, ::System::Data::DataViewRowState  newRowStates, ::System::Data::IFilter*  newRowFilter) ;

/// @brief Method SetIndex2, addr 0x2a64ff4, size 0x238, virtual false, abstract: false, final false
inline void SetIndex2(::StringW  newSort, ::System::Data::DataViewRowState  newRowStates, ::System::Data::IFilter*  newRowFilter, bool  fireEvent) ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2a6336c, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2a633d8, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IList.Add, addr 0x2a640e4, size 0x54, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_Add(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Clear, addr 0x2a64138, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_Clear() ;

/// @brief Method System.Collections.IList.Contains, addr 0x2a64160, size 0x8c, virtual true, abstract: false, final true
inline bool System_Collections_IList_Contains(::System::Object*  value) ;

/// @brief Method System.Collections.IList.IndexOf, addr 0x2a641ec, size 0x80, virtual true, abstract: false, final true
inline int32_t System_Collections_IList_IndexOf(::System::Object*  value) ;

/// @brief Method System.Collections.IList.Insert, addr 0x2a642c4, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method System.Collections.IList.Remove, addr 0x2a642ec, size 0x120, virtual true, abstract: false, final true
inline void System_Collections_IList_Remove(::System::Object*  value) ;

/// @brief Method System.Collections.IList.RemoveAt, addr 0x2a6440c, size 0x1c, virtual true, abstract: false, final true
inline void System_Collections_IList_RemoveAt(int32_t  index) ;

/// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x2a640dc, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsFixedSize() ;

/// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x2a640d4, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_IList_get_IsReadOnly() ;

/// @brief Method System.Collections.IList.get_Item, addr 0x2a633e4, size 0x1c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IList_get_Item(int32_t  recordIndex) ;

/// @brief Method System.Collections.IList.set_Item, addr 0x2a6341c, size 0x28, virtual true, abstract: false, final true
inline void System_Collections_IList_set_Item(int32_t  recordIndex, ::System::Object*  value) ;

/// @brief Method UpdateIndex, addr 0x2a6394c, size 0x14, virtual false, abstract: false, final false
inline void UpdateIndex() ;

/// @brief Method UpdateIndex, addr 0x2a65544, size 0xc, virtual true, abstract: false, final false
inline void UpdateIndex(bool  force) ;

/// @brief Method UpdateIndex, addr 0x2a6522c, size 0x318, virtual false, abstract: false, final false
inline void UpdateIndex(bool  force, bool  fireEvent) ;

constexpr ::System::ComponentModel::ListChangedEventArgs* const& __cordl_internal_get__addNewMoved() const;

constexpr ::System::ComponentModel::ListChangedEventArgs*& __cordl_internal_get__addNewMoved() ;

constexpr ::System::Data::DataRow* const& __cordl_internal_get__addNewRow() const;

constexpr ::System::Data::DataRow*& __cordl_internal_get__addNewRow() ;

constexpr bool const& __cordl_internal_get__allowDelete() const;

constexpr bool& __cordl_internal_get__allowDelete() ;

constexpr bool const& __cordl_internal_get__allowEdit() const;

constexpr bool& __cordl_internal_get__allowEdit() ;

constexpr bool const& __cordl_internal_get__allowNew() const;

constexpr bool& __cordl_internal_get__allowNew() ;

constexpr bool const& __cordl_internal_get__applyDefaultSort() const;

constexpr bool& __cordl_internal_get__applyDefaultSort() ;

constexpr ::System::Comparison_1<::System::Data::DataRow*>* const& __cordl_internal_get__comparison() const;

constexpr ::System::Comparison_1<::System::Data::DataRow*>*& __cordl_internal_get__comparison() ;

constexpr ::System::Data::DataViewManager* const& __cordl_internal_get__dataViewManager() const;

constexpr ::System::Data::DataViewManager*& __cordl_internal_get__dataViewManager() ;

constexpr ::System::Data::DataViewRowState const& __cordl_internal_get__delayedRecordStates() const;

constexpr ::System::Data::DataViewRowState& __cordl_internal_get__delayedRecordStates() ;

constexpr ::System::Data::DataViewListener* const& __cordl_internal_get__dvListener() const;

constexpr ::System::Data::DataViewListener*& __cordl_internal_get__dvListener() ;

constexpr bool const& __cordl_internal_get__fEndInitInProgress() const;

constexpr bool& __cordl_internal_get__fEndInitInProgress() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>* const& __cordl_internal_get__findIndexes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>*& __cordl_internal_get__findIndexes() ;

constexpr ::System::Data::Index* const& __cordl_internal_get__index() const;

constexpr ::System::Data::Index*& __cordl_internal_get__index() ;

constexpr bool const& __cordl_internal_get__locked() const;

constexpr bool& __cordl_internal_get__locked() ;

constexpr int32_t const& __cordl_internal_get__objectID() const;

constexpr int32_t& __cordl_internal_get__objectID() ;

constexpr ::System::ComponentModel::ListChangedEventHandler* const& __cordl_internal_get__onListChanged() const;

constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get__onListChanged() ;

constexpr bool const& __cordl_internal_get__open() const;

constexpr bool& __cordl_internal_get__open() ;

constexpr ::System::Data::DataViewRowState const& __cordl_internal_get__recordStates() const;

constexpr ::System::Data::DataViewRowState& __cordl_internal_get__recordStates() ;

constexpr ::System::Data::IFilter* const& __cordl_internal_get__rowFilter() const;

constexpr ::System::Data::IFilter*& __cordl_internal_get__rowFilter() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>* const& __cordl_internal_get__rowViewBuffer() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*& __cordl_internal_get__rowViewBuffer() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>* const& __cordl_internal_get__rowViewCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*& __cordl_internal_get__rowViewCache() ;

constexpr bool const& __cordl_internal_get__shouldOpen() const;

constexpr bool& __cordl_internal_get__shouldOpen() ;

constexpr ::StringW const& __cordl_internal_get__sort() const;

constexpr ::StringW& __cordl_internal_get__sort() ;

constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

constexpr ::System::Data::DataTable*& __cordl_internal_get__table() ;

constexpr void __cordl_internal_set__addNewMoved(::System::ComponentModel::ListChangedEventArgs*  value) ;

constexpr void __cordl_internal_set__addNewRow(::System::Data::DataRow*  value) ;

constexpr void __cordl_internal_set__allowDelete(bool  value) ;

constexpr void __cordl_internal_set__allowEdit(bool  value) ;

constexpr void __cordl_internal_set__allowNew(bool  value) ;

constexpr void __cordl_internal_set__applyDefaultSort(bool  value) ;

constexpr void __cordl_internal_set__comparison(::System::Comparison_1<::System::Data::DataRow*>*  value) ;

constexpr void __cordl_internal_set__dataViewManager(::System::Data::DataViewManager*  value) ;

constexpr void __cordl_internal_set__delayedRecordStates(::System::Data::DataViewRowState  value) ;

constexpr void __cordl_internal_set__dvListener(::System::Data::DataViewListener*  value) ;

constexpr void __cordl_internal_set__fEndInitInProgress(bool  value) ;

constexpr void __cordl_internal_set__findIndexes(::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>*  value) ;

constexpr void __cordl_internal_set__index(::System::Data::Index*  value) ;

constexpr void __cordl_internal_set__locked(bool  value) ;

constexpr void __cordl_internal_set__objectID(int32_t  value) ;

constexpr void __cordl_internal_set__onListChanged(::System::ComponentModel::ListChangedEventHandler*  value) ;

constexpr void __cordl_internal_set__open(bool  value) ;

constexpr void __cordl_internal_set__recordStates(::System::Data::DataViewRowState  value) ;

constexpr void __cordl_internal_set__rowFilter(::System::Data::IFilter*  value) ;

constexpr void __cordl_internal_set__rowViewBuffer(::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  value) ;

constexpr void __cordl_internal_set__rowViewCache(::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  value) ;

constexpr void __cordl_internal_set__shouldOpen(bool  value) ;

constexpr void __cordl_internal_set__sort(::StringW  value) ;

constexpr void __cordl_internal_set__table(::System::Data::DataTable*  value) ;

/// @brief Method .ctor, addr 0x2a62de8, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataTable*  table, bool  locked) ;

static inline int32_t getStaticF_s_objectTypeCount() ;

static inline ::System::ComponentModel::ListChangedEventArgs* getStaticF_s_resetEventArgs() ;

/// @brief Method get_AllowDelete, addr 0x2a632e0, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowDelete() ;

/// @brief Method get_AllowNew, addr 0x2a632e8, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowNew() ;

/// @brief Method get_Count, addr 0x2a632f0, size 0x50, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_CountFromIndex, addr 0x2a63340, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_CountFromIndex() ;

/// @brief Method get_DataViewManager, addr 0x2a6335c, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataViewManager* get_DataViewManager() ;

/// @brief Method get_IsOpen, addr 0x2a63364, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_Item, addr 0x2a63400, size 0x1c, virtual false, abstract: false, final false
inline ::System::Data::DataRowView* get_Item(int32_t  recordIndex) ;

/// @brief Method get_ObjectID, addr 0x2a65dac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ObjectID() ;

/// @brief Method get_RowStateFilter, addr 0x2a63374, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataViewRowState get_RowStateFilter() ;

/// @brief Method get_Sort, addr 0x2a6337c, size 0x54, virtual false, abstract: false, final false
inline ::StringW get_Sort() ;

/// @brief Method get_SortComparison, addr 0x2a633d0, size 0x8, virtual false, abstract: false, final false
inline ::System::Comparison_1<::System::Data::DataRow*>* get_SortComparison() ;

/// @brief Method get_Table, addr 0x2a633dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Data::DataTable* get_Table() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IList"
constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

/// @brief Convert to "::System::ComponentModel::IBindingList"
constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

static inline void setStaticF_s_objectTypeCount(int32_t  value) ;

static inline void setStaticF_s_resetEventArgs(::System::ComponentModel::ListChangedEventArgs*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataView(DataView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataView(DataView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8127};

/// @brief Field _dataViewManager, offset: 0x20, size: 0x8, def value: None
 ::System::Data::DataViewManager*  ____dataViewManager;

/// @brief Field _table, offset: 0x28, size: 0x8, def value: None
 ::System::Data::DataTable*  ____table;

/// @brief Field _locked, offset: 0x30, size: 0x1, def value: None
 bool  ____locked;

/// @brief Field _index, offset: 0x38, size: 0x8, def value: None
 ::System::Data::Index*  ____index;

/// @brief Field _findIndexes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Data::Index*>*  ____findIndexes;

/// @brief Field _sort, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____sort;

/// @brief Field _comparison, offset: 0x50, size: 0x8, def value: None
 ::System::Comparison_1<::System::Data::DataRow*>*  ____comparison;

/// @brief Field _rowFilter, offset: 0x58, size: 0x8, def value: None
 ::System::Data::IFilter*  ____rowFilter;

/// @brief Field _recordStates, offset: 0x60, size: 0x4, def value: None
 ::System::Data::DataViewRowState  ____recordStates;

/// @brief Field _shouldOpen, offset: 0x64, size: 0x1, def value: None
 bool  ____shouldOpen;

/// @brief Field _open, offset: 0x65, size: 0x1, def value: None
 bool  ____open;

/// @brief Field _allowNew, offset: 0x66, size: 0x1, def value: None
 bool  ____allowNew;

/// @brief Field _allowEdit, offset: 0x67, size: 0x1, def value: None
 bool  ____allowEdit;

/// @brief Field _allowDelete, offset: 0x68, size: 0x1, def value: None
 bool  ____allowDelete;

/// @brief Field _applyDefaultSort, offset: 0x69, size: 0x1, def value: None
 bool  ____applyDefaultSort;

/// @brief Field _addNewRow, offset: 0x70, size: 0x8, def value: None
 ::System::Data::DataRow*  ____addNewRow;

/// @brief Field _addNewMoved, offset: 0x78, size: 0x8, def value: None
 ::System::ComponentModel::ListChangedEventArgs*  ____addNewMoved;

/// @brief Field _onListChanged, offset: 0x80, size: 0x8, def value: None
 ::System::ComponentModel::ListChangedEventHandler*  ____onListChanged;

/// @brief Field _delayedRecordStates, offset: 0x88, size: 0x4, def value: None
 ::System::Data::DataViewRowState  ____delayedRecordStates;

/// @brief Field _fEndInitInProgress, offset: 0x8c, size: 0x1, def value: None
 bool  ____fEndInitInProgress;

/// @brief Field _rowViewCache, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  ____rowViewCache;

/// @brief Field _rowViewBuffer, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Data::DataRow*,::System::Data::DataRowView*>*  ____rowViewBuffer;

/// @brief Field _dvListener, offset: 0xa0, size: 0x8, def value: None
 ::System::Data::DataViewListener*  ____dvListener;

/// @brief Field _objectID, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____objectID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataView, ____dataViewManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____table) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____locked) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____index) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____findIndexes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____sort) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____comparison) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____rowFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____recordStates) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____shouldOpen) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____open) == 0x65, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____allowNew) == 0x66, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____allowEdit) == 0x67, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____allowDelete) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____applyDefaultSort) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____addNewRow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____addNewMoved) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____onListChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____delayedRecordStates) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____fEndInitInProgress) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____rowViewCache) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____rowViewBuffer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____dvListener) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataView, ____objectID) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataView, 0xb0>, "Size mismatch!");

} // namespace end def System::Data
NEED_NO_BOX(::System::Data::DataView);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataView*, "System.Data", "DataView");
NEED_NO_BOX(::System::Data::DataView_DataRowReferenceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataView_DataRowReferenceComparer*, "System.Data", "DataView/DataRowReferenceComparer");
