#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidPressureSensor.hpp"
#include "UnityEngine/InputSystem/zzzz__PressureSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidPressureSensor_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidPressureSensor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidPressureSensor::*)()>(&::UnityEngine::InputSystem::Android::AndroidPressureSensor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e688c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidPressureSensor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Android::AndroidPressureSensor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidPressureSensor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Android::AndroidPressureSensor* UnityEngine::InputSystem::Android::AndroidPressureSensor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Android::AndroidPressureSensor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Android::AndroidPressureSensor::AndroidPressureSensor()   {
}
