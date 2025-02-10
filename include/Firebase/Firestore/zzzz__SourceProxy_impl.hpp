#pragma once
// IWYU pragma private; include "Firebase/Firestore/SourceProxy.hpp"
#include "Firebase/Firestore/zzzz__SourceProxy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::SourceProxy::SourceProxy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::SourceProxy::SourceProxy()   {
}
constexpr ::Firebase::Firestore::SourceProxy  Firebase::Firestore::SourceProxy::Default{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::SourceProxy  Firebase::Firestore::SourceProxy::Server{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::SourceProxy  Firebase::Firestore::SourceProxy::Cache{static_cast<int32_t>(0x2)};
