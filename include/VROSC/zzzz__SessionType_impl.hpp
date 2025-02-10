#pragma once
// IWYU pragma private; include "VROSC/SessionType.hpp"
#include "VROSC/zzzz__SessionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SessionType::SessionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SessionType::SessionType()   {
}
constexpr ::VROSC::SessionType  VROSC::SessionType::Local{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SessionType  VROSC::SessionType::Cloud{static_cast<int32_t>(0x1)};
constexpr ::VROSC::SessionType  VROSC::SessionType::Community{static_cast<int32_t>(0x2)};
