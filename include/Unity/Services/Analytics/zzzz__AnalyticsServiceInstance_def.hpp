#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsServiceInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBufferIds_def.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsService_def.hpp"
#include "Unity/Services/Analytics/zzzz__IUnstructuredEventRecorder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalyticsServiceInstance)
namespace Unity::Services::Analytics::Data {
class IDataGenerator;
}
namespace Unity::Services::Analytics::Data {
class StdCommonParams;
}
namespace Unity::Services::Analytics::Internal {
class IAnalyticsForgetter;
}
namespace Unity::Services::Analytics::Internal {
class IBuffer;
}
namespace Unity::Services::Analytics::Internal {
class IConsentTracker;
}
namespace Unity::Services::Analytics::Internal {
class IDispatcher;
}
namespace Unity::Services::Analytics {
struct AnalyticsServiceInstance_ConsentFlow;
}
namespace Unity::Services::Analytics {
class IAnalyticsContainer;
}
namespace Unity::Services::Analytics {
class IAnalyticsServiceSystemCalls;
}
namespace Unity::Services::Analytics {
class ICoreStatsHelper;
}
namespace Unity::Services::Analytics {
class TransactionCurrencyConverter;
}
namespace Unity::Services::Authentication::Internal {
class IPlayerId;
}
namespace Unity::Services::Core::Configuration::Internal {
class IExternalUserId;
}
namespace Unity::Services::Core::Device::Internal {
class IInstallationId;
}
// Forward declare root types
namespace Unity::Services::Analytics {
struct AnalyticsServiceInstance_ConsentFlow;
}
namespace Unity::Services::Analytics {
class AnalyticsServiceInstance;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow);
MARK_REF_PTR_T(::Unity::Services::Analytics::AnalyticsServiceInstance);
// Dependencies 
namespace Unity::Services::Analytics {
// Is value type: true
// CS Name: Unity.Services.Analytics.AnalyticsServiceInstance/ConsentFlow
struct CORDL_TYPE AnalyticsServiceInstance_ConsentFlow {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnalyticsServiceInstance_ConsentFlow_Unwrapped
enum struct __AnalyticsServiceInstance_ConsentFlow_Unwrapped : int32_t {
__E_Neither = static_cast<int32_t>(0x0),
__E_Old = static_cast<int32_t>(0x1),
__E_New = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalyticsServiceInstance_ConsentFlow_Unwrapped () const noexcept {
return static_cast<__AnalyticsServiceInstance_ConsentFlow_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsServiceInstance_ConsentFlow() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnalyticsServiceInstance_ConsentFlow(int32_t  value__) noexcept;

/// @brief Field Neither value: I32(0)
static ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow const Neither;

/// @brief Field New value: I32(2)
static ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow const New;

/// @brief Field Old value: I32(1)
static ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow const Old;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow, 0x4>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
// Dependencies System.DateTime, System.Object, System.TimeSpan, Unity.Services.Analytics.AnalyticsServiceInstance::ConsentFlow, Unity.Services.Analytics.IAnalyticsService, Unity.Services.Analytics.IUnstructuredEventRecorder, Unity.Services.Analytics.Internal.IBufferIds
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.AnalyticsServiceInstance
class CORDL_TYPE AnalyticsServiceInstance : public ::System::Object {
public:
// Declarations
using ConsentFlow = ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow;

 __declspec(property(get=get_AutoflushPeriodMultiplier)) int32_t  AutoflushPeriodMultiplier;

 __declspec(property(get=get_CustomAnalyticsId)) ::StringW  CustomAnalyticsId;

 __declspec(property(get=get_InstallId)) ::StringW  InstallId;

 __declspec(property(get=get_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_SessionID, put=set_SessionID)) ::StringW  SessionID;

 __declspec(property(get=get_SessionId)) ::StringW  SessionId;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field <SessionID>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__SessionID_k__BackingField, put=__cordl_internal_set__SessionID_k__BackingField)) ::StringW  _SessionID_k__BackingField;

/// @brief Field converter, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_converter, put=__cordl_internal_set_converter)) ::Unity::Services::Analytics::TransactionCurrencyConverter*  converter;

/// @brief Field k_BackgroundSessionRefreshPeriod, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_k_BackgroundSessionRefreshPeriod, put=__cordl_internal_set_k_BackgroundSessionRefreshPeriod)) ::System::TimeSpan  k_BackgroundSessionRefreshPeriod;

/// @brief Field m_AnalyticsForgetter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnalyticsForgetter, put=__cordl_internal_set_m_AnalyticsForgetter)) ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  m_AnalyticsForgetter;

/// @brief Field m_ApplicationPauseTime, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ApplicationPauseTime, put=__cordl_internal_set_m_ApplicationPauseTime)) ::System::DateTime  m_ApplicationPauseTime;

/// @brief Field m_BufferLengthAtLastGameRunning, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BufferLengthAtLastGameRunning, put=__cordl_internal_set_m_BufferLengthAtLastGameRunning)) int32_t  m_BufferLengthAtLastGameRunning;

/// @brief Field m_CommonParams, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CommonParams, put=__cordl_internal_set_m_CommonParams)) ::Unity::Services::Analytics::Data::StdCommonParams*  m_CommonParams;

/// @brief Field m_ConsentFlow, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConsentFlow, put=__cordl_internal_set_m_ConsentFlow)) ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  m_ConsentFlow;

/// @brief Field m_ConsentTracker, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConsentTracker, put=__cordl_internal_set_m_ConsentTracker)) ::Unity::Services::Analytics::Internal::IConsentTracker*  m_ConsentTracker;

/// @brief Field m_Container, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Container, put=__cordl_internal_set_m_Container)) ::Unity::Services::Analytics::IAnalyticsContainer*  m_Container;

/// @brief Field m_CoreStatsHelper, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CoreStatsHelper, put=__cordl_internal_set_m_CoreStatsHelper)) ::Unity::Services::Analytics::ICoreStatsHelper*  m_CoreStatsHelper;

/// @brief Field m_CustomUserId, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomUserId, put=__cordl_internal_set_m_CustomUserId)) ::Unity::Services::Core::Configuration::Internal::IExternalUserId*  m_CustomUserId;

/// @brief Field m_DataBuffer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DataBuffer, put=__cordl_internal_set_m_DataBuffer)) ::Unity::Services::Analytics::Internal::IBuffer*  m_DataBuffer;

/// @brief Field m_DataDispatcher, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DataDispatcher, put=__cordl_internal_set_m_DataDispatcher)) ::Unity::Services::Analytics::Internal::IDispatcher*  m_DataDispatcher;

/// @brief Field m_DataGenerator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DataGenerator, put=__cordl_internal_set_m_DataGenerator)) ::Unity::Services::Analytics::Data::IDataGenerator*  m_DataGenerator;

/// @brief Field m_InstallId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstallId, put=__cordl_internal_set_m_InstallId)) ::Unity::Services::Core::Device::Internal::IInstallationId*  m_InstallId;

/// @brief Field m_IsActive, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsActive, put=__cordl_internal_set_m_IsActive)) bool  m_IsActive;

/// @brief Field m_PlayerId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlayerId, put=__cordl_internal_set_m_PlayerId)) ::Unity::Services::Authentication::Internal::IPlayerId*  m_PlayerId;

/// @brief Field m_StartUpEventsRecorded, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StartUpEventsRecorded, put=__cordl_internal_set_m_StartUpEventsRecorded)) bool  m_StartUpEventsRecorded;

/// @brief Field m_SystemCalls, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SystemCalls, put=__cordl_internal_set_m_SystemCalls)) ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  m_SystemCalls;

/// @brief Convert operator to "::Unity::Services::Analytics::IAnalyticsService"
constexpr operator  ::Unity::Services::Analytics::IAnalyticsService*() noexcept;

/// @brief Convert operator to "::Unity::Services::Analytics::IUnstructuredEventRecorder"
constexpr operator  ::Unity::Services::Analytics::IUnstructuredEventRecorder*() noexcept;

/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IBufferIds"
constexpr operator  ::Unity::Services::Analytics::Internal::IBufferIds*() noexcept;

/// @brief Method ApplicationPaused, addr 0x2e8dd40, size 0x134, virtual false, abstract: false, final false
inline void ApplicationPaused(bool  paused) ;

/// @brief Method ApplicationQuit, addr 0x2e8e3f4, size 0x1a0, virtual false, abstract: false, final false
inline void ApplicationQuit() ;

/// @brief Method DataDeletionCompleted, addr 0x2e8dc88, size 0xb8, virtual false, abstract: false, final false
inline void DataDeletionCompleted() ;

/// @brief Method Deactivate, addr 0x2e8da54, size 0x234, virtual false, abstract: false, final false
inline void Deactivate() ;

/// @brief Method DeactivateWithDataDeletionRequest, addr 0x2e8d6c0, size 0x2e8, virtual false, abstract: false, final false
inline void DeactivateWithDataDeletionRequest() ;

/// @brief Method Flush, addr 0x2e8df30, size 0x4c4, virtual true, abstract: false, final true
inline void Flush() ;

/// @brief Method GetAnalyticsUserID, addr 0x2e8b8d4, size 0xc4, virtual true, abstract: false, final true
inline ::StringW GetAnalyticsUserID() ;

static inline ::Unity::Services::Analytics::AnalyticsServiceInstance* New_ctor(::Unity::Services::Analytics::Data::IDataGenerator*  dataGenerator, ::Unity::Services::Analytics::Internal::IBuffer*  realBuffer, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper, ::Unity::Services::Analytics::Internal::IConsentTracker*  consentTracker, ::Unity::Services::Analytics::Internal::IDispatcher*  dispatcher, ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  forgetter, ::Unity::Services::Core::Device::Internal::IInstallationId*  installId, ::Unity::Services::Authentication::Internal::IPlayerId*  playerId, ::StringW  environment, ::Unity::Services::Core::Configuration::Internal::IExternalUserId*  customAnalyticsId, ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  systemCalls, ::Unity::Services::Analytics::IAnalyticsContainer*  container) ;

/// @brief Method OldForgetMeEventUploaded, addr 0x2e8b6f4, size 0x12c, virtual false, abstract: false, final false
inline void OldForgetMeEventUploaded() ;

/// @brief Method RecordGameRunningIfNecessary, addr 0x2e8e594, size 0x2a4, virtual false, abstract: false, final false
inline void RecordGameRunningIfNecessary() ;

/// @brief Method RefreshSessionID, addr 0x2e8d68c, size 0x34, virtual false, abstract: false, final false
inline void RefreshSessionID() ;

/// @brief Method ResumeDataDeletionIfNecessary, addr 0x2e8b580, size 0xb8, virtual false, abstract: false, final false
inline void ResumeDataDeletionIfNecessary() ;

/// @brief Method SetVariableCommonParams, addr 0x2e8e838, size 0x168, virtual false, abstract: false, final false
inline void SetVariableCommonParams() ;

constexpr ::StringW const& __cordl_internal_get__SessionID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SessionID_k__BackingField() ;

constexpr ::Unity::Services::Analytics::TransactionCurrencyConverter* const& __cordl_internal_get_converter() const;

constexpr ::Unity::Services::Analytics::TransactionCurrencyConverter*& __cordl_internal_get_converter() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_k_BackgroundSessionRefreshPeriod() const;

constexpr ::System::TimeSpan& __cordl_internal_get_k_BackgroundSessionRefreshPeriod() ;

constexpr ::Unity::Services::Analytics::Internal::IAnalyticsForgetter* const& __cordl_internal_get_m_AnalyticsForgetter() const;

constexpr ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*& __cordl_internal_get_m_AnalyticsForgetter() ;

constexpr ::System::DateTime const& __cordl_internal_get_m_ApplicationPauseTime() const;

constexpr ::System::DateTime& __cordl_internal_get_m_ApplicationPauseTime() ;

constexpr int32_t const& __cordl_internal_get_m_BufferLengthAtLastGameRunning() const;

constexpr int32_t& __cordl_internal_get_m_BufferLengthAtLastGameRunning() ;

constexpr ::Unity::Services::Analytics::Data::StdCommonParams* const& __cordl_internal_get_m_CommonParams() const;

constexpr ::Unity::Services::Analytics::Data::StdCommonParams*& __cordl_internal_get_m_CommonParams() ;

constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow const& __cordl_internal_get_m_ConsentFlow() const;

constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow& __cordl_internal_get_m_ConsentFlow() ;

constexpr ::Unity::Services::Analytics::Internal::IConsentTracker* const& __cordl_internal_get_m_ConsentTracker() const;

constexpr ::Unity::Services::Analytics::Internal::IConsentTracker*& __cordl_internal_get_m_ConsentTracker() ;

constexpr ::Unity::Services::Analytics::IAnalyticsContainer* const& __cordl_internal_get_m_Container() const;

constexpr ::Unity::Services::Analytics::IAnalyticsContainer*& __cordl_internal_get_m_Container() ;

constexpr ::Unity::Services::Analytics::ICoreStatsHelper* const& __cordl_internal_get_m_CoreStatsHelper() const;

constexpr ::Unity::Services::Analytics::ICoreStatsHelper*& __cordl_internal_get_m_CoreStatsHelper() ;

constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId* const& __cordl_internal_get_m_CustomUserId() const;

constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId*& __cordl_internal_get_m_CustomUserId() ;

constexpr ::Unity::Services::Analytics::Internal::IBuffer* const& __cordl_internal_get_m_DataBuffer() const;

constexpr ::Unity::Services::Analytics::Internal::IBuffer*& __cordl_internal_get_m_DataBuffer() ;

constexpr ::Unity::Services::Analytics::Internal::IDispatcher* const& __cordl_internal_get_m_DataDispatcher() const;

constexpr ::Unity::Services::Analytics::Internal::IDispatcher*& __cordl_internal_get_m_DataDispatcher() ;

constexpr ::Unity::Services::Analytics::Data::IDataGenerator* const& __cordl_internal_get_m_DataGenerator() const;

constexpr ::Unity::Services::Analytics::Data::IDataGenerator*& __cordl_internal_get_m_DataGenerator() ;

constexpr ::Unity::Services::Core::Device::Internal::IInstallationId* const& __cordl_internal_get_m_InstallId() const;

constexpr ::Unity::Services::Core::Device::Internal::IInstallationId*& __cordl_internal_get_m_InstallId() ;

constexpr bool const& __cordl_internal_get_m_IsActive() const;

constexpr bool& __cordl_internal_get_m_IsActive() ;

constexpr ::Unity::Services::Authentication::Internal::IPlayerId* const& __cordl_internal_get_m_PlayerId() const;

constexpr ::Unity::Services::Authentication::Internal::IPlayerId*& __cordl_internal_get_m_PlayerId() ;

constexpr bool const& __cordl_internal_get_m_StartUpEventsRecorded() const;

constexpr bool& __cordl_internal_get_m_StartUpEventsRecorded() ;

constexpr ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls* const& __cordl_internal_get_m_SystemCalls() const;

constexpr ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*& __cordl_internal_get_m_SystemCalls() ;

constexpr void __cordl_internal_set__SessionID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_converter(::Unity::Services::Analytics::TransactionCurrencyConverter*  value) ;

constexpr void __cordl_internal_set_k_BackgroundSessionRefreshPeriod(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_m_AnalyticsForgetter(::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  value) ;

constexpr void __cordl_internal_set_m_ApplicationPauseTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_m_BufferLengthAtLastGameRunning(int32_t  value) ;

constexpr void __cordl_internal_set_m_CommonParams(::Unity::Services::Analytics::Data::StdCommonParams*  value) ;

constexpr void __cordl_internal_set_m_ConsentFlow(::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  value) ;

constexpr void __cordl_internal_set_m_ConsentTracker(::Unity::Services::Analytics::Internal::IConsentTracker*  value) ;

constexpr void __cordl_internal_set_m_Container(::Unity::Services::Analytics::IAnalyticsContainer*  value) ;

constexpr void __cordl_internal_set_m_CoreStatsHelper(::Unity::Services::Analytics::ICoreStatsHelper*  value) ;

constexpr void __cordl_internal_set_m_CustomUserId(::Unity::Services::Core::Configuration::Internal::IExternalUserId*  value) ;

constexpr void __cordl_internal_set_m_DataBuffer(::Unity::Services::Analytics::Internal::IBuffer*  value) ;

constexpr void __cordl_internal_set_m_DataDispatcher(::Unity::Services::Analytics::Internal::IDispatcher*  value) ;

constexpr void __cordl_internal_set_m_DataGenerator(::Unity::Services::Analytics::Data::IDataGenerator*  value) ;

constexpr void __cordl_internal_set_m_InstallId(::Unity::Services::Core::Device::Internal::IInstallationId*  value) ;

constexpr void __cordl_internal_set_m_IsActive(bool  value) ;

constexpr void __cordl_internal_set_m_PlayerId(::Unity::Services::Authentication::Internal::IPlayerId*  value) ;

constexpr void __cordl_internal_set_m_StartUpEventsRecorded(bool  value) ;

constexpr void __cordl_internal_set_m_SystemCalls(::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  value) ;

/// @brief Method .ctor, addr 0x2e8b2c4, size 0x2ac, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Analytics::Data::IDataGenerator*  dataGenerator, ::Unity::Services::Analytics::Internal::IBuffer*  realBuffer, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper, ::Unity::Services::Analytics::Internal::IConsentTracker*  consentTracker, ::Unity::Services::Analytics::Internal::IDispatcher*  dispatcher, ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  forgetter, ::Unity::Services::Core::Device::Internal::IInstallationId*  installId, ::Unity::Services::Authentication::Internal::IPlayerId*  playerId, ::StringW  environment, ::Unity::Services::Core::Configuration::Internal::IExternalUserId*  customAnalyticsId, ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  systemCalls, ::Unity::Services::Analytics::IAnalyticsContainer*  container) ;

/// @brief Method get_AutoflushPeriodMultiplier, addr 0x2e8de74, size 0xbc, virtual false, abstract: false, final false
inline int32_t get_AutoflushPeriodMultiplier() ;

/// @brief Method get_CustomAnalyticsId, addr 0x2e8b820, size 0xa0, virtual false, abstract: false, final false
inline ::StringW get_CustomAnalyticsId() ;

/// @brief Method get_InstallId, addr 0x2e8b998, size 0xa0, virtual true, abstract: false, final true
inline ::StringW get_InstallId() ;

/// @brief Method get_PlayerId, addr 0x2e8ba38, size 0xac, virtual true, abstract: false, final true
inline ::StringW get_PlayerId() ;

/// @brief Method get_SessionID, addr 0x2e8b8c0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_SessionID() ;

/// @brief Method get_SessionId, addr 0x2e8bae4, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_SessionId() ;

/// @brief Method get_UserId, addr 0x2e8b8d0, size 0x4, virtual true, abstract: false, final true
inline ::StringW get_UserId() ;

/// @brief Convert to "::Unity::Services::Analytics::IAnalyticsService"
constexpr ::Unity::Services::Analytics::IAnalyticsService* i___Unity__Services__Analytics__IAnalyticsService() noexcept;

/// @brief Convert to "::Unity::Services::Analytics::IUnstructuredEventRecorder"
constexpr ::Unity::Services::Analytics::IUnstructuredEventRecorder* i___Unity__Services__Analytics__IUnstructuredEventRecorder() noexcept;

/// @brief Convert to "::Unity::Services::Analytics::Internal::IBufferIds"
constexpr ::Unity::Services::Analytics::Internal::IBufferIds* i___Unity__Services__Analytics__Internal__IBufferIds() noexcept;

/// @brief Method set_SessionID, addr 0x2e8b8c8, size 0x8, virtual false, abstract: false, final false
inline void set_SessionID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnalyticsServiceInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsServiceInstance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnalyticsServiceInstance(AnalyticsServiceInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnalyticsServiceInstance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnalyticsServiceInstance(AnalyticsServiceInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11850};

/// @brief Field k_ForgetCallingId offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ForgetCallingId{u"com.unity.services.analytics.Events.OptOut"};

/// @brief Field m_StartUpCallingId offset 0xffffffff size 0x8
static constexpr ::ConstString  m_StartUpCallingId{u"com.unity.services.analytics.Events.Startup"};

/// @brief Field k_BackgroundSessionRefreshPeriod, offset: 0x10, size: 0x8, def value: None
 ::System::TimeSpan  ___k_BackgroundSessionRefreshPeriod;

/// @brief Field m_CommonParams, offset: 0x18, size: 0x8, def value: None
 ::Unity::Services::Analytics::Data::StdCommonParams*  ___m_CommonParams;

/// @brief Field m_PlayerId, offset: 0x20, size: 0x8, def value: None
 ::Unity::Services::Authentication::Internal::IPlayerId*  ___m_PlayerId;

/// @brief Field m_InstallId, offset: 0x28, size: 0x8, def value: None
 ::Unity::Services::Core::Device::Internal::IInstallationId*  ___m_InstallId;

/// @brief Field m_DataGenerator, offset: 0x30, size: 0x8, def value: None
 ::Unity::Services::Analytics::Data::IDataGenerator*  ___m_DataGenerator;

/// @brief Field m_CoreStatsHelper, offset: 0x38, size: 0x8, def value: None
 ::Unity::Services::Analytics::ICoreStatsHelper*  ___m_CoreStatsHelper;

/// @brief Field m_ConsentTracker, offset: 0x40, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IConsentTracker*  ___m_ConsentTracker;

/// @brief Field m_DataDispatcher, offset: 0x48, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IDispatcher*  ___m_DataDispatcher;

/// @brief Field m_AnalyticsForgetter, offset: 0x50, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  ___m_AnalyticsForgetter;

/// @brief Field m_CustomUserId, offset: 0x58, size: 0x8, def value: None
 ::Unity::Services::Core::Configuration::Internal::IExternalUserId*  ___m_CustomUserId;

/// @brief Field m_SystemCalls, offset: 0x60, size: 0x8, def value: None
 ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  ___m_SystemCalls;

/// @brief Field m_Container, offset: 0x68, size: 0x8, def value: None
 ::Unity::Services::Analytics::IAnalyticsContainer*  ___m_Container;

/// @brief Field m_DataBuffer, offset: 0x70, size: 0x8, def value: None
 ::Unity::Services::Analytics::Internal::IBuffer*  ___m_DataBuffer;

/// @brief Field <SessionID>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____SessionID_k__BackingField;

/// @brief Field m_BufferLengthAtLastGameRunning, offset: 0x80, size: 0x4, def value: None
 int32_t  ___m_BufferLengthAtLastGameRunning;

/// @brief Field m_ApplicationPauseTime, offset: 0x88, size: 0x8, def value: None
 ::System::DateTime  ___m_ApplicationPauseTime;

/// @brief Field m_IsActive, offset: 0x90, size: 0x1, def value: None
 bool  ___m_IsActive;

/// @brief Field m_ConsentFlow, offset: 0x94, size: 0x4, def value: None
 ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  ___m_ConsentFlow;

/// @brief Field m_StartUpEventsRecorded, offset: 0x98, size: 0x1, def value: None
 bool  ___m_StartUpEventsRecorded;

/// @brief Field converter, offset: 0xa0, size: 0x8, def value: None
 ::Unity::Services::Analytics::TransactionCurrencyConverter*  ___converter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___k_BackgroundSessionRefreshPeriod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_CommonParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_PlayerId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_InstallId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_DataGenerator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_CoreStatsHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_ConsentTracker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_DataDispatcher) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_AnalyticsForgetter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_CustomUserId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_SystemCalls) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_Container) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_DataBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ____SessionID_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_BufferLengthAtLastGameRunning) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_ApplicationPauseTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_IsActive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_ConsentFlow) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___m_StartUpEventsRecorded) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Analytics::AnalyticsServiceInstance, ___converter) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::AnalyticsServiceInstance, 0xa8>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow, "Unity.Services.Analytics", "AnalyticsServiceInstance/ConsentFlow");
NEED_NO_BOX(::Unity::Services::Analytics::AnalyticsServiceInstance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::AnalyticsServiceInstance*, "Unity.Services.Analytics", "AnalyticsServiceInstance");
