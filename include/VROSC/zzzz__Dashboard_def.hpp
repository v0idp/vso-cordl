#pragma once
// IWYU pragma private; include "VROSC/Dashboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Dashboard)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace VROSC {
class Dashboard;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Dashboard);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Dashboard
class CORDL_TYPE Dashboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DashboardVisibilityChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DashboardVisibilityChanged, put=setStaticF_DashboardVisibilityChanged)) ::System::Action_1<bool>*  DashboardVisibilityChanged;

 __declspec(property(get=get_Disabled)) bool  Disabled;

 __declspec(property(get=get_KeepFromClosing, put=set_KeepFromClosing)) bool  KeepFromClosing;

/// @brief Field OnDashboardToggled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDashboardToggled, put=setStaticF_OnDashboardToggled)) ::System::Action_1<bool>*  OnDashboardToggled;

/// @brief Field <KeepFromClosing>k__BackingField, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__KeepFromClosing_k__BackingField, put=__cordl_internal_set__KeepFromClosing_k__BackingField)) bool  _KeepFromClosing_k__BackingField;

/// @brief Field _allowOpenWhenPlaying, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowOpenWhenPlaying, put=__cordl_internal_set__allowOpenWhenPlaying)) bool  _allowOpenWhenPlaying;

/// @brief Field _dashboardObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dashboardObject, put=__cordl_internal_set__dashboardObject)) ::UnityW<::UnityEngine::GameObject>  _dashboardObject;

/// @brief Field _disabled, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__disabled, put=__cordl_internal_set__disabled)) bool  _disabled;

/// @brief Field _freeFloating, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get__freeFloating, put=__cordl_internal_set__freeFloating)) bool  _freeFloating;

/// @brief Field _inHand, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__inHand, put=__cordl_internal_set__inHand)) bool  _inHand;

/// @brief Field _showingDashboard, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__showingDashboard, put=__cordl_internal_set__showingDashboard)) bool  _showingDashboard;

/// @brief Method Awake, addr 0x1735e40, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EvaluateActivationCondition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EvaluateActivationCondition() ;

/// @brief Method EvaluateDeactivationCondition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EvaluateDeactivationCondition() ;

/// @brief Method EvaluateDropCondition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EvaluateDropCondition() ;

/// @brief Method MoveToHand, addr 0x1736124, size 0x4, virtual true, abstract: false, final false
inline void MoveToHand() ;

static inline ::VROSC::Dashboard* New_ctor() ;

/// @brief Method PlaceDashboard, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void PlaceDashboard() ;

/// @brief Method ReturnToFreeFloat, addr 0x1736128, size 0x4, virtual true, abstract: false, final false
inline void ReturnToFreeFloat() ;

/// @brief Method SetActive, addr 0x1735fe0, size 0x138, virtual false, abstract: false, final false
inline void SetActive(bool  shouldBeActive) ;

/// @brief Method SetDisabled, addr 0x1736118, size 0xc, virtual false, abstract: false, final false
inline void SetDisabled(bool  disabled) ;

/// @brief Method SetFreeFloating, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetFreeFloating() ;

/// @brief Method Update, addr 0x1735e60, size 0x180, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateVisibility, addr 0x173612c, size 0x20, virtual true, abstract: false, final false
inline void UpdateVisibility(bool  show) ;

constexpr bool const& __cordl_internal_get__KeepFromClosing_k__BackingField() const;

constexpr bool& __cordl_internal_get__KeepFromClosing_k__BackingField() ;

constexpr bool const& __cordl_internal_get__allowOpenWhenPlaying() const;

constexpr bool& __cordl_internal_get__allowOpenWhenPlaying() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__dashboardObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__dashboardObject() ;

constexpr bool const& __cordl_internal_get__disabled() const;

constexpr bool& __cordl_internal_get__disabled() ;

constexpr bool const& __cordl_internal_get__freeFloating() const;

constexpr bool& __cordl_internal_get__freeFloating() ;

constexpr bool const& __cordl_internal_get__inHand() const;

constexpr bool& __cordl_internal_get__inHand() ;

constexpr bool const& __cordl_internal_get__showingDashboard() const;

constexpr bool& __cordl_internal_get__showingDashboard() ;

constexpr void __cordl_internal_set__KeepFromClosing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__allowOpenWhenPlaying(bool  value) ;

constexpr void __cordl_internal_set__dashboardObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__disabled(bool  value) ;

constexpr void __cordl_internal_set__freeFloating(bool  value) ;

constexpr void __cordl_internal_set__inHand(bool  value) ;

constexpr void __cordl_internal_set__showingDashboard(bool  value) ;

/// @brief Method .ctor, addr 0x173614c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<bool>* getStaticF_DashboardVisibilityChanged() ;

static inline ::System::Action_1<bool>* getStaticF_OnDashboardToggled() ;

/// @brief Method get_Disabled, addr 0x1735e38, size 0x8, virtual false, abstract: false, final false
inline bool get_Disabled() ;

/// @brief Method get_KeepFromClosing, addr 0x1735e24, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepFromClosing() ;

static inline void setStaticF_DashboardVisibilityChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_OnDashboardToggled(::System::Action_1<bool>*  value) ;

/// @brief Method set_KeepFromClosing, addr 0x1735e2c, size 0xc, virtual false, abstract: false, final false
inline void set_KeepFromClosing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dashboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dashboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Dashboard(Dashboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dashboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dashboard(Dashboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1082};

/// @brief Field _dashboardObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____dashboardObject;

/// @brief Field _showingDashboard, offset: 0x28, size: 0x1, def value: None
 bool  ____showingDashboard;

/// @brief Field <KeepFromClosing>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  ____KeepFromClosing_k__BackingField;

/// @brief Field _allowOpenWhenPlaying, offset: 0x2a, size: 0x1, def value: None
 bool  ____allowOpenWhenPlaying;

/// @brief Field _freeFloating, offset: 0x2b, size: 0x1, def value: None
 bool  ____freeFloating;

/// @brief Field _inHand, offset: 0x2c, size: 0x1, def value: None
 bool  ____inHand;

/// @brief Field _disabled, offset: 0x2d, size: 0x1, def value: None
 bool  ____disabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Dashboard, ____dashboardObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Dashboard, ____showingDashboard) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Dashboard, ____KeepFromClosing_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::VROSC::Dashboard, ____allowOpenWhenPlaying) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::VROSC::Dashboard, ____freeFloating) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::VROSC::Dashboard, ____inHand) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::Dashboard, ____disabled) == 0x2d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Dashboard, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Dashboard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Dashboard*, "VROSC", "Dashboard");
