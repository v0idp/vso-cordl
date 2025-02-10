#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlaybackConfig)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace VROSC {
class LoopPlaybackConfigData;
}
namespace VROSC {
struct LoopPlaybackConfig_FadeDuration;
}
namespace VROSC {
struct LoopPlaybackConfig_LoopMode;
}
namespace VROSC {
struct LoopPlaybackConfig_Sync;
}
namespace VROSC {
struct LoopPlaybackConfig_TriggerSync;
}
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
namespace VROSC {
class Loop;
}
// Forward declare root types
namespace VROSC {
struct LoopPlaybackConfig_FadeDuration;
}
namespace VROSC {
struct LoopPlaybackConfig_LoopMode;
}
namespace VROSC {
struct LoopPlaybackConfig_Sync;
}
namespace VROSC {
struct LoopPlaybackConfig_TriggerSync;
}
namespace VROSC {
class LoopPlaybackConfig;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopPlaybackConfig_FadeDuration);
MARK_VAL_T(::VROSC::LoopPlaybackConfig_LoopMode);
MARK_VAL_T(::VROSC::LoopPlaybackConfig_Sync);
MARK_VAL_T(::VROSC::LoopPlaybackConfig_TriggerSync);
MARK_REF_PTR_T(::VROSC::LoopPlaybackConfig);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlaybackConfig/TriggerSync
struct CORDL_TYPE LoopPlaybackConfig_TriggerSync {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopPlaybackConfig_TriggerSync_Unwrapped
enum struct __LoopPlaybackConfig_TriggerSync_Unwrapped : int32_t {
__E_Instant = static_cast<int32_t>(0x0),
__E_LoopPoint = static_cast<int32_t>(0x1),
__E_Bar = static_cast<int32_t>(0x2),
__E_Quarter = static_cast<int32_t>(0x3),
__E_Eigth = static_cast<int32_t>(0x4),
__E_Sixteenth = static_cast<int32_t>(0x5),
__E_Twelfth = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopPlaybackConfig_TriggerSync_Unwrapped () const noexcept {
return static_cast<__LoopPlaybackConfig_TriggerSync_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfig_TriggerSync() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopPlaybackConfig_TriggerSync(int32_t  value__) noexcept;

/// @brief Field Bar value: I32(2)
static ::VROSC::LoopPlaybackConfig_TriggerSync const Bar;

/// @brief Field Eigth value: I32(4)
static ::VROSC::LoopPlaybackConfig_TriggerSync const Eigth;

/// @brief Field Instant value: I32(0)
static ::VROSC::LoopPlaybackConfig_TriggerSync const Instant;

/// @brief Field LoopPoint value: I32(1)
static ::VROSC::LoopPlaybackConfig_TriggerSync const LoopPoint;

/// @brief Field Quarter value: I32(3)
static ::VROSC::LoopPlaybackConfig_TriggerSync const Quarter;

/// @brief Field Sixteenth value: I32(5)
static ::VROSC::LoopPlaybackConfig_TriggerSync const Sixteenth;

/// @brief Field Twelfth value: I32(6)
static ::VROSC::LoopPlaybackConfig_TriggerSync const Twelfth;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{656};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfig_TriggerSync, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfig_TriggerSync, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlaybackConfig/FadeDuration
struct CORDL_TYPE LoopPlaybackConfig_FadeDuration {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopPlaybackConfig_FadeDuration_Unwrapped
enum struct __LoopPlaybackConfig_FadeDuration_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Sixteenth = static_cast<int32_t>(0x1),
__E_Eighth = static_cast<int32_t>(0x2),
__E_Quarter = static_cast<int32_t>(0x3),
__E_Bar = static_cast<int32_t>(0x4),
__E_TwoBars = static_cast<int32_t>(0x5),
__E_FourBars = static_cast<int32_t>(0x6),
__E_Auto = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopPlaybackConfig_FadeDuration_Unwrapped () const noexcept {
return static_cast<__LoopPlaybackConfig_FadeDuration_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfig_FadeDuration() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopPlaybackConfig_FadeDuration(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(7)
static ::VROSC::LoopPlaybackConfig_FadeDuration const Auto;

/// @brief Field Bar value: I32(4)
static ::VROSC::LoopPlaybackConfig_FadeDuration const Bar;

/// @brief Field Eighth value: I32(2)
static ::VROSC::LoopPlaybackConfig_FadeDuration const Eighth;

/// @brief Field FourBars value: I32(6)
static ::VROSC::LoopPlaybackConfig_FadeDuration const FourBars;

/// @brief Field None value: I32(0)
static ::VROSC::LoopPlaybackConfig_FadeDuration const None;

/// @brief Field Quarter value: I32(3)
static ::VROSC::LoopPlaybackConfig_FadeDuration const Quarter;

/// @brief Field Sixteenth value: I32(1)
static ::VROSC::LoopPlaybackConfig_FadeDuration const Sixteenth;

/// @brief Field TwoBars value: I32(5)
static ::VROSC::LoopPlaybackConfig_FadeDuration const TwoBars;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{657};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfig_FadeDuration, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfig_FadeDuration, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlaybackConfig/Sync
struct CORDL_TYPE LoopPlaybackConfig_Sync {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopPlaybackConfig_Sync_Unwrapped
enum struct __LoopPlaybackConfig_Sync_Unwrapped : int32_t {
__E_PlayFromStart = static_cast<int32_t>(0x0),
__E_Global = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopPlaybackConfig_Sync_Unwrapped () const noexcept {
return static_cast<__LoopPlaybackConfig_Sync_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfig_Sync() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopPlaybackConfig_Sync(int32_t  value__) noexcept;

/// @brief Field Global value: I32(1)
static ::VROSC::LoopPlaybackConfig_Sync const Global;

/// @brief Field PlayFromStart value: I32(0)
static ::VROSC::LoopPlaybackConfig_Sync const PlayFromStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{658};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfig_Sync, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfig_Sync, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlaybackConfig/LoopMode
struct CORDL_TYPE LoopPlaybackConfig_LoopMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoopPlaybackConfig_LoopMode_Unwrapped
enum struct __LoopPlaybackConfig_LoopMode_Unwrapped : int32_t {
__E_Loop = static_cast<int32_t>(0x0),
__E_Once = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoopPlaybackConfig_LoopMode_Unwrapped () const noexcept {
return static_cast<__LoopPlaybackConfig_LoopMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfig_LoopMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoopPlaybackConfig_LoopMode(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(0)
static ::VROSC::LoopPlaybackConfig_LoopMode const Loop;

/// @brief Field Once value: I32(1)
static ::VROSC::LoopPlaybackConfig_LoopMode const Once;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{659};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfig_LoopMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfig_LoopMode, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackConfig
class CORDL_TYPE LoopPlaybackConfig : public ::System::Object {
public:
// Declarations
using FadeDuration = ::VROSC::LoopPlaybackConfig_FadeDuration;

using LoopMode = ::VROSC::LoopPlaybackConfig_LoopMode;

using Sync = ::VROSC::LoopPlaybackConfig_Sync;

using TriggerSync = ::VROSC::LoopPlaybackConfig_TriggerSync;

 __declspec(property(get=get_Data, put=set_Data)) ::VROSC::LoopPlaybackConfigData*  Data;

/// @brief Field FadeDurationNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FadeDurationNames, put=setStaticF_FadeDurationNames)) ::ArrayW<::StringW,::Array<::StringW>*>  FadeDurationNames;

/// @brief Field OnConfigChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConfigChanged, put=__cordl_internal_set_OnConfigChanged)) ::System::Action*  OnConfigChanged;

/// @brief Field OnFadeInSet, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFadeInSet, put=__cordl_internal_set_OnFadeInSet)) ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  OnFadeInSet;

/// @brief Field OnFadeOutSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFadeOutSet, put=__cordl_internal_set_OnFadeOutSet)) ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  OnFadeOutSet;

/// @brief Field OnOneShotSet, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOneShotSet, put=__cordl_internal_set_OnOneShotSet)) ::System::Action_1<bool>*  OnOneShotSet;

/// @brief Field OnRetriggerSet, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRetriggerSet, put=__cordl_internal_set_OnRetriggerSet)) ::System::Action_1<bool>*  OnRetriggerSet;

/// @brief Field OnStartSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartSet, put=__cordl_internal_set_OnStartSet)) ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  OnStartSet;

/// @brief Field OnStopSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopSet, put=__cordl_internal_set_OnStopSet)) ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  OnStopSet;

 __declspec(property(get=get_ReferenceLoopForLength, put=set_ReferenceLoopForLength)) ::VROSC::Loop*  ReferenceLoopForLength;

 __declspec(property(get=get_ReferenceLoopForStart, put=set_ReferenceLoopForStart)) ::VROSC::Loop*  ReferenceLoopForStart;

/// @brief Field TriggerSyncNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TriggerSyncNames, put=setStaticF_TriggerSyncNames)) ::ArrayW<::StringW,::Array<::StringW>*>  TriggerSyncNames;

/// @brief Field <Data>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::VROSC::LoopPlaybackConfigData*  _Data_k__BackingField;

/// @brief Field <ReferenceLoopForLength>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReferenceLoopForLength_k__BackingField, put=__cordl_internal_set__ReferenceLoopForLength_k__BackingField)) ::VROSC::Loop*  _ReferenceLoopForLength_k__BackingField;

/// @brief Field <ReferenceLoopForStart>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReferenceLoopForStart_k__BackingField, put=__cordl_internal_set__ReferenceLoopForStart_k__BackingField)) ::VROSC::Loop*  _ReferenceLoopForStart_k__BackingField;

/// @brief Method ApplyTo, addr 0x1899148, size 0x5c, virtual true, abstract: false, final false
inline void ApplyTo(::VROSC::LoopPlaybackConfig*  other) ;

/// @brief Method GetFirstPlayConfig, addr 0x1899658, size 0x74, virtual false, abstract: false, final false
static inline ::VROSC::LoopPlaybackConfig* GetFirstPlayConfig(::VROSC::LoopPlaybackConfig*  recording) ;

/// @brief Method GetNextTriggerSyncPoint, addr 0x18993a4, size 0x170, virtual false, abstract: false, final false
static inline int32_t GetNextTriggerSyncPoint(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  sample, ::VROSC::LoopPlaybackConfig_TriggerSync  triggerSync) ;

/// @brief Method GetSyncLength, addr 0x1899514, size 0x144, virtual false, abstract: false, final false
static inline int32_t GetSyncLength(::VROSC::LoopPlayerPlaybackSettings*  settings, ::VROSC::LoopPlaybackConfig_TriggerSync  sync) ;

static inline ::VROSC::LoopPlaybackConfig* New_ctor() ;

static inline ::VROSC::LoopPlaybackConfig* New_ctor(::VROSC::LoopPlaybackConfigData*  configData) ;

static inline ::VROSC::LoopPlaybackConfig* New_ctor(::VROSC::LoopPlaybackConfig*  other, bool  updateFrom) ;

static inline ::VROSC::LoopPlaybackConfig* New_ctor(::VROSC::LoopPlaybackConfig_TriggerSync  startMode, bool  isStartModeLocked, ::VROSC::LoopPlaybackConfig_TriggerSync  stopMode, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut, bool  oneShot, bool  retrigger) ;

/// @brief Method SetFadeIn, addr 0x189924c, size 0x54, virtual false, abstract: false, final false
inline void SetFadeIn(::VROSC::LoopPlaybackConfig_FadeDuration  fade) ;

/// @brief Method SetFadeOut, addr 0x18992a0, size 0x54, virtual false, abstract: false, final false
inline void SetFadeOut(::VROSC::LoopPlaybackConfig_FadeDuration  fade) ;

/// @brief Method SetOneShot, addr 0x18992f4, size 0x58, virtual false, abstract: false, final false
inline void SetOneShot(bool  oneShot) ;

/// @brief Method SetRetrigger, addr 0x189934c, size 0x58, virtual false, abstract: false, final false
inline void SetRetrigger(bool  retrigger) ;

/// @brief Method SetStartMode, addr 0x18991a4, size 0x54, virtual false, abstract: false, final false
inline void SetStartMode(::VROSC::LoopPlaybackConfig_TriggerSync  startMode) ;

/// @brief Method SetStopMode, addr 0x18991f8, size 0x54, virtual false, abstract: false, final false
inline void SetStopMode(::VROSC::LoopPlaybackConfig_TriggerSync  stopMode) ;

/// @brief Method SharedConstructor, addr 0x1898b60, size 0x3c, virtual false, abstract: false, final false
inline void SharedConstructor(::VROSC::LoopPlaybackConfig_TriggerSync  startMode, bool  isStartModeLocked, ::VROSC::LoopPlaybackConfig_TriggerSync  stopMode, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut, bool  oneShot, bool  retrigger) ;

constexpr ::System::Action* const& __cordl_internal_get_OnConfigChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnConfigChanged() ;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>* const& __cordl_internal_get_OnFadeInSet() const;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*& __cordl_internal_get_OnFadeInSet() ;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>* const& __cordl_internal_get_OnFadeOutSet() const;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*& __cordl_internal_get_OnFadeOutSet() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnOneShotSet() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnOneShotSet() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnRetriggerSet() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnRetriggerSet() ;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>* const& __cordl_internal_get_OnStartSet() const;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*& __cordl_internal_get_OnStartSet() ;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>* const& __cordl_internal_get_OnStopSet() const;

constexpr ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*& __cordl_internal_get_OnStopSet() ;

constexpr ::VROSC::LoopPlaybackConfigData* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackConfigData*& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::VROSC::Loop* const& __cordl_internal_get__ReferenceLoopForLength_k__BackingField() const;

constexpr ::VROSC::Loop*& __cordl_internal_get__ReferenceLoopForLength_k__BackingField() ;

constexpr ::VROSC::Loop* const& __cordl_internal_get__ReferenceLoopForStart_k__BackingField() const;

constexpr ::VROSC::Loop*& __cordl_internal_get__ReferenceLoopForStart_k__BackingField() ;

constexpr void __cordl_internal_set_OnConfigChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnFadeInSet(::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  value) ;

constexpr void __cordl_internal_set_OnFadeOutSet(::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  value) ;

constexpr void __cordl_internal_set_OnOneShotSet(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnRetriggerSet(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnStartSet(::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  value) ;

constexpr void __cordl_internal_set_OnStopSet(::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::VROSC::LoopPlaybackConfigData*  value) ;

constexpr void __cordl_internal_set__ReferenceLoopForLength_k__BackingField(::VROSC::Loop*  value) ;

constexpr void __cordl_internal_set__ReferenceLoopForStart_k__BackingField(::VROSC::Loop*  value) ;

/// @brief Method .ctor, addr 0x1898ab4, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1898b9c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackConfigData*  configData) ;

/// @brief Method .ctor, addr 0x1898c64, size 0x3fc, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackConfig*  other, bool  updateFrom) ;

/// @brief Method .ctor, addr 0x1899060, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackConfig_TriggerSync  startMode, bool  isStartModeLocked, ::VROSC::LoopPlaybackConfig_TriggerSync  stopMode, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeIn, ::VROSC::LoopPlaybackConfig_FadeDuration  fadeOut, bool  oneShot, bool  retrigger) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_FadeDurationNames() ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_TriggerSyncNames() ;

/// @brief Method get_Data, addr 0x1898a8c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigData* get_Data() ;

/// @brief Method get_ReferenceLoopForLength, addr 0x1898aac, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Loop* get_ReferenceLoopForLength() ;

/// @brief Method get_ReferenceLoopForStart, addr 0x1898a9c, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::Loop* get_ReferenceLoopForStart() ;

static inline void setStaticF_FadeDurationNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline void setStaticF_TriggerSyncNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method set_Data, addr 0x1898a84, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::VROSC::LoopPlaybackConfigData*  value) ;

/// @brief Method set_ReferenceLoopForLength, addr 0x1898aa4, size 0x8, virtual false, abstract: false, final false
inline void set_ReferenceLoopForLength(::VROSC::Loop*  value) ;

/// @brief Method set_ReferenceLoopForStart, addr 0x1898a94, size 0x8, virtual false, abstract: false, final false
inline void set_ReferenceLoopForStart(::VROSC::Loop*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackConfig(LoopPlaybackConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackConfig(LoopPlaybackConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{660};

/// @brief Field <Data>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigData*  ____Data_k__BackingField;

/// @brief Field <ReferenceLoopForStart>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::VROSC::Loop*  ____ReferenceLoopForStart_k__BackingField;

/// @brief Field <ReferenceLoopForLength>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::VROSC::Loop*  ____ReferenceLoopForLength_k__BackingField;

/// @brief Field OnStartSet, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  ___OnStartSet;

/// @brief Field OnStopSet, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::VROSC::LoopPlaybackConfig_TriggerSync>*  ___OnStopSet;

/// @brief Field OnOneShotSet, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnOneShotSet;

/// @brief Field OnRetriggerSet, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnRetriggerSet;

/// @brief Field OnFadeOutSet, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  ___OnFadeOutSet;

/// @brief Field OnFadeInSet, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::VROSC::LoopPlaybackConfig_FadeDuration>*  ___OnFadeInSet;

/// @brief Field OnConfigChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___OnConfigChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfig, ____Data_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ____ReferenceLoopForStart_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ____ReferenceLoopForLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnStartSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnStopSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnOneShotSet) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnRetriggerSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnFadeOutSet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnFadeInSet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfig, ___OnConfigChanged) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfig, 0x60>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig_FadeDuration, "VROSC", "LoopPlaybackConfig/FadeDuration");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig_LoopMode, "VROSC", "LoopPlaybackConfig/LoopMode");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig_Sync, "VROSC", "LoopPlaybackConfig/Sync");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig_TriggerSync, "VROSC", "LoopPlaybackConfig/TriggerSync");
NEED_NO_BOX(::VROSC::LoopPlaybackConfig);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfig*, "VROSC", "LoopPlaybackConfig");
