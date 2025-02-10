#pragma once
// IWYU pragma private; include "VROSC/MalletManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MalletManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
class MalletSettings;
}
namespace VROSC {
class Mallet;
}
namespace VROSC {
class MinMaxFloat;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class MalletManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MalletManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MalletManager
class CORDL_TYPE MalletManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AutoDimLaserWithMallets, put=set_AutoDimLaserWithMallets)) bool  AutoDimLaserWithMallets;

 __declspec(property(get=get_CurrentAngle, put=set_CurrentAngle)) float_t  CurrentAngle;

 __declspec(property(get=get_CurrentLength, put=set_CurrentLength)) float_t  CurrentLength;

 __declspec(property(get=get_DefaultColor)) ::UnityEngine::Color  DefaultColor;

 __declspec(property(get=get_IsLeftMalletGrabbed, put=set_IsLeftMalletGrabbed)) bool  IsLeftMalletGrabbed;

 __declspec(property(get=get_IsRightMalletGrabbed, put=set_IsRightMalletGrabbed)) bool  IsRightMalletGrabbed;

 __declspec(property(get=get_MinMaxMalletAngle)) ::VROSC::MinMaxFloat*  MinMaxMalletAngle;

 __declspec(property(get=get_MinMaxMalletLength)) ::VROSC::MinMaxFloat*  MinMaxMalletLength;

/// @brief Field OnCurrentAngleChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCurrentAngleChanged, put=__cordl_internal_set_OnCurrentAngleChanged)) ::System::Action_1<float_t>*  OnCurrentAngleChanged;

/// @brief Field OnCurrentLengthChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCurrentLengthChanged, put=__cordl_internal_set_OnCurrentLengthChanged)) ::System::Action_1<float_t>*  OnCurrentLengthChanged;

/// @brief Field <AutoDimLaserWithMallets>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__AutoDimLaserWithMallets_k__BackingField, put=__cordl_internal_set__AutoDimLaserWithMallets_k__BackingField)) bool  _AutoDimLaserWithMallets_k__BackingField;

/// @brief Field <CurrentAngle>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentAngle_k__BackingField, put=__cordl_internal_set__CurrentAngle_k__BackingField)) float_t  _CurrentAngle_k__BackingField;

/// @brief Field <CurrentLength>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentLength_k__BackingField, put=__cordl_internal_set__CurrentLength_k__BackingField)) float_t  _CurrentLength_k__BackingField;

/// @brief Field <IsLeftMalletGrabbed>k__BackingField, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLeftMalletGrabbed_k__BackingField, put=__cordl_internal_set__IsLeftMalletGrabbed_k__BackingField)) bool  _IsLeftMalletGrabbed_k__BackingField;

/// @brief Field <IsRightMalletGrabbed>k__BackingField, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRightMalletGrabbed_k__BackingField, put=__cordl_internal_set__IsRightMalletGrabbed_k__BackingField)) bool  _IsRightMalletGrabbed_k__BackingField;

/// @brief Field _isLeftMalletToggled, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLeftMalletToggled, put=__cordl_internal_set__isLeftMalletToggled)) bool  _isLeftMalletToggled;

/// @brief Field _isRightMalletToggled, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRightMalletToggled, put=__cordl_internal_set__isRightMalletToggled)) bool  _isRightMalletToggled;

/// @brief Field _leftDisableSources, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftDisableSources, put=__cordl_internal_set__leftDisableSources)) ::System::Collections::Generic::List_1<::System::Object*>*  _leftDisableSources;

/// @brief Field _leftMallet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftMallet, put=__cordl_internal_set__leftMallet)) ::UnityW<::VROSC::Mallet>  _leftMallet;

/// @brief Field _malletSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__malletSettings, put=__cordl_internal_set__malletSettings)) ::UnityW<::VROSC::MalletSettings>  _malletSettings;

/// @brief Field _requestSources, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestSources, put=__cordl_internal_set__requestSources)) ::System::Collections::Generic::List_1<::System::Object*>*  _requestSources;

/// @brief Field _rightDisableSources, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightDisableSources, put=__cordl_internal_set__rightDisableSources)) ::System::Collections::Generic::List_1<::System::Object*>*  _rightDisableSources;

/// @brief Field _rightMallet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightMallet, put=__cordl_internal_set__rightMallet)) ::UnityW<::VROSC::Mallet>  _rightMallet;

