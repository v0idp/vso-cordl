#pragma once
// IWYU pragma private; include "VROSC/LoopListArranger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopListArranger)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class ILoopGroupListItem;
}
namespace VROSC {
class LoopListArranger___c;
}
namespace VROSC {
class LoopListPreviewItem;
}
namespace VROSC {
class LoopPlayer;
}
namespace VROSC {
class LoopStationGroup;
}
// Forward declare root types
namespace VROSC {
class LoopListArranger;
}
namespace VROSC {
class LoopListArranger___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopListArranger);
MARK_REF_PTR_T(::VROSC::LoopListArranger___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopListArranger/<>c
class CORDL_TYPE LoopListArranger___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::LoopListArranger___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Comparison_1<::VROSC::ILoopGroupListItem*>*  __9__20_0;

static inline ::VROSC::LoopListArranger___c* New_ctor() ;

/// @brief Method <SortLoops>b__20_0, addr 0x18b4b2c, size 0x120, virtual false, abstract: false, final false
inline int32_t _SortLoops_b__20_0(::VROSC::ILoopGroupListItem*  a, ::VROSC::ILoopGroupListItem*  b) ;

/// @brief Method .ctor, addr 0x18b4b24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::LoopListArranger___c* getStaticF___9() ;

static inline ::System::Comparison_1<::VROSC::ILoopGroupListItem*>* getStaticF___9__20_0() ;

static inline void setStaticF___9(::VROSC::LoopListArranger___c*  value) ;

static inline void setStaticF___9__20_0(::System::Comparison_1<::VROSC::ILoopGroupListItem*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopListArranger___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopListArranger___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopListArranger___c(LoopListArranger___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopListArranger___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopListArranger___c(LoopListArranger___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::LoopListArranger___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopListArranger
class CORDL_TYPE LoopListArranger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::VROSC::LoopListArranger___c;

 __declspec(property(get=get_ListHeight)) float_t  ListHeight;

/// @brief Field OnSortComplete, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSortComplete, put=__cordl_internal_set_OnSortComplete)) ::System::Action*  OnSortComplete;

 __declspec(property(get=get_OnlyAllowRearrangeOfLoops)) bool  OnlyAllowRearrangeOfLoops;

/// @brief Field _dataShouldUpdate, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__dataShouldUpdate, put=__cordl_internal_set__dataShouldUpdate)) bool  _dataShouldUpdate;

/// @brief Field _dropPositionPreview, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dropPositionPreview, put=__cordl_internal_set__dropPositionPreview)) ::UnityW<::VROSC::LoopListPreviewItem>  _dropPositionPreview;

/// @brief Field _hoveringingPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoveringingPlayer, put=__cordl_internal_set__hoveringingPlayer)) ::UnityW<::VROSC::LoopPlayer>  _hoveringingPlayer;

/// @brief Field _items, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>*  _items;

/// @brief Field _loopHeightOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__loopHeightOffset, put=__cordl_internal_set__loopHeightOffset)) float_t  _loopHeightOffset;

/// @brief Field _loopsParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopsParent, put=__cordl_internal_set__loopsParent)) ::UnityW<::UnityEngine::Transform>  _loopsParent;

/// @brief Field _onlyAllowRearrangeOfLoops, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__onlyAllowRearrangeOfLoops, put=__cordl_internal_set__onlyAllowRearrangeOfLoops)) bool  _onlyAllowRearrangeOfLoops;

/// @brief Field _owner, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__owner, put=__cordl_internal_set__owner)) ::UnityW<::VROSC::LoopStationGroup>  _owner;

/// @brief Field _sortNeeded, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__sortNeeded, put=__cordl_internal_set__sortNeeded)) bool  _sortNeeded;

/// @brief Method Changed, addr 0x18b4390, size 0x14, virtual false, abstract: false, final false
inline void Changed(bool  alsoUpdateData) ;

/// @brief Method GetListHeight, addr 0x18b3f20, size 0xdc, virtual false, abstract: false, final false
inline float_t GetListHeight() ;

/// @brief Method GetListIndexByPosition, addr 0x18b4824, size 0x190, virtual false, abstract: false, final false
inline int32_t GetListIndexByPosition(::VROSC::LoopPlayer*  loopPlayer) ;

/// @brief Method GetLooperPositionByOrderInList, addr 0x18b49b4, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLooperPositionByOrderInList(int32_t  order) ;

/// @brief Method LoopCountChanged, addr 0x18b4708, size 0x11c, virtual false, abstract: false, final false
inline void LoopCountChanged(::VROSC::LoopPlayer*  sender) ;

static inline ::VROSC::LoopListArranger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18b41a0, size 0x158, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetHovering, addr 0x18b42f8, size 0x90, virtual false, abstract: false, final false
inline void SetHovering(::VROSC::LoopPlayer*  hoveringPlayer) ;

/// @brief Method Setup, addr 0x18b4004, size 0x174, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStationGroup*  loopStationGroup, ::UnityEngine::Transform*  loopsParent) ;

/// @brief Method SortLoops, addr 0x18b43b4, size 0x354, virtual false, abstract: false, final false
inline void SortLoops() ;

/// @brief Method Update, addr 0x18b43a4, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_OnSortComplete() const;

constexpr ::System::Action*& __cordl_internal_get_OnSortComplete() ;

constexpr bool const& __cordl_internal_get__dataShouldUpdate() const;

constexpr bool& __cordl_internal_get__dataShouldUpdate() ;

constexpr ::UnityW<::VROSC::LoopListPreviewItem> const& __cordl_internal_get__dropPositionPreview() const;

constexpr ::UnityW<::VROSC::LoopListPreviewItem>& __cordl_internal_get__dropPositionPreview() ;

constexpr ::UnityW<::VROSC::LoopPlayer> const& __cordl_internal_get__hoveringingPlayer() const;

constexpr ::UnityW<::VROSC::LoopPlayer>& __cordl_internal_get__hoveringingPlayer() ;

constexpr ::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>* const& __cordl_internal_get__items() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>*& __cordl_internal_get__items() ;

constexpr float_t const& __cordl_internal_get__loopHeightOffset() const;

constexpr float_t& __cordl_internal_get__loopHeightOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__loopsParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__loopsParent() ;

constexpr bool const& __cordl_internal_get__onlyAllowRearrangeOfLoops() const;

constexpr bool& __cordl_internal_get__onlyAllowRearrangeOfLoops() ;

constexpr ::UnityW<::VROSC::LoopStationGroup> const& __cordl_internal_get__owner() const;

constexpr ::UnityW<::VROSC::LoopStationGroup>& __cordl_internal_get__owner() ;

constexpr bool const& __cordl_internal_get__sortNeeded() const;

constexpr bool& __cordl_internal_get__sortNeeded() ;

constexpr void __cordl_internal_set_OnSortComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set__dataShouldUpdate(bool  value) ;

constexpr void __cordl_internal_set__dropPositionPreview(::UnityW<::VROSC::LoopListPreviewItem>  value) ;

constexpr void __cordl_internal_set__hoveringingPlayer(::UnityW<::VROSC::LoopPlayer>  value) ;

constexpr void __cordl_internal_set__items(::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>*  value) ;

constexpr void __cordl_internal_set__loopHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__loopsParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__onlyAllowRearrangeOfLoops(bool  value) ;

constexpr void __cordl_internal_set__owner(::UnityW<::VROSC::LoopStationGroup>  value) ;

constexpr void __cordl_internal_set__sortNeeded(bool  value) ;

/// @brief Method .ctor, addr 0x18b4a4c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ListHeight, addr 0x18b3f1c, size 0x4, virtual false, abstract: false, final false
inline float_t get_ListHeight() ;

/// @brief Method get_OnlyAllowRearrangeOfLoops, addr 0x18b3ffc, size 0x8, virtual false, abstract: false, final false
inline bool get_OnlyAllowRearrangeOfLoops() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopListArranger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopListArranger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopListArranger(LoopListArranger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopListArranger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopListArranger(LoopListArranger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{723};

/// @brief Field _onlyAllowRearrangeOfLoops, offset: 0x20, size: 0x1, def value: None
 bool  ____onlyAllowRearrangeOfLoops;

/// @brief Field _loopHeightOffset, offset: 0x24, size: 0x4, def value: None
 float_t  ____loopHeightOffset;

/// @brief Field _dropPositionPreview, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopListPreviewItem>  ____dropPositionPreview;

/// @brief Field _loopsParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____loopsParent;

/// @brief Field _owner, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStationGroup>  ____owner;

/// @brief Field _hoveringingPlayer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopPlayer>  ____hoveringingPlayer;

/// @brief Field _items, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::ILoopGroupListItem*>*  ____items;

/// @brief Field _sortNeeded, offset: 0x50, size: 0x1, def value: None
 bool  ____sortNeeded;

/// @brief Field _dataShouldUpdate, offset: 0x51, size: 0x1, def value: None
 bool  ____dataShouldUpdate;

/// @brief Field OnSortComplete, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___OnSortComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopListArranger, ____onlyAllowRearrangeOfLoops) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____loopHeightOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____dropPositionPreview) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____loopsParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____owner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____hoveringingPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____items) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____sortNeeded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ____dataShouldUpdate) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopListArranger, ___OnSortComplete) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopListArranger, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopListArranger);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopListArranger*, "VROSC", "LoopListArranger");
NEED_NO_BOX(::VROSC::LoopListArranger___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopListArranger___c*, "VROSC", "LoopListArranger/<>c");
