#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/AnalyticsForgetter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IAnalyticsForgetter_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__AnalyticsForgetter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__AnalyticsForgetter_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IPersistence_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequestHelper_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus::AnalyticsForgetter_DataDeletionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus::AnalyticsForgetter_DataDeletionStatus()   {
}
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus::DataAllowed{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus::DeletionInProgress{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus::SuccessfullyDeleted{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsForgetter.get_DeletionInProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::AnalyticsForgetter::*)()>(&::Unity::Services::Analytics::Internal::AnalyticsForgetter::get_DeletionInProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e8fce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "get_DeletionInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsForgetter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsForgetter::*)(::StringW, ::Unity::Services::Analytics::Internal::IPersistence*, ::Unity::Services::Analytics::Internal::IWebRequestHelper*)>(&::Unity::Services::Analytics::Internal::AnalyticsForgetter::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e8b1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IPersistence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsForgetter.SetForgettingStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsForgetter::*)(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus)>(&::Unity::Services::Analytics::Internal::AnalyticsForgetter::SetForgettingStatus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2e8fcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "SetForgettingStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsForgetter.AttemptToForget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsForgetter::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Action*)>(&::Unity::Services::Analytics::Internal::AnalyticsForgetter::AttemptToForget)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2e8fdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "AttemptToForget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsForgetter.UploadComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsForgetter::*)(int64_t)>(&::Unity::Services::Analytics::Internal::AnalyticsForgetter::UploadComplete)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2e90348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "UploadComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_CollectUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectUrl;
}
constexpr ::StringW const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_CollectUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollectUrl;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_CollectUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CollectUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IPersistence*& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Persistence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Persistence;
}
constexpr ::Unity::Services::Analytics::Internal::IPersistence* const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Persistence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Persistence;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_Persistence(::Unity::Services::Analytics::Internal::IPersistence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Persistence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper*& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_WebRequestHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WebRequestHelper;
}
constexpr ::Unity::Services::Analytics::Internal::IWebRequestHelper* const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_WebRequestHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WebRequestHelper;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_WebRequestHelper(::Unity::Services::Analytics::Internal::IWebRequestHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WebRequestHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Event()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Event;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Event() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Event;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_Event(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Callback;
}
constexpr ::System::Action* const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Callback;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_Callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_DeletionStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeletionStatus;
}
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_DeletionStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeletionStatus;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_DeletionStatus(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeletionStatus = value;
}
constexpr ::Unity::Services::Analytics::Internal::IWebRequest*& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Request;
}
constexpr ::Unity::Services::Analytics::Internal::IWebRequest* const& Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_get_m_Request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Request;
}
constexpr void Unity::Services::Analytics::Internal::AnalyticsForgetter::__cordl_internal_set_m_Request(::Unity::Services::Analytics::Internal::IWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Unity::Services::Analytics::Internal::AnalyticsForgetter::get_DeletionInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "get_DeletionInProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::AnalyticsForgetter::_ctor(::StringW  collectUrl, ::Unity::Services::Analytics::Internal::IPersistence*  persistence, ::Unity::Services::Analytics::Internal::IWebRequestHelper*  webRequestHelper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IPersistence*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectUrl, persistence, webRequestHelper);
}
inline void Unity::Services::Analytics::Internal::AnalyticsForgetter::SetForgettingStatus(::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "SetForgettingStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::AnalyticsForgetter_DataDeletionStatus>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void Unity::Services::Analytics::Internal::AnalyticsForgetter::AttemptToForget(::StringW  userId, ::StringW  installationId, ::StringW  playerId, ::StringW  timestamp, ::StringW  callingMethod, ::System::Action*  successfulUploadCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "AttemptToForget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, installationId, playerId, timestamp, callingMethod, successfulUploadCallback);
}
inline void Unity::Services::Analytics::Internal::AnalyticsForgetter::UploadComplete(int64_t  code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>::get(),
                        "UploadComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code);
}
inline ::Unity::Services::Analytics::Internal::AnalyticsForgetter* Unity::Services::Analytics::Internal::AnalyticsForgetter::New_ctor(::StringW  collectUrl, ::Unity::Services::Analytics::Internal::IPersistence*  persistence, ::Unity::Services::Analytics::Internal::IWebRequestHelper*  webRequestHelper)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::AnalyticsForgetter*>(collectUrl, persistence, webRequestHelper));
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IAnalyticsForgetter"
constexpr  Unity::Services::Analytics::Internal::AnalyticsForgetter::operator ::Unity::Services::Analytics::Internal::IAnalyticsForgetter*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IAnalyticsForgetter"
constexpr ::Unity::Services::Analytics::Internal::IAnalyticsForgetter* Unity::Services::Analytics::Internal::AnalyticsForgetter::i___Unity__Services__Analytics__Internal__IAnalyticsForgetter() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::AnalyticsForgetter::AnalyticsForgetter()   {
}
