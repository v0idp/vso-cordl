#pragma once
// IWYU pragma private; include "VROSC/HapticRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__HandType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HapticRequest)
namespace VROSC {
struct HandType;
}
// Forward declare root types
namespace VROSC {
struct HapticRequest;
}
// Write type traits
MARK_VAL_T(::VROSC::HapticRequest);
// Dependencies VROSC.HandType
namespace VROSC {
// Is value type: true
// CS Name: VROSC.HapticRequest
struct CORDL_TYPE HapticRequest {
public:
// Declarations
/// @brief Method .ctor, addr 0x1889fa8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(float_t  amplitude, float_t  frequency, ::VROSC::HandType  hand, bool  isMetronome) ;

// Ctor Parameters []
// @brief default ctor
constexpr HapticRequest() ;

// Ctor Parameters [CppParam { name: "IsMetronome", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Amplitude", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Frequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Hand", ty: "::VROSC::HandType", modifiers: "", def_value: None }]
constexpr HapticRequest(bool  IsMetronome, float_t  Amplitude, float_t  Frequency, ::VROSC::HandType  Hand) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field IsMetronome, offset: 0x0, size: 0x1, def value: None
 bool  IsMetronome;

/// @brief Field Amplitude, offset: 0x4, size: 0x4, def value: None
 float_t  Amplitude;

/// @brief Field Frequency, offset: 0x8, size: 0x4, def value: None
 float_t  Frequency;

/// @brief Field Hand, offset: 0xc, size: 0x4, def value: None
 ::VROSC::HandType  Hand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HapticRequest, IsMetronome) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticRequest, Amplitude) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticRequest, Frequency) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::HapticRequest, Hand) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HapticRequest, 0x10>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HapticRequest, "VROSC", "HapticRequest");
