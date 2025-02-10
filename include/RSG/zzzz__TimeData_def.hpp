#pragma once
// IWYU pragma private; include "RSG/TimeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeData)
// Forward declare root types
namespace RSG {
struct TimeData;
}
// Write type traits
MARK_VAL_T(::RSG::TimeData);
// Dependencies 
namespace RSG {
// Is value type: true
// CS Name: RSG.TimeData
struct CORDL_TYPE TimeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TimeData() ;

// Ctor Parameters [CppParam { name: "elapsedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "elapsedUpdates", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimeData(float_t  elapsedTime, float_t  deltaTime, int32_t  elapsedUpdates) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1690};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field elapsedTime, offset: 0x0, size: 0x4, def value: None
 float_t  elapsedTime;

/// @brief Field deltaTime, offset: 0x4, size: 0x4, def value: None
 float_t  deltaTime;

/// @brief Field elapsedUpdates, offset: 0x8, size: 0x4, def value: None
 int32_t  elapsedUpdates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::RSG::TimeData, elapsedTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RSG::TimeData, deltaTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::RSG::TimeData, elapsedUpdates) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::TimeData, 0xc>, "Size mismatch!");

} // namespace end def RSG
DEFINE_IL2CPP_ARG_TYPE(::RSG::TimeData, "RSG", "TimeData");
