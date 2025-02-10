#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/WebRequestVerb.hpp"
#include "Unity/Services/Authentication/zzzz__WebRequestVerb_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Authentication::WebRequestVerb::WebRequestVerb(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::WebRequestVerb::WebRequestVerb()   {
}
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Delete{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Get{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Head{static_cast<int32_t>(0x2)};
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Options{static_cast<int32_t>(0x3)};
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Patch{static_cast<int32_t>(0x4)};
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Post{static_cast<int32_t>(0x5)};
constexpr ::Unity::Services::Authentication::WebRequestVerb  Unity::Services::Authentication::WebRequestVerb::Put{static_cast<int32_t>(0x6)};
