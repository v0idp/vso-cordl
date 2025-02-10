#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IWebRequestHelper.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequestHelper_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IWebRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IWebRequestHelper.CreateWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Analytics::Internal::IWebRequest* (::Unity::Services::Analytics::Internal::IWebRequestHelper::*)(::StringW, ::StringW, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Unity::Services::Analytics::Internal::IWebRequestHelper::CreateWebRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IWebRequestHelper.SendWebRequest
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::IWebRequestHelper::*)(::Unity::Services::Analytics::Internal::IWebRequest*, ::System::Action_1<int64_t>*)>(&::Unity::Services::Analytics::Internal::IWebRequestHelper::SendWebRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline ::Unity::Services::Analytics::Internal::IWebRequest* Unity::Services::Analytics::Internal::IWebRequestHelper::CreateWebRequest(::StringW  url, ::StringW  method, ::ArrayW<uint8_t,::Array<uint8_t>*>  postBytes)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Analytics::Internal::IWebRequest*, false>(this, ___internal_method, url, method, postBytes);
}
inline void Unity::Services::Analytics::Internal::IWebRequestHelper::SendWebRequest(::Unity::Services::Analytics::Internal::IWebRequest*  request, ::System::Action_1<int64_t>*  onCompleted)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IWebRequestHelper*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, onCompleted);
}
