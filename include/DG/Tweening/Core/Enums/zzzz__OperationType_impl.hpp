#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/OperationType.hpp"
#include "DG/Tweening/Core/Enums/zzzz__OperationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::Enums::OperationType::OperationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Enums::OperationType::OperationType()   {
}
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Complete{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Despawn{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Flip{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Goto{static_cast<int32_t>(0x3)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Pause{static_cast<int32_t>(0x4)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Play{static_cast<int32_t>(0x5)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::PlayForward{static_cast<int32_t>(0x6)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::PlayBackwards{static_cast<int32_t>(0x7)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Rewind{static_cast<int32_t>(0x8)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::SmoothRewind{static_cast<int32_t>(0x9)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::Restart{static_cast<int32_t>(0xa)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::TogglePause{static_cast<int32_t>(0xb)};
constexpr ::DG::Tweening::Core::Enums::OperationType  DG::Tweening::Core::Enums::OperationType::IsTweening{static_cast<int32_t>(0xc)};
