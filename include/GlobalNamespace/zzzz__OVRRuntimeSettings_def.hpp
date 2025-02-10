#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRuntimeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRRuntimeSettings)
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingFidelity2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRuntimeSettings);
// Dependencies OVRManager::ColorSpace, OVRPlugin::BodyJointSet, OVRPlugin::BodyTrackingFidelity2, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRuntimeSettings
class CORDL_TYPE OVRRuntimeSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_BodyTrackingFidelity, put=set_BodyTrackingFidelity)) ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  BodyTrackingFidelity;

 __declspec(property(get=get_BodyTrackingJointSet, put=set_BodyTrackingJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet  BodyTrackingJointSet;

 __declspec(property(get=get_HasSetTelemetryEnabled)) bool  HasSetTelemetryEnabled;

/// @brief Field OnTelemetrySet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTelemetrySet, put=__cordl_internal_set_OnTelemetrySet)) ::System::Action_1<bool>*  OnTelemetrySet;

 __declspec(property(get=get_RequestsAudioFaceTracking, put=set_RequestsAudioFaceTracking)) bool  RequestsAudioFaceTracking;

 __declspec(property(get=get_RequestsVisualFaceTracking, put=set_RequestsVisualFaceTracking)) bool  RequestsVisualFaceTracking;

 __declspec(property(get=get_TelemetryEnabled)) bool  TelemetryEnabled;

 __declspec(property(get=get_TelemetryProjectGuid)) ::StringW  TelemetryProjectGuid;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::OVRRuntimeSettings>  _instance;

/// @brief Field bodyTrackingFidelity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyTrackingFidelity, put=__cordl_internal_set_bodyTrackingFidelity)) ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  bodyTrackingFidelity;

/// @brief Field bodyTrackingJointSet, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyTrackingJointSet, put=__cordl_internal_set_bodyTrackingJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet  bodyTrackingJointSet;

/// @brief Field colorSpace, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorSpace, put=__cordl_internal_set_colorSpace)) ::GlobalNamespace::OVRManager_ColorSpace  colorSpace;

/// @brief Field hasSentConsentEvent, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSentConsentEvent, put=__cordl_internal_set_hasSentConsentEvent)) bool  hasSentConsentEvent;

/// @brief Field hasSetTelemetryEnabled, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSetTelemetryEnabled, put=__cordl_internal_set_hasSetTelemetryEnabled)) bool  hasSetTelemetryEnabled;

/// @brief Field requestsAudioFaceTracking, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestsAudioFaceTracking, put=__cordl_internal_set_requestsAudioFaceTracking)) bool  requestsAudioFaceTracking;

/// @brief Field requestsVisualFaceTracking, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestsVisualFaceTracking, put=__cordl_internal_set_requestsVisualFaceTracking)) bool  requestsVisualFaceTracking;

/// @brief Field telemetryEnabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_telemetryEnabled, put=__cordl_internal_set_telemetryEnabled)) bool  telemetryEnabled;

/// @brief Field telemetryProjectGuid, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_telemetryProjectGuid, put=__cordl_internal_set_telemetryProjectGuid)) ::StringW  telemetryProjectGuid;

/// @brief Method GetRuntimeSettings, addr 0x290d894, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GetRuntimeSettings() ;

static inline ::GlobalNamespace::OVRRuntimeSettings* New_ctor() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnTelemetrySet() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnTelemetrySet() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 const& __cordl_internal_get_bodyTrackingFidelity() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2& __cordl_internal_get_bodyTrackingFidelity() ;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet const& __cordl_internal_get_bodyTrackingJointSet() const;

constexpr ::GlobalNamespace::OVRPlugin_BodyJointSet& __cordl_internal_get_bodyTrackingJointSet() ;

constexpr ::GlobalNamespace::OVRManager_ColorSpace const& __cordl_internal_get_colorSpace() const;

constexpr ::GlobalNamespace::OVRManager_ColorSpace& __cordl_internal_get_colorSpace() ;

constexpr bool const& __cordl_internal_get_hasSentConsentEvent() const;

constexpr bool& __cordl_internal_get_hasSentConsentEvent() ;

constexpr bool const& __cordl_internal_get_hasSetTelemetryEnabled() const;

constexpr bool& __cordl_internal_get_hasSetTelemetryEnabled() ;

constexpr bool const& __cordl_internal_get_requestsAudioFaceTracking() const;

constexpr bool& __cordl_internal_get_requestsAudioFaceTracking() ;

constexpr bool const& __cordl_internal_get_requestsVisualFaceTracking() const;

constexpr bool& __cordl_internal_get_requestsVisualFaceTracking() ;

constexpr bool const& __cordl_internal_get_telemetryEnabled() const;

constexpr bool& __cordl_internal_get_telemetryEnabled() ;

constexpr ::StringW const& __cordl_internal_get_telemetryProjectGuid() const;

constexpr ::StringW& __cordl_internal_get_telemetryProjectGuid() ;

constexpr void __cordl_internal_set_OnTelemetrySet(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_bodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  value) ;

constexpr void __cordl_internal_set_bodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

constexpr void __cordl_internal_set_colorSpace(::GlobalNamespace::OVRManager_ColorSpace  value) ;

constexpr void __cordl_internal_set_hasSentConsentEvent(bool  value) ;

constexpr void __cordl_internal_set_hasSetTelemetryEnabled(bool  value) ;

constexpr void __cordl_internal_set_requestsAudioFaceTracking(bool  value) ;

constexpr void __cordl_internal_set_requestsVisualFaceTracking(bool  value) ;

constexpr void __cordl_internal_set_telemetryEnabled(bool  value) ;

constexpr void __cordl_internal_set_telemetryProjectGuid(::StringW  value) ;

/// @brief Method .ctor, addr 0x290da64, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> getStaticF__instance() ;

/// @brief Method get_BodyTrackingFidelity, addr 0x290da44, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2 get_BodyTrackingFidelity() ;

/// @brief Method get_BodyTrackingJointSet, addr 0x290da54, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyJointSet get_BodyTrackingJointSet() ;

/// @brief Method get_HasSetTelemetryEnabled, addr 0x290d9d0, size 0x8, virtual false, abstract: false, final false
inline bool get_HasSetTelemetryEnabled() ;

/// @brief Method get_Instance, addr 0x290d7f8, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> get_Instance() ;

/// @brief Method get_RequestsAudioFaceTracking, addr 0x290d9bc, size 0x8, virtual false, abstract: false, final false
inline bool get_RequestsAudioFaceTracking() ;

/// @brief Method get_RequestsVisualFaceTracking, addr 0x290d9a8, size 0x8, virtual false, abstract: false, final false
inline bool get_RequestsVisualFaceTracking() ;

/// @brief Method get_TelemetryEnabled, addr 0x290d9d8, size 0x20, virtual false, abstract: false, final false
inline bool get_TelemetryEnabled() ;

/// @brief Method get_TelemetryProjectGuid, addr 0x290d9f8, size 0x4c, virtual false, abstract: false, final false
inline ::StringW get_TelemetryProjectGuid() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVRRuntimeSettings>  value) ;

/// @brief Method set_BodyTrackingFidelity, addr 0x290da4c, size 0x8, virtual false, abstract: false, final false
inline void set_BodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  value) ;

