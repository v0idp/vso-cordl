#pragma once
// IWYU pragma private; include "DG/Tweening/Core/DOTweenSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/Core/Enums/zzzz__NestedTweenFailureBehaviour_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__RewindCallbackMode_def.hpp"
#include "DG/Tweening/zzzz__AutoPlay_def.hpp"
#include "DG/Tweening/zzzz__Ease_def.hpp"
#include "DG/Tweening/zzzz__LogBehaviour_def.hpp"
#include "DG/Tweening/zzzz__LoopType_def.hpp"
#include "DG/Tweening/zzzz__UpdateType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenSettings)
namespace DG::Tweening::Core {
class DOTweenSettings_ModulesSetup;
}
namespace DG::Tweening::Core {
class DOTweenSettings_SafeModeOptions;
}
namespace DG::Tweening::Core {
struct DOTweenSettings_SettingsLocation;
}
// Forward declare root types
namespace DG::Tweening::Core {
struct DOTweenSettings_SettingsLocation;
}
namespace DG::Tweening::Core {
class DOTweenSettings;
}
namespace DG::Tweening::Core {
class DOTweenSettings_ModulesSetup;
}
namespace DG::Tweening::Core {
class DOTweenSettings_SafeModeOptions;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Core::DOTweenSettings_SettingsLocation);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenSettings);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenSettings_ModulesSetup);
MARK_REF_PTR_T(::DG::Tweening::Core::DOTweenSettings_SafeModeOptions);
// Dependencies 
namespace DG::Tweening::Core {
// Is value type: true
// CS Name: DG.Tweening.Core.DOTweenSettings/SettingsLocation
struct CORDL_TYPE DOTweenSettings_SettingsLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DOTweenSettings_SettingsLocation_Unwrapped
enum struct __DOTweenSettings_SettingsLocation_Unwrapped : int32_t {
__E_AssetsDirectory = static_cast<int32_t>(0x0),
__E_DOTweenDirectory = static_cast<int32_t>(0x1),
__E_DemigiantDirectory = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DOTweenSettings_SettingsLocation_Unwrapped () const noexcept {
return static_cast<__DOTweenSettings_SettingsLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DOTweenSettings_SettingsLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DOTweenSettings_SettingsLocation(int32_t  value__) noexcept;

/// @brief Field AssetsDirectory value: I32(0)
static ::DG::Tweening::Core::DOTweenSettings_SettingsLocation const AssetsDirectory;

/// @brief Field DOTweenDirectory value: I32(1)
static ::DG::Tweening::Core::DOTweenSettings_SettingsLocation const DOTweenDirectory;

/// @brief Field DemigiantDirectory value: I32(2)
static ::DG::Tweening::Core::DOTweenSettings_SettingsLocation const DemigiantDirectory;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_SettingsLocation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenSettings_SettingsLocation, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies DG.Tweening.Core.Enums.NestedTweenFailureBehaviour, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenSettings/SafeModeOptions
class CORDL_TYPE DOTweenSettings_SafeModeOptions : public ::System::Object {
public:
// Declarations
/// @brief Field nestedTweenFailureBehaviour, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_nestedTweenFailureBehaviour, put=__cordl_internal_set_nestedTweenFailureBehaviour)) ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour  nestedTweenFailureBehaviour;

static inline ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions* New_ctor() ;

constexpr ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour const& __cordl_internal_get_nestedTweenFailureBehaviour() const;

constexpr ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour& __cordl_internal_get_nestedTweenFailureBehaviour() ;

constexpr void __cordl_internal_set_nestedTweenFailureBehaviour(::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour  value) ;

/// @brief Method .ctor, addr 0x18e60c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenSettings_SafeModeOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenSettings_SafeModeOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenSettings_SafeModeOptions(DOTweenSettings_SafeModeOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenSettings_SafeModeOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenSettings_SafeModeOptions(DOTweenSettings_SafeModeOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10844};

/// @brief Field nestedTweenFailureBehaviour, offset: 0x10, size: 0x4, def value: None
 ::DG::Tweening::Core::Enums::NestedTweenFailureBehaviour  ___nestedTweenFailureBehaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_SafeModeOptions, ___nestedTweenFailureBehaviour) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenSettings_SafeModeOptions, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenSettings/ModulesSetup
class CORDL_TYPE DOTweenSettings_ModulesSetup : public ::System::Object {
public:
// Declarations
/// @brief Field audioEnabled, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_audioEnabled, put=__cordl_internal_set_audioEnabled)) bool  audioEnabled;

/// @brief Field physics2DEnabled, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_physics2DEnabled, put=__cordl_internal_set_physics2DEnabled)) bool  physics2DEnabled;

/// @brief Field physicsEnabled, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_physicsEnabled, put=__cordl_internal_set_physicsEnabled)) bool  physicsEnabled;

/// @brief Field showPanel, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_showPanel, put=__cordl_internal_set_showPanel)) bool  showPanel;

/// @brief Field spriteEnabled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_spriteEnabled, put=__cordl_internal_set_spriteEnabled)) bool  spriteEnabled;

/// @brief Field textMeshProEnabled, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_textMeshProEnabled, put=__cordl_internal_set_textMeshProEnabled)) bool  textMeshProEnabled;

/// @brief Field tk2DEnabled, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_tk2DEnabled, put=__cordl_internal_set_tk2DEnabled)) bool  tk2DEnabled;

/// @brief Field uiEnabled, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_uiEnabled, put=__cordl_internal_set_uiEnabled)) bool  uiEnabled;

static inline ::DG::Tweening::Core::DOTweenSettings_ModulesSetup* New_ctor() ;

constexpr bool const& __cordl_internal_get_audioEnabled() const;

constexpr bool& __cordl_internal_get_audioEnabled() ;

constexpr bool const& __cordl_internal_get_physics2DEnabled() const;

constexpr bool& __cordl_internal_get_physics2DEnabled() ;

constexpr bool const& __cordl_internal_get_physicsEnabled() const;

constexpr bool& __cordl_internal_get_physicsEnabled() ;

constexpr bool const& __cordl_internal_get_showPanel() const;

constexpr bool& __cordl_internal_get_showPanel() ;

constexpr bool const& __cordl_internal_get_spriteEnabled() const;

constexpr bool& __cordl_internal_get_spriteEnabled() ;

constexpr bool const& __cordl_internal_get_textMeshProEnabled() const;

constexpr bool& __cordl_internal_get_textMeshProEnabled() ;

constexpr bool const& __cordl_internal_get_tk2DEnabled() const;

constexpr bool& __cordl_internal_get_tk2DEnabled() ;

constexpr bool const& __cordl_internal_get_uiEnabled() const;

constexpr bool& __cordl_internal_get_uiEnabled() ;

constexpr void __cordl_internal_set_audioEnabled(bool  value) ;

constexpr void __cordl_internal_set_physics2DEnabled(bool  value) ;

constexpr void __cordl_internal_set_physicsEnabled(bool  value) ;

constexpr void __cordl_internal_set_showPanel(bool  value) ;

constexpr void __cordl_internal_set_spriteEnabled(bool  value) ;

constexpr void __cordl_internal_set_textMeshProEnabled(bool  value) ;

constexpr void __cordl_internal_set_tk2DEnabled(bool  value) ;

constexpr void __cordl_internal_set_uiEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x18e60c8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenSettings_ModulesSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenSettings_ModulesSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenSettings_ModulesSetup(DOTweenSettings_ModulesSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenSettings_ModulesSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenSettings_ModulesSetup(DOTweenSettings_ModulesSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10845};

/// @brief Field showPanel, offset: 0x10, size: 0x1, def value: None
 bool  ___showPanel;

/// @brief Field audioEnabled, offset: 0x11, size: 0x1, def value: None
 bool  ___audioEnabled;

/// @brief Field physicsEnabled, offset: 0x12, size: 0x1, def value: None
 bool  ___physicsEnabled;

/// @brief Field physics2DEnabled, offset: 0x13, size: 0x1, def value: None
 bool  ___physics2DEnabled;

/// @brief Field spriteEnabled, offset: 0x14, size: 0x1, def value: None
 bool  ___spriteEnabled;

/// @brief Field uiEnabled, offset: 0x15, size: 0x1, def value: None
 bool  ___uiEnabled;

/// @brief Field textMeshProEnabled, offset: 0x16, size: 0x1, def value: None
 bool  ___textMeshProEnabled;

/// @brief Field tk2DEnabled, offset: 0x17, size: 0x1, def value: None
 bool  ___tk2DEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___showPanel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___audioEnabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___physicsEnabled) == 0x12, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___physics2DEnabled) == 0x13, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___spriteEnabled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___uiEnabled) == 0x15, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___textMeshProEnabled) == 0x16, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings_ModulesSetup, ___tk2DEnabled) == 0x17, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenSettings_ModulesSetup, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies DG.Tweening.AutoPlay, DG.Tweening.Core.DOTweenSettings::SettingsLocation, DG.Tweening.Core.Enums.RewindCallbackMode, DG.Tweening.Ease, DG.Tweening.LogBehaviour, DG.Tweening.LoopType, DG.Tweening.UpdateType, UnityEngine.ScriptableObject
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.DOTweenSettings
class CORDL_TYPE DOTweenSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ModulesSetup = ::DG::Tweening::Core::DOTweenSettings_ModulesSetup;

