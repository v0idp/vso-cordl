#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackConfigOverride.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlaybackConfig_def.hpp"
CORDL_MODULE_EXPORT(LoopPlaybackConfigOverride)
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
class LoopPlaybackConfigOverrideFlags;
}
namespace VROSC {
class LoopPlaybackConfig;
}
// Forward declare root types
namespace VROSC {
class LoopPlaybackConfigOverride;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlaybackConfigOverride);
// Dependencies VROSC.LoopPlaybackConfig
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackConfigOverride
class CORDL_TYPE LoopPlaybackConfigOverride : public ::VROSC::LoopPlaybackConfig {
public:
// Declarations
/// @brief Field OnFadeInOverriddenChanged, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFadeInOverriddenChanged, put=__cordl_internal_set_OnFadeInOverriddenChanged)) ::System::Action_1<bool>*  OnFadeInOverriddenChanged;

/// @brief Field OnFadeOutOverriddenChanged, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFadeOutOverriddenChanged, put=__cordl_internal_set_OnFadeOutOverriddenChanged)) ::System::Action_1<bool>*  OnFadeOutOverriddenChanged;

/// @brief Field OnOneShotOverriddenChanged, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOneShotOverriddenChanged, put=__cordl_internal_set_OnOneShotOverriddenChanged)) ::System::Action_1<bool>*  OnOneShotOverriddenChanged;

/// @brief Field OnOverrideConfigChanged, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnOverrideConfigChanged, put=__cordl_internal_set_OnOverrideConfigChanged)) ::System::Action*  OnOverrideConfigChanged;

/// @brief Field OnRetriggerOverriddenChanged, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRetriggerOverriddenChanged, put=__cordl_internal_set_OnRetriggerOverriddenChanged)) ::System::Action_1<bool>*  OnRetriggerOverriddenChanged;

/// @brief Field OnStartOverriddenChanged, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartOverriddenChanged, put=__cordl_internal_set_OnStartOverriddenChanged)) ::System::Action_1<bool>*  OnStartOverriddenChanged;

/// @brief Field OnStopOverriddenChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopOverriddenChanged, put=__cordl_internal_set_OnStopOverriddenChanged)) ::System::Action_1<bool>*  OnStopOverriddenChanged;

 __declspec(property(get=get_OverrideFlags, put=set_OverrideFlags)) ::VROSC::LoopPlaybackConfigOverrideFlags*  OverrideFlags;

/// @brief Field <OverrideFlags>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__OverrideFlags_k__BackingField, put=__cordl_internal_set__OverrideFlags_k__BackingField)) ::VROSC::LoopPlaybackConfigOverrideFlags*  _OverrideFlags_k__BackingField;

/// @brief Method ApplyTo, addr 0x1899d98, size 0x164, virtual true, abstract: false, final false
inline void ApplyTo(::VROSC::LoopPlaybackConfig*  other) ;

static inline ::VROSC::LoopPlaybackConfigOverride* New_ctor() ;

static inline ::VROSC::LoopPlaybackConfigOverride* New_ctor(::VROSC::LoopPlaybackConfigOverride*  other) ;

static inline ::VROSC::LoopPlaybackConfigOverride* New_ctor(::VROSC::LoopPlaybackConfigOverrideFlags*  overrideFlags, ::VROSC::LoopPlaybackConfigData*  data) ;

/// @brief Method SetFadeInOverridden, addr 0x1899c90, size 0x58, virtual false, abstract: false, final false
inline void SetFadeInOverridden(bool  state) ;

/// @brief Method SetFadeOutOverridden, addr 0x1899ce8, size 0x58, virtual false, abstract: false, final false
inline void SetFadeOutOverridden(bool  state) ;

/// @brief Method SetOneShotOverridden, addr 0x1899b88, size 0x58, virtual false, abstract: false, final false
inline void SetOneShotOverridden(bool  state) ;

/// @brief Method SetRetriggerOverridden, addr 0x1899d40, size 0x58, virtual false, abstract: false, final false
inline void SetRetriggerOverridden(bool  state) ;

/// @brief Method SetStartOverridden, addr 0x1899be0, size 0x58, virtual false, abstract: false, final false
inline void SetStartOverridden(bool  state) ;

/// @brief Method SetStopOverridden, addr 0x1899c38, size 0x58, virtual false, abstract: false, final false
inline void SetStopOverridden(bool  state) ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnFadeInOverriddenChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnFadeInOverriddenChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnFadeOutOverriddenChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnFadeOutOverriddenChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnOneShotOverriddenChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnOneShotOverriddenChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnOverrideConfigChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnOverrideConfigChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnRetriggerOverriddenChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnRetriggerOverriddenChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnStartOverriddenChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnStartOverriddenChanged() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnStopOverriddenChanged() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnStopOverriddenChanged() ;

constexpr ::VROSC::LoopPlaybackConfigOverrideFlags* const& __cordl_internal_get__OverrideFlags_k__BackingField() const;

constexpr ::VROSC::LoopPlaybackConfigOverrideFlags*& __cordl_internal_get__OverrideFlags_k__BackingField() ;

constexpr void __cordl_internal_set_OnFadeInOverriddenChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnFadeOutOverriddenChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnOneShotOverriddenChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnOverrideConfigChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnRetriggerOverriddenChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnStartOverriddenChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnStopOverriddenChanged(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__OverrideFlags_k__BackingField(::VROSC::LoopPlaybackConfigOverrideFlags*  value) ;

/// @brief Method .ctor, addr 0x1899950, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1899ab8, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackConfigOverride*  other) ;

/// @brief Method .ctor, addr 0x1899a10, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackConfigOverrideFlags*  overrideFlags, ::VROSC::LoopPlaybackConfigData*  data) ;

/// @brief Method get_OverrideFlags, addr 0x1899948, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackConfigOverrideFlags* get_OverrideFlags() ;

/// @brief Method set_OverrideFlags, addr 0x1899940, size 0x8, virtual false, abstract: false, final false
inline void set_OverrideFlags(::VROSC::LoopPlaybackConfigOverrideFlags*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfigOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfigOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackConfigOverride(LoopPlaybackConfigOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfigOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackConfigOverride(LoopPlaybackConfigOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{662};

/// @brief Field <OverrideFlags>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::VROSC::LoopPlaybackConfigOverrideFlags*  ____OverrideFlags_k__BackingField;

/// @brief Field OnOneShotOverriddenChanged, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnOneShotOverriddenChanged;

/// @brief Field OnRetriggerOverriddenChanged, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnRetriggerOverriddenChanged;

/// @brief Field OnStartOverriddenChanged, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnStartOverriddenChanged;

/// @brief Field OnStopOverriddenChanged, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnStopOverriddenChanged;

/// @brief Field OnFadeInOverriddenChanged, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnFadeInOverriddenChanged;

/// @brief Field OnFadeOutOverriddenChanged, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnFadeOutOverriddenChanged;

/// @brief Field OnOverrideConfigChanged, offset: 0x98, size: 0x8, def value: None
 ::System::Action*  ___OnOverrideConfigChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ____OverrideFlags_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnOneShotOverriddenChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnRetriggerOverriddenChanged) == 0x70, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnStartOverriddenChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnStopOverriddenChanged) == 0x80, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnFadeInOverriddenChanged) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnFadeOutOverriddenChanged) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverride, ___OnOverrideConfigChanged) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfigOverride, 0xa0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlaybackConfigOverride);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfigOverride*, "VROSC", "LoopPlaybackConfigOverride");
