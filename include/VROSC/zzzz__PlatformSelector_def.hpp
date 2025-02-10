#pragma once
// IWYU pragma private; include "VROSC/PlatformSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformSelector)
namespace LIV::SDK::Unity {
class LIV;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class UserAccountAgeCategory;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class HmdProfile;
}
namespace VROSC {
struct PlatformSelector_AgeCategory;
}
namespace VROSC {
class PlatformSelector_DebugSettings;
}
namespace VROSC {
struct PlatformSelector_Platform;
}
namespace VROSC {
class VRPlayer;
}
// Forward declare root types
namespace VROSC {
struct PlatformSelector_AgeCategory;
}
namespace VROSC {
struct PlatformSelector_Platform;
}
namespace VROSC {
class PlatformSelector;
}
namespace VROSC {
class PlatformSelector_DebugSettings;
}
// Write type traits
MARK_VAL_T(::VROSC::PlatformSelector_AgeCategory);
MARK_VAL_T(::VROSC::PlatformSelector_Platform);
MARK_REF_PTR_T(::VROSC::PlatformSelector);
MARK_REF_PTR_T(::VROSC::PlatformSelector_DebugSettings);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PlatformSelector/Platform
struct CORDL_TYPE PlatformSelector_Platform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlatformSelector_Platform_Unwrapped
enum struct __PlatformSelector_Platform_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Oculus = static_cast<int32_t>(0x1),
__E_Steam = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformSelector_Platform_Unwrapped () const noexcept {
return static_cast<__PlatformSelector_Platform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlatformSelector_Platform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformSelector_Platform(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::VROSC::PlatformSelector_Platform const None;

/// @brief Field Oculus value: I32(1)
static ::VROSC::PlatformSelector_Platform const Oculus;

/// @brief Field Steam value: I32(2)
static ::VROSC::PlatformSelector_Platform const Steam;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlatformSelector_Platform, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlatformSelector_Platform, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.PlatformSelector/AgeCategory
struct CORDL_TYPE PlatformSelector_AgeCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlatformSelector_AgeCategory_Unwrapped
enum struct __PlatformSelector_AgeCategory_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Child = static_cast<int32_t>(0x1),
__E_Teen = static_cast<int32_t>(0x2),
__E_Adult = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformSelector_AgeCategory_Unwrapped () const noexcept {
return static_cast<__PlatformSelector_AgeCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlatformSelector_AgeCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformSelector_AgeCategory(int32_t  value__) noexcept;

/// @brief Field Adult value: I32(3)
static ::VROSC::PlatformSelector_AgeCategory const Adult;

/// @brief Field Child value: I32(1)
static ::VROSC::PlatformSelector_AgeCategory const Child;

/// @brief Field Teen value: I32(2)
static ::VROSC::PlatformSelector_AgeCategory const Teen;

/// @brief Field Unknown value: I32(0)
static ::VROSC::PlatformSelector_AgeCategory const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlatformSelector_AgeCategory, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlatformSelector_AgeCategory, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.PlatformSelector::Platform
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlatformSelector/DebugSettings
class CORDL_TYPE PlatformSelector_DebugSettings : public ::System::Object {
public:
// Declarations
/// @brief Field DisableVR, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableVR, put=__cordl_internal_set_DisableVR)) bool  DisableVR;

/// @brief Field DummyOculusId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DummyOculusId, put=__cordl_internal_set_DummyOculusId)) ::StringW  DummyOculusId;

/// @brief Field DummyUsername, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DummyUsername, put=__cordl_internal_set_DummyUsername)) ::StringW  DummyUsername;

/// @brief Field PassEntitlements, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_PassEntitlements, put=__cordl_internal_set_PassEntitlements)) bool  PassEntitlements;

/// @brief Field Platform, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::VROSC::PlatformSelector_Platform  Platform;

static inline ::VROSC::PlatformSelector_DebugSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_DisableVR() const;

constexpr bool& __cordl_internal_get_DisableVR() ;

constexpr ::StringW const& __cordl_internal_get_DummyOculusId() const;

constexpr ::StringW& __cordl_internal_get_DummyOculusId() ;

constexpr ::StringW const& __cordl_internal_get_DummyUsername() const;

constexpr ::StringW& __cordl_internal_get_DummyUsername() ;

constexpr bool const& __cordl_internal_get_PassEntitlements() const;

constexpr bool& __cordl_internal_get_PassEntitlements() ;

constexpr ::VROSC::PlatformSelector_Platform const& __cordl_internal_get_Platform() const;

constexpr ::VROSC::PlatformSelector_Platform& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_DisableVR(bool  value) ;

constexpr void __cordl_internal_set_DummyOculusId(::StringW  value) ;

constexpr void __cordl_internal_set_DummyUsername(::StringW  value) ;

constexpr void __cordl_internal_set_PassEntitlements(bool  value) ;

constexpr void __cordl_internal_set_Platform(::VROSC::PlatformSelector_Platform  value) ;

/// @brief Method .ctor, addr 0x16f1e24, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformSelector_DebugSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformSelector_DebugSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformSelector_DebugSettings(PlatformSelector_DebugSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformSelector_DebugSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformSelector_DebugSettings(PlatformSelector_DebugSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{776};

/// @brief Field DisableVR, offset: 0x10, size: 0x1, def value: None
 bool  ___DisableVR;

/// @brief Field DummyOculusId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DummyOculusId;

/// @brief Field DummyUsername, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DummyUsername;

/// @brief Field PassEntitlements, offset: 0x28, size: 0x1, def value: None
 bool  ___PassEntitlements;

/// @brief Field Platform, offset: 0x2c, size: 0x4, def value: None
 ::VROSC::PlatformSelector_Platform  ___Platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlatformSelector_DebugSettings, ___DisableVR) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector_DebugSettings, ___DummyOculusId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector_DebugSettings, ___DummyUsername) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector_DebugSettings, ___PassEntitlements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector_DebugSettings, ___Platform) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlatformSelector_DebugSettings, 0x30>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour, VROSC.PlatformSelector::AgeCategory, VROSC.PlatformSelector::Platform
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PlatformSelector
class CORDL_TYPE PlatformSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AgeCategory = ::VROSC::PlatformSelector_AgeCategory;

using DebugSettings = ::VROSC::PlatformSelector_DebugSettings;

using Platform = ::VROSC::PlatformSelector_Platform;

 __declspec(property(get=get_CurrentHmdProfile, put=set_CurrentHmdProfile)) ::UnityW<::VROSC::HmdProfile>  CurrentHmdProfile;

 __declspec(property(get=get_CurrentPlatform, put=set_CurrentPlatform)) ::VROSC::PlatformSelector_Platform  CurrentPlatform;

 __declspec(property(get=get_HasPassedEntitlement, put=set_HasPassedEntitlement)) bool  HasPassedEntitlement;

 __declspec(property(get=get_HasReceivedCallback, put=set_HasReceivedCallback)) bool  HasReceivedCallback;

/// @brief Field OnPlayerInitialized, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerInitialized, put=setStaticF_OnPlayerInitialized)) ::System::Action_1<::UnityW<::VROSC::VRPlayer>>*  OnPlayerInitialized;

 __declspec(property(get=get_PlatformUID, put=set_PlatformUID)) ::StringW  PlatformUID;

 __declspec(property(get=get_PlatformUsername, put=set_PlatformUsername)) ::StringW  PlatformUsername;

 __declspec(property(get=get_UserAgeCategory, put=set_UserAgeCategory)) ::VROSC::PlatformSelector_AgeCategory  UserAgeCategory;

 __declspec(property(get=get_VRPlayer, put=set_VRPlayer)) ::UnityW<::VROSC::VRPlayer>  VRPlayer;

/// @brief Field <CurrentHmdProfile>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentHmdProfile_k__BackingField, put=__cordl_internal_set__CurrentHmdProfile_k__BackingField)) ::UnityW<::VROSC::HmdProfile>  _CurrentHmdProfile_k__BackingField;

/// @brief Field <CurrentPlatform>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentPlatform_k__BackingField, put=__cordl_internal_set__CurrentPlatform_k__BackingField)) ::VROSC::PlatformSelector_Platform  _CurrentPlatform_k__BackingField;

/// @brief Field <HasPassedEntitlement>k__BackingField, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasPassedEntitlement_k__BackingField, put=__cordl_internal_set__HasPassedEntitlement_k__BackingField)) bool  _HasPassedEntitlement_k__BackingField;

/// @brief Field <HasReceivedCallback>k__BackingField, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasReceivedCallback_k__BackingField, put=__cordl_internal_set__HasReceivedCallback_k__BackingField)) bool  _HasReceivedCallback_k__BackingField;

/// @brief Field <PlatformUID>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlatformUID_k__BackingField, put=__cordl_internal_set__PlatformUID_k__BackingField)) ::StringW  _PlatformUID_k__BackingField;

/// @brief Field <PlatformUsername>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlatformUsername_k__BackingField, put=__cordl_internal_set__PlatformUsername_k__BackingField)) ::StringW  _PlatformUsername_k__BackingField;

/// @brief Field <UserAgeCategory>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__UserAgeCategory_k__BackingField, put=__cordl_internal_set__UserAgeCategory_k__BackingField)) ::VROSC::PlatformSelector_AgeCategory  _UserAgeCategory_k__BackingField;

/// @brief Field <VRPlayer>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__VRPlayer_k__BackingField, put=__cordl_internal_set__VRPlayer_k__BackingField)) ::UnityW<::VROSC::VRPlayer>  _VRPlayer_k__BackingField;

/// @brief Field _applicationUserID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__applicationUserID, put=__cordl_internal_set__applicationUserID)) uint64_t  _applicationUserID;

/// @brief Field _bypassEntitlementCheck, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypassEntitlementCheck, put=__cordl_internal_set__bypassEntitlementCheck)) bool  _bypassEntitlementCheck;

/// @brief Field _debugPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugPrefab, put=__cordl_internal_set__debugPrefab)) ::UnityW<::VROSC::VRPlayer>  _debugPrefab;

/// @brief Field _debugSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugSettings, put=__cordl_internal_set__debugSettings)) ::VROSC::PlatformSelector_DebugSettings*  _debugSettings;

/// @brief Field _hmdProfiles, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmdProfiles, put=__cordl_internal_set__hmdProfiles)) ::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*>  _hmdProfiles;

/// @brief Field _liv, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__liv, put=__cordl_internal_set__liv)) ::UnityW<::LIV::SDK::Unity::LIV>  _liv;

/// @brief Field _oculusPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__oculusPrefab, put=__cordl_internal_set__oculusPrefab)) ::UnityW<::VROSC::VRPlayer>  _oculusPrefab;

/// @brief Field _steamPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__steamPrefab, put=__cordl_internal_set__steamPrefab)) ::UnityW<::VROSC::VRPlayer>  _steamPrefab;

/// @brief Field _waitingForUserId, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingForUserId, put=__cordl_internal_set__waitingForUserId)) bool  _waitingForUserId;

/// @brief Method CopyComponent, addr 0x16f1cf8, size 0xd4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> CopyComponent(::UnityEngine::Component*  original, ::UnityEngine::GameObject*  destination) ;

/// @brief Method GetOculusOrgUserIdCallback, addr 0x16f19b4, size 0x24c, virtual false, abstract: false, final false
inline void GetOculusOrgUserIdCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>*  message) ;

