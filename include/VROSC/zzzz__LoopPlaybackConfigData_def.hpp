#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackConfigData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
CORDL_MODULE_EXPORT(LoopPlaybackConfigData)
namespace VROSC {
struct LoopPlaybackConfig_LoopMode;
}
namespace VROSC {
struct LoopPlaybackConfig_Sync;
}
// Forward declare root types
namespace VROSC {
class LoopPlaybackConfigData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlaybackConfigData);
// Dependencies System.Object, VROSC.LoopPlaybackConfig::FadeDuration, VROSC.LoopPlaybackConfig::TriggerSync
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackConfigData
class CORDL_TYPE LoopPlaybackConfigData : public ::System::Object {
public:
// Declarations
/// @brief Field FadeIn, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FadeIn, put=__cordl_internal_set_FadeIn)) ::VROSC::LoopPlaybackConfig_FadeDuration  FadeIn;

/// @brief Field FadeOut, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_FadeOut, put=__cordl_internal_set_FadeOut)) ::VROSC::LoopPlaybackConfig_FadeDuration  FadeOut;

/// @brief Field IsStartModeLocked, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsStartModeLocked, put=__cordl_internal_set_IsStartModeLocked)) bool  IsStartModeLocked;

 __declspec(property(get=get_Looping)) ::VROSC::LoopPlaybackConfig_LoopMode  Looping;

/// @brief Field OneShot, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_OneShot, put=__cordl_internal_set_OneShot)) bool  OneShot;

/// @brief Field Retrigger, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_Retrigger, put=__cordl_internal_set_Retrigger)) bool  Retrigger;

 __declspec(property(get=get_RetriggeringOneshot)) bool  RetriggeringOneshot;

/// @brief Field StartMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartMode, put=__cordl_internal_set_StartMode)) ::VROSC::LoopPlaybackConfig_TriggerSync  StartMode;

/// @brief Field StopMode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StopMode, put=__cordl_internal_set_StopMode)) ::VROSC::LoopPlaybackConfig_TriggerSync  StopMode;

 __declspec(property(get=get_SyncMode)) ::VROSC::LoopPlaybackConfig_Sync  SyncMode;

static inline ::VROSC::LoopPlaybackConfigData* New_ctor() ;

static inline ::VROSC::LoopPlaybackConfigData* New_ctor(::VROSC::LoopPlaybackConfigData*  other) ;

constexpr ::VROSC::LoopPlaybackConfig_FadeDuration const& __cordl_internal_get_FadeIn() const;

constexpr ::VROSC::LoopPlaybackConfig_FadeDuration& __cordl_internal_get_FadeIn() ;

constexpr ::VROSC::LoopPlaybackConfig_FadeDuration const& __cordl_internal_get_FadeOut() const;

constexpr ::VROSC::LoopPlaybackConfig_FadeDuration& __cordl_internal_get_FadeOut() ;

constexpr bool const& __cordl_internal_get_IsStartModeLocked() const;

constexpr bool& __cordl_internal_get_IsStartModeLocked() ;

constexpr bool const& __cordl_internal_get_OneShot() const;

constexpr bool& __cordl_internal_get_OneShot() ;

constexpr bool const& __cordl_internal_get_Retrigger() const;

constexpr bool& __cordl_internal_get_Retrigger() ;

constexpr ::VROSC::LoopPlaybackConfig_TriggerSync const& __cordl_internal_get_StartMode() const;

constexpr ::VROSC::LoopPlaybackConfig_TriggerSync& __cordl_internal_get_StartMode() ;

constexpr ::VROSC::LoopPlaybackConfig_TriggerSync const& __cordl_internal_get_StopMode() const;

constexpr ::VROSC::LoopPlaybackConfig_TriggerSync& __cordl_internal_get_StopMode() ;

constexpr void __cordl_internal_set_FadeIn(::VROSC::LoopPlaybackConfig_FadeDuration  value) ;

constexpr void __cordl_internal_set_FadeOut(::VROSC::LoopPlaybackConfig_FadeDuration  value) ;

constexpr void __cordl_internal_set_IsStartModeLocked(bool  value) ;

constexpr void __cordl_internal_set_OneShot(bool  value) ;

constexpr void __cordl_internal_set_Retrigger(bool  value) ;

constexpr void __cordl_internal_set_StartMode(::VROSC::LoopPlaybackConfig_TriggerSync  value) ;

constexpr void __cordl_internal_set_StopMode(::VROSC::LoopPlaybackConfig_TriggerSync  value) ;

/// @brief Method .ctor, addr 0x18989a8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18989c8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackConfigData*  other) ;

/// @brief Method get_Looping, addr 0x1898a5c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfig_LoopMode get_Looping() ;

/// @brief Method get_RetriggeringOneshot, addr 0x1898a64, size 0x20, virtual false, abstract: false, final false
inline bool get_RetriggeringOneshot() ;

/// @brief Method get_SyncMode, addr 0x1898a3c, size 0x20, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfig_Sync get_SyncMode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfigData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfigData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackConfigData(LoopPlaybackConfigData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfigData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackConfigData(LoopPlaybackConfigData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{655};

/// @brief Field StartMode, offset: 0x10, size: 0x4, def value: None
 ::VROSC::LoopPlaybackConfig_TriggerSync  ___StartMode;

/// @brief Field IsStartModeLocked, offset: 0x14, size: 0x1, def value: None
 bool  ___IsStartModeLocked;

/// @brief Field StopMode, offset: 0x18, size: 0x4, def value: None
 ::VROSC::LoopPlaybackConfig_TriggerSync  ___StopMode;

/// @brief Field FadeIn, offset: 0x1c, size: 0x4, def value: None
 ::VROSC::LoopPlaybackConfig_FadeDuration  ___FadeIn;

/// @brief Field FadeOut, offset: 0x20, size: 0x4, def value: None
 ::VROSC::LoopPlaybackConfig_FadeDuration  ___FadeOut;

/// @brief Field OneShot, offset: 0x24, size: 0x1, def value: None
 bool  ___OneShot;

/// @brief Field Retrigger, offset: 0x25, size: 0x1, def value: None
 bool  ___Retrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___StartMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___IsStartModeLocked) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___StopMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___FadeIn) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___FadeOut) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___OneShot) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigData, ___Retrigger) == 0x25, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfigData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlaybackConfigData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfigData*, "VROSC", "LoopPlaybackConfigData");
