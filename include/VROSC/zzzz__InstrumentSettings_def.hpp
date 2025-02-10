#pragma once
// IWYU pragma private; include "VROSC/InstrumentSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentSettings)
namespace VROSC {
class InstrumentSettings_ScaleSettings;
}
namespace VROSC {
class PatchGroup;
}
// Forward declare root types
namespace VROSC {
class InstrumentSettings;
}
namespace VROSC {
class InstrumentSettings_ScaleSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentSettings);
MARK_REF_PTR_T(::VROSC::InstrumentSettings_ScaleSettings);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentSettings/ScaleSettings
class CORDL_TYPE InstrumentSettings_ScaleSettings : public ::System::Object {
public:
// Declarations
/// @brief Field DefaultIncludeNotes, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_DefaultIncludeNotes, put=__cordl_internal_set_DefaultIncludeNotes)) int32_t  DefaultIncludeNotes;

/// @brief Field OverrideScaleDefaults, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideScaleDefaults, put=__cordl_internal_set_OverrideScaleDefaults)) bool  OverrideScaleDefaults;

/// @brief Field ScaleNotesToggled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScaleNotesToggled, put=__cordl_internal_set_ScaleNotesToggled)) ::ArrayW<bool,::Array<bool>*>  ScaleNotesToggled;

/// @brief Field StartNoteIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartNoteIndex, put=__cordl_internal_set_StartNoteIndex)) int32_t  StartNoteIndex;

static inline ::VROSC::InstrumentSettings_ScaleSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_DefaultIncludeNotes() const;

constexpr int32_t& __cordl_internal_get_DefaultIncludeNotes() ;

constexpr bool const& __cordl_internal_get_OverrideScaleDefaults() const;

constexpr bool& __cordl_internal_get_OverrideScaleDefaults() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __cordl_internal_get_ScaleNotesToggled() const;

constexpr ::ArrayW<bool,::Array<bool>*>& __cordl_internal_get_ScaleNotesToggled() ;

constexpr int32_t const& __cordl_internal_get_StartNoteIndex() const;

constexpr int32_t& __cordl_internal_get_StartNoteIndex() ;

constexpr void __cordl_internal_set_DefaultIncludeNotes(int32_t  value) ;

constexpr void __cordl_internal_set_OverrideScaleDefaults(bool  value) ;

constexpr void __cordl_internal_set_ScaleNotesToggled(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr void __cordl_internal_set_StartNoteIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x171095c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentSettings_ScaleSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentSettings_ScaleSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentSettings_ScaleSettings(InstrumentSettings_ScaleSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentSettings_ScaleSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentSettings_ScaleSettings(InstrumentSettings_ScaleSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{884};

/// @brief Field StartNoteIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___StartNoteIndex;

/// @brief Field DefaultIncludeNotes, offset: 0x14, size: 0x4, def value: None
 int32_t  ___DefaultIncludeNotes;

/// @brief Field OverrideScaleDefaults, offset: 0x18, size: 0x1, def value: None
 bool  ___OverrideScaleDefaults;

/// @brief Field ScaleNotesToggled, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool,::Array<bool>*>  ___ScaleNotesToggled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentSettings_ScaleSettings, ___StartNoteIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings_ScaleSettings, ___DefaultIncludeNotes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings_ScaleSettings, ___OverrideScaleDefaults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings_ScaleSettings, ___ScaleNotesToggled) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentSettings_ScaleSettings, 0x28>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.WidgetSettings
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentSettings
class CORDL_TYPE InstrumentSettings : public ::VROSC::WidgetSettings {
public:
// Declarations
using ScaleSettings = ::VROSC::InstrumentSettings_ScaleSettings;

 __declspec(property(get=get_MaxOctave)) int32_t  MaxOctave;

 __declspec(property(get=get_MinOctave)) int32_t  MinOctave;

 __declspec(property(get=get_PatchGroup)) ::UnityW<::VROSC::PatchGroup>  PatchGroup;

 __declspec(property(get=get_ScalesSettings)) ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>  ScalesSettings;

 __declspec(property(get=get_StartOctave)) int32_t  StartOctave;

 __declspec(property(get=get_StartingChannel)) int32_t  StartingChannel;

 __declspec(property(get=get_StartingPatch)) int32_t  StartingPatch;

/// @brief Field _maxOctave, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxOctave, put=__cordl_internal_set__maxOctave)) int32_t  _maxOctave;

/// @brief Field _minOctave, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minOctave, put=__cordl_internal_set__minOctave)) int32_t  _minOctave;

/// @brief Field _patches, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__patches, put=__cordl_internal_set__patches)) ::UnityW<::VROSC::PatchGroup>  _patches;

/// @brief Field _scalesSettings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalesSettings, put=__cordl_internal_set__scalesSettings)) ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>  _scalesSettings;

/// @brief Field _startChannel, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startChannel, put=__cordl_internal_set__startChannel)) int32_t  _startChannel;

/// @brief Field _startOctave, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__startOctave, put=__cordl_internal_set__startOctave)) int32_t  _startOctave;

/// @brief Field _startingPatch, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingPatch, put=__cordl_internal_set__startingPatch)) int32_t  _startingPatch;

static inline ::VROSC::InstrumentSettings* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__maxOctave() const;

constexpr int32_t& __cordl_internal_get__maxOctave() ;

constexpr int32_t const& __cordl_internal_get__minOctave() const;

constexpr int32_t& __cordl_internal_get__minOctave() ;

constexpr ::UnityW<::VROSC::PatchGroup> const& __cordl_internal_get__patches() const;

constexpr ::UnityW<::VROSC::PatchGroup>& __cordl_internal_get__patches() ;

constexpr ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*> const& __cordl_internal_get__scalesSettings() const;

constexpr ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>& __cordl_internal_get__scalesSettings() ;

constexpr int32_t const& __cordl_internal_get__startChannel() const;

constexpr int32_t& __cordl_internal_get__startChannel() ;

constexpr int32_t const& __cordl_internal_get__startOctave() const;

constexpr int32_t& __cordl_internal_get__startOctave() ;

constexpr int32_t const& __cordl_internal_get__startingPatch() const;

constexpr int32_t& __cordl_internal_get__startingPatch() ;

constexpr void __cordl_internal_set__maxOctave(int32_t  value) ;

constexpr void __cordl_internal_set__minOctave(int32_t  value) ;

constexpr void __cordl_internal_set__patches(::UnityW<::VROSC::PatchGroup>  value) ;

constexpr void __cordl_internal_set__scalesSettings(::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>  value) ;

constexpr void __cordl_internal_set__startChannel(int32_t  value) ;

constexpr void __cordl_internal_set__startOctave(int32_t  value) ;

constexpr void __cordl_internal_set__startingPatch(int32_t  value) ;

/// @brief Method .ctor, addr 0x1710938, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxOctave, addr 0x1710928, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxOctave() ;

/// @brief Method get_MinOctave, addr 0x1710920, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinOctave() ;

/// @brief Method get_PatchGroup, addr 0x1710900, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::PatchGroup> get_PatchGroup() ;

/// @brief Method get_ScalesSettings, addr 0x1710930, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*> get_ScalesSettings() ;

/// @brief Method get_StartOctave, addr 0x1710918, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartOctave() ;

/// @brief Method get_StartingChannel, addr 0x1710910, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartingChannel() ;

/// @brief Method get_StartingPatch, addr 0x1710908, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartingPatch() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentSettings(InstrumentSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentSettings(InstrumentSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{885};

/// @brief Field _patches, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::PatchGroup>  ____patches;

/// @brief Field _startingPatch, offset: 0x30, size: 0x4, def value: None
 int32_t  ____startingPatch;

/// @brief Field _startChannel, offset: 0x34, size: 0x4, def value: None
 int32_t  ____startChannel;

/// @brief Field _startOctave, offset: 0x38, size: 0x4, def value: None
 int32_t  ____startOctave;

/// @brief Field _minOctave, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____minOctave;

/// @brief Field _maxOctave, offset: 0x40, size: 0x4, def value: None
 int32_t  ____maxOctave;

/// @brief Field _scalesSettings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::VROSC::InstrumentSettings_ScaleSettings*,::Array<::VROSC::InstrumentSettings_ScaleSettings*>*>  ____scalesSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentSettings, ____patches) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings, ____startingPatch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings, ____startChannel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings, ____startOctave) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings, ____minOctave) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings, ____maxOctave) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentSettings, ____scalesSettings) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentSettings, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentSettings*, "VROSC", "InstrumentSettings");
NEED_NO_BOX(::VROSC::InstrumentSettings_ScaleSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentSettings_ScaleSettings*, "VROSC", "InstrumentSettings/ScaleSettings");
