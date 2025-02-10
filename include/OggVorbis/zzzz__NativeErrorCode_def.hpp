#pragma once
// IWYU pragma private; include "OggVorbis/NativeErrorCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeErrorCode)
// Forward declare root types
namespace OggVorbis {
struct NativeErrorCode;
}
// Write type traits
MARK_VAL_T(::OggVorbis::NativeErrorCode);
// Dependencies 
namespace OggVorbis {
// Is value type: true
// CS Name: OggVorbis.NativeErrorCode
struct CORDL_TYPE NativeErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NativeErrorCode_Unwrapped
enum struct __NativeErrorCode_Unwrapped : int32_t {
__E_ERROR_INVALID_FILEPATH_PARAMETER = static_cast<int32_t>(0xffffffff),
__E_ERROR_CANNOT_OPEN_FILE_FOR_WRITE = static_cast<int32_t>(0xfffffffe),
__E_ERROR_CANNOT_OPEN_FILE_FOR_READ = static_cast<int32_t>(0xfffffffd),
__E_ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM = static_cast<int32_t>(0xfffffffc),
__E_ERROR_READING_OGG_STREAM = static_cast<int32_t>(0xfffffffb),
__E_ERROR_INVALID_SAMPLES_PARAMETER = static_cast<int32_t>(0xfffffff6),
__E_ERROR_INVALID_SAMPLESLENGTH_PARAMETER = static_cast<int32_t>(0xfffffff5),
__E_ERROR_INVALID_CHANNELS_PARAMETER = static_cast<int32_t>(0xfffffff4),
__E_ERROR_INVALID_FREQUENCY_PARAMETER = static_cast<int32_t>(0xfffffff3),
__E_ERROR_INVALID_BASE_QUALITY_PARAMETER = static_cast<int32_t>(0xfffffff2),
__E_ERROR_MALLOC_RETURNED_NULL = static_cast<int32_t>(0xfffffff1),
__E_ERROR_BYTES_MEMORY_ARRAY_NULL = static_cast<int32_t>(0xfffffff0),
__E_ERROR_INVALID_WRITE_CALLBACK_PARAMETER = static_cast<int32_t>(0xffffffef),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NativeErrorCode_Unwrapped () const noexcept {
return static_cast<__NativeErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NativeErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeErrorCode(int32_t  value__) noexcept;

/// @brief Field ERROR_BYTES_MEMORY_ARRAY_NULL value: I32(-16)
static ::OggVorbis::NativeErrorCode const ERROR_BYTES_MEMORY_ARRAY_NULL;

/// @brief Field ERROR_CANNOT_OPEN_FILE_FOR_READ value: I32(-3)
static ::OggVorbis::NativeErrorCode const ERROR_CANNOT_OPEN_FILE_FOR_READ;

/// @brief Field ERROR_CANNOT_OPEN_FILE_FOR_WRITE value: I32(-2)
static ::OggVorbis::NativeErrorCode const ERROR_CANNOT_OPEN_FILE_FOR_WRITE;

/// @brief Field ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM value: I32(-4)
static ::OggVorbis::NativeErrorCode const ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM;

/// @brief Field ERROR_INVALID_BASE_QUALITY_PARAMETER value: I32(-14)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_BASE_QUALITY_PARAMETER;

/// @brief Field ERROR_INVALID_CHANNELS_PARAMETER value: I32(-12)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_CHANNELS_PARAMETER;

/// @brief Field ERROR_INVALID_FILEPATH_PARAMETER value: I32(-1)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_FILEPATH_PARAMETER;

/// @brief Field ERROR_INVALID_FREQUENCY_PARAMETER value: I32(-13)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_FREQUENCY_PARAMETER;

/// @brief Field ERROR_INVALID_SAMPLESLENGTH_PARAMETER value: I32(-11)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_SAMPLESLENGTH_PARAMETER;

/// @brief Field ERROR_INVALID_SAMPLES_PARAMETER value: I32(-10)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_SAMPLES_PARAMETER;

/// @brief Field ERROR_INVALID_WRITE_CALLBACK_PARAMETER value: I32(-17)
static ::OggVorbis::NativeErrorCode const ERROR_INVALID_WRITE_CALLBACK_PARAMETER;

/// @brief Field ERROR_MALLOC_RETURNED_NULL value: I32(-15)
static ::OggVorbis::NativeErrorCode const ERROR_MALLOC_RETURNED_NULL;

/// @brief Field ERROR_READING_OGG_STREAM value: I32(-5)
static ::OggVorbis::NativeErrorCode const ERROR_READING_OGG_STREAM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12479};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OggVorbis::NativeErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OggVorbis::NativeErrorCode, 0x4>, "Size mismatch!");

} // namespace end def OggVorbis
DEFINE_IL2CPP_ARG_TYPE(::OggVorbis::NativeErrorCode, "OggVorbis", "NativeErrorCode");
