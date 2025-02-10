#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/ConsentTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__ConsentStatus_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IConsentTracker_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__ConsentTracker_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__ConsentStatus_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__GeoIPResponse_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IGeoAPI_def.hpp"
#include "Unity/Services/Analytics/zzzz__ICoreStatsHelper_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.get_optInPiplConsentStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Analytics::Internal::ConsentStatus (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::get_optInPiplConsentStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9198c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "get_optInPiplConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.set_optInPiplConsentStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)(::Unity::Services::Analytics::Internal::ConsentStatus)>(&::Unity::Services::Analytics::Internal::ConsentTracker::set_optInPiplConsentStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e91994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "set_optInPiplConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::ConsentStatus>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.get_optOutConsentStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Analytics::Internal::ConsentStatus (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::get_optOutConsentStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9199c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "get_optOutConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.set_optOutConsentStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)(::Unity::Services::Analytics::Internal::ConsentStatus)>(&::Unity::Services::Analytics::Internal::ConsentTracker::set_optOutConsentStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e919a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "set_optOutConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::ConsentStatus>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)(::Unity::Services::Analytics::ICoreStatsHelper*)>(&::Unity::Services::Analytics::Internal::ConsentTracker::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2e8a7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ICoreStatsHelper*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)(::Unity::Services::Analytics::Internal::IGeoAPI*, ::Unity::Services::Analytics::ICoreStatsHelper*)>(&::Unity::Services::Analytics::Internal::ConsentTracker::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2e919fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IGeoAPI*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ICoreStatsHelper*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.IsGeoIpChecked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::IsGeoIpChecked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e91bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsGeoIpChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.IsConsentGiven
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::IsConsentGiven)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e91bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsConsentGiven",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.IsConsentGiven
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::ConsentTracker::*)(::StringW)>(&::Unity::Services::Analytics::Internal::ConsentTracker::IsConsentGiven)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e91c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsConsentGiven",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.IsOptingOutInProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::IsOptingOutInProgress)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e91cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsOptingOutInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.FinishOptOutProcess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::FinishOptOutProcess)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e91d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "FinishOptOutProcess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.ReadOptInPiplConsentStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::ReadOptInPiplConsentStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e91b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "ReadOptInPiplConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.ReadOptOutConsentStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::ReadOptOutConsentStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e91b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "ReadOptOutConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::ConsentTracker.ValidateConsentWasChecked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::ConsentTracker::*)()>(&::Unity::Services::Analytics::Internal::ConsentTracker::ValidateConsentWasChecked)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e91bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "ValidateConsentWasChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Analytics::Internal::IGeoAPI*& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get_m_GeoAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GeoAPI;
}
constexpr ::Unity::Services::Analytics::Internal::IGeoAPI* const& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get_m_GeoAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GeoAPI;
}
constexpr void Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_set_m_GeoAPI(::Unity::Services::Analytics::Internal::IGeoAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GeoAPI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::ICoreStatsHelper*& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get_m_CoreStatsHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CoreStatsHelper;
}
constexpr ::Unity::Services::Analytics::ICoreStatsHelper* const& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get_m_CoreStatsHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CoreStatsHelper;
}
constexpr void Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_set_m_CoreStatsHelper(::Unity::Services::Analytics::ICoreStatsHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CoreStatsHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get__optInPiplConsentStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optInPiplConsentStatus_k__BackingField;
}
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus const& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get__optInPiplConsentStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optInPiplConsentStatus_k__BackingField;
}
constexpr void Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_set__optInPiplConsentStatus_k__BackingField(::Unity::Services::Analytics::Internal::ConsentStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optInPiplConsentStatus_k__BackingField = value;
}
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get__optOutConsentStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optOutConsentStatus_k__BackingField;
}
constexpr ::Unity::Services::Analytics::Internal::ConsentStatus const& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get__optOutConsentStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optOutConsentStatus_k__BackingField;
}
constexpr void Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_set__optOutConsentStatus_k__BackingField(::Unity::Services::Analytics::Internal::ConsentStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optOutConsentStatus_k__BackingField = value;
}
constexpr ::Unity::Services::Analytics::Internal::GeoIPResponse*& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get_response()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr ::Unity::Services::Analytics::Internal::GeoIPResponse* const& Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_get_response() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___response;
}
constexpr void Unity::Services::Analytics::Internal::ConsentTracker::__cordl_internal_set_response(::Unity::Services::Analytics::Internal::GeoIPResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___response)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Analytics::Internal::ConsentStatus Unity::Services::Analytics::Internal::ConsentTracker::get_optInPiplConsentStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "get_optInPiplConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Analytics::Internal::ConsentStatus, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::set_optInPiplConsentStatus(::Unity::Services::Analytics::Internal::ConsentStatus  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "set_optInPiplConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::ConsentStatus>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Analytics::Internal::ConsentStatus Unity::Services::Analytics::Internal::ConsentTracker::get_optOutConsentStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "get_optOutConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Analytics::Internal::ConsentStatus, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::set_optOutConsentStatus(::Unity::Services::Analytics::Internal::ConsentStatus  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "set_optOutConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::ConsentStatus>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::_ctor(::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ICoreStatsHelper*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coreStatsHelper);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::_ctor(::Unity::Services::Analytics::Internal::IGeoAPI*  geoApi, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IGeoAPI*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::ICoreStatsHelper*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, geoApi, coreStatsHelper);
}
inline bool Unity::Services::Analytics::Internal::ConsentTracker::IsGeoIpChecked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsGeoIpChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Analytics::Internal::ConsentTracker::IsConsentGiven()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsConsentGiven",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Analytics::Internal::ConsentTracker::IsConsentGiven(::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsConsentGiven",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, identifier);
}
inline bool Unity::Services::Analytics::Internal::ConsentTracker::IsOptingOutInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "IsOptingOutInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::FinishOptOutProcess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "FinishOptOutProcess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::ReadOptInPiplConsentStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "ReadOptInPiplConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::ReadOptOutConsentStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "ReadOptOutConsentStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::ConsentTracker::ValidateConsentWasChecked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::ConsentTracker*>::get(),
                        "ValidateConsentWasChecked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Internal::ConsentTracker* Unity::Services::Analytics::Internal::ConsentTracker::New_ctor(::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::ConsentTracker*>(coreStatsHelper));
}
inline ::Unity::Services::Analytics::Internal::ConsentTracker* Unity::Services::Analytics::Internal::ConsentTracker::New_ctor(::Unity::Services::Analytics::Internal::IGeoAPI*  geoApi, ::Unity::Services::Analytics::ICoreStatsHelper*  coreStatsHelper)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::ConsentTracker*>(geoApi, coreStatsHelper));
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IConsentTracker"
constexpr  Unity::Services::Analytics::Internal::ConsentTracker::operator ::Unity::Services::Analytics::Internal::IConsentTracker*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IConsentTracker*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IConsentTracker"
constexpr ::Unity::Services::Analytics::Internal::IConsentTracker* Unity::Services::Analytics::Internal::ConsentTracker::i___Unity__Services__Analytics__Internal__IConsentTracker() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IConsentTracker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::ConsentTracker::ConsentTracker()   {
}
