#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/RewindCallbackMode.hpp"
#include "DG/Tweening/Core/Enums/zzzz__RewindCallbackMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode::RewindCallbackMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode::RewindCallbackMode()   {
}
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode  DG::Tweening::Core::Enums::RewindCallbackMode::FireIfPositionChanged{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode  DG::Tweening::Core::Enums::RewindCallbackMode::FireAlwaysWithRewind{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::Enums::RewindCallbackMode  DG::Tweening::Core::Enums::RewindCallbackMode::FireAlways{static_cast<int32_t>(0x2)};
