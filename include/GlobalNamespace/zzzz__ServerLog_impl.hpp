#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerLog.hpp"
#include "GlobalNamespace/zzzz__ServerLog_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityOSC/zzzz__OSCPacket_def.hpp"
#include "UnityOSC/zzzz__OSCServer_def.hpp"
// Ctor Parameters [CppParam { name: "server", ty: "::UnityOSC::OSCServer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "packets", ty: "::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "log", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ServerLog::ServerLog(::UnityOSC::OSCServer*  server, ::System::Collections::Generic::List_1<::UnityOSC::OSCPacket*>*  packets, ::System::Collections::Generic::List_1<::StringW>*  log) noexcept  {
this->server = server;
this->packets = packets;
this->log = log;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerLog::ServerLog()   {
}
