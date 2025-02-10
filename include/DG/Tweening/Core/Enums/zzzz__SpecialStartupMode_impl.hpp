#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/SpecialStartupMode.hpp"
#include "DG/Tweening/Core/Enums/zzzz__SpecialStartupMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode::SpecialStartupMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode::SpecialStartupMode()   {
}
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode  DG::Tweening::Core::Enums::SpecialStartupMode::None{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode  DG::Tweening::Core::Enums::SpecialStartupMode::SetLookAt{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode  DG::Tweening::Core::Enums::SpecialStartupMode::SetShake{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode  DG::Tweening::Core::Enums::SpecialStartupMode::SetPunch{static_cast<int32_t>(0x3)};
constexpr ::DG::Tweening::Core::Enums::SpecialStartupMode  DG::Tweening::Core::Enums::SpecialStartupMode::SetCameraShakePosition{static_cast<int32_t>(0x4)};
