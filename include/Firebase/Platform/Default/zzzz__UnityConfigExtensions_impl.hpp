#pragma once
// IWYU pragma private; include "Firebase/Platform/Default/UnityConfigExtensions.hpp"
#include "Firebase/Platform/Default/zzzz__AppConfigExtensions_impl.hpp"
#include "Firebase/Platform/Default/zzzz__UnityConfigExtensions_def.hpp"
#include "Firebase/Platform/zzzz__IAppConfigExtensions_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::Default::UnityConfigExtensions._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::Default::UnityConfigExtensions::*)()>(&::Firebase::Platform::Default::UnityConfigExtensions::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1920d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::UnityConfigExtensions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::Default::UnityConfigExtensions.get_DefaultInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::IAppConfigExtensions* (*)()>(&::Firebase::Platform::Default::UnityConfigExtensions::get_DefaultInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1920d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::UnityConfigExtensions*>::get(),
                        "get_DefaultInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Platform::Default::UnityConfigExtensions::setStaticF__instance(::Firebase::Platform::Default::UnityConfigExtensions*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::Default::UnityConfigExtensions*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::UnityConfigExtensions*>::get>(std::forward<::Firebase::Platform::Default::UnityConfigExtensions*>(value));
}
inline ::Firebase::Platform::Default::UnityConfigExtensions* Firebase::Platform::Default::UnityConfigExtensions::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::Default::UnityConfigExtensions*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::UnityConfigExtensions*>::get>();
}
inline void Firebase::Platform::Default::UnityConfigExtensions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::UnityConfigExtensions*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Platform::IAppConfigExtensions* Firebase::Platform::Default::UnityConfigExtensions::get_DefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::Default::UnityConfigExtensions*>::get(),
                        "get_DefaultInstance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Platform::IAppConfigExtensions*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Platform::Default::UnityConfigExtensions* Firebase::Platform::Default::UnityConfigExtensions::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Platform::Default::UnityConfigExtensions*>());
}
// Ctor Parameters []
constexpr ::Firebase::Platform::Default::UnityConfigExtensions::UnityConfigExtensions()   {
}
