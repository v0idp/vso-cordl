#pragma once
// IWYU pragma private; include "VROSC/ClickData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
//  Writing Method size for method: ::VROSC::ClickData.get_Device
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::ClickData::*)()>(&::VROSC::ClickData::get_Device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188fdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_Device",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClickData.get_Button
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TriggerButton (::VROSC::ClickData::*)()>(&::VROSC::ClickData::get_Button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188fde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_Button",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClickData.get_Position
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::ClickData::*)()>(&::VROSC::ClickData::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188fde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_Position",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClickData.get_PointedAt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::ClickData::*)()>(&::VROSC::ClickData::get_PointedAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188fdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_PointedAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClickData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClickData::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton, ::UnityEngine::Vector3, bool)>(&::VROSC::ClickData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x188fdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::ClickData::__cordl_internal_get__Device_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Device_k__BackingField;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::ClickData::__cordl_internal_get__Device_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Device_k__BackingField;
}
constexpr void VROSC::ClickData::__cordl_internal_set__Device_k__BackingField(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Device_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TriggerButton& VROSC::ClickData::__cordl_internal_get__Button_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Button_k__BackingField;
}
constexpr ::VROSC::TriggerButton const& VROSC::ClickData::__cordl_internal_get__Button_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Button_k__BackingField;
}
constexpr void VROSC::ClickData::__cordl_internal_set__Button_k__BackingField(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Button_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& VROSC::ClickData::__cordl_internal_get__Position_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::ClickData::__cordl_internal_get__Position_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr void VROSC::ClickData::__cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position_k__BackingField = value;
}
constexpr bool& VROSC::ClickData::__cordl_internal_get__PointedAt_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointedAt_k__BackingField;
}
constexpr bool const& VROSC::ClickData::__cordl_internal_get__PointedAt_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointedAt_k__BackingField;
}
constexpr void VROSC::ClickData::__cordl_internal_set__PointedAt_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PointedAt_k__BackingField = value;
}
inline ::UnityW<::VROSC::InputDevice> VROSC::ClickData::get_Device()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_Device",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline ::VROSC::TriggerButton VROSC::ClickData::get_Button()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_Button",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TriggerButton, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::ClickData::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_Position",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline bool VROSC::ClickData::get_PointedAt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        "get_PointedAt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::ClickData::_ctor(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button, ::UnityEngine::Vector3  position, bool  pointedAt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClickData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, button, position, pointedAt);
}
inline ::VROSC::ClickData* VROSC::ClickData::New_ctor(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  button, ::UnityEngine::Vector3  position, bool  pointedAt)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ClickData*>(device, button, position, pointedAt));
}
// Ctor Parameters []
constexpr ::VROSC::ClickData::ClickData()   {
}
