#pragma once
// IWYU pragma private; include "VROSC/UIScrollableContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIScrollableContainer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class UIScrollableContainerInput;
}
namespace VROSC {
class UIScrollableContainer__MoveBar_d__48;
}
namespace VROSC {
class UIScrollableItem;
}
// Forward declare root types
namespace VROSC {
class UIScrollableContainer;
}
namespace VROSC {
class UIScrollableContainer__MoveBar_d__48;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIScrollableContainer);
MARK_REF_PTR_T(::VROSC::UIScrollableContainer__MoveBar_d__48);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIScrollableContainer/<MoveBar>d__48
class CORDL_TYPE UIScrollableContainer__MoveBar_d__48 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::VROSC::UIScrollableContainer>  __4__this;

/// @brief Field <startPos>5__4, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__startPos_5__4, put=__cordl_internal_set__startPos_5__4)) ::UnityEngine::Vector3  _startPos_5__4;

/// @brief Field <targetPos>5__3, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetPos_5__3, put=__cordl_internal_set__targetPos_5__3)) ::UnityEngine::Vector3  _targetPos_5__3;

/// @brief Field <time>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__2, put=__cordl_internal_set__time_5__2)) float_t  _time_5__2;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1749130, size 0x1a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::VROSC::UIScrollableContainer__MoveBar_d__48* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x17492d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x17492dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1749314, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x174912c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::VROSC::UIScrollableContainer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::VROSC::UIScrollableContainer>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos_5__4() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetPos_5__3() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetPos_5__3() ;

constexpr float_t const& __cordl_internal_get__time_5__2() const;

constexpr float_t& __cordl_internal_get__time_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::VROSC::UIScrollableContainer>  value) ;

