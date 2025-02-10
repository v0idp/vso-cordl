#pragma once
// IWYU pragma private; include "RSG/ProgressHandler.hpp"
#include "RSG/zzzz__ProgressHandler_def.hpp"
#include "RSG/zzzz__IRejectable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action_1<float_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rejectable", ty: "::RSG::IRejectable*", modifiers: "", def_value: Some("{}") }]
constexpr ::RSG::ProgressHandler::ProgressHandler(::System::Action_1<float_t>*  callback, ::RSG::IRejectable*  rejectable) noexcept  {
this->callback = callback;
this->rejectable = rejectable;
}
// Ctor Parameters []
constexpr ::RSG::ProgressHandler::ProgressHandler()   {
}
