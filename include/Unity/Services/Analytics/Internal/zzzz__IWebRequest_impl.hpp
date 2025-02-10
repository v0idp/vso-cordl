#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IWebRequest.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IWebRequest.SendWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::Unity::Services::Analytics::Internal::IWebRequest::*)()>(&::Unity::Services::Analytics::Internal::IWebRequest::SendWebRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IWebRequest.SetRequestHeader
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::IWebRequest::*)(::StringW, ::StringW)>(&::Unity::Services::Analytics::Internal::IWebRequest::SetRequestHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IWebRequest.get_IsNetworkError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::IWebRequest::*)()>(&::Unity::Services::Analytics::Internal::IWebRequest::get_IsNetworkError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IWebRequest.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::IWebRequest::*)()>(&::Unity::Services::Analytics::Internal::IWebRequest::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* Unity::Services::Analytics::Internal::IWebRequest::SendWebRequest()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::IWebRequest::SetRequestHeader(::StringW  key, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline bool Unity::Services::Analytics::Internal::IWebRequest::get_IsNetworkError()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::IWebRequest::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequest*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
