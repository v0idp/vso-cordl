#pragma once
// IWYU pragma private; include "System/IO/Compression/MatchState.hpp"
#include "System/IO/Compression/zzzz__MatchState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::MatchState::MatchState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::MatchState::MatchState()   {
}
constexpr ::System::IO::Compression::MatchState  System::IO::Compression::MatchState::HasSymbol{static_cast<int32_t>(0x1)};
constexpr ::System::IO::Compression::MatchState  System::IO::Compression::MatchState::HasMatch{static_cast<int32_t>(0x2)};
constexpr ::System::IO::Compression::MatchState  System::IO::Compression::MatchState::HasSymbolAndMatch{static_cast<int32_t>(0x3)};