/// @brief Method GetOculusUserAgeCategory, addr 0x16f1298, size 0x328, virtual false, abstract: false, final false
inline void GetOculusUserAgeCategory(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*  message) ;

/// @brief Method GetOculusUserCallback, addr 0x16f1780, size 0x234, virtual false, abstract: false, final false
inline void GetOculusUserCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*  message) ;

static inline ::VROSC::PlatformSelector* New_ctor() ;

/// @brief Method OculusEntitlementCallback, addr 0x16f1c00, size 0xf8, virtual false, abstract: false, final false
inline void OculusEntitlementCallback(::Oculus::Platform::Message*  msg) ;

/// @brief Method SetCurrentHmdProfile, addr 0x16f0bc8, size 0x228, virtual false, abstract: false, final false
inline void SetCurrentHmdProfile() ;

/// @brief Method Setup, addr 0x16f0870, size 0x358, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SetupCamera, addr 0x16f0df0, size 0x398, virtual false, abstract: false, final false
inline void SetupCamera() ;

/// @brief Method SpawnChildPlayer, addr 0x16f15c0, size 0x50, virtual false, abstract: false, final false
inline void SpawnChildPlayer() ;

/// @brief Method SpawnOculusPlayer, addr 0x16f1610, size 0x170, virtual false, abstract: false, final false
inline void SpawnOculusPlayer(bool  checkEntitlement) ;

