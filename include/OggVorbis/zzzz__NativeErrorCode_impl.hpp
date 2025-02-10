#pragma once
// IWYU pragma private; include "OggVorbis/NativeErrorCode.hpp"
#include "OggVorbis/zzzz__NativeErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OggVorbis::NativeErrorCode::NativeErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OggVorbis::NativeErrorCode::NativeErrorCode()   {
}
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_FILEPATH_PARAMETER{static_cast<int32_t>(0xffffffff)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_CANNOT_OPEN_FILE_FOR_WRITE{static_cast<int32_t>(0xfffffffe)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_CANNOT_OPEN_FILE_FOR_READ{static_cast<int32_t>(0xfffffffd)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INPUT_FILESTREAM_IS_NOT_OGG_STREAM{static_cast<int32_t>(0xfffffffc)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_READING_OGG_STREAM{static_cast<int32_t>(0xfffffffb)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_SAMPLES_PARAMETER{static_cast<int32_t>(0xfffffff6)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_SAMPLESLENGTH_PARAMETER{static_cast<int32_t>(0xfffffff5)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_CHANNELS_PARAMETER{static_cast<int32_t>(0xfffffff4)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_FREQUENCY_PARAMETER{static_cast<int32_t>(0xfffffff3)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_BASE_QUALITY_PARAMETER{static_cast<int32_t>(0xfffffff2)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_MALLOC_RETURNED_NULL{static_cast<int32_t>(0xfffffff1)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_BYTES_MEMORY_ARRAY_NULL{static_cast<int32_t>(0xfffffff0)};
constexpr ::OggVorbis::NativeErrorCode  OggVorbis::NativeErrorCode::ERROR_INVALID_WRITE_CALLBACK_PARAMETER{static_cast<int32_t>(0xffffffef)};
