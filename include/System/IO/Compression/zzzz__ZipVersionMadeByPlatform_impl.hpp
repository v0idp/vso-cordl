#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipVersionMadeByPlatform.hpp"
#include "System/IO/Compression/zzzz__ZipVersionMadeByPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::ZipVersionMadeByPlatform::ZipVersionMadeByPlatform(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipVersionMadeByPlatform::ZipVersionMadeByPlatform()   {
}
constexpr ::System::IO::Compression::ZipVersionMadeByPlatform  System::IO::Compression::ZipVersionMadeByPlatform::Windows{static_cast<uint8_t>(0x0u)};
constexpr ::System::IO::Compression::ZipVersionMadeByPlatform  System::IO::Compression::ZipVersionMadeByPlatform::Unix{static_cast<uint8_t>(0x3u)};
