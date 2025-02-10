#pragma once
// IWYU pragma private; include "VROSC/PointingLaser.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__PointingLaser_def.hpp"
#include "GlobalNamespace/zzzz__Environment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__GradientAlphaKey_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__InputSettings_def.hpp"
#include "VROSC/zzzz__PointingLaser_def.hpp"
#include "VROSC/zzzz__SmoothMovement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::PointingLaser_DisablingReason::PointingLaser_DisablingReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::PointingLaser_DisablingReason::PointingLaser_DisablingReason()   {
}
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::GrabbingObject{static_cast<int32_t>(0x0)};
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::PressingObject{static_cast<int32_t>(0x1)};
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::HoveringObject{static_cast<int32_t>(0x2)};
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::HoveringObjectDisablesPointing{static_cast<int32_t>(0x3)};
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::DashboardOpen{static_cast<int32_t>(0x4)};
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::InsideInstrument{static_cast<int32_t>(0x5)};
constexpr ::VROSC::PointingLaser_DisablingReason  VROSC::PointingLaser_DisablingReason::UsingUIHelper{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::VROSC::PointingLaser.get_PointingDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PointingLaser::*)()>(&::VROSC::PointingLaser::get_PointingDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b8b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "get_PointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.set_PointingDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(bool)>(&::VROSC::PointingLaser::set_PointingDisabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17b8b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "set_PointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.get_Dimmed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::PointingLaser::*)()>(&::VROSC::PointingLaser::get_Dimmed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17b8ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "get_Dimmed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.set_Dimmed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(bool)>(&::VROSC::PointingLaser::set_Dimmed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17b8bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "set_Dimmed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.SetPointingDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(bool, ::VROSC::PointingLaser_DisablingReason)>(&::VROSC::PointingLaser::SetPointingDisabled)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x17b8bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "SetPointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PointingLaser_DisablingReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(::VROSC::InputDevice*, ::VROSC::InputSettings*)>(&::VROSC::PointingLaser::Setup)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x17b8dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)()>(&::VROSC::PointingLaser::OnDestroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17b8fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.EnvironmentLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(::GlobalNamespace::Environment*)>(&::VROSC::PointingLaser::EnvironmentLoaded)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x17b90e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "EnvironmentLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Environment*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.UpdatePointingDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(bool, ::VROSC::PointingLaser_DisablingReason)>(&::VROSC::PointingLaser::UpdatePointingDisabled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17b8cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "UpdatePointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PointingLaser_DisablingReason>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.SetDotPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(::UnityEngine::Vector3)>(&::VROSC::PointingLaser::SetDotPosition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x17b912c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "SetDotPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.SetDimmed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(bool)>(&::VROSC::PointingLaser::SetDimmed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x17b9230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "SetDimmed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)()>(&::VROSC::PointingLaser::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x17b92d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.LerpAlphaKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GradientAlphaKey (::VROSC::PointingLaser::*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, int32_t, float_t)>(&::VROSC::PointingLaser::LerpAlphaKey)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x17b9408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "LerpAlphaKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser.HideInSpectatorMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)(bool)>(&::VROSC::PointingLaser::HideInSpectatorMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17b9528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "HideInSpectatorMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PointingLaser._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PointingLaser::*)()>(&::VROSC::PointingLaser::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17b9590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::PointingLaser::__cordl_internal_get__endDot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endDot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::PointingLaser::__cordl_internal_get__endDot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endDot;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__endDot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endDot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& VROSC::PointingLaser::__cordl_internal_get__laser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____laser;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& VROSC::PointingLaser::__cordl_internal_get__laser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____laser;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__laser(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____laser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SmoothMovement*& VROSC::PointingLaser::__cordl_internal_get__smoothMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothMovement;
}
constexpr ::VROSC::SmoothMovement* const& VROSC::PointingLaser::__cordl_internal_get__smoothMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothMovement;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__smoothMovement(::VROSC::SmoothMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoothMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::PointingLaser::__cordl_internal_get__device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::PointingLaser::__cordl_internal_get__device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputSettings>& VROSC::PointingLaser::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::VROSC::InputSettings> const& VROSC::PointingLaser::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__settings(::UnityW<::VROSC::InputSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>*& VROSC::PointingLaser::__cordl_internal_get__disablingReasons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablingReasons;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>* const& VROSC::PointingLaser::__cordl_internal_get__disablingReasons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablingReasons;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__disablingReasons(::System::Collections::Generic::List_1<::VROSC::PointingLaser_DisablingReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disablingReasons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>*& VROSC::PointingLaser::__cordl_internal_get_OnPointingDisabledChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPointingDisabledChanged;
}
constexpr ::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>* const& VROSC::PointingLaser::__cordl_internal_get_OnPointingDisabledChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPointingDisabledChanged;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set_OnPointingDisabledChanged(::System::Action_2<bool,::VROSC::PointingLaser_DisablingReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPointingDisabledChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::PointingLaser::__cordl_internal_get__PointingDisabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointingDisabled_k__BackingField;
}
constexpr bool const& VROSC::PointingLaser::__cordl_internal_get__PointingDisabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointingDisabled_k__BackingField;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__PointingDisabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PointingDisabled_k__BackingField = value;
}
constexpr bool& VROSC::PointingLaser::__cordl_internal_get__Dimmed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dimmed_k__BackingField;
}
constexpr bool const& VROSC::PointingLaser::__cordl_internal_get__Dimmed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dimmed_k__BackingField;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__Dimmed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Dimmed_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::PointingLaser::__cordl_internal_get__laserPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____laserPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::PointingLaser::__cordl_internal_get__laserPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____laserPositions;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__laserPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____laserPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Gradient*& VROSC::PointingLaser::__cordl_internal_get__normalGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalGradient;
}
constexpr ::UnityEngine::Gradient* const& VROSC::PointingLaser::__cordl_internal_get__normalGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalGradient;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__normalGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Gradient*& VROSC::PointingLaser::__cordl_internal_get__dimGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dimGradient;
}
constexpr ::UnityEngine::Gradient* const& VROSC::PointingLaser::__cordl_internal_get__dimGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dimGradient;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__dimGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dimGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Gradient*& VROSC::PointingLaser::__cordl_internal_get__fadingGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadingGradient;
}
constexpr ::UnityEngine::Gradient* const& VROSC::PointingLaser::__cordl_internal_get__fadingGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadingGradient;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__fadingGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadingGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::PointingLaser::__cordl_internal_get__fadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTime;
}
constexpr float_t const& VROSC::PointingLaser::__cordl_internal_get__fadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTime;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__fadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeTime = value;
}
constexpr float_t& VROSC::PointingLaser::__cordl_internal_get__fadingTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadingTimer;
}
constexpr float_t const& VROSC::PointingLaser::__cordl_internal_get__fadingTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadingTimer;
}
constexpr void VROSC::PointingLaser::__cordl_internal_set__fadingTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadingTimer = value;
}
inline bool VROSC::PointingLaser::get_PointingDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "get_PointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::PointingLaser::set_PointingDisabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "set_PointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::PointingLaser::get_Dimmed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "get_Dimmed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::PointingLaser::set_Dimmed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "set_Dimmed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::PointingLaser::SetPointingDisabled(bool  disabled, ::VROSC::PointingLaser_DisablingReason  reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "SetPointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PointingLaser_DisablingReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabled, reason);
}
inline void VROSC::PointingLaser::Setup(::VROSC::InputDevice*  controller, ::VROSC::InputSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, controller, settings);
}
inline void VROSC::PointingLaser::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::PointingLaser::EnvironmentLoaded(::GlobalNamespace::Environment*  environment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "EnvironmentLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Environment*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environment);
}
inline void VROSC::PointingLaser::UpdatePointingDisabled(bool  disabled, ::VROSC::PointingLaser_DisablingReason  reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "UpdatePointingDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PointingLaser_DisablingReason>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabled, reason);
}
inline void VROSC::PointingLaser::SetDotPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "SetDotPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VROSC::PointingLaser::SetDimmed(bool  dimmed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "SetDimmed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dimmed);
}
inline void VROSC::PointingLaser::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GradientAlphaKey VROSC::PointingLaser::LerpAlphaKey(::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, int32_t  key, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "LerpAlphaKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GradientAlphaKey, false>(this, ___internal_method, a, b, key, value);
}
inline void VROSC::PointingLaser::HideInSpectatorMode(bool  hideLasers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        "HideInSpectatorMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hideLasers);
}
inline void VROSC::PointingLaser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PointingLaser*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PointingLaser* VROSC::PointingLaser::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PointingLaser*>());
}
// Ctor Parameters []
constexpr ::VROSC::PointingLaser::PointingLaser()   {
}
