#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Enums/FilterType.hpp"
#include "DG/Tweening/Core/Enums/zzzz__FilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::DG::Tweening::Core::Enums::FilterType::FilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Enums::FilterType::FilterType()   {
}
constexpr ::DG::Tweening::Core::Enums::FilterType  DG::Tweening::Core::Enums::FilterType::All{static_cast<int32_t>(0x0)};
constexpr ::DG::Tweening::Core::Enums::FilterType  DG::Tweening::Core::Enums::FilterType::TargetOrId{static_cast<int32_t>(0x1)};
constexpr ::DG::Tweening::Core::Enums::FilterType  DG::Tweening::Core::Enums::FilterType::TargetAndId{static_cast<int32_t>(0x2)};
constexpr ::DG::Tweening::Core::Enums::FilterType  DG::Tweening::Core::Enums::FilterType::AllExceptTargetsOrIds{static_cast<int32_t>(0x3)};
constexpr ::DG::Tweening::Core::Enums::FilterType  DG::Tweening::Core::Enums::FilterType::DOGetter{static_cast<int32_t>(0x4)};
