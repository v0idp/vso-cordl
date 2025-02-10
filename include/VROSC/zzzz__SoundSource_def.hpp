#pragma once
// IWYU pragma private; include "VROSC/SoundSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SoundSource)
// Forward declare root types
namespace VROSC {
struct SoundSource;
}
// Write type traits
MARK_VAL_T(::VROSC::SoundSource);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.SoundSource
struct CORDL_TYPE SoundSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SoundSource_Unwrapped
enum struct __SoundSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Helm = static_cast<int32_t>(0x1),
__E_Drums = static_cast<int32_t>(0x2),
__E_Microphone = static_cast<int32_t>(0x3),
__E_Master = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SoundSource_Unwrapped () const noexcept {
return static_cast<__SoundSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SoundSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SoundSource(int32_t  value__) noexcept;

/// @brief Field Drums value: I32(2)
static ::VROSC::SoundSource const Drums;

/// @brief Field Helm value: I32(1)
static ::VROSC::SoundSource const Helm;

/// @brief Field Master value: I32(4)
static ::VROSC::SoundSource const Master;

/// @brief Field Microphone value: I32(3)
static ::VROSC::SoundSource const Microphone;

/// @brief Field None value: I32(0)
static ::VROSC::SoundSource const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SoundSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SoundSource, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SoundSource, "VROSC", "SoundSource");
