#pragma once
// IWYU pragma private; include "GlobalNamespace/ClientLog.hpp"
#include "GlobalNamespace/zzzz__ClientLog_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityOSC/zzzz__OSCClient_def.hpp"
#include "UnityOSC/zzzz__OSCMessage_def.hpp"
// Ctor Parameters [CppParam { name: "client", ty: "::UnityOSC::OSCClient*", modifiers: "", def_value: Some("{}") }, CppParam { name: "messages", ty: "::System::Collections::Generic::List_1<::UnityOSC::OSCMessage*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "log", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ClientLog::ClientLog(::UnityOSC::OSCClient*  client, ::System::Collections::Generic::List_1<::UnityOSC::OSCMessage*>*  messages, ::System::Collections::Generic::List_1<::StringW>*  log) noexcept  {
this->client = client;
this->messages = messages;
this->log = log;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClientLog::ClientLog()   {
}
