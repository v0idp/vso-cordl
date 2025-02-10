#pragma once
// IWYU pragma private; include "GlobalNamespace/Key.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Key_def.hpp"
#include "GlobalNamespace/zzzz__Key_def.hpp"
#include "GlobalNamespace/zzzz__PunchKeyData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/UI/zzzz__UIInteractableColoring_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Key_Type::Key_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Key_Type::Key_Type()   {
}
constexpr ::GlobalNamespace::Key_Type  GlobalNamespace::Key_Type::ALPHA{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Key_Type  GlobalNamespace::Key_Type::BACKSPACE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Key_Type  GlobalNamespace::Key_Type::SHIFT{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Key_Type  GlobalNamespace::Key_Type::RETURN{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Key_Type  GlobalNamespace::Key_Type::SYMBOL{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::Key.get_KeyType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Key_Type (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::get_KeyType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16b6d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_KeyType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.get_KeyCapChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::get_KeyCapChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16b6d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_KeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.get_AlterateKeyCapChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::get_AlterateKeyCapChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16b6d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_AlterateKeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.get_OutputChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::get_OutputChar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16b6d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_OutputChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::Start)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x16b6dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x16b7288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.FixedUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::FixedUpdate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x16b736c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "FixedUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::Update)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x16b7558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16b7730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.ChangeKeyColorOnPress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::ChangeKeyColorOnPress)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x16b76ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "ChangeKeyColorOnPress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.ConstrainPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::ConstrainPosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16b74c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "ConstrainPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.SwitchKeycapCharCase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::SwitchKeycapCharCase)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x16b7178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SwitchKeycapCharCase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.SwitchToSymbols
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::SwitchToSymbols)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x16b7734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SwitchToSymbols",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.HitKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)(bool)>(&::GlobalNamespace::Key::HitKey)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x16b7820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "HitKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.SetTextToDefault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::SetTextToDefault)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16b7958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SetTextToDefault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key.SettingsUpdated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::SettingsUpdated)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x16b722c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SettingsUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Key._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Key::*)()>(&::GlobalNamespace::Key::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x16b79d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PunchKeyData>& GlobalNamespace::Key::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::UnityW<::GlobalNamespace::PunchKeyData> const& GlobalNamespace::Key::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__data(::UnityW<::GlobalNamespace::PunchKeyData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::UIInteractableColoring>& GlobalNamespace::Key::__cordl_internal_get__coloring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coloring;
}
constexpr ::UnityW<::VROSC::UI::UIInteractableColoring> const& GlobalNamespace::Key::__cordl_internal_get__coloring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coloring;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__coloring(::UnityW<::VROSC::UI::UIInteractableColoring>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coloring)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::Key::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::Key::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::Key::__cordl_internal_get__rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::Key::__cordl_internal_get__rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidBody;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidBody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::Key::__cordl_internal_get_KeyPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyPressed;
}
constexpr bool const& GlobalNamespace::Key::__cordl_internal_get_KeyPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyPressed;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_KeyPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyPressed = value;
}
constexpr float_t& GlobalNamespace::Key::__cordl_internal_get__startRepeatedPressesDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRepeatedPressesDelay;
}
constexpr float_t const& GlobalNamespace::Key::__cordl_internal_get__startRepeatedPressesDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRepeatedPressesDelay;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__startRepeatedPressesDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startRepeatedPressesDelay = value;
}
constexpr float_t& GlobalNamespace::Key::__cordl_internal_get__repeatedPressDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repeatedPressDelay;
}
constexpr float_t const& GlobalNamespace::Key::__cordl_internal_get__repeatedPressDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repeatedPressDelay;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__repeatedPressDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____repeatedPressDelay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Key::__cordl_internal_get_initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Key::__cordl_internal_get_initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialPosition;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_initialPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initialPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::Key::__cordl_internal_get_keyCapText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCapText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::Key::__cordl_internal_get_keyCapText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCapText;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_keyCapText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyCapText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Key::__cordl_internal_get_initialLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Key::__cordl_internal_get_initialLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLocalPosition;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_initialLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::Key::__cordl_internal_get_initialLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::Key::__cordl_internal_get_initialLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialLocalRotation;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_initialLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Key::__cordl_internal_get_constrainedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainedPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Key::__cordl_internal_get_constrainedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainedPosition;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_constrainedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainedPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::Key::__cordl_internal_get_constrainedRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainedRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::Key::__cordl_internal_get_constrainedRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainedRotation;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_constrainedRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainedRotation = value;
}
constexpr bool& GlobalNamespace::Key::__cordl_internal_get_checkForButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForButton;
}
constexpr bool const& GlobalNamespace::Key::__cordl_internal_get_checkForButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkForButton;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_checkForButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkForButton = value;
}
constexpr float_t& GlobalNamespace::Key::__cordl_internal_get_currentDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDistance;
}
constexpr float_t const& GlobalNamespace::Key::__cordl_internal_get_currentDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDistance;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set_currentDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDistance = value;
}
constexpr float_t& GlobalNamespace::Key::__cordl_internal_get__pressedTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedTimer;
}
constexpr float_t const& GlobalNamespace::Key::__cordl_internal_get__pressedTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedTimer;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__pressedTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedTimer = value;
}
constexpr bool& GlobalNamespace::Key::__cordl_internal_get__isRepeating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRepeating;
}
constexpr bool const& GlobalNamespace::Key::__cordl_internal_get__isRepeating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRepeating;
}
constexpr void GlobalNamespace::Key::__cordl_internal_set__isRepeating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRepeating = value;
}
inline void GlobalNamespace::Key::setStaticF_OnKeyHit(::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>*, "OnKeyHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get>(std::forward<::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>*>(value));
}
inline ::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>* GlobalNamespace::Key::getStaticF_OnKeyHit()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::GlobalNamespace::Key>,float_t>*, "OnKeyHit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get>();
}
inline ::GlobalNamespace::Key_Type GlobalNamespace::Key::get_KeyType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_KeyType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Key_Type, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::Key::get_KeyCapChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_KeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::Key::get_AlterateKeyCapChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_AlterateKeyCapChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::Key::get_OutputChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "get_OutputChar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "FixedUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::ChangeKeyColorOnPress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "ChangeKeyColorOnPress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::ConstrainPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "ConstrainPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::SwitchKeycapCharCase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SwitchKeycapCharCase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::SwitchToSymbols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SwitchToSymbols",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::HitKey(bool  send)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "HitKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, send);
}
inline void GlobalNamespace::Key::SetTextToDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SetTextToDefault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::SettingsUpdated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        "SettingsUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Key::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Key*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Key* GlobalNamespace::Key::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Key*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Key::Key()   {
}
