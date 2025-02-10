#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/ConsentCheckExceptionReason.hpp"
#include "Unity/Services/Analytics/zzzz__ConsentCheckExceptionReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason::ConsentCheckExceptionReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason::ConsentCheckExceptionReason()   {
}
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason  Unity::Services::Analytics::ConsentCheckExceptionReason::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason  Unity::Services::Analytics::ConsentCheckExceptionReason::DeserializationIssue{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason  Unity::Services::Analytics::ConsentCheckExceptionReason::NoInternetConnection{static_cast<int32_t>(0x2)};
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason  Unity::Services::Analytics::ConsentCheckExceptionReason::InvalidConsentFlow{static_cast<int32_t>(0x3)};
constexpr ::Unity::Services::Analytics::ConsentCheckExceptionReason  Unity::Services::Analytics::ConsentCheckExceptionReason::ConsentFlowNotKnown{static_cast<int32_t>(0x4)};
