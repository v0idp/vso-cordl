#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IAnalyticsForgetter.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IAnalyticsForgetter_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IAnalyticsForgetter.get_DeletionInProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Analytics::Internal::IAnalyticsForgetter::*)()>(&::Unity::Services::Analytics::Internal::IAnalyticsForgetter::get_DeletionInProgress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IAnalyticsForgetter.AttemptToForget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::IAnalyticsForgetter::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Action*)>(&::Unity::Services::Analytics::Internal::IAnalyticsForgetter::AttemptToForget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline bool Unity::Services::Analytics::Internal::IAnalyticsForgetter::get_DeletionInProgress()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::IAnalyticsForgetter::AttemptToForget(::StringW  userId, ::StringW  installationId, ::StringW  playerId, ::StringW  timestamp, ::StringW  callingMethod, ::System::Action*  successfulUploadCallback)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IAnalyticsForgetter*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, installationId, playerId, timestamp, callingMethod, successfulUploadCallback);
}