using SafeModeOptions = ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions;

using SettingsLocation = ::DG::Tweening::Core::DOTweenSettings_SettingsLocation;

/// @brief Field debugMode, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugMode, put=__cordl_internal_set_debugMode)) bool  debugMode;

/// @brief Field debugStoreTargetId, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugStoreTargetId, put=__cordl_internal_set_debugStoreTargetId)) bool  debugStoreTargetId;

/// @brief Field defaultAutoKill, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_defaultAutoKill, put=__cordl_internal_set_defaultAutoKill)) bool  defaultAutoKill;

/// @brief Field defaultAutoPlay, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultAutoPlay, put=__cordl_internal_set_defaultAutoPlay)) ::DG::Tweening::AutoPlay  defaultAutoPlay;

/// @brief Field defaultEaseOvershootOrAmplitude, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultEaseOvershootOrAmplitude, put=__cordl_internal_set_defaultEaseOvershootOrAmplitude)) float_t  defaultEaseOvershootOrAmplitude;

/// @brief Field defaultEasePeriod, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultEasePeriod, put=__cordl_internal_set_defaultEasePeriod)) float_t  defaultEasePeriod;

/// @brief Field defaultEaseType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultEaseType, put=__cordl_internal_set_defaultEaseType)) ::DG::Tweening::Ease  defaultEaseType;

