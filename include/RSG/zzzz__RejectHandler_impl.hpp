#pragma once
// IWYU pragma private; include "RSG/RejectHandler.hpp"
#include "RSG/zzzz__RejectHandler_def.hpp"
#include "RSG/zzzz__IRejectable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
// Ctor Parameters [CppParam { name: "callback", ty: "::System::Action_1<::System::Exception*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rejectable", ty: "::RSG::IRejectable*", modifiers: "", def_value: Some("{}") }]
constexpr ::RSG::RejectHandler::RejectHandler(::System::Action_1<::System::Exception*>*  callback, ::RSG::IRejectable*  rejectable) noexcept  {
this->callback = callback;
this->rejectable = rejectable;
}
// Ctor Parameters []
constexpr ::RSG::RejectHandler::RejectHandler()   {
}
