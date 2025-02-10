#pragma once
// IWYU pragma private; include "DG/Tweening/LinkBehaviour.hpp"
#include "DG/Tweening/zzzz__LinkBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::LinkBehaviour::LinkBehaviour(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::LinkBehaviour::LinkBehaviour()   {
}
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::PauseOnDisable{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::PauseOnDisablePlayOnEnable{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::PauseOnDisableRestartOnEnable{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::PlayOnEnable{static_cast<int32_t>(0x3)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::RestartOnEnable{static_cast<int32_t>(0x4)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::KillOnDisable{static_cast<int32_t>(0x5)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::KillOnDestroy{static_cast<int32_t>(0x6)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::CompleteOnDisable{static_cast<int32_t>(0x7)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::CompleteAndKillOnDisable{static_cast<int32_t>(0x8)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::RewindOnDisable{static_cast<int32_t>(0x9)};
constexpr ::DG::Tweening::LinkBehaviour  DG::Tweening::LinkBehaviour::RewindAndKillOnDisable{static_cast<int32_t>(0xa)};