/// @brief Method DisableMallet, addr 0x1719e80, size 0x120, virtual false, abstract: false, final false
inline void DisableMallet(bool  disable, ::System::Object*  source, bool  left) ;

/// @brief Method DisableMallets, addr 0x1719e14, size 0x6c, virtual false, abstract: false, final false
inline void DisableMallets(bool  disable, ::VROSC::HandType  handType, ::System::Object*  source) ;

/// @brief Method GrabMallet, addr 0x1719a64, size 0xe4, virtual false, abstract: false, final false
inline void GrabMallet(bool  isLeftHand, bool  grab) ;

static inline ::VROSC::MalletManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x171987c, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RequestMallets, addr 0x1719d04, size 0x110, virtual false, abstract: false, final false
inline void RequestMallets(bool  request, ::System::Object*  source) ;

/// @brief Method ResetValuesToDefault, addr 0x171a13c, size 0x34, virtual false, abstract: false, final false
inline void ResetValuesToDefault() ;

/// @brief Method SetLaserAutoDimWhenHoldingMallets, addr 0x1719c28, size 0xdc, virtual false, abstract: false, final false
inline void SetLaserAutoDimWhenHoldingMallets(bool  active) ;

/// @brief Method SetMalletAngle, addr 0x1719fa0, size 0xe0, virtual false, abstract: false, final false
inline void SetMalletAngle(float_t  angle) ;

/// @brief Method SetMalletLength, addr 0x1719b48, size 0xe0, virtual false, abstract: false, final false
inline void SetMalletLength(float_t  length) ;

/// @brief Method Setup, addr 0x171956c, size 0x184, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method ToggleMallet, addr 0x1719974, size 0xf0, virtual false, abstract: false, final false
inline void ToggleMallet(::VROSC::ClickData*  clickData, bool  toggle) ;

/// @brief Method UpdateMalletsState, addr 0x17197d4, size 0xa8, virtual false, abstract: false, final false
inline void UpdateMalletsState() ;

/// @brief Method UserDataLoaded, addr 0x171a080, size 0xbc, virtual false, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnCurrentAngleChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnCurrentAngleChanged() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_OnCurrentLengthChanged() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_OnCurrentLengthChanged() ;

constexpr bool const& __cordl_internal_get__AutoDimLaserWithMallets_k__BackingField() const;

constexpr bool& __cordl_internal_get__AutoDimLaserWithMallets_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__CurrentAngle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CurrentAngle_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__CurrentLength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CurrentLength_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsLeftMalletGrabbed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLeftMalletGrabbed_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsRightMalletGrabbed_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRightMalletGrabbed_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isLeftMalletToggled() const;

constexpr bool& __cordl_internal_get__isLeftMalletToggled() ;

constexpr bool const& __cordl_internal_get__isRightMalletToggled() const;

constexpr bool& __cordl_internal_get__isRightMalletToggled() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__leftDisableSources() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__leftDisableSources() ;

constexpr ::UnityW<::VROSC::Mallet> const& __cordl_internal_get__leftMallet() const;

constexpr ::UnityW<::VROSC::Mallet>& __cordl_internal_get__leftMallet() ;

constexpr ::UnityW<::VROSC::MalletSettings> const& __cordl_internal_get__malletSettings() const;

constexpr ::UnityW<::VROSC::MalletSettings>& __cordl_internal_get__malletSettings() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__requestSources() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__requestSources() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__rightDisableSources() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__rightDisableSources() ;

constexpr ::UnityW<::VROSC::Mallet> const& __cordl_internal_get__rightMallet() const;

constexpr ::UnityW<::VROSC::Mallet>& __cordl_internal_get__rightMallet() ;

