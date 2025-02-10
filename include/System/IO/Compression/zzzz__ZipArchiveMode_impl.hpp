#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipArchiveMode.hpp"
#include "System/IO/Compression/zzzz__ZipArchiveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::ZipArchiveMode::ZipArchiveMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipArchiveMode::ZipArchiveMode()   {
}
constexpr ::System::IO::Compression::ZipArchiveMode  System::IO::Compression::ZipArchiveMode::Read{static_cast<int32_t>(0x0)};
constexpr ::System::IO::Compression::ZipArchiveMode  System::IO::Compression::ZipArchiveMode::Create{static_cast<int32_t>(0x1)};
constexpr ::System::IO::Compression::ZipArchiveMode  System::IO::Compression::ZipArchiveMode::Update{static_cast<int32_t>(0x2)};
