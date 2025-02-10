#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Unity/Services/Analytics/AnalyticsContainer.hpp"
#include "Unity/Services/Analytics/AnalyticsService.hpp"
#include "Unity/Services/Analytics/AnalyticsServiceInstance.hpp"
#include "Unity/Services/Analytics/AnalyticsServiceSystemCalls.hpp"
#include "Unity/Services/Analytics/ConsentCheckException.hpp"
#include "Unity/Services/Analytics/ConsentCheckExceptionReason.hpp"
#include "Unity/Services/Analytics/CoreStatsHelper.hpp"
#include "Unity/Services/Analytics/IAnalyticsContainer.hpp"
#include "Unity/Services/Analytics/IAnalyticsService.hpp"
#include "Unity/Services/Analytics/IAnalyticsServiceSystemCalls.hpp"
#include "Unity/Services/Analytics/ICoreStatsHelper.hpp"
#include "Unity/Services/Analytics/IUnstructuredEventRecorder.hpp"
#include "Unity/Services/Analytics/SdkVersion.hpp"
#include "Unity/Services/Analytics/TransactionCurrencyConverter.hpp"
#ifdef __cpp_modules
                    export module Analytics;
                    #endif
                
