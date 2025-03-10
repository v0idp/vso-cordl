#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVerticalCollectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationMethod_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__SelectionType_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVerticalCollectionView)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView_Selection;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView___c__DisplayClass162_0;
}
namespace UnityEngine::UIElements {
struct BaseVerticalCollectionView___c__DisplayClass172_0;
}
namespace UnityEngine::UIElements {
struct BaseVerticalCollectionView___c__DisplayClass183_0;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView__get_selectedItems_d__72;
}
namespace UnityEngine::UIElements {
struct CanStartDragArgs;
}
namespace UnityEngine::UIElements {
class CollectionViewController;
}
namespace UnityEngine::UIElements {
class CollectionVirtualizationController;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
struct DragAndDropArgs;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct HandleDragAndDropArgs;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
class SerializedVirtualizationData;
}
namespace UnityEngine::UIElements {
struct SetupDragAndDropArgs;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView_Selection;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView___c__DisplayClass162_0;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView__get_selectedItems_d__72;
}
namespace UnityEngine::UIElements {
struct BaseVerticalCollectionView___c__DisplayClass172_0;
}
namespace UnityEngine::UIElements {
struct BaseVerticalCollectionView___c__DisplayClass183_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72);
MARK_VAL_T(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0);
MARK_VAL_T(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0);
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/UxmlTraits
class CORDL_TYPE BaseVerticalCollectionView_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
// Declarations
/// @brief Field m_FixedItemHeight, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FixedItemHeight, put=__cordl_internal_set_m_FixedItemHeight)) ::UnityEngine::UIElements::UxmlIntAttributeDescription*  m_FixedItemHeight;

/// @brief Field m_HorizontalScrollingEnabled, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalScrollingEnabled, put=__cordl_internal_set_m_HorizontalScrollingEnabled)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_HorizontalScrollingEnabled;

/// @brief Field m_Reorderable, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Reorderable, put=__cordl_internal_set_m_Reorderable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_Reorderable;

/// @brief Field m_SelectionType, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectionType, put=__cordl_internal_set_m_SelectionType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowAlternatingRowBackgrounds, put=__cordl_internal_set_m_ShowAlternatingRowBackgrounds)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  m_ShowAlternatingRowBackgrounds;

/// @brief Field m_ShowBorder, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowBorder, put=__cordl_internal_set_m_ShowBorder)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowBorder;

/// @brief Field m_VirtualizationMethod, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VirtualizationMethod, put=__cordl_internal_set_m_VirtualizationMethod)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  m_VirtualizationMethod;

/// @brief Method Init, addr 0x302f2c8, size 0x2a0, virtual true, abstract: false, final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits* New_ctor() ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_FixedItemHeight() const;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_FixedItemHeight() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_HorizontalScrollingEnabled() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_HorizontalScrollingEnabled() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Reorderable() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Reorderable() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* const& __cordl_internal_get_m_SelectionType() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*& __cordl_internal_get_m_SelectionType() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* const& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowBorder() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowBorder() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>* const& __cordl_internal_get_m_VirtualizationMethod() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*& __cordl_internal_get_m_VirtualizationMethod() ;

constexpr void __cordl_internal_set_m_FixedItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_HorizontalScrollingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  value) ;

constexpr void __cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  value) ;

constexpr void __cordl_internal_set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_VirtualizationMethod(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  value) ;

/// @brief Method .ctor, addr 0x302f77c, size 0x364, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView_UxmlTraits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView_UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVerticalCollectionView_UxmlTraits(BaseVerticalCollectionView_UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView_UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVerticalCollectionView_UxmlTraits(BaseVerticalCollectionView_UxmlTraits const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3696};

/// @brief Field m_FixedItemHeight, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlIntAttributeDescription*  ___m_FixedItemHeight;

/// @brief Field m_VirtualizationMethod, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  ___m_VirtualizationMethod;

/// @brief Field m_ShowBorder, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_ShowBorder;

/// @brief Field m_SelectionType, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  ___m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  ___m_ShowAlternatingRowBackgrounds;

/// @brief Field m_Reorderable, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_Reorderable;

/// @brief Field m_HorizontalScrollingEnabled, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_HorizontalScrollingEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_FixedItemHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_VirtualizationMethod) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_ShowBorder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_SelectionType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_ShowAlternatingRowBackgrounds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_Reorderable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, ___m_HorizontalScrollingEnabled) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits, 0xb0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/Selection
class CORDL_TYPE BaseVerticalCollectionView_Selection : public ::System::Object {
public:
// Declarations
/// @brief Field <selectedIds>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedIds_k__BackingField, put=__cordl_internal_set__selectedIds_k__BackingField)) ::System::Collections::Generic::List_1<int32_t>*  _selectedIds_k__BackingField;

 __declspec(property(get=get_capacity, put=set_capacity)) int32_t  capacity;

 __declspec(property(get=get_idCount)) int32_t  idCount;

 __declspec(property(get=get_indexCount)) int32_t  indexCount;

/// @brief Field indices, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_indices, put=__cordl_internal_set_indices)) ::System::Collections::Generic::List_1<int32_t>*  indices;

/// @brief Field items, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  items;

/// @brief Field m_IdLookup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IdLookup, put=__cordl_internal_set_m_IdLookup)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_IdLookup;

/// @brief Field m_IndexLookup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IndexLookup, put=__cordl_internal_set_m_IndexLookup)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_IndexLookup;

/// @brief Field m_MaxIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxIndex, put=__cordl_internal_set_m_MaxIndex)) int32_t  m_MaxIndex;

/// @brief Field m_MinIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinIndex, put=__cordl_internal_set_m_MinIndex)) int32_t  m_MinIndex;

 __declspec(property(get=get_maxIndex)) int32_t  maxIndex;

 __declspec(property(get=get_minIndex)) int32_t  minIndex;

