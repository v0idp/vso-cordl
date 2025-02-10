#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Unity/Services/Analytics/Internal/AnalyticsForgetter.hpp"
#include "Unity/Services/Analytics/Internal/AnalyticsUserIdServiceComponent.hpp"
#include "Unity/Services/Analytics/Internal/AnalyticsWebRequest.hpp"
#include "Unity/Services/Analytics/Internal/BufferSystemCalls.hpp"
#include "Unity/Services/Analytics/Internal/BufferX.hpp"
#include "Unity/Services/Analytics/Internal/Consent.hpp"
#include "Unity/Services/Analytics/Internal/ConsentStatus.hpp"
#include "Unity/Services/Analytics/Internal/ConsentTracker.hpp"
#include "Unity/Services/Analytics/Internal/DiskCache.hpp"
#include "Unity/Services/Analytics/Internal/Dispatcher.hpp"
#include "Unity/Services/Analytics/Internal/FileSystemCalls.hpp"
#include "Unity/Services/Analytics/Internal/GeoAPI.hpp"
#include "Unity/Services/Analytics/Internal/GeoIPResponse.hpp"
#include "Unity/Services/Analytics/Internal/IAnalyticsForgetter.hpp"
#include "Unity/Services/Analytics/Internal/IBuffer.hpp"
#include "Unity/Services/Analytics/Internal/IBufferIds.hpp"
#include "Unity/Services/Analytics/Internal/IBufferSystemCalls.hpp"
#include "Unity/Services/Analytics/Internal/IConsentTracker.hpp"
#include "Unity/Services/Analytics/Internal/IDiskCache.hpp"
#include "Unity/Services/Analytics/Internal/IDispatcher.hpp"
#include "Unity/Services/Analytics/Internal/IFileSystemCalls.hpp"
#include "Unity/Services/Analytics/Internal/IGeoAPI.hpp"
#include "Unity/Services/Analytics/Internal/IPersistence.hpp"
#include "Unity/Services/Analytics/Internal/IWebRequest.hpp"
#include "Unity/Services/Analytics/Internal/IWebRequestHelper.hpp"
#include "Unity/Services/Analytics/Internal/PlayerPrefsPersistence.hpp"
#include "Unity/Services/Analytics/Internal/StandardEventServiceComponent.hpp"
#include "Unity/Services/Analytics/Internal/WebRequestHelper.hpp"
#ifdef __cpp_modules
                    export module Internal;
                    #endif
                
