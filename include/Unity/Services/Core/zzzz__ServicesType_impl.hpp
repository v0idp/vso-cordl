#pragma once
// IWYU pragma private; include "Unity/Services/Core/ServicesType.hpp"
#include "Unity/Services/Core/zzzz__ServicesType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::ServicesType::ServicesType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::ServicesType::ServicesType()   {
}
constexpr ::Unity::Services::Core::ServicesType  Unity::Services::Core::ServicesType::Default{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Core::ServicesType  Unity::Services::Core::ServicesType::Instance{static_cast<int32_t>(0x1)};