/// @brief Method set_BodyTrackingJointSet, addr 0x290da5c, size 0x8, virtual false, abstract: false, final false
inline void set_BodyTrackingJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

/// @brief Method set_RequestsAudioFaceTracking, addr 0x290d9c4, size 0xc, virtual false, abstract: false, final false
inline void set_RequestsAudioFaceTracking(bool  value) ;

/// @brief Method set_RequestsVisualFaceTracking, addr 0x290d9b0, size 0xc, virtual false, abstract: false, final false
inline void set_RequestsVisualFaceTracking(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRRuntimeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRRuntimeSettings(OVRRuntimeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRRuntimeSettings(OVRRuntimeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6501};

/// @brief Field colorSpace, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRManager_ColorSpace  ___colorSpace;

/// @brief Field requestsVisualFaceTracking, offset: 0x1c, size: 0x1, def value: None
 bool  ___requestsVisualFaceTracking;

/// @brief Field requestsAudioFaceTracking, offset: 0x1d, size: 0x1, def value: None
 bool  ___requestsAudioFaceTracking;

/// @brief Field hasSentConsentEvent, offset: 0x1e, size: 0x1, def value: None
 bool  ___hasSentConsentEvent;

/// @brief Field hasSetTelemetryEnabled, offset: 0x1f, size: 0x1, def value: None
 bool  ___hasSetTelemetryEnabled;

/// @brief Field telemetryEnabled, offset: 0x20, size: 0x1, def value: None
 bool  ___telemetryEnabled;

/// @brief Field telemetryProjectGuid, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___telemetryProjectGuid;

/// @brief Field OnTelemetrySet, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnTelemetrySet;

/// @brief Field bodyTrackingFidelity, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  ___bodyTrackingFidelity;

/// @brief Field bodyTrackingJointSet, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointSet  ___bodyTrackingJointSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___colorSpace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___requestsVisualFaceTracking) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___requestsAudioFaceTracking) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___hasSentConsentEvent) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___hasSetTelemetryEnabled) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___telemetryEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___telemetryProjectGuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___OnTelemetrySet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___bodyTrackingFidelity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRuntimeSettings, ___bodyTrackingJointSet) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeSettings, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings*, "", "OVRRuntimeSettings");
