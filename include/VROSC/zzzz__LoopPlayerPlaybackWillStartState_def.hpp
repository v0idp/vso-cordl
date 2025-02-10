#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackWillStartState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlayerPlaybackFadeState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackWillStartState)
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackWillStartState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackWillStartState);
// Dependencies VROSC.LoopPlayerPlaybackFadeState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackWillStartState
class CORDL_TYPE LoopPlayerPlaybackWillStartState : public ::VROSC::LoopPlayerPlaybackFadeState {
public:
// Declarations
 __declspec(property(get=get_InverseSyncOffset, put=set_InverseSyncOffset)) int32_t  InverseSyncOffset;

 __declspec(property(get=get_Playing)) bool  Playing;

 __declspec(property(get=get_SyncOffset, put=set_SyncOffset)) int32_t  SyncOffset;

/// @brief Field <InverseSyncOffset>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__InverseSyncOffset_k__BackingField, put=__cordl_internal_set__InverseSyncOffset_k__BackingField)) int32_t  _InverseSyncOffset_k__BackingField;

/// @brief Field <SyncOffset>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__SyncOffset_k__BackingField, put=__cordl_internal_set__SyncOffset_k__BackingField)) int32_t  _SyncOffset_k__BackingField;

/// @brief Method CalculateSyncOffset, addr 0x18a65c4, size 0xdc, virtual false, abstract: false, final false
inline void CalculateSyncOffset(::VROSC::LoopPlayerPlaybackSettings*  settings) ;

/// @brief Method DebugString, addr 0x18a6370, size 0xd8, virtual true, abstract: false, final false
inline ::StringW DebugString() ;

/// @brief Method GetStateBeginSample, addr 0x18a6464, size 0xf4, virtual false, abstract: false, final false
inline int32_t GetStateBeginSample(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  sample) ;

static inline ::VROSC::LoopPlayerPlaybackWillStartState* New_ctor() ;

/// @brief Method SetBySettings, addr 0x189af28, size 0x68, virtual false, abstract: false, final false
inline void SetBySettings(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  evaluateFromSample) ;

/// @brief Method SetExplicit, addr 0x18a6448, size 0x1c, virtual true, abstract: false, final false
inline void SetExplicit(int32_t  startSample, int32_t  stopSample) ;

/// @brief Method SetStateActive, addr 0x18a6558, size 0x6c, virtual true, abstract: false, final false
inline void SetStateActive(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  atSample) ;

/// @brief Method ShouldUseOffset, addr 0x18a66a0, size 0x50, virtual false, abstract: false, final false
inline bool ShouldUseOffset(::VROSC::LoopPlayerPlaybackSettings*  settings) ;

constexpr int32_t const& __cordl_internal_get__InverseSyncOffset_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__InverseSyncOffset_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SyncOffset_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SyncOffset_k__BackingField() ;

constexpr void __cordl_internal_set__InverseSyncOffset_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SyncOffset_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x189a618, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InverseSyncOffset, addr 0x18a6360, size 0x8, virtual false, abstract: false, final false
inline int32_t get_InverseSyncOffset() ;

/// @brief Method get_Playing, addr 0x18a6340, size 0x10, virtual true, abstract: false, final false
inline bool get_Playing() ;

/// @brief Method get_SyncOffset, addr 0x18a6350, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SyncOffset() ;

/// @brief Method set_InverseSyncOffset, addr 0x18a6368, size 0x8, virtual false, abstract: false, final false
inline void set_InverseSyncOffset(int32_t  value) ;

/// @brief Method set_SyncOffset, addr 0x18a6358, size 0x8, virtual false, abstract: false, final false
inline void set_SyncOffset(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackWillStartState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackWillStartState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackWillStartState(LoopPlayerPlaybackWillStartState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackWillStartState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackWillStartState(LoopPlayerPlaybackWillStartState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{692};

/// @brief Field <SyncOffset>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____SyncOffset_k__BackingField;

/// @brief Field <InverseSyncOffset>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  ____InverseSyncOffset_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackWillStartState, ____SyncOffset_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackWillStartState, ____InverseSyncOffset_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackWillStartState, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackWillStartState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackWillStartState*, "VROSC", "LoopPlayerPlaybackWillStartState");
