#pragma once
// IWYU pragma private; include "System/Runtime/GCLargeObjectHeapCompactionMode.hpp"
#include "System/Runtime/zzzz__GCLargeObjectHeapCompactionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::GCLargeObjectHeapCompactionMode::GCLargeObjectHeapCompactionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::GCLargeObjectHeapCompactionMode::GCLargeObjectHeapCompactionMode()   {
}
constexpr ::System::Runtime::GCLargeObjectHeapCompactionMode  System::Runtime::GCLargeObjectHeapCompactionMode::Default{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::GCLargeObjectHeapCompactionMode  System::Runtime::GCLargeObjectHeapCompactionMode::CompactOnce{static_cast<int32_t>(0x2)};
