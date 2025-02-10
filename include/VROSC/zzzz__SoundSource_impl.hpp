#pragma once
// IWYU pragma private; include "VROSC/SoundSource.hpp"
#include "VROSC/zzzz__SoundSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SoundSource::SoundSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SoundSource::SoundSource()   {
}
constexpr ::VROSC::SoundSource  VROSC::SoundSource::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SoundSource  VROSC::SoundSource::Helm{static_cast<int32_t>(0x1)};
constexpr ::VROSC::SoundSource  VROSC::SoundSource::Drums{static_cast<int32_t>(0x2)};
constexpr ::VROSC::SoundSource  VROSC::SoundSource::Microphone{static_cast<int32_t>(0x3)};
constexpr ::VROSC::SoundSource  VROSC::SoundSource::Master{static_cast<int32_t>(0x4)};