/// @brief Field defaultLoopType, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultLoopType, put=__cordl_internal_set_defaultLoopType)) ::DG::Tweening::LoopType  defaultLoopType;

/// @brief Field defaultRecyclable, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_defaultRecyclable, put=__cordl_internal_set_defaultRecyclable)) bool  defaultRecyclable;

/// @brief Field defaultTimeScaleIndependent, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_defaultTimeScaleIndependent, put=__cordl_internal_set_defaultTimeScaleIndependent)) bool  defaultTimeScaleIndependent;

/// @brief Field defaultUpdateType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultUpdateType, put=__cordl_internal_set_defaultUpdateType)) ::DG::Tweening::UpdateType  defaultUpdateType;

/// @brief Field drawGizmos, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawGizmos, put=__cordl_internal_set_drawGizmos)) bool  drawGizmos;

/// @brief Field logBehaviour, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_logBehaviour, put=__cordl_internal_set_logBehaviour)) ::DG::Tweening::LogBehaviour  logBehaviour;

/// @brief Field maxSmoothUnscaledTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSmoothUnscaledTime, put=__cordl_internal_set_maxSmoothUnscaledTime)) float_t  maxSmoothUnscaledTime;

/// @brief Field modules, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_modules, put=__cordl_internal_set_modules)) ::DG::Tweening::Core::DOTweenSettings_ModulesSetup*  modules;

/// @brief Field rewindCallbackMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rewindCallbackMode, put=__cordl_internal_set_rewindCallbackMode)) ::DG::Tweening::Core::Enums::RewindCallbackMode  rewindCallbackMode;

/// @brief Field safeModeOptions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_safeModeOptions, put=__cordl_internal_set_safeModeOptions)) ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*  safeModeOptions;

/// @brief Field showPausedTweens, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_showPausedTweens, put=__cordl_internal_set_showPausedTweens)) bool  showPausedTweens;

/// @brief Field showPlayingTweens, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_showPlayingTweens, put=__cordl_internal_set_showPlayingTweens)) bool  showPlayingTweens;