constexpr void __cordl_internal_set__startPos_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetPos_5__3(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__time_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

/// @brief Method .ctor, addr 0x1748bb4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIScrollableContainer__MoveBar_d__48() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableContainer__MoveBar_d__48", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIScrollableContainer__MoveBar_d__48(UIScrollableContainer__MoveBar_d__48 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableContainer__MoveBar_d__48", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIScrollableContainer__MoveBar_d__48(UIScrollableContainer__MoveBar_d__48 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1129};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIScrollableContainer>  _____4__this;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <time>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____time_5__2;

/// @brief Field <targetPos>5__3, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetPos_5__3;

/// @brief Field <startPos>5__4, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____startPos_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, ____time_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, ____targetPos_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer__MoveBar_d__48, ____startPos_5__4) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIScrollableContainer__MoveBar_d__48, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIScrollableContainer
class CORDL_TYPE UIScrollableContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MoveBar_d__48 = ::VROSC::UIScrollableContainer__MoveBar_d__48;

 __declspec(property(get=get_IsHorizontal)) bool  IsHorizontal;

 __declspec(property(get=get_IsInverted)) bool  IsInverted;

 __declspec(property(get=get_ItemLength)) float_t  ItemLength;

 __declspec(property(get=get_Items, put=set_Items)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>*  Items;

 __declspec(property(get=get_ItemsContainer)) ::UnityW<::UnityEngine::Transform>  ItemsContainer;

 __declspec(property(get=get_Length)) float_t  Length;

/// @brief Field OnItemDeselected, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemDeselected, put=__cordl_internal_set_OnItemDeselected)) ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*  OnItemDeselected;

/// @brief Field OnItemSelected, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnItemSelected, put=__cordl_internal_set_OnItemSelected)) ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*  OnItemSelected;

 __declspec(property(get=get_Padding)) float_t  Padding;

 __declspec(property(get=get_SelectedItemIndex, put=set_SelectedItemIndex)) int32_t  SelectedItemIndex;

/// @brief Field <Items>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Items_k__BackingField, put=__cordl_internal_set__Items_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>*  _Items_k__BackingField;

/// @brief Field <SelectedItemIndex>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__SelectedItemIndex_k__BackingField, put=__cordl_internal_set__SelectedItemIndex_k__BackingField)) int32_t  _SelectedItemIndex_k__BackingField;

/// @brief Field _defaultSelection, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultSelection, put=__cordl_internal_set__defaultSelection)) int32_t  _defaultSelection;

/// @brief Field _invert, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__invert, put=__cordl_internal_set__invert)) bool  _invert;

/// @brief Field _isHorizontal, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHorizontal, put=__cordl_internal_set__isHorizontal)) bool  _isHorizontal;

/// @brief Field _itemsContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__itemsContainer, put=__cordl_internal_set__itemsContainer)) ::UnityW<::UnityEngine::Transform>  _itemsContainer;

/// @brief Field _length, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) float_t  _length;

/// @brief Field _padding, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) float_t  _padding;

/// @brief Field _scrollableItemPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollableItemPrefab, put=__cordl_internal_set__scrollableItemPrefab)) ::UnityW<::VROSC::UIScrollableItem>  _scrollableItemPrefab;

/// @brief Field _selectionInput, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectionInput, put=__cordl_internal_set__selectionInput)) ::UnityW<::VROSC::UIScrollableContainerInput>  _selectionInput;

/// @brief Field _supportsMultipleSelection, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportsMultipleSelection, put=__cordl_internal_set__supportsMultipleSelection)) bool  _supportsMultipleSelection;

/// @brief Field _supportsNoSelection, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportsNoSelection, put=__cordl_internal_set__supportsNoSelection)) bool  _supportsNoSelection;

/// @brief Field _valuesSet, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__valuesSet, put=__cordl_internal_set__valuesSet)) bool  _valuesSet;

/// @brief Method AddItem, addr 0x17481b0, size 0x240, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIScrollableItem> AddItem(::VROSC::UIScrollableItem*  itemPrefab, ::StringW  value, bool  select, int32_t  index) ;

/// @brief Method AddItem, addr 0x1748614, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIScrollableItem> AddItem(::StringW  value, bool  select, int32_t  index) ;

/// @brief Method CreateItems, addr 0x1747c7c, size 0x1a4, virtual false, abstract: false, final false
inline void CreateItems(::ArrayW<::StringW,::Array<::StringW>*>  values, int32_t  selection) ;

/// @brief Method DeselectItem, addr 0x1748f0c, size 0xcc, virtual false, abstract: false, final false
inline void DeselectItem() ;

/// @brief Method DestroyItems, addr 0x1747f00, size 0x108, virtual false, abstract: false, final false
inline void DestroyItems() ;

/// @brief Method GetItem, addr 0x1748700, size 0x168, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIScrollableItem> GetItem(::StringW  value) ;

/// @brief Method GetSelectedItem, addr 0x1748d44, size 0x68, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIScrollableItem> GetSelectedItem() ;

/// @brief Method GetSelectedPosition, addr 0x17489c8, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSelectedPosition() ;

/// @brief Method HasItem, addr 0x17483f0, size 0x180, virtual false, abstract: false, final false
inline bool HasItem(::StringW  value) ;

/// @brief Method MoveBar, addr 0x1748958, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MoveBar(float_t  duration) ;

/// @brief Method MoveToSelectedItem, addr 0x17488cc, size 0x8c, virtual false, abstract: false, final false
inline void MoveToSelectedItem(bool  animate) ;

static inline ::VROSC::UIScrollableContainer* New_ctor() ;

/// @brief Method OnDisable, addr 0x1747a54, size 0x1fc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x1748868, size 0x64, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x1747858, size 0x1fc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveItemAt, addr 0x174862c, size 0xcc, virtual false, abstract: false, final false
inline void RemoveItemAt(int32_t  index) ;

/// @brief Method ResetSelectionBar, addr 0x1748fd8, size 0x8, virtual false, abstract: false, final false
inline void ResetSelectionBar() ;

/// @brief Method SetDisabled, addr 0x1748fe0, size 0xc0, virtual false, abstract: false, final false
inline void SetDisabled(::UnityEngine::GameObject*  disabler, bool  state) ;

/// @brief Method SetHovering, addr 0x1748ca8, size 0x9c, virtual false, abstract: false, final false
inline void SetHovering(bool  hovering) ;

/// @brief Method SetHoveringItem, addr 0x1748bdc, size 0xcc, virtual false, abstract: false, final false
inline void SetHoveringItem(int32_t  hoverItem) ;

/// @brief Method SetItemPosition, addr 0x1748008, size 0x1a8, virtual false, abstract: false, final false
inline void SetItemPosition(::VROSC::UIScrollableItem*  item, int32_t  index) ;

/// @brief Method SetSelectedItem, addr 0x1748dac, size 0x160, virtual false, abstract: false, final false
inline void SetSelectedItem(int32_t  selectedItem) ;

/// @brief Method SetValues, addr 0x1747c50, size 0x2c, virtual false, abstract: false, final false
inline void SetValues(::ArrayW<::StringW,::Array<::StringW>*>  values, int32_t  selected) ;

/// @brief Method ShowItems, addr 0x1747e20, size 0xe0, virtual false, abstract: false, final false
inline void ShowItems(bool  animate) ;

/// @brief Method SortByListOrder, addr 0x1748570, size 0xa4, virtual false, abstract: false, final false
inline void SortByListOrder() ;

constexpr ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>* const& __cordl_internal_get_OnItemDeselected() const;

constexpr ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*& __cordl_internal_get_OnItemDeselected() ;

constexpr ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>* const& __cordl_internal_get_OnItemSelected() const;

constexpr ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*& __cordl_internal_get_OnItemSelected() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>* const& __cordl_internal_get__Items_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>*& __cordl_internal_get__Items_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SelectedItemIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SelectedItemIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__defaultSelection() const;

constexpr int32_t& __cordl_internal_get__defaultSelection() ;

constexpr bool const& __cordl_internal_get__invert() const;

constexpr bool& __cordl_internal_get__invert() ;

constexpr bool const& __cordl_internal_get__isHorizontal() const;

constexpr bool& __cordl_internal_get__isHorizontal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__itemsContainer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__itemsContainer() ;

constexpr float_t const& __cordl_internal_get__length() const;

constexpr float_t& __cordl_internal_get__length() ;

constexpr float_t const& __cordl_internal_get__padding() const;

constexpr float_t& __cordl_internal_get__padding() ;

constexpr ::UnityW<::VROSC::UIScrollableItem> const& __cordl_internal_get__scrollableItemPrefab() const;

constexpr ::UnityW<::VROSC::UIScrollableItem>& __cordl_internal_get__scrollableItemPrefab() ;

constexpr ::UnityW<::VROSC::UIScrollableContainerInput> const& __cordl_internal_get__selectionInput() const;

constexpr ::UnityW<::VROSC::UIScrollableContainerInput>& __cordl_internal_get__selectionInput() ;

constexpr bool const& __cordl_internal_get__supportsMultipleSelection() const;

constexpr bool& __cordl_internal_get__supportsMultipleSelection() ;

constexpr bool const& __cordl_internal_get__supportsNoSelection() const;

constexpr bool& __cordl_internal_get__supportsNoSelection() ;

constexpr bool const& __cordl_internal_get__valuesSet() const;

constexpr bool& __cordl_internal_get__valuesSet() ;

constexpr void __cordl_internal_set_OnItemDeselected(::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*  value) ;

constexpr void __cordl_internal_set_OnItemSelected(::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*  value) ;

constexpr void __cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>*  value) ;

constexpr void __cordl_internal_set__SelectedItemIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__defaultSelection(int32_t  value) ;

constexpr void __cordl_internal_set__invert(bool  value) ;

constexpr void __cordl_internal_set__isHorizontal(bool  value) ;

constexpr void __cordl_internal_set__itemsContainer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__length(float_t  value) ;

constexpr void __cordl_internal_set__padding(float_t  value) ;

constexpr void __cordl_internal_set__scrollableItemPrefab(::UnityW<::VROSC::UIScrollableItem>  value) ;

constexpr void __cordl_internal_set__selectionInput(::UnityW<::VROSC::UIScrollableContainerInput>  value) ;

constexpr void __cordl_internal_set__supportsMultipleSelection(bool  value) ;

constexpr void __cordl_internal_set__supportsNoSelection(bool  value) ;

constexpr void __cordl_internal_set__valuesSet(bool  value) ;

/// @brief Method .ctor, addr 0x17490a0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsHorizontal, addr 0x1747820, size 0x8, virtual false, abstract: false, final false
inline bool get_IsHorizontal() ;

/// @brief Method get_IsInverted, addr 0x1747828, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInverted() ;

/// @brief Method get_ItemLength, addr 0x1747804, size 0x1c, virtual false, abstract: false, final false
inline float_t get_ItemLength() ;

/// @brief Method get_Items, addr 0x1747850, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>* get_Items() ;

/// @brief Method get_ItemsContainer, addr 0x1747830, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_ItemsContainer() ;

/// @brief Method get_Length, addr 0x1747838, size 0x8, virtual false, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_Padding, addr 0x1747840, size 0x8, virtual false, abstract: false, final false
inline float_t get_Padding() ;

/// @brief Method get_SelectedItemIndex, addr 0x17477fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedItemIndex() ;

/// @brief Method set_Items, addr 0x1747848, size 0x8, virtual false, abstract: false, final false
inline void set_Items(::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>*  value) ;

/// @brief Method set_SelectedItemIndex, addr 0x17477f4, size 0x8, virtual false, abstract: false, final false
inline void set_SelectedItemIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIScrollableContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIScrollableContainer(UIScrollableContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIScrollableContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIScrollableContainer(UIScrollableContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1130};

/// @brief Field _itemsContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____itemsContainer;

/// @brief Field _scrollableItemPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIScrollableItem>  ____scrollableItemPrefab;

/// @brief Field _length, offset: 0x30, size: 0x4, def value: None
 float_t  ____length;

/// @brief Field _isHorizontal, offset: 0x34, size: 0x1, def value: None
 bool  ____isHorizontal;

/// @brief Field _invert, offset: 0x35, size: 0x1, def value: None
 bool  ____invert;

/// @brief Field _padding, offset: 0x38, size: 0x4, def value: None
 float_t  ____padding;

/// @brief Field _defaultSelection, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____defaultSelection;

/// @brief Field _supportsMultipleSelection, offset: 0x40, size: 0x1, def value: None
 bool  ____supportsMultipleSelection;

/// @brief Field _supportsNoSelection, offset: 0x41, size: 0x1, def value: None
 bool  ____supportsNoSelection;

/// @brief Field _selectionInput, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UIScrollableContainerInput>  ____selectionInput;

/// @brief Field <SelectedItemIndex>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____SelectedItemIndex_k__BackingField;

/// @brief Field <Items>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIScrollableItem>>*  ____Items_k__BackingField;

/// @brief Field OnItemSelected, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*  ___OnItemSelected;

/// @brief Field OnItemDeselected, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::UIScrollableItem>>*  ___OnItemDeselected;

/// @brief Field _valuesSet, offset: 0x70, size: 0x1, def value: None
 bool  ____valuesSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIScrollableContainer, ____itemsContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____scrollableItemPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____isHorizontal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____invert) == 0x35, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____padding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____defaultSelection) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____supportsMultipleSelection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____supportsNoSelection) == 0x41, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____selectionInput) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____SelectedItemIndex_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____Items_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ___OnItemSelected) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ___OnItemDeselected) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIScrollableContainer, ____valuesSet) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIScrollableContainer, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIScrollableContainer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIScrollableContainer*, "VROSC", "UIScrollableContainer");
NEED_NO_BOX(::VROSC::UIScrollableContainer__MoveBar_d__48);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIScrollableContainer__MoveBar_d__48*, "VROSC", "UIScrollableContainer/<MoveBar>d__48");
