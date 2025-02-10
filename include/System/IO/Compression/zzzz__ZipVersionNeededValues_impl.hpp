#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipVersionNeededValues.hpp"
#include "System/IO/Compression/zzzz__ZipVersionNeededValues_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::ZipVersionNeededValues::ZipVersionNeededValues(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::ZipVersionNeededValues::ZipVersionNeededValues()   {
}
constexpr ::System::IO::Compression::ZipVersionNeededValues  System::IO::Compression::ZipVersionNeededValues::Default{static_cast<uint16_t>(0xau)};
constexpr ::System::IO::Compression::ZipVersionNeededValues  System::IO::Compression::ZipVersionNeededValues::ExplicitDirectory{static_cast<uint16_t>(0x14u)};
constexpr ::System::IO::Compression::ZipVersionNeededValues  System::IO::Compression::ZipVersionNeededValues::Deflate{static_cast<uint16_t>(0x14u)};
constexpr ::System::IO::Compression::ZipVersionNeededValues  System::IO::Compression::ZipVersionNeededValues::Deflate64{static_cast<uint16_t>(0x15u)};
constexpr ::System::IO::Compression::ZipVersionNeededValues  System::IO::Compression::ZipVersionNeededValues::Zip64{static_cast<uint16_t>(0x2du)};
