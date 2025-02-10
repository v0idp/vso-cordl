#pragma once
// IWYU pragma private; include "Firebase/Platform/IFirebaseAppUtils.hpp"
#include "Firebase/Platform/zzzz__IFirebaseAppUtils_def.hpp"
#include "Firebase/Platform/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::IFirebaseAppUtils.TranslateDllNotFoundException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::IFirebaseAppUtils::*)(::System::Action*)>(&::Firebase::Platform::IFirebaseAppUtils::TranslateDllNotFoundException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::IFirebaseAppUtils.PollCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::IFirebaseAppUtils::*)()>(&::Firebase::Platform::IFirebaseAppUtils::PollCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::IFirebaseAppUtils.GetLogLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::PlatformLogLevel (::Firebase::Platform::IFirebaseAppUtils::*)()>(&::Firebase::Platform::IFirebaseAppUtils::GetLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline void Firebase::Platform::IFirebaseAppUtils::TranslateDllNotFoundException(::System::Action*  action)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void Firebase::Platform::IFirebaseAppUtils::PollCallbacks()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Platform::PlatformLogLevel Firebase::Platform::IFirebaseAppUtils::GetLogLevel()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::IFirebaseAppUtils*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Platform::PlatformLogLevel, false>(this, ___internal_method);
}
