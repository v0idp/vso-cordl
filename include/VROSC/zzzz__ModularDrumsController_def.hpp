#pragma once
// IWYU pragma private; include "VROSC/ModularDrumsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModularDrumsController)
namespace UnityEngine {
class AudioClip;
}
namespace VROSC {
class DrumEffectsUI;
}
namespace VROSC {
class DrumsControlPanelUI;
}
namespace VROSC {
class ModularDrumpads;
}
namespace VROSC {
class ModularDrumsDataController;
}
namespace VROSC {
class PatchSettings;
}
namespace VROSC {
class UserDataControllers;
}
// Forward declare root types
namespace VROSC {
class ModularDrumsController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ModularDrumsController);
// Dependencies VROSC.InstrumentController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ModularDrumsController
class CORDL_TYPE ModularDrumsController : public ::VROSC::InstrumentController {
public:
// Declarations
 __declspec(property(get=get_CurrentPatchSettings)) ::VROSC::PatchSettings*  CurrentPatchSettings;

 __declspec(property(get=get_DataController)) ::VROSC::ModularDrumsDataController*  DataController;

 __declspec(property(get=get__drumsControlPanelUI)) ::UnityW<::VROSC::DrumsControlPanelUI>  _drumsControlPanelUI;

/// @brief Field _effectsUI, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__effectsUI, put=__cordl_internal_set__effectsUI)) ::UnityW<::VROSC::DrumEffectsUI>  _effectsUI;

/// @brief Field _modularDrumpads, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__modularDrumpads, put=__cordl_internal_set__modularDrumpads)) ::UnityW<::VROSC::ModularDrumpads>  _modularDrumpads;

/// @brief Field _patchSettings, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__patchSettings, put=__cordl_internal_set__patchSettings)) ::VROSC::PatchSettings*  _patchSettings;

/// @brief Method Awake, addr 0x179453c, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeleteAllPressed, addr 0x179492c, size 0x1c, virtual false, abstract: false, final false
inline void DeleteAllPressed() ;

/// @brief Method GetSampleAudioClip, addr 0x1794fa4, size 0x1f4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> GetSampleAudioClip(int32_t  sampleId) ;

/// @brief Method GetSampleDisplayName, addr 0x17949c8, size 0x1f4, virtual false, abstract: false, final false
static inline ::StringW GetSampleDisplayName(int32_t  sampleId) ;

/// @brief Method GetSampleGroupDisplayName, addr 0x1794bbc, size 0x1f4, virtual false, abstract: false, final false
static inline ::StringW GetSampleGroupDisplayName(int32_t  sampleId) ;

/// @brief Method GetSampleGroupNoteNumber, addr 0x1794db0, size 0x1f4, virtual false, abstract: false, final false
static inline int32_t GetSampleGroupNoteNumber(int32_t  sampleId) ;

static inline ::VROSC::ModularDrumsController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1794614, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Setup, addr 0x17946ec, size 0x60, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method Toggle, addr 0x1794948, size 0x80, virtual true, abstract: false, final false
inline void Toggle() ;

/// @brief Method UpdateOutput, addr 0x17948d0, size 0x5c, virtual true, abstract: false, final false
inline void UpdateOutput() ;

/// @brief Method UserDataLoaded, addr 0x179474c, size 0x184, virtual true, abstract: false, final false
inline void UserDataLoaded(::VROSC::UserDataControllers*  user) ;

constexpr ::UnityW<::VROSC::DrumEffectsUI> const& __cordl_internal_get__effectsUI() const;

constexpr ::UnityW<::VROSC::DrumEffectsUI>& __cordl_internal_get__effectsUI() ;

constexpr ::UnityW<::VROSC::ModularDrumpads> const& __cordl_internal_get__modularDrumpads() const;

constexpr ::UnityW<::VROSC::ModularDrumpads>& __cordl_internal_get__modularDrumpads() ;

constexpr ::VROSC::PatchSettings* const& __cordl_internal_get__patchSettings() const;

constexpr ::VROSC::PatchSettings*& __cordl_internal_get__patchSettings() ;

constexpr void __cordl_internal_set__effectsUI(::UnityW<::VROSC::DrumEffectsUI>  value) ;

constexpr void __cordl_internal_set__modularDrumpads(::UnityW<::VROSC::ModularDrumpads>  value) ;

constexpr void __cordl_internal_set__patchSettings(::VROSC::PatchSettings*  value) ;

/// @brief Method .ctor, addr 0x1795198, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentPatchSettings, addr 0x17944bc, size 0x8, virtual true, abstract: false, final false
inline ::VROSC::PatchSettings* get_CurrentPatchSettings() ;

/// @brief Method get_DataController, addr 0x1780df4, size 0x78, virtual false, abstract: false, final false
inline ::VROSC::ModularDrumsDataController* get_DataController() ;

/// @brief Method get__drumsControlPanelUI, addr 0x17944c4, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::DrumsControlPanelUI> get__drumsControlPanelUI() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModularDrumsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModularDrumsController(ModularDrumsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModularDrumsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModularDrumsController(ModularDrumsController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1344};

/// @brief Field _modularDrumpads, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::VROSC::ModularDrumpads>  ____modularDrumpads;

/// @brief Field _effectsUI, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumEffectsUI>  ____effectsUI;

/// @brief Field _patchSettings, offset: 0xd8, size: 0x8, def value: None
 ::VROSC::PatchSettings*  ____patchSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ModularDrumsController, ____modularDrumpads) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsController, ____effectsUI) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VROSC::ModularDrumsController, ____patchSettings) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ModularDrumsController, 0xe0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ModularDrumsController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ModularDrumsController*, "VROSC", "ModularDrumsController");
