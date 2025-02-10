#pragma once
// IWYU pragma private; include "VROSC/HighlightControllerComponents.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__ControllerComponent_def.hpp"
#include "VROSC/zzzz__ControllerShaderEffects_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::HighlightControllerComponents_Component::HighlightControllerComponents_Component(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::HighlightControllerComponents_Component::HighlightControllerComponents_Component()   {
}
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::Trigger{static_cast<int32_t>(0x1)};
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::Grip{static_cast<int32_t>(0x2)};
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::ThumbStick{static_cast<int32_t>(0x3)};
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::TopButton{static_cast<int32_t>(0x4)};
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::BottomButton{static_cast<int32_t>(0x5)};
constexpr ::VROSC::HighlightControllerComponents_Component  VROSC::HighlightControllerComponents_Component::MenuButton{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.get_AllButtons
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*> (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::get_AllButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17341b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "get_AllButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.get_GetControllerComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::get_GetControllerComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17341c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "get_GetControllerComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.set_GetControllerComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)(::System::Object*)>(&::VROSC::HighlightControllerComponents::set_GetControllerComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17341c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "set_GetControllerComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x17341d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::Start)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1734340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::OnDestroy)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1734544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.ButtonStoppedPressing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::HighlightControllerComponents::ButtonStoppedPressing)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17346e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "ButtonStoppedPressing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.ButtonPressing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&::VROSC::HighlightControllerComponents::ButtonPressing)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1734800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "ButtonPressing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.SetButtonColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)(::VROSC::TriggerButton, ::UnityEngine::Color)>(&::VROSC::HighlightControllerComponents::SetButtonColor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x17348c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "SetButtonColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)(::VROSC::TooltipData*, bool, ::System::Object*)>(&::VROSC::HighlightControllerComponents::SetActive)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1734978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.GetComponentByEnum
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::ControllerComponent> (::VROSC::HighlightControllerComponents::*)(::VROSC::HighlightControllerComponents_Component)>(&::VROSC::HighlightControllerComponents::GetComponentByEnum)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1734a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "GetComponentByEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.GetComponentByTriggerType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::ControllerComponent> (::VROSC::HighlightControllerComponents::*)(::VROSC::TriggerButton)>(&::VROSC::HighlightControllerComponents::GetComponentByTriggerType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17347a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "GetComponentByTriggerType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.DeactivateAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::DeactivateAll)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17344e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "DeactivateAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1734a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.UpdateShaderEffects
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::UpdateShaderEffects)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1734aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "UpdateShaderEffects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.Transfer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::Transfer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1734b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Transfer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.TransferIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::TransferIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1734d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "TransferIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents.TransferShared
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::TransferShared)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1734bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "TransferShared",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::HighlightControllerComponents._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::HighlightControllerComponents::*)()>(&::VROSC::HighlightControllerComponents::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1734dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>& VROSC::HighlightControllerComponents::__cordl_internal_get__allButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allButtons;
}
constexpr ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*> const& VROSC::HighlightControllerComponents::__cordl_internal_get__allButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allButtons;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__allButtons(::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerComponent>& VROSC::HighlightControllerComponents::__cordl_internal_get__triggerButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerButton;
}
constexpr ::UnityW<::VROSC::ControllerComponent> const& VROSC::HighlightControllerComponents::__cordl_internal_get__triggerButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerButton;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__triggerButton(::UnityW<::VROSC::ControllerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triggerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerComponent>& VROSC::HighlightControllerComponents::__cordl_internal_get__gripButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripButton;
}
constexpr ::UnityW<::VROSC::ControllerComponent> const& VROSC::HighlightControllerComponents::__cordl_internal_get__gripButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripButton;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__gripButton(::UnityW<::VROSC::ControllerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gripButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerComponent>& VROSC::HighlightControllerComponents::__cordl_internal_get__thumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick;
}
constexpr ::UnityW<::VROSC::ControllerComponent> const& VROSC::HighlightControllerComponents::__cordl_internal_get__thumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__thumbstick(::UnityW<::VROSC::ControllerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____thumbstick)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerComponent>& VROSC::HighlightControllerComponents::__cordl_internal_get__topButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButton;
}
constexpr ::UnityW<::VROSC::ControllerComponent> const& VROSC::HighlightControllerComponents::__cordl_internal_get__topButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButton;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__topButton(::UnityW<::VROSC::ControllerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerComponent>& VROSC::HighlightControllerComponents::__cordl_internal_get__bottomButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomButton;
}
constexpr ::UnityW<::VROSC::ControllerComponent> const& VROSC::HighlightControllerComponents::__cordl_internal_get__bottomButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomButton;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__bottomButton(::UnityW<::VROSC::ControllerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bottomButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerComponent>& VROSC::HighlightControllerComponents::__cordl_internal_get__menuButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuButton;
}
constexpr ::UnityW<::VROSC::ControllerComponent> const& VROSC::HighlightControllerComponents::__cordl_internal_get__menuButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuButton;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__menuButton(::UnityW<::VROSC::ControllerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerShaderEffects>& VROSC::HighlightControllerComponents::__cordl_internal_get__shaderEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderEffects;
}
constexpr ::UnityW<::VROSC::ControllerShaderEffects> const& VROSC::HighlightControllerComponents::__cordl_internal_get__shaderEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shaderEffects;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__shaderEffects(::UnityW<::VROSC::ControllerShaderEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shaderEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HandType& VROSC::HighlightControllerComponents::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::VROSC::HandType const& VROSC::HighlightControllerComponents::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__hand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr bool& VROSC::HighlightControllerComponents::__cordl_internal_get__dirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirty;
}
constexpr bool const& VROSC::HighlightControllerComponents::__cordl_internal_get__dirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirty;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__dirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirty = value;
}
constexpr ::System::Object*& VROSC::HighlightControllerComponents::__cordl_internal_get__GetControllerComponent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GetControllerComponent_k__BackingField;
}
constexpr ::System::Object* const& VROSC::HighlightControllerComponents::__cordl_internal_get__GetControllerComponent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GetControllerComponent_k__BackingField;
}
constexpr void VROSC::HighlightControllerComponents::__cordl_internal_set__GetControllerComponent_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GetControllerComponent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*> VROSC::HighlightControllerComponents::get_AllButtons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "get_AllButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::VROSC::ControllerComponent>,::Array<::UnityW<::VROSC::ControllerComponent>>*>, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::HighlightControllerComponents::get_GetControllerComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "get_GetControllerComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::set_GetControllerComponent(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "set_GetControllerComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::HighlightControllerComponents::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::ButtonStoppedPressing(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "ButtonStoppedPressing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, trigger);
}
inline void VROSC::HighlightControllerComponents::ButtonPressing(::VROSC::InputDevice*  device, ::VROSC::TriggerButton  trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "ButtonPressing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, trigger);
}
inline void VROSC::HighlightControllerComponents::SetButtonColor(::VROSC::TriggerButton  button, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "SetButtonColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, color);
}
inline void VROSC::HighlightControllerComponents::SetActive(::VROSC::TooltipData*  tooltip, bool  active, ::System::Object*  requester)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tooltip, active, requester);
}
inline ::UnityW<::VROSC::ControllerComponent> VROSC::HighlightControllerComponents::GetComponentByEnum(::VROSC::HighlightControllerComponents_Component  component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "GetComponentByEnum",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::ControllerComponent>, false>(this, ___internal_method, component);
}
inline ::UnityW<::VROSC::ControllerComponent> VROSC::HighlightControllerComponents::GetComponentByTriggerType(::VROSC::TriggerButton  trigger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "GetComponentByTriggerType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::ControllerComponent>, false>(this, ___internal_method, trigger);
}
inline void VROSC::HighlightControllerComponents::DeactivateAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "DeactivateAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::UpdateShaderEffects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "UpdateShaderEffects",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::Transfer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "Transfer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::TransferIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "TransferIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::TransferShared()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        "TransferShared",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::HighlightControllerComponents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::HighlightControllerComponents*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::HighlightControllerComponents* VROSC::HighlightControllerComponents::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::HighlightControllerComponents*>());
}
// Ctor Parameters []
constexpr ::VROSC::HighlightControllerComponents::HighlightControllerComponents()   {
}