/// @brief Field showPreviewPanel, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get_showPreviewPanel, put=__cordl_internal_set_showPreviewPanel)) bool  showPreviewPanel;

/// @brief Field showUnityEditorReport, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_showUnityEditorReport, put=__cordl_internal_set_showUnityEditorReport)) bool  showUnityEditorReport;

/// @brief Field storeSettingsLocation, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_storeSettingsLocation, put=__cordl_internal_set_storeSettingsLocation)) ::DG::Tweening::Core::DOTweenSettings_SettingsLocation  storeSettingsLocation;

/// @brief Field timeScale, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeScale, put=__cordl_internal_set_timeScale)) float_t  timeScale;

/// @brief Field useSafeMode, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSafeMode, put=__cordl_internal_set_useSafeMode)) bool  useSafeMode;

/// @brief Field useSmoothDeltaTime, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSmoothDeltaTime, put=__cordl_internal_set_useSmoothDeltaTime)) bool  useSmoothDeltaTime;

static inline ::DG::Tweening::Core::DOTweenSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_debugMode() const;

constexpr bool& __cordl_internal_get_debugMode() ;

constexpr bool const& __cordl_internal_get_debugStoreTargetId() const;

constexpr bool& __cordl_internal_get_debugStoreTargetId() ;

constexpr bool const& __cordl_internal_get_defaultAutoKill() const;

constexpr bool& __cordl_internal_get_defaultAutoKill() ;

constexpr ::DG::Tweening::AutoPlay const& __cordl_internal_get_defaultAutoPlay() const;

constexpr ::DG::Tweening::AutoPlay& __cordl_internal_get_defaultAutoPlay() ;

constexpr float_t const& __cordl_internal_get_defaultEaseOvershootOrAmplitude() const;

constexpr float_t& __cordl_internal_get_defaultEaseOvershootOrAmplitude() ;

constexpr float_t const& __cordl_internal_get_defaultEasePeriod() const;

constexpr float_t& __cordl_internal_get_defaultEasePeriod() ;

constexpr ::DG::Tweening::Ease const& __cordl_internal_get_defaultEaseType() const;

constexpr ::DG::Tweening::Ease& __cordl_internal_get_defaultEaseType() ;

constexpr ::DG::Tweening::LoopType const& __cordl_internal_get_defaultLoopType() const;

constexpr ::DG::Tweening::LoopType& __cordl_internal_get_defaultLoopType() ;

constexpr bool const& __cordl_internal_get_defaultRecyclable() const;

constexpr bool& __cordl_internal_get_defaultRecyclable() ;

constexpr bool const& __cordl_internal_get_defaultTimeScaleIndependent() const;

constexpr bool& __cordl_internal_get_defaultTimeScaleIndependent() ;

constexpr ::DG::Tweening::UpdateType const& __cordl_internal_get_defaultUpdateType() const;

constexpr ::DG::Tweening::UpdateType& __cordl_internal_get_defaultUpdateType() ;

constexpr bool const& __cordl_internal_get_drawGizmos() const;

constexpr bool& __cordl_internal_get_drawGizmos() ;

constexpr ::DG::Tweening::LogBehaviour const& __cordl_internal_get_logBehaviour() const;

constexpr ::DG::Tweening::LogBehaviour& __cordl_internal_get_logBehaviour() ;

constexpr float_t const& __cordl_internal_get_maxSmoothUnscaledTime() const;

constexpr float_t& __cordl_internal_get_maxSmoothUnscaledTime() ;

constexpr ::DG::Tweening::Core::DOTweenSettings_ModulesSetup* const& __cordl_internal_get_modules() const;

constexpr ::DG::Tweening::Core::DOTweenSettings_ModulesSetup*& __cordl_internal_get_modules() ;

constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode const& __cordl_internal_get_rewindCallbackMode() const;

constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode& __cordl_internal_get_rewindCallbackMode() ;

constexpr ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions* const& __cordl_internal_get_safeModeOptions() const;

constexpr ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*& __cordl_internal_get_safeModeOptions() ;

constexpr bool const& __cordl_internal_get_showPausedTweens() const;

constexpr bool& __cordl_internal_get_showPausedTweens() ;

constexpr bool const& __cordl_internal_get_showPlayingTweens() const;

constexpr bool& __cordl_internal_get_showPlayingTweens() ;

