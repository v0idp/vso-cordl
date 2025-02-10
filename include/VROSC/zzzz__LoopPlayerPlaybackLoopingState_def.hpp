#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackLoopingState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlayerPlaybackState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackLoopingState)
namespace VROSC {
class LoopPlayerPlaybackSettings;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackLoopingState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackLoopingState);
// Dependencies VROSC.LoopPlayerPlaybackState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackLoopingState
class CORDL_TYPE LoopPlayerPlaybackLoopingState : public ::VROSC::LoopPlayerPlaybackState {
public:
// Declarations
 __declspec(property(get=get_Looping, put=set_Looping)) bool  Looping;

/// @brief Field <Looping>k__BackingField, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__Looping_k__BackingField, put=__cordl_internal_set__Looping_k__BackingField)) bool  _Looping_k__BackingField;

/// @brief Method DebugString, addr 0x18a6228, size 0xbc, virtual true, abstract: false, final false
inline ::StringW DebugString() ;

/// @brief Method GetCurrentFade, addr 0x18a62e4, size 0x8, virtual true, abstract: false, final false
inline float_t GetCurrentFade(int32_t  atSample) ;

static inline ::VROSC::LoopPlayerPlaybackLoopingState* New_ctor() ;

/// @brief Method Set, addr 0x189a9e8, size 0x7c, virtual false, abstract: false, final false
inline void Set(::VROSC::LoopPlayerPlaybackSettings*  settings, int32_t  startStateBegin, int32_t  startStateEnd) ;

/// @brief Method SetExplicit, addr 0x18a62ec, size 0xc, virtual true, abstract: false, final false
inline void SetExplicit(int32_t  startSample, int32_t  stopSample) ;

constexpr bool const& __cordl_internal_get__Looping_k__BackingField() const;

constexpr bool& __cordl_internal_get__Looping_k__BackingField() ;

constexpr void __cordl_internal_set__Looping_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x189a62c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Looping, addr 0x18a6220, size 0x8, virtual false, abstract: false, final false
inline bool get_Looping() ;

/// @brief Method set_Looping, addr 0x18a6214, size 0xc, virtual false, abstract: false, final false
inline void set_Looping(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackLoopingState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackLoopingState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackLoopingState(LoopPlayerPlaybackLoopingState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackLoopingState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackLoopingState(LoopPlayerPlaybackLoopingState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{690};

/// @brief Field <Looping>k__BackingField, offset: 0x25, size: 0x1, def value: None
 bool  ____Looping_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackLoopingState, ____Looping_k__BackingField) == 0x25, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackLoopingState, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackLoopingState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackLoopingState*, "VROSC", "LoopPlayerPlaybackLoopingState");
