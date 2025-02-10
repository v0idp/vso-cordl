#pragma once
// IWYU pragma private; include "System/IO/Compression/InflaterState.hpp"
#include "System/IO/Compression/zzzz__InflaterState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::InflaterState::InflaterState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::InflaterState::InflaterState()   {
}
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingHeader{static_cast<int32_t>(0x0)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingBFinal{static_cast<int32_t>(0x2)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingBType{static_cast<int32_t>(0x3)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingNumLitCodes{static_cast<int32_t>(0x4)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingNumDistCodes{static_cast<int32_t>(0x5)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingNumCodeLengthCodes{static_cast<int32_t>(0x6)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingCodeLengthCodes{static_cast<int32_t>(0x7)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingTreeCodesBefore{static_cast<int32_t>(0x8)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingTreeCodesAfter{static_cast<int32_t>(0x9)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::DecodeTop{static_cast<int32_t>(0xa)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::HaveInitialLength{static_cast<int32_t>(0xb)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::HaveFullLength{static_cast<int32_t>(0xc)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::HaveDistCode{static_cast<int32_t>(0xd)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::UncompressedAligning{static_cast<int32_t>(0xf)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::UncompressedByte1{static_cast<int32_t>(0x10)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::UncompressedByte2{static_cast<int32_t>(0x11)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::UncompressedByte3{static_cast<int32_t>(0x12)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::UncompressedByte4{static_cast<int32_t>(0x13)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::DecodingUncompressed{static_cast<int32_t>(0x14)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::StartReadingFooter{static_cast<int32_t>(0x15)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::ReadingFooter{static_cast<int32_t>(0x16)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::VerifyingFooter{static_cast<int32_t>(0x17)};
constexpr ::System::IO::Compression::InflaterState  System::IO::Compression::InflaterState::Done{static_cast<int32_t>(0x18)};
