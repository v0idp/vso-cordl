#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/UpdateNotice.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateNotice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::Enums::UpdateNotice::UpdateNotice(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Enums::UpdateNotice::UpdateNotice()   {
}
constexpr ::DG::Tweening::Core::Enums::UpdateNotice  DG::Tweening::Core::Enums::UpdateNotice::None{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::Enums::UpdateNotice  DG::Tweening::Core::Enums::UpdateNotice::RewindStep{static_cast<int32_t>(0x1)};
