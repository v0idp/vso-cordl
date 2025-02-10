#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevices_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__ConnectionChangeType_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDevicesWithCharacteristics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::InputDeviceCharacteristics, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::GetDevicesWithCharacteristics)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x319afe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "GetDevicesWithCharacteristics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputDeviceCharacteristics>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.InvokeConnectionEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::UnityEngine::XR::ConnectionChangeType)>(&::UnityEngine::XR::InputDevices::InvokeConnectionEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x319b338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "InvokeConnectionEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::ConnectionChangeType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDevices_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)>(&::UnityEngine::XR::InputDevices::GetDevices_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x319b2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "GetDevices_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevices.GetDeviceCharacteristics
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)(uint64_t)>(&::UnityEngine::XR::InputDevices::GetDeviceCharacteristics)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x319ab9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "GetDeviceCharacteristics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputDevices::setStaticF_s_InputDeviceList(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*, "s_InputDeviceList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_s_InputDeviceList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*, "s_InputDeviceList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConnected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceDisconnected()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceDisconnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>();
}
inline void UnityEngine::XR::InputDevices::setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevices::getStaticF_deviceConfigChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::InputDevice>*, "deviceConfigChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get>();
}
inline void UnityEngine::XR::InputDevices::GetDevicesWithCharacteristics(::UnityEngine::XR::InputDeviceCharacteristics  desiredCharacteristics, ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "GetDevicesWithCharacteristics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputDeviceCharacteristics>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, desiredCharacteristics, inputDevices);
}
inline void UnityEngine::XR::InputDevices::InvokeConnectionEvent(uint64_t  deviceId, ::UnityEngine::XR::ConnectionChangeType  change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "InvokeConnectionEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::ConnectionChangeType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, change);
}
inline void UnityEngine::XR::InputDevices::GetDevices_Internal(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  inputDevices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "GetDevices_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputDevices);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDevices::GetDeviceCharacteristics(uint64_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputDevices*>::get(),
                        "GetDeviceCharacteristics",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics, false>(nullptr, ___internal_method, deviceId);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDevices::InputDevices()   {
}