constexpr bool const& __cordl_internal_get_showPreviewPanel() const;

constexpr bool& __cordl_internal_get_showPreviewPanel() ;

constexpr bool const& __cordl_internal_get_showUnityEditorReport() const;

constexpr bool& __cordl_internal_get_showUnityEditorReport() ;

constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation const& __cordl_internal_get_storeSettingsLocation() const;

constexpr ::DG::Tweening::Core::DOTweenSettings_SettingsLocation& __cordl_internal_get_storeSettingsLocation() ;

constexpr float_t const& __cordl_internal_get_timeScale() const;

constexpr float_t& __cordl_internal_get_timeScale() ;

constexpr bool const& __cordl_internal_get_useSafeMode() const;

constexpr bool& __cordl_internal_get_useSafeMode() ;

constexpr bool const& __cordl_internal_get_useSmoothDeltaTime() const;

constexpr bool& __cordl_internal_get_useSmoothDeltaTime() ;

constexpr void __cordl_internal_set_debugMode(bool  value) ;

constexpr void __cordl_internal_set_debugStoreTargetId(bool  value) ;

constexpr void __cordl_internal_set_defaultAutoKill(bool  value) ;

constexpr void __cordl_internal_set_defaultAutoPlay(::DG::Tweening::AutoPlay  value) ;

constexpr void __cordl_internal_set_defaultEaseOvershootOrAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_defaultEasePeriod(float_t  value) ;

constexpr void __cordl_internal_set_defaultEaseType(::DG::Tweening::Ease  value) ;

constexpr void __cordl_internal_set_defaultLoopType(::DG::Tweening::LoopType  value) ;

constexpr void __cordl_internal_set_defaultRecyclable(bool  value) ;

constexpr void __cordl_internal_set_defaultTimeScaleIndependent(bool  value) ;

constexpr void __cordl_internal_set_defaultUpdateType(::DG::Tweening::UpdateType  value) ;

constexpr void __cordl_internal_set_drawGizmos(bool  value) ;

constexpr void __cordl_internal_set_logBehaviour(::DG::Tweening::LogBehaviour  value) ;

constexpr void __cordl_internal_set_maxSmoothUnscaledTime(float_t  value) ;

constexpr void __cordl_internal_set_modules(::DG::Tweening::Core::DOTweenSettings_ModulesSetup*  value) ;

constexpr void __cordl_internal_set_rewindCallbackMode(::DG::Tweening::Core::Enums::RewindCallbackMode  value) ;

constexpr void __cordl_internal_set_safeModeOptions(::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*  value) ;

constexpr void __cordl_internal_set_showPausedTweens(bool  value) ;

constexpr void __cordl_internal_set_showPlayingTweens(bool  value) ;

constexpr void __cordl_internal_set_showPreviewPanel(bool  value) ;

constexpr void __cordl_internal_set_showUnityEditorReport(bool  value) ;

constexpr void __cordl_internal_set_storeSettingsLocation(::DG::Tweening::Core::DOTweenSettings_SettingsLocation  value) ;

constexpr void __cordl_internal_set_timeScale(float_t  value) ;

constexpr void __cordl_internal_set_useSafeMode(bool  value) ;

constexpr void __cordl_internal_set_useSmoothDeltaTime(bool  value) ;

/// @brief Method .ctor, addr 0x18e5fe0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenSettings(DOTweenSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenSettings(DOTweenSettings const& ) = delete;

/// @brief Field AssetFullFilename offset 0xffffffff size 0x8
static constexpr ::ConstString  AssetFullFilename{u"DOTweenSettings.asset"};

/// @brief Field AssetName offset 0xffffffff size 0x8
static constexpr ::ConstString  AssetName{u"DOTweenSettings"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10846};

/// @brief Field useSafeMode, offset: 0x18, size: 0x1, def value: None
 bool  ___useSafeMode;

/// @brief Field safeModeOptions, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*  ___safeModeOptions;

/// @brief Field timeScale, offset: 0x28, size: 0x4, def value: None
 float_t  ___timeScale;

/// @brief Field useSmoothDeltaTime, offset: 0x2c, size: 0x1, def value: None
 bool  ___useSmoothDeltaTime;

/// @brief Field maxSmoothUnscaledTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxSmoothUnscaledTime;

