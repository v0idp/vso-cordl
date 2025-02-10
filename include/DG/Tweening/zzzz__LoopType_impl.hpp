#pragma once
// IWYU pragma private; include "DG/Tweening/LoopType.hpp"
#include "DG/Tweening/zzzz__LoopType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::LoopType::LoopType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::LoopType::LoopType()   {
}
constexpr ::DG::Tweening::LoopType  DG::Tweening::LoopType::Restart{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::LoopType  DG::Tweening::LoopType::Yoyo{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::LoopType  DG::Tweening::LoopType::Incremental{static_cast<int32_t>(0x2)};