constexpr void __cordl_internal_set_OnCurrentAngleChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_OnCurrentLengthChanged(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set__AutoDimLaserWithMallets_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CurrentAngle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__CurrentLength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__IsLeftMalletGrabbed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsRightMalletGrabbed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isLeftMalletToggled(bool  value) ;

constexpr void __cordl_internal_set__isRightMalletToggled(bool  value) ;

constexpr void __cordl_internal_set__leftDisableSources(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__leftMallet(::UnityW<::VROSC::Mallet>  value) ;

constexpr void __cordl_internal_set__malletSettings(::UnityW<::VROSC::MalletSettings>  value) ;

constexpr void __cordl_internal_set__requestSources(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__rightDisableSources(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__rightMallet(::UnityW<::VROSC::Mallet>  value) ;

/// @brief Method .ctor, addr 0x171a170, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoDimLaserWithMallets, addr 0x17194e4, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoDimLaserWithMallets() ;

/// @brief Method get_CurrentAngle, addr 0x17194c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentAngle() ;

/// @brief Method get_CurrentLength, addr 0x17194d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_CurrentLength() ;

/// @brief Method get_DefaultColor, addr 0x1719524, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_DefaultColor() ;

/// @brief Method get_IsLeftMalletGrabbed, addr 0x1719544, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLeftMalletGrabbed() ;

/// @brief Method get_IsRightMalletGrabbed, addr 0x1719558, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRightMalletGrabbed() ;

/// @brief Method get_MinMaxMalletAngle, addr 0x17194ec, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_MinMaxMalletAngle() ;

/// @brief Method get_MinMaxMalletLength, addr 0x1719508, size 0x1c, virtual false, abstract: false, final false
inline ::VROSC::MinMaxFloat* get_MinMaxMalletLength() ;

/// @brief Method set_AutoDimLaserWithMallets, addr 0x17194d8, size 0xc, virtual false, abstract: false, final false
inline void set_AutoDimLaserWithMallets(bool  value) ;

/// @brief Method set_CurrentAngle, addr 0x17194b8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentAngle(float_t  value) ;

/// @brief Method set_CurrentLength, addr 0x17194c8, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentLength(float_t  value) ;

/// @brief Method set_IsLeftMalletGrabbed, addr 0x171954c, size 0xc, virtual false, abstract: false, final false
inline void set_IsLeftMalletGrabbed(bool  value) ;

/// @brief Method set_IsRightMalletGrabbed, addr 0x1719560, size 0xc, virtual false, abstract: false, final false
inline void set_IsRightMalletGrabbed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MalletManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MalletManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MalletManager(MalletManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MalletManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MalletManager(MalletManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{922};

/// @brief Field _malletSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::MalletSettings>  ____malletSettings;

/// @brief Field _leftMallet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Mallet>  ____leftMallet;

/// @brief Field _rightMallet, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::Mallet>  ____rightMallet;

/// @brief Field <CurrentAngle>k__BackingField, offset: 0x38, size: 0x4, def value: None
 float_t  ____CurrentAngle_k__BackingField;

/// @brief Field <CurrentLength>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____CurrentLength_k__BackingField;

/// @brief Field <AutoDimLaserWithMallets>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____AutoDimLaserWithMallets_k__BackingField;

/// @brief Field OnCurrentAngleChanged, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnCurrentAngleChanged;

/// @brief Field OnCurrentLengthChanged, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___OnCurrentLengthChanged;

/// @brief Field _isLeftMalletToggled, offset: 0x58, size: 0x1, def value: None
 bool  ____isLeftMalletToggled;

/// @brief Field _isRightMalletToggled, offset: 0x59, size: 0x1, def value: None
 bool  ____isRightMalletToggled;

/// @brief Field <IsLeftMalletGrabbed>k__BackingField, offset: 0x5a, size: 0x1, def value: None
 bool  ____IsLeftMalletGrabbed_k__BackingField;

/// @brief Field <IsRightMalletGrabbed>k__BackingField, offset: 0x5b, size: 0x1, def value: None
 bool  ____IsRightMalletGrabbed_k__BackingField;

/// @brief Field _requestSources, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____requestSources;

/// @brief Field _leftDisableSources, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____leftDisableSources;

/// @brief Field _rightDisableSources, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____rightDisableSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MalletManager, ____malletSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____leftMallet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____rightMallet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____CurrentAngle_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____CurrentLength_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____AutoDimLaserWithMallets_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ___OnCurrentAngleChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ___OnCurrentLengthChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____isLeftMalletToggled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____isRightMalletToggled) == 0x59, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____IsLeftMalletGrabbed_k__BackingField) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____IsRightMalletGrabbed_k__BackingField) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____requestSources) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____leftDisableSources) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::MalletManager, ____rightDisableSources) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MalletManager, 0x78>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MalletManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletManager*, "VROSC", "MalletManager");
