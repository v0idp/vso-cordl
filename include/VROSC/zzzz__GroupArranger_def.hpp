#pragma once
// IWYU pragma private; include "VROSC/GroupArranger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GroupArranger)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
class GroupArranger___c;
}
namespace VROSC {
class LoopStationGroup;
}
namespace VROSC {
class LoopStation;
}
// Forward declare root types
namespace VROSC {
class GroupArranger;
}
namespace VROSC {
class GroupArranger___c;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::GroupArranger);
MARK_REF_PTR_T(::VROSC::GroupArranger___c);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GroupArranger/<>c
class CORDL_TYPE GroupArranger___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::VROSC::GroupArranger___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>*  __9__9_0;

static inline ::VROSC::GroupArranger___c* New_ctor() ;

/// @brief Method <ArrangeGroups>b__9_0, addr 0x18b079c, size 0x14, virtual false, abstract: false, final false
inline int32_t _ArrangeGroups_b__9_0(::VROSC::LoopStationGroup*  i) ;

/// @brief Method .ctor, addr 0x18b0794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VROSC::GroupArranger___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::VROSC::GroupArranger___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::VROSC::LoopStationGroup>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupArranger___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupArranger___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupArranger___c(GroupArranger___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupArranger___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupArranger___c(GroupArranger___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{713};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::GroupArranger___c, 0x10>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.GroupArranger
class CORDL_TYPE GroupArranger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::VROSC::GroupArranger___c;

/// @brief Field _bySize, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__bySize, put=__cordl_internal_set__bySize)) bool  _bySize;

/// @brief Field _currentRowCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentRowCount, put=__cordl_internal_set__currentRowCount)) int32_t  _currentRowCount;

/// @brief Field _groupWidth, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__groupWidth, put=__cordl_internal_set__groupWidth)) float_t  _groupWidth;

/// @brief Field _keepGroupIfLargerThanPercent, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__keepGroupIfLargerThanPercent, put=__cordl_internal_set__keepGroupIfLargerThanPercent)) float_t  _keepGroupIfLargerThanPercent;

/// @brief Field _loopStation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopStation, put=__cordl_internal_set__loopStation)) ::UnityW<::VROSC::LoopStation>  _loopStation;

/// @brief Field _padding, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) float_t  _padding;

/// @brief Field _rightToLeft, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightToLeft, put=__cordl_internal_set__rightToLeft)) bool  _rightToLeft;

/// @brief Field _sortArea, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__sortArea, put=__cordl_internal_set__sortArea)) ::UnityW<::UnityEngine::RectTransform>  _sortArea;

/// @brief Method ArrangeGroups, addr 0x18b0088, size 0x48c, virtual false, abstract: false, final false
inline void ArrangeGroups(::System::Collections::Generic::List_1<::UnityW<::VROSC::LoopStationGroup>>*  groups, bool  allowRowChange) ;

static inline ::VROSC::GroupArranger* New_ctor() ;

/// @brief Method Setup, addr 0x18b007c, size 0xc, virtual false, abstract: false, final false
inline void Setup(::VROSC::LoopStation*  loopStation, float_t  groupWidth) ;

constexpr bool const& __cordl_internal_get__bySize() const;

constexpr bool& __cordl_internal_get__bySize() ;

constexpr int32_t const& __cordl_internal_get__currentRowCount() const;

constexpr int32_t& __cordl_internal_get__currentRowCount() ;

constexpr float_t const& __cordl_internal_get__groupWidth() const;

constexpr float_t& __cordl_internal_get__groupWidth() ;

constexpr float_t const& __cordl_internal_get__keepGroupIfLargerThanPercent() const;

constexpr float_t& __cordl_internal_get__keepGroupIfLargerThanPercent() ;

constexpr ::UnityW<::VROSC::LoopStation> const& __cordl_internal_get__loopStation() const;

constexpr ::UnityW<::VROSC::LoopStation>& __cordl_internal_get__loopStation() ;

constexpr float_t const& __cordl_internal_get__padding() const;

constexpr float_t& __cordl_internal_get__padding() ;

constexpr bool const& __cordl_internal_get__rightToLeft() const;

constexpr bool& __cordl_internal_get__rightToLeft() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__sortArea() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__sortArea() ;

constexpr void __cordl_internal_set__bySize(bool  value) ;

constexpr void __cordl_internal_set__currentRowCount(int32_t  value) ;

constexpr void __cordl_internal_set__groupWidth(float_t  value) ;

constexpr void __cordl_internal_set__keepGroupIfLargerThanPercent(float_t  value) ;

constexpr void __cordl_internal_set__loopStation(::UnityW<::VROSC::LoopStation>  value) ;

constexpr void __cordl_internal_set__padding(float_t  value) ;

constexpr void __cordl_internal_set__rightToLeft(bool  value) ;

constexpr void __cordl_internal_set__sortArea(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x18b0730, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GroupArranger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GroupArranger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupArranger(GroupArranger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupArranger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupArranger(GroupArranger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{714};

/// @brief Field _sortArea, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____sortArea;

/// @brief Field _padding, offset: 0x28, size: 0x4, def value: None
 float_t  ____padding;

/// @brief Field _keepGroupIfLargerThanPercent, offset: 0x2c, size: 0x4, def value: None
 float_t  ____keepGroupIfLargerThanPercent;

/// @brief Field _rightToLeft, offset: 0x30, size: 0x1, def value: None
 bool  ____rightToLeft;

/// @brief Field _bySize, offset: 0x31, size: 0x1, def value: None
 bool  ____bySize;

/// @brief Field _currentRowCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ____currentRowCount;

/// @brief Field _groupWidth, offset: 0x38, size: 0x4, def value: None
 float_t  ____groupWidth;

/// @brief Field _loopStation, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::LoopStation>  ____loopStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::GroupArranger, ____sortArea) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____padding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____keepGroupIfLargerThanPercent) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____rightToLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____bySize) == 0x31, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____currentRowCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____groupWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::GroupArranger, ____loopStation) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::GroupArranger, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::GroupArranger);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GroupArranger*, "VROSC", "GroupArranger");
NEED_NO_BOX(::VROSC::GroupArranger___c);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GroupArranger___c*, "VROSC", "GroupArranger/<>c");
