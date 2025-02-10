#pragma once
// IWYU pragma private; include "System/IO/Compression/BlockType.hpp"
#include "System/IO/Compression/zzzz__BlockType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::BlockType::BlockType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::BlockType::BlockType()   {
}
constexpr ::System::IO::Compression::BlockType  System::IO::Compression::BlockType::Uncompressed{static_cast<int32_t>(0x0)};
constexpr ::System::IO::Compression::BlockType  System::IO::Compression::BlockType::Static{static_cast<int32_t>(0x1)};
constexpr ::System::IO::Compression::BlockType  System::IO::Compression::BlockType::Dynamic{static_cast<int32_t>(0x2)};