/// @brief Method Update, addr 0x16f1188, size 0x110, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::VROSC::HmdProfile> const& __cordl_internal_get__CurrentHmdProfile_k__BackingField() const;

constexpr ::UnityW<::VROSC::HmdProfile>& __cordl_internal_get__CurrentHmdProfile_k__BackingField() ;

constexpr ::VROSC::PlatformSelector_Platform const& __cordl_internal_get__CurrentPlatform_k__BackingField() const;

constexpr ::VROSC::PlatformSelector_Platform& __cordl_internal_get__CurrentPlatform_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasPassedEntitlement_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasPassedEntitlement_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasReceivedCallback_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasReceivedCallback_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlatformUID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlatformUID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PlatformUsername_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PlatformUsername_k__BackingField() ;

constexpr ::VROSC::PlatformSelector_AgeCategory const& __cordl_internal_get__UserAgeCategory_k__BackingField() const;

constexpr ::VROSC::PlatformSelector_AgeCategory& __cordl_internal_get__UserAgeCategory_k__BackingField() ;

constexpr ::UnityW<::VROSC::VRPlayer> const& __cordl_internal_get__VRPlayer_k__BackingField() const;

constexpr ::UnityW<::VROSC::VRPlayer>& __cordl_internal_get__VRPlayer_k__BackingField() ;

