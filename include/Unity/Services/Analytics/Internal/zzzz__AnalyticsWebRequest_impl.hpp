#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/AnalyticsWebRequest.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequest_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__AnalyticsWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsWebRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsWebRequest::*)(::StringW, ::StringW)>(&::Unity::Services::Analytics::Internal::AnalyticsWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e92e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsWebRequest.get_IsNetworkError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::AnalyticsWebRequest::*)()>(&::Unity::Services::Analytics::Internal::AnalyticsWebRequest::get_IsNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e92e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        "get_IsNetworkError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsWebRequest.Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::Unity::Services::Analytics::Internal::AnalyticsWebRequest::*)()>(&::Unity::Services::Analytics::Internal::AnalyticsWebRequest::Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e92e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        "Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::AnalyticsWebRequest.Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::AnalyticsWebRequest::*)(::StringW, ::StringW)>(&::Unity::Services::Analytics::Internal::AnalyticsWebRequest::Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e92e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        "Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Services::Analytics::Internal::AnalyticsWebRequest::_ctor(::StringW  url, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, url, method);
}
inline bool Unity::Services::Analytics::Internal::AnalyticsWebRequest::get_IsNetworkError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        "get_IsNetworkError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* Unity::Services::Analytics::Internal::AnalyticsWebRequest::Unity_Services_Analytics_Internal_IWebRequest_SendWebRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        "Unity.Services.Analytics.Internal.IWebRequest.SendWebRequest",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::AnalyticsWebRequest::Unity_Services_Analytics_Internal_IWebRequest_SetRequestHeader(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>::get(),
                        "Unity.Services.Analytics.Internal.IWebRequest.SetRequestHeader",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline ::Unity::Services::Analytics::Internal::AnalyticsWebRequest* Unity::Services::Analytics::Internal::AnalyticsWebRequest::New_ctor(::StringW  url, ::StringW  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::AnalyticsWebRequest*>(url, method));
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IWebRequest"
constexpr  Unity::Services::Analytics::Internal::AnalyticsWebRequest::operator ::Unity::Services::Analytics::Internal::IWebRequest*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IWebRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IWebRequest"
constexpr ::Unity::Services::Analytics::Internal::IWebRequest* Unity::Services::Analytics::Internal::AnalyticsWebRequest::i___Unity__Services__Analytics__Internal__IWebRequest() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IWebRequest*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::AnalyticsWebRequest::AnalyticsWebRequest()   {
}
