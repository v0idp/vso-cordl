#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackTiming.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlaybackTiming)
// Forward declare root types
namespace VROSC {
struct LoopPlaybackTiming;
}
// Write type traits
MARK_VAL_T(::VROSC::LoopPlaybackTiming);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.LoopPlaybackTiming
struct CORDL_TYPE LoopPlaybackTiming {
public:
// Declarations
 __declspec(property(get=get_BarRelativeStartOffset, put=set_BarRelativeStartOffset)) int32_t  BarRelativeStartOffset;

 __declspec(property(get=get_PlayFromStartOffset, put=set_PlayFromStartOffset)) int32_t  PlayFromStartOffset;

 __declspec(property(get=get_StartedWithPlayFromStart, put=set_StartedWithPlayFromStart)) bool  StartedWithPlayFromStart;

/// @brief Method GetOffset, addr 0x1899f40, size 0x18, virtual false, abstract: false, final false
inline int32_t GetOffset() ;

/// @brief Method .ctor, addr 0x1899f30, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  playFromStartOffset, int32_t  barRelativeStartOffset, bool  startedWithPlayFromStart) ;

/// @brief Method get_BarRelativeStartOffset, addr 0x1899f0c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BarRelativeStartOffset() ;

/// @brief Method get_PlayFromStartOffset, addr 0x1899efc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayFromStartOffset() ;

/// @brief Method get_StartedWithPlayFromStart, addr 0x1899f1c, size 0x8, virtual false, abstract: false, final false
inline bool get_StartedWithPlayFromStart() ;

/// @brief Method set_BarRelativeStartOffset, addr 0x1899f14, size 0x8, virtual false, abstract: false, final false
inline void set_BarRelativeStartOffset(int32_t  value) ;

/// @brief Method set_PlayFromStartOffset, addr 0x1899f04, size 0x8, virtual false, abstract: false, final false
inline void set_PlayFromStartOffset(int32_t  value) ;

/// @brief Method set_StartedWithPlayFromStart, addr 0x1899f24, size 0xc, virtual false, abstract: false, final false
inline void set_StartedWithPlayFromStart(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackTiming() ;

// Ctor Parameters [CppParam { name: "_PlayFromStartOffset_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_BarRelativeStartOffset_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_StartedWithPlayFromStart_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr LoopPlaybackTiming(int32_t  _PlayFromStartOffset_k__BackingField, int32_t  _BarRelativeStartOffset_k__BackingField, bool  _StartedWithPlayFromStart_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field <PlayFromStartOffset>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _PlayFromStartOffset_k__BackingField;

/// @brief Field <BarRelativeStartOffset>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _BarRelativeStartOffset_k__BackingField;

/// @brief Field <StartedWithPlayFromStart>k__BackingField, offset: 0x8, size: 0x1, def value: None
 bool  _StartedWithPlayFromStart_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackTiming, _PlayFromStartOffset_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackTiming, _BarRelativeStartOffset_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackTiming, _StartedWithPlayFromStart_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackTiming, 0xc>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackTiming, "VROSC", "LoopPlaybackTiming");