constexpr uint64_t const& __cordl_internal_get__applicationUserID() const;

constexpr uint64_t& __cordl_internal_get__applicationUserID() ;

constexpr bool const& __cordl_internal_get__bypassEntitlementCheck() const;

constexpr bool& __cordl_internal_get__bypassEntitlementCheck() ;

constexpr ::UnityW<::VROSC::VRPlayer> const& __cordl_internal_get__debugPrefab() const;

constexpr ::UnityW<::VROSC::VRPlayer>& __cordl_internal_get__debugPrefab() ;

constexpr ::VROSC::PlatformSelector_DebugSettings* const& __cordl_internal_get__debugSettings() const;

constexpr ::VROSC::PlatformSelector_DebugSettings*& __cordl_internal_get__debugSettings() ;

constexpr ::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*> const& __cordl_internal_get__hmdProfiles() const;

constexpr ::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*>& __cordl_internal_get__hmdProfiles() ;

constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& __cordl_internal_get__liv() const;

constexpr ::UnityW<::LIV::SDK::Unity::LIV>& __cordl_internal_get__liv() ;

constexpr ::UnityW<::VROSC::VRPlayer> const& __cordl_internal_get__oculusPrefab() const;

constexpr ::UnityW<::VROSC::VRPlayer>& __cordl_internal_get__oculusPrefab() ;

constexpr ::UnityW<::VROSC::VRPlayer> const& __cordl_internal_get__steamPrefab() const;

