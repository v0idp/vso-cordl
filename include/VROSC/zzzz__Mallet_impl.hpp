#pragma once
// IWYU pragma private; include "VROSC/Mallet.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__Mallet_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__MalletAnimator_def.hpp"
#include "VROSC/zzzz__MalletGrabbing_def.hpp"
#include "VROSC/zzzz__MalletVisual_def.hpp"
#include "VROSC/zzzz__PredictiveHitter_def.hpp"
//  Writing Method size for method: ::VROSC::Mallet.get_InputDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::InputDevice> (::VROSC::Mallet::*)()>(&::VROSC::Mallet::get_InputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17186c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.set_InputDevice
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(::VROSC::InputDevice*)>(&::VROSC::Mallet::set_InputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17186c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "set_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.get_InteractionPoint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::VROSC::Mallet::*)()>(&::VROSC::Mallet::get_InteractionPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17186d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_InteractionPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.get_PredictiveHitter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::PredictiveHitter> (::VROSC::Mallet::*)()>(&::VROSC::Mallet::get_PredictiveHitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17186ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_PredictiveHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.get_Active
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Mallet::*)()>(&::VROSC::Mallet::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17186f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.set_Active
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(bool)>(&::VROSC::Mallet::set_Active)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17186fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "set_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)()>(&::VROSC::Mallet::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1718708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)()>(&::VROSC::Mallet::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17187e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(::VROSC::InputDevice*)>(&::VROSC::Mallet::Setup)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17188b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.SetLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(float_t)>(&::VROSC::Mallet::SetLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1718974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "SetLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.SetAngle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(float_t)>(&::VROSC::Mallet::SetAngle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17189cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "SetAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.Grab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(::VROSC::ClickData*)>(&::VROSC::Mallet::Grab)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x17189e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Grab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.Drop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(::VROSC::ClickData*)>(&::VROSC::Mallet::Drop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1718a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Drop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(bool)>(&::VROSC::Mallet::SetActive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x17188ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.AnimationFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)(bool)>(&::VROSC::Mallet::AnimationFinished)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1718aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "AnimationFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)()>(&::VROSC::Mallet::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1718b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)()>(&::VROSC::Mallet::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1718c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet.ColorChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)()>(&::VROSC::Mallet::ColorChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1718ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "ColorChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Mallet._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Mallet::*)()>(&::VROSC::Mallet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1718d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::Mallet::__cordl_internal_get__stick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stick;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::Mallet::__cordl_internal_get__stick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stick;
}
constexpr void VROSC::Mallet::__cordl_internal_set__stick(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stick)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MalletVisual>& VROSC::Mallet::__cordl_internal_get__malletVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____malletVisual;
}
constexpr ::UnityW<::VROSC::MalletVisual> const& VROSC::Mallet::__cordl_internal_get__malletVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____malletVisual;
}
constexpr void VROSC::Mallet::__cordl_internal_set__malletVisual(::UnityW<::VROSC::MalletVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____malletVisual)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PredictiveHitter>& VROSC::Mallet::__cordl_internal_get__predictiveHitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictiveHitter;
}
constexpr ::UnityW<::VROSC::PredictiveHitter> const& VROSC::Mallet::__cordl_internal_get__predictiveHitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictiveHitter;
}
constexpr void VROSC::Mallet::__cordl_internal_set__predictiveHitter(::UnityW<::VROSC::PredictiveHitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____predictiveHitter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MalletGrabbing>& VROSC::Mallet::__cordl_internal_get__grabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbing;
}
constexpr ::UnityW<::VROSC::MalletGrabbing> const& VROSC::Mallet::__cordl_internal_get__grabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbing;
}
constexpr void VROSC::Mallet::__cordl_internal_set__grabbing(::UnityW<::VROSC::MalletGrabbing>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____grabbing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MalletAnimator>& VROSC::Mallet::__cordl_internal_get__animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animator;
}
constexpr ::UnityW<::VROSC::MalletAnimator> const& VROSC::Mallet::__cordl_internal_get__animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animator;
}
constexpr void VROSC::Mallet::__cordl_internal_set__animator(::UnityW<::VROSC::MalletAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter>& VROSC::Mallet::__cordl_internal_get__colorGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorGetter;
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& VROSC::Mallet::__cordl_internal_get__colorGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorGetter;
}
constexpr void VROSC::Mallet::__cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::TriggerButton& VROSC::Mallet::__cordl_internal_get__holdingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdingButton;
}
constexpr ::VROSC::TriggerButton const& VROSC::Mallet::__cordl_internal_get__holdingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holdingButton;
}
constexpr void VROSC::Mallet::__cordl_internal_set__holdingButton(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holdingButton = value;
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::Mallet::__cordl_internal_get__InputDevice_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputDevice_k__BackingField;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::Mallet::__cordl_internal_get__InputDevice_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InputDevice_k__BackingField;
}
constexpr void VROSC::Mallet::__cordl_internal_set__InputDevice_k__BackingField(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InputDevice_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::Mallet::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& VROSC::Mallet::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void VROSC::Mallet::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
inline ::UnityW<::VROSC::InputDevice> VROSC::Mallet::get_InputDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::InputDevice>, false>(this, ___internal_method);
}
inline void VROSC::Mallet::set_InputDevice(::VROSC::InputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "set_InputDevice",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> VROSC::Mallet::get_InteractionPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_InteractionPoint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::PredictiveHitter> VROSC::Mallet::get_PredictiveHitter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_PredictiveHitter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::PredictiveHitter>, false>(this, ___internal_method);
}
inline bool VROSC::Mallet::get_Active()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "get_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::Mallet::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "set_Active",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::Mallet::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Mallet::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Mallet::Setup(::VROSC::InputDevice*  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice);
}
inline void VROSC::Mallet::SetLength(float_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "SetLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
inline void VROSC::Mallet::SetAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "SetAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, angle);
}
inline void VROSC::Mallet::Grab(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Grab",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::Mallet::Drop(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "Drop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::Mallet::SetActive(bool  shouldUseMallets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldUseMallets);
}
inline void VROSC::Mallet::AnimationFinished(bool  malletsActive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "AnimationFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, malletsActive);
}
inline void VROSC::Mallet::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Mallet::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Mallet::ColorChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        "ColorChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Mallet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Mallet*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Mallet* VROSC::Mallet::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Mallet*>());
}
// Ctor Parameters []
constexpr ::VROSC::Mallet::Mallet()   {
}