 __declspec(property(get=get_selectedIds, put=set_selectedIds)) ::System::Collections::Generic::List_1<int32_t>*  selectedIds;

/// @brief Method AddId, addr 0x30367c8, size 0xc4, virtual false, abstract: false, final false
inline void AddId(int32_t  id) ;

/// @brief Method AddIndex, addr 0x30335d0, size 0x120, virtual false, abstract: false, final false
inline void AddIndex(int32_t  index, ::System::Object*  obj) ;

/// @brief Method Clear, addr 0x3037640, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearIds, addr 0x3038028, size 0x74, virtual false, abstract: false, final false
inline void ClearIds() ;

/// @brief Method ClearIndices, addr 0x3033464, size 0x7c, virtual false, abstract: false, final false
inline void ClearIndices() ;

/// @brief Method ClearItems, addr 0x3037fd8, size 0x50, virtual false, abstract: false, final false
inline void ClearItems() ;

/// @brief Method ContainsId, addr 0x3035e58, size 0x58, virtual false, abstract: false, final false
inline bool ContainsId(int32_t  id) ;

/// @brief Method ContainsIndex, addr 0x3033578, size 0x58, virtual false, abstract: false, final false
inline bool ContainsIndex(int32_t  index) ;

/// @brief Method FirstIndex, addr 0x30319d8, size 0x7c, virtual false, abstract: false, final false
inline int32_t FirstIndex() ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView_Selection* New_ctor() ;

/// @brief Method RemoveId, addr 0x303713c, size 0x80, virtual false, abstract: false, final false
inline void RemoveId(int32_t  id) ;

/// @brief Method TryRemove, addr 0x303702c, size 0x110, virtual false, abstract: false, final false
inline bool TryRemove(int32_t  index) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__selectedIds_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__selectedIds_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_indices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_indices() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>* const& __cordl_internal_get_items() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*& __cordl_internal_get_items() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_IdLookup() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_IdLookup() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_IndexLookup() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_IndexLookup() ;

constexpr int32_t const& __cordl_internal_get_m_MaxIndex() const;

constexpr int32_t& __cordl_internal_get_m_MaxIndex() ;

constexpr int32_t const& __cordl_internal_get_m_MinIndex() const;

constexpr int32_t& __cordl_internal_get_m_MinIndex() ;

constexpr void __cordl_internal_set__selectedIds_k__BackingField(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_indices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_items(::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_m_IdLookup(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_IndexLookup(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_MaxIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_MinIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x3032a84, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_capacity, addr 0x303754c, size 0x50, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method get_idCount, addr 0x3033530, size 0x48, virtual false, abstract: false, final false
inline int32_t get_idCount() ;

/// @brief Method get_indexCount, addr 0x3031990, size 0x48, virtual false, abstract: false, final false
inline int32_t get_indexCount() ;

/// @brief Method get_maxIndex, addr 0x3034970, size 0x2c, virtual false, abstract: false, final false
inline int32_t get_maxIndex() ;

/// @brief Method get_minIndex, addr 0x303499c, size 0x2c, virtual false, abstract: false, final false
inline int32_t get_minIndex() ;

/// @brief Method get_selectedIds, addr 0x3037fc8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_selectedIds() ;

/// @brief Method set_capacity, addr 0x303759c, size 0xa4, virtual false, abstract: false, final false
inline void set_capacity(int32_t  value) ;

/// @brief Method set_selectedIds, addr 0x3037fd0, size 0x8, virtual false, abstract: false, final false
inline void set_selectedIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView_Selection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView_Selection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVerticalCollectionView_Selection(BaseVerticalCollectionView_Selection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView_Selection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVerticalCollectionView_Selection(BaseVerticalCollectionView_Selection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3697};

/// @brief Field m_IndexLookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_IndexLookup;

/// @brief Field m_IdLookup, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_IdLookup;

/// @brief Field m_MinIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_MinIndex;

/// @brief Field m_MaxIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_MaxIndex;

/// @brief Field <selectedIds>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____selectedIds_k__BackingField;

/// @brief Field indices, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___indices;

/// @brief Field items, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Object*>*  ___items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ___m_IndexLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ___m_IdLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ___m_MinIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ___m_MaxIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ____selectedIds_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ___indices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, ___items) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView_Selection, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/<>c__DisplayClass162_0
class CORDL_TYPE BaseVerticalCollectionView___c__DisplayClass162_0 : public ::System::Object {
public:
// Declarations
/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0* New_ctor() ;

/// @brief Method <GetRootElementForId>b__0, addr 0x303809c, size 0x24, virtual false, abstract: false, final false
inline bool _GetRootElementForId_b__0(::UnityEngine::UIElements::ReusableCollectionItem*  t) ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

/// @brief Method .ctor, addr 0x3032cbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView___c__DisplayClass162_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView___c__DisplayClass162_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVerticalCollectionView___c__DisplayClass162_0(BaseVerticalCollectionView___c__DisplayClass162_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView___c__DisplayClass162_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVerticalCollectionView___c__DisplayClass162_0(BaseVerticalCollectionView___c__DisplayClass162_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3698};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0, ___id) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/<>c__DisplayClass172_0
struct CORDL_TYPE BaseVerticalCollectionView___c__DisplayClass172_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView___c__DisplayClass172_0() ;

// Ctor Parameters [CppParam { name: "selectedIndicesChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: None }, CppParam { name: "previousSelectionCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BaseVerticalCollectionView___c__DisplayClass172_0(bool  selectedIndicesChanged, ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this, int32_t  previousSelectionCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3699};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field selectedIndicesChanged, offset: 0x0, size: 0x1, def value: None
 bool  selectedIndicesChanged;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this;

/// @brief Field previousSelectionCount, offset: 0x10, size: 0x4, def value: None
 int32_t  previousSelectionCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0, selectedIndicesChanged) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0, __4__this) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0, previousSelectionCount) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/<>c__DisplayClass183_0
struct CORDL_TYPE BaseVerticalCollectionView___c__DisplayClass183_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView___c__DisplayClass183_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::BaseVerticalCollectionView*", modifiers: "", def_value: None }, CppParam { name: "shiftKey", ty: "bool", modifiers: "", def_value: None }]
constexpr BaseVerticalCollectionView___c__DisplayClass183_0(::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this, bool  shiftKey) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this;

/// @brief Field shiftKey, offset: 0x8, size: 0x1, def value: None
 bool  shiftKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0, shiftKey) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView/<get_selectedItems>d__72
class CORDL_TYPE BaseVerticalCollectionView__get_selectedItems_d__72 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseVerticalCollectionView*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__1, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::System::Collections::Generic::List_1_Enumerator<int32_t>  __s__1;

/// @brief Field <index>5__2, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__2, put=__cordl_internal_set__index_5__2)) int32_t  _index_5__2;

/// @brief Field <item>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__item_5__3, put=__cordl_internal_set__item_5__3)) ::System::Object*  _item_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x30380ec, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator, addr 0x30383c0, size 0x9c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3038378, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x303845c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x3038380, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x30383b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x30380c0, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::List_1_Enumerator<int32_t> const& __cordl_internal_get___s__1() const;

constexpr ::System::Collections::Generic::List_1_Enumerator<int32_t>& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get__index_5__2() const;

constexpr int32_t& __cordl_internal_get__index_5__2() ;

constexpr ::System::Object* const& __cordl_internal_get__item_5__3() const;

constexpr ::System::Object*& __cordl_internal_get__item_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseVerticalCollectionView*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__1(::System::Collections::Generic::List_1_Enumerator<int32_t>  value) ;

constexpr void __cordl_internal_set__index_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__item_5__3(::System::Object*  value) ;

/// @brief Method <>m__Finally1, addr 0x3038328, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method .ctor, addr 0x3031ac4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>* i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView__get_selectedItems_d__72() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView__get_selectedItems_d__72", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVerticalCollectionView__get_selectedItems_d__72(BaseVerticalCollectionView__get_selectedItems_d__72 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView__get_selectedItems_d__72", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVerticalCollectionView__get_selectedItems_d__72(BaseVerticalCollectionView__get_selectedItems_d__72 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3701};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView*  _____4__this;

/// @brief Field <>s__1, offset: 0x30, size: 0x18, def value: None
 ::System::Collections::Generic::List_1_Enumerator<int32_t>  _____s__1;

/// @brief Field <index>5__2, offset: 0x48, size: 0x4, def value: None
 int32_t  ____index_5__2;

/// @brief Field <item>5__3, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ____item_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, _____s__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, ____index_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, ____item_5__3) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.ISerializationCallbackReceiver, UnityEngine.UIElements.AlternatingRowBackground, UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.CollectionVirtualizationMethod, UnityEngine.UIElements.CustomStyleProperty`1<T>, UnityEngine.UIElements.SelectionType, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseVerticalCollectionView
class CORDL_TYPE BaseVerticalCollectionView : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using Selection = ::UnityEngine::UIElements::BaseVerticalCollectionView_Selection;

using UxmlTraits = ::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits;

using __c__DisplayClass162_0 = ::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0;

using __c__DisplayClass172_0 = ::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0;

using __c__DisplayClass183_0 = ::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0;

using _get_selectedItems_d__72 = ::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72;

 __declspec(property(get=get_activeItems)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  activeItems;

/// @brief Field backgroundFillUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_backgroundFillUssClassName, put=setStaticF_backgroundFillUssClassName)) ::StringW  backgroundFillUssClassName;

/// @brief Field borderUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_borderUssClassName, put=setStaticF_borderUssClassName)) ::StringW  borderUssClassName;

/// @brief Field canStartDrag, offset 0x408, size 0x8 
 __declspec(property(get=__cordl_internal_get_canStartDrag, put=__cordl_internal_set_canStartDrag)) ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*  canStartDrag;

 __declspec(property(get=get_contentContainer)) ::UnityEngine::UIElements::VisualElement*  contentContainer;

/// @brief Field dragAndDropUpdate, offset 0x418, size 0x8 
 __declspec(property(get=__cordl_internal_get_dragAndDropUpdate, put=__cordl_internal_set_dragAndDropUpdate)) ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  dragAndDropUpdate;

/// @brief Field dragHoverBarUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dragHoverBarUssClassName, put=setStaticF_dragHoverBarUssClassName)) ::StringW  dragHoverBarUssClassName;

/// @brief Field dragHoverMarkerUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dragHoverMarkerUssClassName, put=setStaticF_dragHoverMarkerUssClassName)) ::StringW  dragHoverMarkerUssClassName;

 __declspec(property(get=get_dragger)) ::UnityEngine::UIElements::ListViewDragger*  dragger;

 __declspec(property(get=get_fixedItemHeight, put=set_fixedItemHeight)) float_t  fixedItemHeight;

/// @brief Field handleDrop, offset 0x420, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleDrop, put=__cordl_internal_set_handleDrop)) ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  handleDrop;

 __declspec(property(put=set_horizontalScrollingEnabled)) bool  horizontalScrollingEnabled;

/// @brief Field itemAlternativeBackgroundUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemAlternativeBackgroundUssClassName, put=setStaticF_itemAlternativeBackgroundUssClassName)) ::StringW  itemAlternativeBackgroundUssClassName;

/// @brief Field itemDragHoverUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemDragHoverUssClassName, put=setStaticF_itemDragHoverUssClassName)) ::StringW  itemDragHoverUssClassName;

/// @brief Field itemIndexChanged, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemIndexChanged, put=__cordl_internal_set_itemIndexChanged)) ::System::Action_2<int32_t,int32_t>*  itemIndexChanged;

/// @brief Field itemSelectedVariantUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemSelectedVariantUssClassName, put=setStaticF_itemSelectedVariantUssClassName)) ::StringW  itemSelectedVariantUssClassName;

/// @brief Field itemUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_itemUssClassName, put=setStaticF_itemUssClassName)) ::StringW  itemUssClassName;

/// @brief Field itemsChosen, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsChosen, put=__cordl_internal_set_itemsChosen)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  itemsChosen;

 __declspec(property(get=get_itemsSource, put=set_itemsSource)) ::System::Collections::IList*  itemsSource;

/// @brief Field itemsSourceChanged, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsSourceChanged, put=__cordl_internal_set_itemsSourceChanged)) ::System::Action*  itemsSourceChanged;

/// @brief Field k_EmptyItems, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmptyItems, put=setStaticF_k_EmptyItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  k_EmptyItems;

/// @brief Field k_RebuildMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_RebuildMarker, put=setStaticF_k_RebuildMarker)) ::Unity::Profiling::ProfilerMarker  k_RebuildMarker;

/// @brief Field k_RefreshMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_RefreshMarker, put=setStaticF_k_RefreshMarker)) ::Unity::Profiling::ProfilerMarker  k_RefreshMarker;

 __declspec(property(get=get_lastHeight)) float_t  lastHeight;

/// @brief Field listScrollViewUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_listScrollViewUssClassName, put=setStaticF_listScrollViewUssClassName)) ::StringW  listScrollViewUssClassName;

/// @brief Field m_Dragger, offset 0x480, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Dragger, put=__cordl_internal_set_m_Dragger)) ::UnityEngine::UIElements::ListViewDragger*  m_Dragger;

/// @brief Field m_FixedItemHeight, offset 0x434, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FixedItemHeight, put=__cordl_internal_set_m_FixedItemHeight)) float_t  m_FixedItemHeight;

/// @brief Field m_HorizontalScrollingEnabled, offset 0x42c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HorizontalScrollingEnabled, put=__cordl_internal_set_m_HorizontalScrollingEnabled)) bool  m_HorizontalScrollingEnabled;

/// @brief Field m_IsRangeSelectionDirectionUp, offset 0x47c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRangeSelectionDirectionUp, put=__cordl_internal_set_m_IsRangeSelectionDirectionUp)) bool  m_IsRangeSelectionDirectionUp;

/// @brief Field m_ItemHeightIsInline, offset 0x438, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ItemHeightIsInline, put=__cordl_internal_set_m_ItemHeightIsInline)) bool  m_ItemHeightIsInline;

/// @brief Field m_ItemIndexChangedCallback, offset 0x488, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ItemIndexChangedCallback, put=__cordl_internal_set_m_ItemIndexChangedCallback)) ::System::Action_2<int32_t,int32_t>*  m_ItemIndexChangedCallback;

/// @brief Field m_ItemsSourceChangedCallback, offset 0x490, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ItemsSourceChangedCallback, put=__cordl_internal_set_m_ItemsSourceChangedCallback)) ::System::Action*  m_ItemsSourceChangedCallback;

/// @brief Field m_LastHeight, offset 0x478, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastHeight, put=__cordl_internal_set_m_LastHeight)) float_t  m_LastHeight;

/// @brief Field m_NavigationManipulator, offset 0x458, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NavigationManipulator, put=__cordl_internal_set_m_NavigationManipulator)) ::UnityEngine::UIElements::KeyboardNavigationManipulator*  m_NavigationManipulator;

/// @brief Field m_RebuildScheduled, offset 0x498, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RebuildScheduled, put=__cordl_internal_set_m_RebuildScheduled)) ::UnityEngine::UIElements::IVisualElementScheduledItem*  m_RebuildScheduled;

/// @brief Field m_ScrollView, offset 0x440, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollView, put=__cordl_internal_set_m_ScrollView)) ::UnityEngine::UIElements::ScrollView*  m_ScrollView;

/// @brief Field m_SelectedIds, offset 0x468, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedIds, put=__cordl_internal_set_m_SelectedIds)) ::System::Collections::Generic::List_1<int32_t>*  m_SelectedIds;

/// @brief Field m_Selection, offset 0x470, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Selection, put=__cordl_internal_set_m_Selection)) ::UnityEngine::UIElements::BaseVerticalCollectionView_Selection*  m_Selection;

/// @brief Field m_SelectionType, offset 0x428, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectionType, put=__cordl_internal_set_m_SelectionType)) ::UnityEngine::UIElements::SelectionType  m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset 0x430, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ShowAlternatingRowBackgrounds, put=__cordl_internal_set_m_ShowAlternatingRowBackgrounds)) ::UnityEngine::UIElements::AlternatingRowBackground  m_ShowAlternatingRowBackgrounds;

/// @brief Field m_TouchDownPosition, offset 0x4a0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TouchDownPosition, put=__cordl_internal_set_m_TouchDownPosition)) ::UnityEngine::Vector3  m_TouchDownPosition;

/// @brief Field m_ViewController, offset 0x448, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ViewController, put=__cordl_internal_set_m_ViewController)) ::UnityEngine::UIElements::CollectionViewController*  m_ViewController;

/// @brief Field m_VirtualizationController, offset 0x450, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VirtualizationController, put=__cordl_internal_set_m_VirtualizationController)) ::UnityEngine::UIElements::CollectionVirtualizationController*  m_VirtualizationController;

/// @brief Field m_VirtualizationMethod, offset 0x43c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VirtualizationMethod, put=__cordl_internal_set_m_VirtualizationMethod)) ::UnityEngine::UIElements::CollectionVirtualizationMethod  m_VirtualizationMethod;

 __declspec(property(get=get_reorderable, put=set_reorderable)) bool  reorderable;

/// @brief Field s_DefaultItemHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DefaultItemHeight, put=setStaticF_s_DefaultItemHeight)) int32_t  s_DefaultItemHeight;

/// @brief Field s_ItemHeightProperty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ItemHeightProperty, put=setStaticF_s_ItemHeightProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>  s_ItemHeightProperty;

 __declspec(property(get=get_scrollView)) ::UnityEngine::UIElements::ScrollView*  scrollView;

 __declspec(property(get=get_selectedIds)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIds;

 __declspec(property(get=get_selectedIndex, put=set_selectedIndex)) int32_t  selectedIndex;

 __declspec(property(get=get_selectedIndices)) ::System::Collections::Generic::IEnumerable_1<int32_t>*  selectedIndices;

/// @brief Field selectedIndicesChanged, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedIndicesChanged, put=__cordl_internal_set_selectedIndicesChanged)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  selectedIndicesChanged;

 __declspec(property(get=get_selectedItems)) ::System::Collections::Generic::IEnumerable_1<::System::Object*>*  selectedItems;

/// @brief Field selectionChanged, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionChanged, put=__cordl_internal_set_selectionChanged)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  selectionChanged;

/// @brief Field selectionNotChanged, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectionNotChanged, put=__cordl_internal_set_selectionNotChanged)) ::System::Action*  selectionNotChanged;

 __declspec(property(get=get_selectionType, put=set_selectionType)) ::UnityEngine::UIElements::SelectionType  selectionType;

/// @brief Field serializedVirtualizationData, offset 0x460, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedVirtualizationData, put=__cordl_internal_set_serializedVirtualizationData)) ::UnityEngine::UIElements::SerializedVirtualizationData*  serializedVirtualizationData;

/// @brief Field setupDragAndDrop, offset 0x410, size 0x8 
 __declspec(property(get=__cordl_internal_get_setupDragAndDrop, put=__cordl_internal_set_setupDragAndDrop)) ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*  setupDragAndDrop;

 __declspec(property(get=get_showAlternatingRowBackgrounds, put=set_showAlternatingRowBackgrounds)) ::UnityEngine::UIElements::AlternatingRowBackground  showAlternatingRowBackgrounds;

 __declspec(property(put=set_showBorder)) bool  showBorder;

/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

 __declspec(property(get=get_viewController)) ::UnityEngine::UIElements::CollectionViewController*  viewController;

 __declspec(property(get=get_virtualizationController)) ::UnityEngine::UIElements::CollectionVirtualizationController*  virtualizationController;

 __declspec(property(get=get_virtualizationMethod, put=set_virtualizationMethod)) ::UnityEngine::UIElements::CollectionVirtualizationMethod  virtualizationMethod;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddToSelection, addr 0x3035f0c, size 0x78, virtual false, abstract: false, final false
inline void AddToSelection(int32_t  index) ;

/// @brief Method AddToSelection, addr 0x303644c, size 0x37c, virtual false, abstract: false, final false
inline void AddToSelection(::System::Collections::Generic::IList_1<int32_t>*  indexes) ;

/// @brief Method AddToSelectionWithoutValidation, addr 0x3036910, size 0x3b0, virtual false, abstract: false, final false
inline void AddToSelectionWithoutValidation(int32_t  index) ;

/// @brief Method Apply, addr 0x3033e78, size 0x51c, virtual false, abstract: false, final false
inline bool Apply(::UnityEngine::UIElements::KeyboardNavigationOperation  op, bool  shiftKey, bool  altKey) ;

/// @brief Method Apply, addr 0x30349c8, size 0x27c, virtual false, abstract: false, final false
inline void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation  op, ::UnityEngine::UIElements::EventBase*  sourceEvent) ;

/// @brief Method ClearSelection, addr 0x3031944, size 0x4c, virtual false, abstract: false, final false
inline void ClearSelection() ;

/// @brief Method ClearSelectionWithoutValidation, addr 0x3036160, size 0x2ec, virtual false, abstract: false, final false
inline void ClearSelectionWithoutValidation() ;

/// @brief Method CreateDragAndDropController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController() ;

/// @brief Method CreateDragger, addr 0x3032378, size 0x5c, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger() ;

/// @brief Method CreateViewController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionViewController* CreateViewController() ;

/// @brief Method CreateVirtualizationController, addr 0x3032330, size 0x48, virtual true, abstract: false, final false
inline void CreateVirtualizationController() ;

/// @brief Method CreateVirtualizationController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CreateVirtualizationController() ;

/// @brief Method DoRangeSelection, addr 0x3035f84, size 0x1dc, virtual false, abstract: false, final false
inline void DoRangeSelection(int32_t  rangeSelectionFinalIndex) ;

/// @brief Method DoSelect, addr 0x3035860, size 0x5f4, virtual false, abstract: false, final false
inline void DoSelect(::UnityEngine::Vector2  localPosition, int32_t  clickCount, bool  actionKey, bool  shiftKey) ;

/// @brief Method ExecuteDefaultAction, addr 0x3037660, size 0x394, virtual true, abstract: false, final false
inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method GetOrCreateViewController, addr 0x303188c, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionViewController* GetOrCreateViewController() ;

/// @brief Method GetOrCreateVirtualizationController, addr 0x3031bd0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionVirtualizationController* GetOrCreateVirtualizationController() ;

/// @brief Method GetRootElementForId, addr 0x3032bb0, size 0x10c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetRootElementForId(int32_t  id) ;

/// @brief Method HandleItemNavigation, addr 0x3034c44, size 0x8, virtual true, abstract: false, final false
inline bool HandleItemNavigation(bool  moveIn, bool  altKey) ;

/// @brief Method HasCanStartDrag, addr 0x30315a8, size 0x10, virtual false, abstract: false, final false
inline bool HasCanStartDrag() ;

/// @brief Method HasValidDataAndBindings, addr 0x3032cc4, size 0x28, virtual true, abstract: false, final false
inline bool HasValidDataAndBindings() ;

/// @brief Method InitializeDragAndDropController, addr 0x30323d4, size 0x11c, virtual false, abstract: false, final false
inline void InitializeDragAndDropController(bool  enableReordering) ;

/// @brief Method MatchesExistingSelection, addr 0x30371cc, size 0x380, virtual false, abstract: false, final false
inline bool MatchesExistingSelection(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView* New_ctor() ;

static inline ::UnityEngine::UIElements::BaseVerticalCollectionView* New_ctor(::System::Collections::IList*  itemsSource, float_t  itemHeight) ;

/// @brief Method NotifyOfSelectionChange, addr 0x303688c, size 0x84, virtual false, abstract: false, final false
inline void NotifyOfSelectionChange() ;

/// @brief Method OnAttachToPanel, addr 0x303387c, size 0x344, virtual false, abstract: false, final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method OnCustomStyleResolved, addr 0x3037af4, size 0x168, virtual false, abstract: false, final false
inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  e) ;

/// @brief Method OnDetachFromPanel, addr 0x3033bc0, size 0x2b8, virtual false, abstract: false, final false
inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

/// @brief Method OnItemIndexChanged, addr 0x3032cec, size 0x2c, virtual false, abstract: false, final false
inline void OnItemIndexChanged(int32_t  srcIndex, int32_t  dstIndex) ;

/// @brief Method OnItemsSourceChanged, addr 0x3032d18, size 0x1c, virtual false, abstract: false, final false
inline void OnItemsSourceChanged() ;

/// @brief Method OnPointerCancel, addr 0x3035730, size 0x74, virtual false, abstract: false, final false
inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent*  evt) ;

/// @brief Method OnPointerDown, addr 0x3035674, size 0xbc, virtual false, abstract: false, final false
inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent*  evt) ;

/// @brief Method OnPointerMove, addr 0x3034c4c, size 0x88, virtual false, abstract: false, final false
inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent*  evt) ;

/// @brief Method OnPointerUp, addr 0x30357a4, size 0xbc, virtual false, abstract: false, final false
inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method OnScroll, addr 0x3033804, size 0x78, virtual false, abstract: false, final false
inline void OnScroll(::UnityEngine::Vector2  offset) ;

/// @brief Method OnSizeChanged, addr 0x30379f4, size 0x100, virtual false, abstract: false, final false
inline void OnSizeChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnViewDataReady, addr 0x3030284, size 0x48, virtual true, abstract: false, final false
inline void OnViewDataReady() ;

/// @brief Method PostRefresh, addr 0x30336f0, size 0x84, virtual true, abstract: false, final false
inline void PostRefresh() ;

/// @brief Method ProcessPointerDown, addr 0x3035294, size 0x3e0, virtual false, abstract: false, final false
inline void ProcessPointerDown(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method ProcessPointerUp, addr 0x3034cd4, size 0x5c0, virtual false, abstract: false, final false
inline void ProcessPointerUp(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method ProcessSingleClick, addr 0x3035e54, size 0x4, virtual false, abstract: false, final false
inline void ProcessSingleClick(int32_t  clickedIndex) ;

/// @brief Method RaiseCanStartDrag, addr 0x30315b8, size 0x9c, virtual false, abstract: false, final false
inline bool RaiseCanStartDrag(::UnityEngine::UIElements::ReusableCollectionItem*  item, ::System::Collections::Generic::IEnumerable_1<int32_t>*  ids) ;

/// @brief Method RaiseDrop, addr 0x3031798, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragVisualMode RaiseDrop(::UnityEngine::Vector2  pointerPosition, ::UnityEngine::UIElements::DragAndDropArgs  dragAndDropArgs) ;

/// @brief Method RaiseHandleDragAndDrop, addr 0x3031724, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragVisualMode RaiseHandleDragAndDrop(::UnityEngine::Vector2  pointerPosition, ::UnityEngine::UIElements::DragAndDropArgs  dragAndDropArgs) ;

/// @brief Method RaiseSetupDragAndDrop, addr 0x3031654, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StartDragArgs RaiseSetupDragAndDrop(::UnityEngine::UIElements::ReusableCollectionItem*  item, ::System::Collections::Generic::IEnumerable_1<int32_t>*  ids, ::UnityEngine::UIElements::StartDragArgs  args) ;

/// @brief Method Rebuild, addr 0x3031f6c, size 0x1e8, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method RefreshItems, addr 0x302fd8c, size 0x1f8, virtual false, abstract: false, final false
inline void RefreshItems() ;

/// @brief Method RefreshSelection, addr 0x3032d34, size 0x548, virtual false, abstract: false, final false
inline void RefreshSelection() ;

/// @brief Method RemoveFromSelection, addr 0x3035eb0, size 0x5c, virtual false, abstract: false, final false
inline void RemoveFromSelection(int32_t  index) ;

/// @brief Method RemoveFromSelectionWithoutValidation, addr 0x3036cc0, size 0x36c, virtual false, abstract: false, final false
inline void RemoveFromSelectionWithoutValidation(int32_t  index) ;

/// @brief Method Resize, addr 0x3033774, size 0x90, virtual false, abstract: false, final false
inline void Resize(::UnityEngine::Vector2  size) ;

/// @brief Method ResolveItemHeight, addr 0x3031c08, size 0xb8, virtual false, abstract: false, final false
inline float_t ResolveItemHeight(float_t  height) ;

/// @brief Method ScheduleRebuild, addr 0x303327c, size 0x1e8, virtual false, abstract: false, final false
inline void ScheduleRebuild() ;

/// @brief Method ScrollToItem, addr 0x3030b08, size 0x74, virtual false, abstract: false, final false
inline void ScrollToItem(int32_t  index) ;

/// @brief Method ScrollToItemById, addr 0x30309ec, size 0x94, virtual false, abstract: false, final false
inline void ScrollToItemById(int32_t  id) ;

/// @brief Method SelectAll, addr 0x3034394, size 0x4a8, virtual false, abstract: false, final false
inline void SelectAll() ;

/// @brief Method SetSelection, addr 0x3030a80, size 0x88, virtual false, abstract: false, final false
inline void SetSelection(int32_t  index) ;

/// @brief Method SetSelection, addr 0x30371bc, size 0x8, virtual false, abstract: false, final false
inline void SetSelection(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method SetSelectionInternal, addr 0x3030c70, size 0x460, virtual false, abstract: false, final false
inline void SetSelectionInternal(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices, bool  sendNotification) ;

/// @brief Method SetSelectionWithoutNotify, addr 0x30371c4, size 0x8, virtual false, abstract: false, final false
inline void SetSelectionWithoutNotify(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method SetViewController, addr 0x302fce4, size 0xa4, virtual true, abstract: false, final false
inline void SetViewController(::UnityEngine::UIElements::CollectionViewController*  controller) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x3037c60, size 0x20, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x3037c5c, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method <Apply>g__HandleSelectionAndScroll|183_0, addr 0x303483c, size 0x134, virtual false, abstract: false, final false
inline void _Apply_g__HandleSelectionAndScroll_183_0(int32_t  index, ::ByRef<::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method <RefreshSelection>g__NotifyIfChanged|172_0, addr 0x30334e0, size 0x50, virtual false, abstract: false, final false
inline void _RefreshSelection_g__NotifyIfChanged_172_0(::ByRef<::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>* const& __cordl_internal_get_canStartDrag() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*& __cordl_internal_get_canStartDrag() ;

constexpr ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>* const& __cordl_internal_get_dragAndDropUpdate() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*& __cordl_internal_get_dragAndDropUpdate() ;

constexpr ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>* const& __cordl_internal_get_handleDrop() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*& __cordl_internal_get_handleDrop() ;

constexpr ::System::Action_2<int32_t,int32_t>* const& __cordl_internal_get_itemIndexChanged() const;

constexpr ::System::Action_2<int32_t,int32_t>*& __cordl_internal_get_itemIndexChanged() ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* const& __cordl_internal_get_itemsChosen() const;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __cordl_internal_get_itemsChosen() ;

constexpr ::System::Action* const& __cordl_internal_get_itemsSourceChanged() const;

constexpr ::System::Action*& __cordl_internal_get_itemsSourceChanged() ;

constexpr ::UnityEngine::UIElements::ListViewDragger* const& __cordl_internal_get_m_Dragger() const;

constexpr ::UnityEngine::UIElements::ListViewDragger*& __cordl_internal_get_m_Dragger() ;

constexpr float_t const& __cordl_internal_get_m_FixedItemHeight() const;

constexpr float_t& __cordl_internal_get_m_FixedItemHeight() ;

constexpr bool const& __cordl_internal_get_m_HorizontalScrollingEnabled() const;

constexpr bool& __cordl_internal_get_m_HorizontalScrollingEnabled() ;

constexpr bool const& __cordl_internal_get_m_IsRangeSelectionDirectionUp() const;

constexpr bool& __cordl_internal_get_m_IsRangeSelectionDirectionUp() ;

constexpr bool const& __cordl_internal_get_m_ItemHeightIsInline() const;

constexpr bool& __cordl_internal_get_m_ItemHeightIsInline() ;

constexpr ::System::Action_2<int32_t,int32_t>* const& __cordl_internal_get_m_ItemIndexChangedCallback() const;

constexpr ::System::Action_2<int32_t,int32_t>*& __cordl_internal_get_m_ItemIndexChangedCallback() ;

constexpr ::System::Action* const& __cordl_internal_get_m_ItemsSourceChangedCallback() const;

constexpr ::System::Action*& __cordl_internal_get_m_ItemsSourceChangedCallback() ;

constexpr float_t const& __cordl_internal_get_m_LastHeight() const;

constexpr float_t& __cordl_internal_get_m_LastHeight() ;

constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* const& __cordl_internal_get_m_NavigationManipulator() const;

constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& __cordl_internal_get_m_NavigationManipulator() ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_RebuildScheduled() const;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_RebuildScheduled() ;

constexpr ::UnityEngine::UIElements::ScrollView* const& __cordl_internal_get_m_ScrollView() const;

constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_m_ScrollView() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_SelectedIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SelectedIds() ;

constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView_Selection* const& __cordl_internal_get_m_Selection() const;

constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView_Selection*& __cordl_internal_get_m_Selection() ;

constexpr ::UnityEngine::UIElements::SelectionType const& __cordl_internal_get_m_SelectionType() const;

constexpr ::UnityEngine::UIElements::SelectionType& __cordl_internal_get_m_SelectionType() ;

constexpr ::UnityEngine::UIElements::AlternatingRowBackground const& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() const;

constexpr ::UnityEngine::UIElements::AlternatingRowBackground& __cordl_internal_get_m_ShowAlternatingRowBackgrounds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TouchDownPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TouchDownPosition() ;

constexpr ::UnityEngine::UIElements::CollectionViewController* const& __cordl_internal_get_m_ViewController() const;

constexpr ::UnityEngine::UIElements::CollectionViewController*& __cordl_internal_get_m_ViewController() ;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationController* const& __cordl_internal_get_m_VirtualizationController() const;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationController*& __cordl_internal_get_m_VirtualizationController() ;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod const& __cordl_internal_get_m_VirtualizationMethod() const;

constexpr ::UnityEngine::UIElements::CollectionVirtualizationMethod& __cordl_internal_get_m_VirtualizationMethod() ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* const& __cordl_internal_get_selectedIndicesChanged() const;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*& __cordl_internal_get_selectedIndicesChanged() ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* const& __cordl_internal_get_selectionChanged() const;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __cordl_internal_get_selectionChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_selectionNotChanged() const;

constexpr ::System::Action*& __cordl_internal_get_selectionNotChanged() ;

constexpr ::UnityEngine::UIElements::SerializedVirtualizationData* const& __cordl_internal_get_serializedVirtualizationData() const;

constexpr ::UnityEngine::UIElements::SerializedVirtualizationData*& __cordl_internal_get_serializedVirtualizationData() ;

constexpr ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>* const& __cordl_internal_get_setupDragAndDrop() const;

constexpr ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*& __cordl_internal_get_setupDragAndDrop() ;

constexpr void __cordl_internal_set_canStartDrag(::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*  value) ;

constexpr void __cordl_internal_set_dragAndDropUpdate(::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  value) ;

constexpr void __cordl_internal_set_handleDrop(::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  value) ;

constexpr void __cordl_internal_set_itemIndexChanged(::System::Action_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_itemsChosen(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_itemsSourceChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_Dragger(::UnityEngine::UIElements::ListViewDragger*  value) ;

constexpr void __cordl_internal_set_m_FixedItemHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_HorizontalScrollingEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_IsRangeSelectionDirectionUp(bool  value) ;

constexpr void __cordl_internal_set_m_ItemHeightIsInline(bool  value) ;

constexpr void __cordl_internal_set_m_ItemIndexChangedCallback(::System::Action_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ItemsSourceChangedCallback(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_LastHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator*  value) ;

constexpr void __cordl_internal_set_m_RebuildScheduled(::UnityEngine::UIElements::IVisualElementScheduledItem*  value) ;

constexpr void __cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView*  value) ;

constexpr void __cordl_internal_set_m_SelectedIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Selection(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection*  value) ;

constexpr void __cordl_internal_set_m_SelectionType(::UnityEngine::UIElements::SelectionType  value) ;

constexpr void __cordl_internal_set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value) ;

constexpr void __cordl_internal_set_m_TouchDownPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ViewController(::UnityEngine::UIElements::CollectionViewController*  value) ;

constexpr void __cordl_internal_set_m_VirtualizationController(::UnityEngine::UIElements::CollectionVirtualizationController*  value) ;

constexpr void __cordl_internal_set_m_VirtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod  value) ;

constexpr void __cordl_internal_set_selectedIndicesChanged(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set_selectionChanged(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  value) ;

constexpr void __cordl_internal_set_selectionNotChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_serializedVirtualizationData(::UnityEngine::UIElements::SerializedVirtualizationData*  value) ;

constexpr void __cordl_internal_set_setupDragAndDrop(::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*  value) ;

/// @brief Method <.ctor>b__159_0, addr 0x3037fbc, size 0xc, virtual false, abstract: false, final false
inline void __ctor_b__159_0(float_t  v) ;

/// @brief Method .ctor, addr 0x30324f0, size 0x594, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x303018c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IList*  itemsSource, float_t  itemHeight) ;

static inline ::StringW getStaticF_backgroundFillUssClassName() ;

static inline ::StringW getStaticF_borderUssClassName() ;

static inline ::StringW getStaticF_dragHoverBarUssClassName() ;

static inline ::StringW getStaticF_dragHoverMarkerUssClassName() ;

static inline ::StringW getStaticF_itemAlternativeBackgroundUssClassName() ;

static inline ::StringW getStaticF_itemDragHoverUssClassName() ;

static inline ::StringW getStaticF_itemSelectedVariantUssClassName() ;

static inline ::StringW getStaticF_itemUssClassName() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>* getStaticF_k_EmptyItems() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RebuildMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_RefreshMarker() ;

static inline ::StringW getStaticF_listScrollViewUssClassName() ;

static inline int32_t getStaticF_s_DefaultItemHeight() ;

static inline ::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> getStaticF_s_ItemHeightProperty() ;

static inline ::StringW getStaticF_ussClassName() ;

/// @brief Method get_activeItems, addr 0x3031b18, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems() ;

/// @brief Method get_contentContainer, addr 0x30318d4, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_contentContainer() ;

/// @brief Method get_dragger, addr 0x3031b98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ListViewDragger* get_dragger() ;

/// @brief Method get_fixedItemHeight, addr 0x3032228, size 0x8, virtual false, abstract: false, final false
inline float_t get_fixedItemHeight() ;

/// @brief Method get_itemsSource, addr 0x303180c, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::IList* get_itemsSource() ;

/// @brief Method get_lastHeight, addr 0x3032328, size 0x8, virtual false, abstract: false, final false
inline float_t get_lastHeight() ;

/// @brief Method get_reorderable, addr 0x3031d40, size 0xf0, virtual false, abstract: false, final false
inline bool get_reorderable() ;

/// @brief Method get_scrollView, addr 0x3031b90, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ScrollView* get_scrollView() ;

/// @brief Method get_selectedIds, addr 0x303080c, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedIds() ;

/// @brief Method get_selectedIndex, addr 0x3030938, size 0x38, virtual false, abstract: false, final false
inline int32_t get_selectedIndex() ;

/// @brief Method get_selectedIndices, addr 0x3031afc, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* get_selectedIndices() ;

/// @brief Method get_selectedItems, addr 0x3031a54, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_selectedItems() ;

/// @brief Method get_selectionType, addr 0x30318dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::SelectionType get_selectionType() ;

/// @brief Method get_showAlternatingRowBackgrounds, addr 0x30321c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::AlternatingRowBackground get_showAlternatingRowBackgrounds() ;

/// @brief Method get_viewController, addr 0x3031c00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionViewController* get_viewController() ;

/// @brief Method get_virtualizationController, addr 0x3031ba0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionVirtualizationController* get_virtualizationController() ;

/// @brief Method get_virtualizationMethod, addr 0x30321e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::CollectionVirtualizationMethod get_virtualizationMethod() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

static inline void setStaticF_backgroundFillUssClassName(::StringW  value) ;

static inline void setStaticF_borderUssClassName(::StringW  value) ;

static inline void setStaticF_dragHoverBarUssClassName(::StringW  value) ;

static inline void setStaticF_dragHoverMarkerUssClassName(::StringW  value) ;

static inline void setStaticF_itemAlternativeBackgroundUssClassName(::StringW  value) ;

static inline void setStaticF_itemDragHoverUssClassName(::StringW  value) ;

static inline void setStaticF_itemSelectedVariantUssClassName(::StringW  value) ;

static inline void setStaticF_itemUssClassName(::StringW  value) ;

static inline void setStaticF_k_EmptyItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  value) ;

static inline void setStaticF_k_RebuildMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_RefreshMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_listScrollViewUssClassName(::StringW  value) ;

static inline void setStaticF_s_DefaultItemHeight(int32_t  value) ;

static inline void setStaticF_s_ItemHeightProperty(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t>  value) ;

static inline void setStaticF_ussClassName(::StringW  value) ;

/// @brief Method set_fixedItemHeight, addr 0x3032230, size 0xf8, virtual false, abstract: false, final false
inline void set_fixedItemHeight(float_t  value) ;

/// @brief Method set_horizontalScrollingEnabled, addr 0x3032154, size 0x70, virtual false, abstract: false, final false
inline void set_horizontalScrollingEnabled(bool  value) ;

/// @brief Method set_itemsSource, addr 0x3031824, size 0x68, virtual false, abstract: false, final false
inline void set_itemsSource(::System::Collections::IList*  value) ;

/// @brief Method set_reorderable, addr 0x3031e30, size 0x13c, virtual false, abstract: false, final false
inline void set_reorderable(bool  value) ;

/// @brief Method set_selectedIndex, addr 0x3031af8, size 0x4, virtual false, abstract: false, final false
inline void set_selectedIndex(int32_t  value) ;

/// @brief Method set_selectionType, addr 0x30318e4, size 0x60, virtual false, abstract: false, final false
inline void set_selectionType(::UnityEngine::UIElements::SelectionType  value) ;

/// @brief Method set_showAlternatingRowBackgrounds, addr 0x30321cc, size 0x18, virtual false, abstract: false, final false
inline void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground  value) ;

/// @brief Method set_showBorder, addr 0x3031cc0, size 0x80, virtual false, abstract: false, final false
inline void set_showBorder(bool  value) ;

/// @brief Method set_virtualizationMethod, addr 0x30321ec, size 0x3c, virtual false, abstract: false, final false
inline void set_virtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseVerticalCollectionView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVerticalCollectionView(BaseVerticalCollectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVerticalCollectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVerticalCollectionView(BaseVerticalCollectionView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3702};

/// @brief Field itemsChosen, offset: 0x3d8, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  ___itemsChosen;

/// @brief Field selectionChanged, offset: 0x3e0, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*  ___selectionChanged;

/// @brief Field selectedIndicesChanged, offset: 0x3e8, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  ___selectedIndicesChanged;

/// @brief Field itemIndexChanged, offset: 0x3f0, size: 0x8, def value: None
 ::System::Action_2<int32_t,int32_t>*  ___itemIndexChanged;

/// @brief Field itemsSourceChanged, offset: 0x3f8, size: 0x8, def value: None
 ::System::Action*  ___itemsSourceChanged;

/// @brief Field selectionNotChanged, offset: 0x400, size: 0x8, def value: None
 ::System::Action*  ___selectionNotChanged;

/// @brief Field canStartDrag, offset: 0x408, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::CanStartDragArgs,bool>*  ___canStartDrag;

/// @brief Field setupDragAndDrop, offset: 0x410, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::SetupDragAndDropArgs,::UnityEngine::UIElements::StartDragArgs>*  ___setupDragAndDrop;

/// @brief Field dragAndDropUpdate, offset: 0x418, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  ___dragAndDropUpdate;

/// @brief Field handleDrop, offset: 0x420, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::UIElements::HandleDragAndDropArgs,::UnityEngine::UIElements::DragVisualMode>*  ___handleDrop;

/// @brief Field m_SelectionType, offset: 0x428, size: 0x4, def value: None
 ::UnityEngine::UIElements::SelectionType  ___m_SelectionType;

/// @brief Field m_HorizontalScrollingEnabled, offset: 0x42c, size: 0x1, def value: None
 bool  ___m_HorizontalScrollingEnabled;

/// @brief Field m_ShowAlternatingRowBackgrounds, offset: 0x430, size: 0x4, def value: None
 ::UnityEngine::UIElements::AlternatingRowBackground  ___m_ShowAlternatingRowBackgrounds;

/// @brief Field m_FixedItemHeight, offset: 0x434, size: 0x4, def value: None
 float_t  ___m_FixedItemHeight;

/// @brief Field m_ItemHeightIsInline, offset: 0x438, size: 0x1, def value: None
 bool  ___m_ItemHeightIsInline;

/// @brief Field m_VirtualizationMethod, offset: 0x43c, size: 0x4, def value: None
 ::UnityEngine::UIElements::CollectionVirtualizationMethod  ___m_VirtualizationMethod;

/// @brief Field m_ScrollView, offset: 0x440, size: 0x8, def value: None
 ::UnityEngine::UIElements::ScrollView*  ___m_ScrollView;

/// @brief Field m_ViewController, offset: 0x448, size: 0x8, def value: None
 ::UnityEngine::UIElements::CollectionViewController*  ___m_ViewController;

/// @brief Field m_VirtualizationController, offset: 0x450, size: 0x8, def value: None
 ::UnityEngine::UIElements::CollectionVirtualizationController*  ___m_VirtualizationController;

/// @brief Field m_NavigationManipulator, offset: 0x458, size: 0x8, def value: None
 ::UnityEngine::UIElements::KeyboardNavigationManipulator*  ___m_NavigationManipulator;

/// @brief Field serializedVirtualizationData, offset: 0x460, size: 0x8, def value: None
 ::UnityEngine::UIElements::SerializedVirtualizationData*  ___serializedVirtualizationData;

/// @brief Field m_SelectedIds, offset: 0x468, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_SelectedIds;

/// @brief Field m_Selection, offset: 0x470, size: 0x8, def value: None
 ::UnityEngine::UIElements::BaseVerticalCollectionView_Selection*  ___m_Selection;

/// @brief Field m_LastHeight, offset: 0x478, size: 0x4, def value: None
 float_t  ___m_LastHeight;

/// @brief Field m_IsRangeSelectionDirectionUp, offset: 0x47c, size: 0x1, def value: None
 bool  ___m_IsRangeSelectionDirectionUp;

/// @brief Field m_Dragger, offset: 0x480, size: 0x8, def value: None
 ::UnityEngine::UIElements::ListViewDragger*  ___m_Dragger;

/// @brief Field m_ItemIndexChangedCallback, offset: 0x488, size: 0x8, def value: None
 ::System::Action_2<int32_t,int32_t>*  ___m_ItemIndexChangedCallback;

/// @brief Field m_ItemsSourceChangedCallback, offset: 0x490, size: 0x8, def value: None
 ::System::Action*  ___m_ItemsSourceChangedCallback;

/// @brief Field m_RebuildScheduled, offset: 0x498, size: 0x8, def value: None
 ::UnityEngine::UIElements::IVisualElementScheduledItem*  ___m_RebuildScheduled;

/// @brief Field m_TouchDownPosition, offset: 0x4a0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TouchDownPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___itemsChosen) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___selectionChanged) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___selectedIndicesChanged) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___itemIndexChanged) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___itemsSourceChanged) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___selectionNotChanged) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___canStartDrag) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___setupDragAndDrop) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___dragAndDropUpdate) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___handleDrop) == 0x420, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_SelectionType) == 0x428, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_HorizontalScrollingEnabled) == 0x42c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ShowAlternatingRowBackgrounds) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_FixedItemHeight) == 0x434, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ItemHeightIsInline) == 0x438, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_VirtualizationMethod) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ScrollView) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ViewController) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_VirtualizationController) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_NavigationManipulator) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___serializedVirtualizationData) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_SelectedIds) == 0x468, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_Selection) == 0x470, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_LastHeight) == 0x478, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_IsRangeSelectionDirectionUp) == 0x47c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_Dragger) == 0x480, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ItemIndexChangedCallback) == 0x488, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_ItemsSourceChangedCallback) == 0x490, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_RebuildScheduled) == 0x498, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BaseVerticalCollectionView, ___m_TouchDownPosition) == 0x4a0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVerticalCollectionView, 0x4b0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView*, "UnityEngine.UIElements", "BaseVerticalCollectionView");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView_Selection*, "UnityEngine.UIElements", "BaseVerticalCollectionView/Selection");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView_UxmlTraits*, "UnityEngine.UIElements", "BaseVerticalCollectionView/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass162_0*, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass162_0");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView__get_selectedItems_d__72*, "UnityEngine.UIElements", "BaseVerticalCollectionView/<get_selectedItems>d__72");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass172_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass172_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView___c__DisplayClass183_0, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass183_0");