constexpr ::UnityW<::VROSC::VRPlayer>& __cordl_internal_get__steamPrefab() ;

constexpr bool const& __cordl_internal_get__waitingForUserId() const;

constexpr bool& __cordl_internal_get__waitingForUserId() ;

constexpr void __cordl_internal_set__CurrentHmdProfile_k__BackingField(::UnityW<::VROSC::HmdProfile>  value) ;

constexpr void __cordl_internal_set__CurrentPlatform_k__BackingField(::VROSC::PlatformSelector_Platform  value) ;

constexpr void __cordl_internal_set__HasPassedEntitlement_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__HasReceivedCallback_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PlatformUID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PlatformUsername_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UserAgeCategory_k__BackingField(::VROSC::PlatformSelector_AgeCategory  value) ;

constexpr void __cordl_internal_set__VRPlayer_k__BackingField(::UnityW<::VROSC::VRPlayer>  value) ;

constexpr void __cordl_internal_set__applicationUserID(uint64_t  value) ;

constexpr void __cordl_internal_set__bypassEntitlementCheck(bool  value) ;

constexpr void __cordl_internal_set__debugPrefab(::UnityW<::VROSC::VRPlayer>  value) ;

constexpr void __cordl_internal_set__debugSettings(::VROSC::PlatformSelector_DebugSettings*  value) ;

constexpr void __cordl_internal_set__hmdProfiles(::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*>  value) ;

constexpr void __cordl_internal_set__liv(::UnityW<::LIV::SDK::Unity::LIV>  value) ;

constexpr void __cordl_internal_set__oculusPrefab(::UnityW<::VROSC::VRPlayer>  value) ;

constexpr void __cordl_internal_set__steamPrefab(::UnityW<::VROSC::VRPlayer>  value) ;

constexpr void __cordl_internal_set__waitingForUserId(bool  value) ;

/// @brief Method .ctor, addr 0x16f1dcc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::VROSC::VRPlayer>>* getStaticF_OnPlayerInitialized() ;

/// @brief Method get_CurrentHmdProfile, addr 0x16f0860, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::HmdProfile> get_CurrentHmdProfile() ;

/// @brief Method get_CurrentPlatform, addr 0x16f0850, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::PlatformSelector_Platform get_CurrentPlatform() ;

/// @brief Method get_HasPassedEntitlement, addr 0x16f0828, size 0x8, virtual false, abstract: false, final false
inline bool get_HasPassedEntitlement() ;

/// @brief Method get_HasReceivedCallback, addr 0x16f083c, size 0x8, virtual false, abstract: false, final false
inline bool get_HasReceivedCallback() ;

/// @brief Method get_PlatformUID, addr 0x16f07f8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlatformUID() ;

/// @brief Method get_PlatformUsername, addr 0x16f0808, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PlatformUsername() ;

/// @brief Method get_UserAgeCategory, addr 0x16f0818, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::PlatformSelector_AgeCategory get_UserAgeCategory() ;

/// @brief Method get_VRPlayer, addr 0x16f07e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::VRPlayer> get_VRPlayer() ;

static inline void setStaticF_OnPlayerInitialized(::System::Action_1<::UnityW<::VROSC::VRPlayer>>*  value) ;

/// @brief Method set_CurrentHmdProfile, addr 0x16f0868, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentHmdProfile(::VROSC::HmdProfile*  value) ;

/// @brief Method set_CurrentPlatform, addr 0x16f0858, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentPlatform(::VROSC::PlatformSelector_Platform  value) ;

/// @brief Method set_HasPassedEntitlement, addr 0x16f0830, size 0xc, virtual false, abstract: false, final false
inline void set_HasPassedEntitlement(bool  value) ;

/// @brief Method set_HasReceivedCallback, addr 0x16f0844, size 0xc, virtual false, abstract: false, final false
inline void set_HasReceivedCallback(bool  value) ;

