#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerPlaybackFadeState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__LoopPlayerPlaybackState_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlayerPlaybackFadeState)
namespace VROSC {
struct LoopPlaybackConfig_FadeDuration;
}
// Forward declare root types
namespace VROSC {
class LoopPlayerPlaybackFadeState;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlayerPlaybackFadeState);
// Dependencies VROSC.LoopPlayerPlaybackState
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlayerPlaybackFadeState
class CORDL_TYPE LoopPlayerPlaybackFadeState : public ::VROSC::LoopPlayerPlaybackState {
public:
// Declarations
/// @brief Field _fadeStartValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeStartValue, put=__cordl_internal_set__fadeStartValue)) float_t  _fadeStartValue;

/// @brief Field _fadeStopValue, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeStopValue, put=__cordl_internal_set__fadeStopValue)) float_t  _fadeStopValue;

/// @brief Method GetCurrentFade, addr 0x18a6034, size 0x64, virtual true, abstract: false, final false
inline float_t GetCurrentFade(int32_t  atSample) ;

/// @brief Method GetFadeInLength, addr 0x189af18, size 0x10, virtual false, abstract: false, final false
inline int32_t GetFadeInLength(::VROSC::LoopPlaybackConfig_FadeDuration  fade) ;

/// @brief Method GetFadeLength, addr 0x18a60ac, size 0x154, virtual false, abstract: false, final false
inline int32_t GetFadeLength(::VROSC::LoopPlaybackConfig_FadeDuration  fade) ;

/// @brief Method GetFadeOutLength, addr 0x18a6098, size 0x14, virtual false, abstract: false, final false
inline int32_t GetFadeOutLength(::VROSC::LoopPlaybackConfig_FadeDuration  fade, int32_t  tailLength) ;

static inline ::VROSC::LoopPlayerPlaybackFadeState* New_ctor() ;

constexpr float_t const& __cordl_internal_get__fadeStartValue() const;

constexpr float_t& __cordl_internal_get__fadeStartValue() ;

constexpr float_t const& __cordl_internal_get__fadeStopValue() const;

constexpr float_t& __cordl_internal_get__fadeStopValue() ;

constexpr void __cordl_internal_set__fadeStartValue(float_t  value) ;

constexpr void __cordl_internal_set__fadeStopValue(float_t  value) ;

/// @brief Method .ctor, addr 0x18a6200, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlayerPlaybackFadeState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackFadeState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlayerPlaybackFadeState(LoopPlayerPlaybackFadeState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlayerPlaybackFadeState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlayerPlaybackFadeState(LoopPlayerPlaybackFadeState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{689};

/// @brief Field _fadeStartValue, offset: 0x28, size: 0x4, def value: None
 float_t  ____fadeStartValue;

/// @brief Field _fadeStopValue, offset: 0x2c, size: 0x4, def value: None
 float_t  ____fadeStopValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlayerPlaybackFadeState, ____fadeStartValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlayerPlaybackFadeState, ____fadeStopValue) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlayerPlaybackFadeState, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlayerPlaybackFadeState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerPlaybackFadeState*, "VROSC", "LoopPlayerPlaybackFadeState");
