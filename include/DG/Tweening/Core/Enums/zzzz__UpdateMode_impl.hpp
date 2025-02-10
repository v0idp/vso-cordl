#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/UpdateMode.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::Enums::UpdateMode::UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Enums::UpdateMode::UpdateMode()   {
}
constexpr ::DG::Tweening::Core::Enums::UpdateMode  DG::Tweening::Core::Enums::UpdateMode::Update{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::Enums::UpdateMode  DG::Tweening::Core::Enums::UpdateMode::Goto{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::Enums::UpdateMode  DG::Tweening::Core::Enums::UpdateMode::IgnoreOnUpdate{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::Core::Enums::UpdateMode  DG::Tweening::Core::Enums::UpdateMode::IgnoreOnComplete{static_cast<int32_t>(0x3)};