/// @brief Field rewindCallbackMode, offset: 0x34, size: 0x4, def value: None
 ::DG::Tweening::Core::Enums::RewindCallbackMode  ___rewindCallbackMode;

/// @brief Field showUnityEditorReport, offset: 0x38, size: 0x1, def value: None
 bool  ___showUnityEditorReport;

/// @brief Field logBehaviour, offset: 0x3c, size: 0x4, def value: None
 ::DG::Tweening::LogBehaviour  ___logBehaviour;

/// @brief Field drawGizmos, offset: 0x40, size: 0x1, def value: None
 bool  ___drawGizmos;

/// @brief Field defaultRecyclable, offset: 0x41, size: 0x1, def value: None
 bool  ___defaultRecyclable;

/// @brief Field defaultAutoPlay, offset: 0x44, size: 0x4, def value: None
 ::DG::Tweening::AutoPlay  ___defaultAutoPlay;

/// @brief Field defaultUpdateType, offset: 0x48, size: 0x4, def value: None
 ::DG::Tweening::UpdateType  ___defaultUpdateType;

/// @brief Field defaultTimeScaleIndependent, offset: 0x4c, size: 0x1, def value: None
 bool  ___defaultTimeScaleIndependent;

/// @brief Field defaultEaseType, offset: 0x50, size: 0x4, def value: None
 ::DG::Tweening::Ease  ___defaultEaseType;

/// @brief Field defaultEaseOvershootOrAmplitude, offset: 0x54, size: 0x4, def value: None
 float_t  ___defaultEaseOvershootOrAmplitude;

/// @brief Field defaultEasePeriod, offset: 0x58, size: 0x4, def value: None
 float_t  ___defaultEasePeriod;

/// @brief Field defaultAutoKill, offset: 0x5c, size: 0x1, def value: None
 bool  ___defaultAutoKill;

/// @brief Field defaultLoopType, offset: 0x60, size: 0x4, def value: None
 ::DG::Tweening::LoopType  ___defaultLoopType;

/// @brief Field debugMode, offset: 0x64, size: 0x1, def value: None
 bool  ___debugMode;

/// @brief Field debugStoreTargetId, offset: 0x65, size: 0x1, def value: None
 bool  ___debugStoreTargetId;

/// @brief Field showPreviewPanel, offset: 0x66, size: 0x1, def value: None
 bool  ___showPreviewPanel;

/// @brief Field storeSettingsLocation, offset: 0x68, size: 0x4, def value: None
 ::DG::Tweening::Core::DOTweenSettings_SettingsLocation  ___storeSettingsLocation;

/// @brief Field modules, offset: 0x70, size: 0x8, def value: None
 ::DG::Tweening::Core::DOTweenSettings_ModulesSetup*  ___modules;

/// @brief Field showPlayingTweens, offset: 0x78, size: 0x1, def value: None
 bool  ___showPlayingTweens;

/// @brief Field showPausedTweens, offset: 0x79, size: 0x1, def value: None
 bool  ___showPausedTweens;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___useSafeMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___safeModeOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___timeScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___useSmoothDeltaTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___maxSmoothUnscaledTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___rewindCallbackMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___showUnityEditorReport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___logBehaviour) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___drawGizmos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultRecyclable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultAutoPlay) == 0x44, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultUpdateType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultTimeScaleIndependent) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultEaseType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultEaseOvershootOrAmplitude) == 0x54, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultEasePeriod) == 0x58, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultAutoKill) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___defaultLoopType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___debugMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___debugStoreTargetId) == 0x65, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___showPreviewPanel) == 0x66, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___storeSettingsLocation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___modules) == 0x70, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___showPlayingTweens) == 0x78, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::DOTweenSettings, ___showPausedTweens) == 0x79, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::DOTweenSettings, 0x80>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenSettings_SettingsLocation, "DG.Tweening.Core", "DOTweenSettings/SettingsLocation");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenSettings);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenSettings*, "DG.Tweening.Core", "DOTweenSettings");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenSettings_ModulesSetup);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenSettings_ModulesSetup*, "DG.Tweening.Core", "DOTweenSettings/ModulesSetup");
NEED_NO_BOX(::DG::Tweening::Core::DOTweenSettings_SafeModeOptions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenSettings_SafeModeOptions*, "DG.Tweening.Core", "DOTweenSettings/SafeModeOptions");
