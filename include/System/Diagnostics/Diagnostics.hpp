#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Diagnostics/AsyncStreamReader.hpp"
#include "System/Diagnostics/BooleanSwitch.hpp"
#include "System/Diagnostics/ConditionalAttribute.hpp"
#include "System/Diagnostics/DebuggableAttribute.hpp"
#include "System/Diagnostics/Debugger.hpp"
#include "System/Diagnostics/DebuggerBrowsableAttribute.hpp"
#include "System/Diagnostics/DebuggerBrowsableState.hpp"
#include "System/Diagnostics/DebuggerDisplayAttribute.hpp"
#include "System/Diagnostics/DebuggerHiddenAttribute.hpp"
#include "System/Diagnostics/DebuggerNonUserCodeAttribute.hpp"
#include "System/Diagnostics/DebuggerStepThroughAttribute.hpp"
#include "System/Diagnostics/DebuggerTypeProxyAttribute.hpp"
#include "System/Diagnostics/DiagnosticsConfigurationHandler.hpp"
#include "System/Diagnostics/MonitoringDescriptionAttribute.hpp"
#include "System/Diagnostics/Process.hpp"
#include "System/Diagnostics/ProcessInfo.hpp"
#include "System/Diagnostics/ProcessModuleCollection.hpp"
#include "System/Diagnostics/ProcessStartInfo.hpp"
#include "System/Diagnostics/ProcessThreadCollection.hpp"
#include "System/Diagnostics/ProcessWaitHandle.hpp"
#include "System/Diagnostics/ProcessWindowStyle.hpp"
#include "System/Diagnostics/StackFrame.hpp"
#include "System/Diagnostics/StackTrace.hpp"
#include "System/Diagnostics/StackTraceHiddenAttribute.hpp"
#include "System/Diagnostics/Stopwatch.hpp"
#include "System/Diagnostics/Switch.hpp"
#include "System/Diagnostics/SwitchLevelAttribute.hpp"
#include "System/Diagnostics/TraceLevel.hpp"
#include "System/Diagnostics/TraceSwitch.hpp"
#ifdef __cpp_modules
                    export module Diagnostics;
                    #endif
                
