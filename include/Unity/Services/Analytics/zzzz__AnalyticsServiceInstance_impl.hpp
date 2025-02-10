#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/AnalyticsServiceInstance.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBufferIds_impl.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsService_impl.hpp"
#include "Unity/Services/Analytics/zzzz__IUnstructuredEventRecorder_impl.hpp"
#include "Unity/Services/Analytics/zzzz__AnalyticsServiceInstance_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__IDataGenerator_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__StdCommonParams_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IAnalyticsForgetter_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBuffer_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IConsentTracker_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IDispatcher_def.hpp"
#include "Unity/Services/Analytics/zzzz__AnalyticsServiceInstance_def.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsContainer_def.hpp"
#include "Unity/Services/Analytics/zzzz__IAnalyticsServiceSystemCalls_def.hpp"
#include "Unity/Services/Analytics/zzzz__ICoreStatsHelper_def.hpp"
#include "Unity/Services/Analytics/zzzz__TransactionCurrencyConverter_def.hpp"
#include "Unity/Services/Authentication/Internal/zzzz__IPlayerId_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IExternalUserId_def.hpp"
#include "Unity/Services/Core/Device/Internal/zzzz__IInstallationId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow::AnalyticsServiceInstance_ConsentFlow(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow::AnalyticsServiceInstance_ConsentFlow()   {
}
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow::Neither{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow::Old{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow::New{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.OldForgetMeEventUploaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::OldForgetMeEventUploaded)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2e8b6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "OldForgetMeEventUploaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_CustomAnalyticsId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_CustomAnalyticsId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e8b820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_CustomAnalyticsId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_SessionID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_SessionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_SessionID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.set_SessionID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)(::StringW)>(&::Unity::Services::Analytics::AnalyticsServiceInstance::set_SessionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "set_SessionID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_UserId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_UserId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e8b8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_InstallId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_InstallId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e8b998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_InstallId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_PlayerId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_PlayerId)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2e8ba38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_PlayerId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_SessionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_SessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8bae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_SessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)(::Unity::Services::Analytics::Data::IDataGenerator*, ::Unity::Services::Analytics::Internal::IBuffer*, ::Unity::Services::Analytics::ICoreStatsHelper*, ::Unity::Services::Analytics::Internal::IConsentTracker*, ::Unity::Services::Analytics::Internal::IDispatcher*, ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*, ::Unity::Services::Core::Device::Internal::IInstallationId*, ::Unity::Services::Authentication::Internal::IPlayerId*, ::StringW, ::Unity::Services::Core::Configuration::Internal::IExternalUserId*, ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*, ::Unity::Services::Analytics::IAnalyticsContainer*)>(&::Unity::Services::Analytics::AnalyticsServiceInstance::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2e8b2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 12>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::IDataGenerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ICoreStatsHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IConsentTracker*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IDispatcher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Device::Internal::IInstallationId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IExternalUserId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IAnalyticsContainer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.ResumeDataDeletionIfNecessary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::ResumeDataDeletionIfNecessary)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e8b580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "ResumeDataDeletionIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.DeactivateWithDataDeletionRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::DeactivateWithDataDeletionRequest)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2e8d6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "DeactivateWithDataDeletionRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.DataDeletionCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::DataDeletionCompleted)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2e8dc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "DataDeletionCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.Deactivate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::Deactivate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2e8da54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.GetAnalyticsUserID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::GetAnalyticsUserID)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2e8b8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "GetAnalyticsUserID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.ApplicationPaused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)(bool)>(&::Unity::Services::Analytics::AnalyticsServiceInstance::ApplicationPaused)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2e8dd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "ApplicationPaused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.RefreshSessionID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::RefreshSessionID)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e8d68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "RefreshSessionID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.get_AutoflushPeriodMultiplier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::get_AutoflushPeriodMultiplier)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e8de74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_AutoflushPeriodMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::Flush)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x2e8df30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "Flush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.ApplicationQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::ApplicationQuit)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2e8e3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "ApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.RecordGameRunningIfNecessary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::RecordGameRunningIfNecessary)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2e8e594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "RecordGameRunningIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::AnalyticsServiceInstance.SetVariableCommonParams
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::AnalyticsServiceInstance::*)()>(&::Unity::Services::Analytics::AnalyticsServiceInstance::SetVariableCommonParams)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2e8e838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "SetVariableCommonParams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::TimeSpan& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_k_BackgroundSessionRefreshPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_BackgroundSessionRefreshPeriod;
}
constexpr ::System::TimeSpan const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_k_BackgroundSessionRefreshPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_BackgroundSessionRefreshPeriod;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_k_BackgroundSessionRefreshPeriod(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k_BackgroundSessionRefreshPeriod = value;
}
constexpr ::Unity::Services::Analytics::Data::StdCommonParams*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_CommonParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonParams;
}
constexpr ::Unity::Services::Analytics::Data::StdCommonParams* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_CommonParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommonParams;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_CommonParams(::Unity::Services::Analytics::Data::StdCommonParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommonParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Authentication::Internal::IPlayerId*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerId;
}
constexpr ::Unity::Services::Authentication::Internal::IPlayerId* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerId;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_PlayerId(::Unity::Services::Authentication::Internal::IPlayerId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PlayerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Device::Internal::IInstallationId*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_InstallId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstallId;
}
constexpr ::Unity::Services::Core::Device::Internal::IInstallationId* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_InstallId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstallId;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_InstallId(::Unity::Services::Core::Device::Internal::IInstallationId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstallId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Data::IDataGenerator*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_DataGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataGenerator;
}
constexpr ::Unity::Services::Analytics::Data::IDataGenerator* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_DataGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataGenerator;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_DataGenerator(::Unity::Services::Analytics::Data::IDataGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DataGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::ICoreStatsHelper*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_CoreStatsHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CoreStatsHelper;
}
constexpr ::Unity::Services::Analytics::ICoreStatsHelper* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_CoreStatsHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CoreStatsHelper;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_CoreStatsHelper(::Unity::Services::Analytics::ICoreStatsHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CoreStatsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IConsentTracker*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_ConsentTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsentTracker;
}
constexpr ::Unity::Services::Analytics::Internal::IConsentTracker* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_ConsentTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsentTracker;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_ConsentTracker(::Unity::Services::Analytics::Internal::IConsentTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ConsentTracker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IDispatcher*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_DataDispatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataDispatcher;
}
constexpr ::Unity::Services::Analytics::Internal::IDispatcher* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_DataDispatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataDispatcher;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_DataDispatcher(::Unity::Services::Analytics::Internal::IDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DataDispatcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_AnalyticsForgetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnalyticsForgetter;
}
constexpr ::Unity::Services::Analytics::Internal::IAnalyticsForgetter* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_AnalyticsForgetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnalyticsForgetter;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_AnalyticsForgetter(::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnalyticsForgetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_CustomUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomUserId;
}
constexpr ::Unity::Services::Core::Configuration::Internal::IExternalUserId* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_CustomUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomUserId;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_CustomUserId(::Unity::Services::Core::Configuration::Internal::IExternalUserId*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CustomUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_SystemCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SystemCalls;
}
constexpr ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_SystemCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SystemCalls;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_SystemCalls(::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SystemCalls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::IAnalyticsContainer*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr ::Unity::Services::Analytics::IAnalyticsContainer* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_Container(::Unity::Services::Analytics::IAnalyticsContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IBuffer*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_DataBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataBuffer;
}
constexpr ::Unity::Services::Analytics::Internal::IBuffer* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_DataBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DataBuffer;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_DataBuffer(::Unity::Services::Analytics::Internal::IBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DataBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get__SessionID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionID_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get__SessionID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionID_k__BackingField;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set__SessionID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SessionID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_BufferLengthAtLastGameRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferLengthAtLastGameRunning;
}
constexpr int32_t const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_BufferLengthAtLastGameRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferLengthAtLastGameRunning;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_BufferLengthAtLastGameRunning(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferLengthAtLastGameRunning = value;
}
constexpr ::System::DateTime& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_ApplicationPauseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplicationPauseTime;
}
constexpr ::System::DateTime const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_ApplicationPauseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplicationPauseTime;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_ApplicationPauseTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ApplicationPauseTime = value;
}
constexpr bool& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActive;
}
constexpr bool const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActive;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActive = value;
}
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_ConsentFlow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsentFlow;
}
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_ConsentFlow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsentFlow;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_ConsentFlow(::Unity::Services::Analytics::AnalyticsServiceInstance_ConsentFlow  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConsentFlow = value;
}
constexpr bool& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_StartUpEventsRecorded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartUpEventsRecorded;
}
constexpr bool const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_m_StartUpEventsRecorded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartUpEventsRecorded;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_m_StartUpEventsRecorded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartUpEventsRecorded = value;
}
constexpr ::Unity::Services::Analytics::TransactionCurrencyConverter*& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_converter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___converter;
}
constexpr ::Unity::Services::Analytics::TransactionCurrencyConverter* const& Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_get_converter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___converter;
}
constexpr void Unity::Services::Analytics::AnalyticsServiceInstance::__cordl_internal_set_converter(::Unity::Services::Analytics::TransactionCurrencyConverter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___converter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::OldForgetMeEventUploaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "OldForgetMeEventUploaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::get_CustomAnalyticsId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_CustomAnalyticsId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::get_SessionID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_SessionID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::set_SessionID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "set_SessionID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_UserId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::get_InstallId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_InstallId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_PlayerId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_SessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::_ctor(::Unity::Services::Analytics::Data::IDataGenerator*  dataGenerator, ::Unity::Services::Analytics::Internal::IBuffer*  realBuffer, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper, ::Unity::Services::Analytics::Internal::IConsentTracker*  consentTracker, ::Unity::Services::Analytics::Internal::IDispatcher*  dispatcher, ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  forgetter, ::Unity::Services::Core::Device::Internal::IInstallationId*  installId, ::Unity::Services::Authentication::Internal::IPlayerId*  playerId, ::StringW  environment, ::Unity::Services::Core::Configuration::Internal::IExternalUserId*  customAnalyticsId, ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  systemCalls, ::Unity::Services::Analytics::IAnalyticsContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 12>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::IDataGenerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ICoreStatsHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IConsentTracker*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IDispatcher*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Device::Internal::IInstallationId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::Internal::IPlayerId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IExternalUserId*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::IAnalyticsContainer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataGenerator, realBuffer, coreStatsHelper, consentTracker, dispatcher, forgetter, installId, playerId, environment, customAnalyticsId, systemCalls, container);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::ResumeDataDeletionIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "ResumeDataDeletionIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::DeactivateWithDataDeletionRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "DeactivateWithDataDeletionRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::DataDeletionCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "DataDeletionCompleted",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "Deactivate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::AnalyticsServiceInstance::GetAnalyticsUserID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "GetAnalyticsUserID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::ApplicationPaused(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "ApplicationPaused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paused);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::RefreshSessionID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "RefreshSessionID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Analytics::AnalyticsServiceInstance::get_AutoflushPeriodMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "get_AutoflushPeriodMultiplier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "Flush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::ApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "ApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::RecordGameRunningIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "RecordGameRunningIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::AnalyticsServiceInstance::SetVariableCommonParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::AnalyticsServiceInstance*>::get(),
                        "SetVariableCommonParams",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::AnalyticsServiceInstance* Unity::Services::Analytics::AnalyticsServiceInstance::New_ctor(::Unity::Services::Analytics::Data::IDataGenerator*  dataGenerator, ::Unity::Services::Analytics::Internal::IBuffer*  realBuffer, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper, ::Unity::Services::Analytics::Internal::IConsentTracker*  consentTracker, ::Unity::Services::Analytics::Internal::IDispatcher*  dispatcher, ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*  forgetter, ::Unity::Services::Core::Device::Internal::IInstallationId*  installId, ::Unity::Services::Authentication::Internal::IPlayerId*  playerId, ::StringW  environment, ::Unity::Services::Core::Configuration::Internal::IExternalUserId*  customAnalyticsId, ::Unity::Services::Analytics::IAnalyticsServiceSystemCalls*  systemCalls, ::Unity::Services::Analytics::IAnalyticsContainer*  container)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::AnalyticsServiceInstance*>(dataGenerator, realBuffer, coreStatsHelper, consentTracker, dispatcher, forgetter, installId, playerId, environment, customAnalyticsId, systemCalls, container));
}
/// @brief Convert operator to "::Unity::Services::Analytics::IAnalyticsService"
constexpr  Unity::Services::Analytics::AnalyticsServiceInstance::operator ::Unity::Services::Analytics::IAnalyticsService*() noexcept {
return static_cast<::Unity::Services::Analytics::IAnalyticsService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::IAnalyticsService"
constexpr ::Unity::Services::Analytics::IAnalyticsService* Unity::Services::Analytics::AnalyticsServiceInstance::i___Unity__Services__Analytics__IAnalyticsService() noexcept {
return static_cast<::Unity::Services::Analytics::IAnalyticsService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Analytics::IUnstructuredEventRecorder"
constexpr  Unity::Services::Analytics::AnalyticsServiceInstance::operator ::Unity::Services::Analytics::IUnstructuredEventRecorder*() noexcept {
return static_cast<::Unity::Services::Analytics::IUnstructuredEventRecorder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::IUnstructuredEventRecorder"
constexpr ::Unity::Services::Analytics::IUnstructuredEventRecorder* Unity::Services::Analytics::AnalyticsServiceInstance::i___Unity__Services__Analytics__IUnstructuredEventRecorder() noexcept {
return static_cast<::Unity::Services::Analytics::IUnstructuredEventRecorder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IBufferIds"
constexpr  Unity::Services::Analytics::AnalyticsServiceInstance::operator ::Unity::Services::Analytics::Internal::IBufferIds*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IBufferIds*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IBufferIds"
constexpr ::Unity::Services::Analytics::Internal::IBufferIds* Unity::Services::Analytics::AnalyticsServiceInstance::i___Unity__Services__Analytics__Internal__IBufferIds() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IBufferIds*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::AnalyticsServiceInstance::AnalyticsServiceInstance()   {
}
