#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputAnalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAnalytics_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAnalytics_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo::*)(::StringW, int32_t, int32_t)>(&::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e28f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo::_ctor(::StringW  name, int32_t  maxEventsPerHour, int32_t  maxNumberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, maxEventsPerHour, maxNumberOfElements);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxEventsPerHour", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxNumberOfElements", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo::InputAnalytics_InputAnalyticInfo(::StringW  Name, int32_t  MaxEventsPerHour, int32_t  MaxNumberOfElements) noexcept  {
this->Name = Name;
this->MaxEventsPerHour = MaxEventsPerHour;
this->MaxNumberOfElements = MaxNumberOfElements;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo::InputAnalytics_InputAnalyticInfo()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic.get_info
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo (::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic::*)()>(&::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic::get_info)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic.TryGatherData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic::*)(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>, ::ByRef<::System::Exception*>)>(&::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic::TryGatherData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo UnityEngine::InputSystem::InputAnalytics_IInputAnalytic::get_info()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAnalytics_IInputAnalytic::TryGatherData(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>  data, ::ByRef<::System::Exception*>  error)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, error);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo.FromDescription
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, bool, ::StringW)>(&::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo::FromDescription)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e28f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>::get(),
                        "FromDescription",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo::FromDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, bool  native, ::StringW  layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>::get(),
                        "FromDescription",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo, false>(nullptr, ___internal_method, description, native, layout);
}
// Ctor Parameters [CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "native", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo::StartupEventData_InputAnalytics_DeviceInfo(::StringW  layout, ::StringW  interface, ::StringW  product, bool  native) noexcept  {
this->layout = layout;
this->interface = interface;
this->product = product;
this->native = native;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo::StartupEventData_InputAnalytics_DeviceInfo()   {
}
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr  UnityEngine::InputSystem::InputAnalytics_StartupEventData::operator ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData* UnityEngine::InputSystem::InputAnalytics_StartupEventData::i___UnityEngine__InputSystem__InputAnalytics_IInputAnalyticData()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "devices", ty: "::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unrecognized_devices", ty: "::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAnalytics_StartupEventData::InputAnalytics_StartupEventData(::StringW  version, ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>  devices, ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>  unrecognized_devices) noexcept  {
this->version = version;
this->devices = devices;
this->unrecognized_devices = unrecognized_devices;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics_StartupEventData::InputAnalytics_StartupEventData()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e29064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic.get_info
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo (::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::*)()>(&::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::get_info)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e2906c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "get_info",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic.TryGatherData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::*)(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>, ::ByRef<::System::Exception*>)>(&::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::TryGatherData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2e290b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "TryGatherData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Exception*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic.CollectRecognizedDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*> (*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::CollectRecognizedDevices)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2e2921c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "CollectRecognizedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic.CollectUnrecognizedDevices
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*> (*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::CollectUnrecognizedDevices)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2e293d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "CollectUnrecognizedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::_ctor(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::get_info()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "get_info",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::TryGatherData(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>  data, ::ByRef<::System::Exception*>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "TryGatherData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Exception*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, error);
}
inline ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*> UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::CollectRecognizedDevices(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "CollectRecognizedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>, false>(nullptr, ___internal_method, manager);
}
inline ::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*> UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::CollectUnrecognizedDevices(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic>::get(),
                        "CollectUnrecognizedDevices",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo,::Array<::UnityEngine::InputSystem::StartupEventData_InputAnalytics_DeviceInfo>*>, false>(nullptr, ___internal_method, manager);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr  UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::operator ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic* UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::i___UnityEngine__InputSystem__InputAnalytics_IInputAnalytic()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_InputManager", ty: "::UnityEngine::InputSystem::InputManager*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::InputAnalytics_StartupEventAnalytic(::UnityEngine::InputSystem::InputManager*  m_InputManager) noexcept  {
this->m_InputManager = m_InputManager;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics_StartupEventAnalytic::InputAnalytics_StartupEventAnalytic()   {
}
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr  UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData::operator ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData* UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData::i___UnityEngine__InputSystem__InputAnalytics_IInputAnalyticData()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics_FirstUserInteractionEventData::InputAnalytics_FirstUserInteractionEventData()   {
}
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr  UnityEngine::InputSystem::InputAnalytics_ShutdownEventData::operator ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData* UnityEngine::InputSystem::InputAnalytics_ShutdownEventData::i___UnityEngine__InputSystem__InputAnalytics_IInputAnalyticData()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "max_num_devices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "max_state_size_in_bytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total_event_bytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total_event_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total_frame_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total_event_processing_time", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData::InputAnalytics_ShutdownEventData(int32_t  max_num_devices, int32_t  max_state_size_in_bytes, int32_t  total_event_bytes, int32_t  total_event_count, int32_t  total_frame_count, float_t  total_event_processing_time) noexcept  {
this->max_num_devices = max_num_devices;
this->max_state_size_in_bytes = max_state_size_in_bytes;
this->total_event_bytes = total_event_bytes;
this->total_event_count = total_event_count;
this->total_frame_count = total_frame_count;
this->total_event_processing_time = total_event_processing_time;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventData::InputAnalytics_ShutdownEventData()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e29540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic.get_info
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo (::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::*)()>(&::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::get_info)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e29548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic>::get(),
                        "get_info",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic.TryGatherData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::*)(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>, ::ByRef<::System::Exception*>)>(&::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::TryGatherData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2e29590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic>::get(),
                        "TryGatherData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Exception*>>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::_ctor(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline ::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::get_info()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic>::get(),
                        "get_info",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAnalytics_InputAnalyticInfo, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::TryGatherData(::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>  data, ::ByRef<::System::Exception*>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic>::get(),
                        "TryGatherData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputAnalytics_IInputAnalyticData*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Exception*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, error);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr  UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::operator ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic"
constexpr ::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic* UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::i___UnityEngine__InputSystem__InputAnalytics_IInputAnalytic()  {
return static_cast<::UnityEngine::InputSystem::InputAnalytics_IInputAnalytic*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_InputManager", ty: "::UnityEngine::InputSystem::InputManager*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::InputAnalytics_ShutdownEventDataAnalytic(::UnityEngine::InputSystem::InputManager*  m_InputManager) noexcept  {
this->m_InputManager = m_InputManager;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics_ShutdownEventDataAnalytic::InputAnalytics_ShutdownEventDataAnalytic()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e28dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics.OnStartup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics::OnStartup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e28dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics*>::get(),
                        "OnStartup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAnalytics.OnShutdown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputManager*)>(&::UnityEngine::InputSystem::InputAnalytics::OnShutdown)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2e28ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics*>::get(),
                        "OnShutdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputAnalytics::Initialize(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, manager);
}
inline void UnityEngine::InputSystem::InputAnalytics::OnStartup(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics*>::get(),
                        "OnStartup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, manager);
}
inline void UnityEngine::InputSystem::InputAnalytics::OnShutdown(::UnityEngine::InputSystem::InputManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAnalytics*>::get(),
                        "OnShutdown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputManager*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, manager);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputAnalytics::InputAnalytics()   {
}