/// @brief Method set_PlatformUID, addr 0x16f0800, size 0x8, virtual false, abstract: false, final false
inline void set_PlatformUID(::StringW  value) ;

/// @brief Method set_PlatformUsername, addr 0x16f0810, size 0x8, virtual false, abstract: false, final false
inline void set_PlatformUsername(::StringW  value) ;

/// @brief Method set_UserAgeCategory, addr 0x16f0820, size 0x8, virtual false, abstract: false, final false
inline void set_UserAgeCategory(::VROSC::PlatformSelector_AgeCategory  value) ;

/// @brief Method set_VRPlayer, addr 0x16f07f0, size 0x8, virtual false, abstract: false, final false
inline void set_VRPlayer(::VROSC::VRPlayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformSelector(PlatformSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformSelector(PlatformSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{777};

/// @brief Field _oculusPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::VRPlayer>  ____oculusPrefab;

/// @brief Field _steamPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::VRPlayer>  ____steamPrefab;

/// @brief Field _debugPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::VRPlayer>  ____debugPrefab;

/// @brief Field _debugSettings, offset: 0x38, size: 0x8, def value: None
 ::VROSC::PlatformSelector_DebugSettings*  ____debugSettings;

/// @brief Field _hmdProfiles, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::HmdProfile>,::Array<::UnityW<::VROSC::HmdProfile>>*>  ____hmdProfiles;

/// @brief Field _liv, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::LIV::SDK::Unity::LIV>  ____liv;

/// @brief Field _bypassEntitlementCheck, offset: 0x50, size: 0x1, def value: None
 bool  ____bypassEntitlementCheck;

/// @brief Field _applicationUserID, offset: 0x58, size: 0x8, def value: None
 uint64_t  ____applicationUserID;

/// @brief Field _waitingForUserId, offset: 0x60, size: 0x1, def value: None
 bool  ____waitingForUserId;

/// @brief Field <VRPlayer>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::VROSC::VRPlayer>  ____VRPlayer_k__BackingField;

/// @brief Field <PlatformUID>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____PlatformUID_k__BackingField;

/// @brief Field <PlatformUsername>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____PlatformUsername_k__BackingField;

/// @brief Field <UserAgeCategory>k__BackingField, offset: 0x80, size: 0x4, def value: None
 ::VROSC::PlatformSelector_AgeCategory  ____UserAgeCategory_k__BackingField;

/// @brief Field <HasPassedEntitlement>k__BackingField, offset: 0x84, size: 0x1, def value: None
 bool  ____HasPassedEntitlement_k__BackingField;

/// @brief Field <HasReceivedCallback>k__BackingField, offset: 0x85, size: 0x1, def value: None
 bool  ____HasReceivedCallback_k__BackingField;

/// @brief Field <CurrentPlatform>k__BackingField, offset: 0x88, size: 0x4, def value: None
 ::VROSC::PlatformSelector_Platform  ____CurrentPlatform_k__BackingField;

/// @brief Field <CurrentHmdProfile>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::VROSC::HmdProfile>  ____CurrentHmdProfile_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PlatformSelector, ____oculusPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____steamPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____debugPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____debugSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____hmdProfiles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____liv) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____bypassEntitlementCheck) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____applicationUserID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____waitingForUserId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____VRPlayer_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____PlatformUID_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____PlatformUsername_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____UserAgeCategory_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____HasPassedEntitlement_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____HasReceivedCallback_k__BackingField) == 0x85, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____CurrentPlatform_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::PlatformSelector, ____CurrentHmdProfile_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PlatformSelector, 0x98>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector_AgeCategory, "VROSC", "PlatformSelector/AgeCategory");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector_Platform, "VROSC", "PlatformSelector/Platform");
NEED_NO_BOX(::VROSC::PlatformSelector);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector*, "VROSC", "PlatformSelector");
NEED_NO_BOX(::VROSC::PlatformSelector_DebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector_DebugSettings*, "VROSC", "PlatformSelector/DebugSettings");
