#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackTimingData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoopPlaybackTimingData)
namespace VROSC {
struct LoopPlaybackTiming;
}
// Forward declare root types
namespace VROSC {
class LoopPlaybackTimingData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlaybackTimingData);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackTimingData
class CORDL_TYPE LoopPlaybackTimingData : public ::System::Object {
public:
// Declarations
/// @brief Field BarRelativeStartOffset, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_BarRelativeStartOffset, put=__cordl_internal_set_BarRelativeStartOffset)) int32_t  BarRelativeStartOffset;

/// @brief Field PlayFromStartOffset, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayFromStartOffset, put=__cordl_internal_set_PlayFromStartOffset)) int32_t  PlayFromStartOffset;

/// @brief Field StartedWithPlayFromStart, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_StartedWithPlayFromStart, put=__cordl_internal_set_StartedWithPlayFromStart)) bool  StartedWithPlayFromStart;

/// @brief Method GetLoopPlaybackTiming, addr 0x186a34c, size 0x38, virtual false, abstract: false, final false
inline ::VROSC::LoopPlaybackTiming GetLoopPlaybackTiming() ;

/// @brief Method GetOffset, addr 0x186a384, size 0x18, virtual false, abstract: false, final false
inline int32_t GetOffset() ;

static inline ::VROSC::LoopPlaybackTimingData* New_ctor() ;

static inline ::VROSC::LoopPlaybackTimingData* New_ctor(::VROSC::LoopPlaybackTimingData*  other) ;

/// @brief Method Set, addr 0x186a2e4, size 0x24, virtual false, abstract: false, final false
inline void Set(::VROSC::LoopPlaybackTimingData*  other) ;

/// @brief Method Set, addr 0x186a2cc, size 0x18, virtual false, abstract: false, final false
inline void Set(::VROSC::LoopPlaybackTiming  timing) ;

constexpr int32_t const& __cordl_internal_get_BarRelativeStartOffset() const;

constexpr int32_t& __cordl_internal_get_BarRelativeStartOffset() ;

constexpr int32_t const& __cordl_internal_get_PlayFromStartOffset() const;

constexpr int32_t& __cordl_internal_get_PlayFromStartOffset() ;

constexpr bool const& __cordl_internal_get_StartedWithPlayFromStart() const;

constexpr bool& __cordl_internal_get_StartedWithPlayFromStart() ;

constexpr void __cordl_internal_set_BarRelativeStartOffset(int32_t  value) ;

constexpr void __cordl_internal_set_PlayFromStartOffset(int32_t  value) ;

constexpr void __cordl_internal_set_StartedWithPlayFromStart(bool  value) ;

/// @brief Method .ctor, addr 0x186a308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x186a310, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::VROSC::LoopPlaybackTimingData*  other) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackTimingData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackTimingData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackTimingData(LoopPlaybackTimingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackTimingData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackTimingData(LoopPlaybackTimingData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{516};

/// @brief Field PlayFromStartOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PlayFromStartOffset;

/// @brief Field BarRelativeStartOffset, offset: 0x14, size: 0x4, def value: None
 int32_t  ___BarRelativeStartOffset;

/// @brief Field StartedWithPlayFromStart, offset: 0x18, size: 0x1, def value: None
 bool  ___StartedWithPlayFromStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackTimingData, ___PlayFromStartOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackTimingData, ___BarRelativeStartOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackTimingData, ___StartedWithPlayFromStart) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackTimingData, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlaybackTimingData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackTimingData*, "VROSC", "LoopPlaybackTimingData");
