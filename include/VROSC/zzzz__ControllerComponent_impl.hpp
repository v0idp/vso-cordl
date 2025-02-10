#pragma once
// IWYU pragma private; include "VROSC/ControllerComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__ControllerComponent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__ControllerComponent_def.hpp"
#include "VROSC/zzzz__ControllerHintUI_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/zzzz__TriggerButton_def.hpp"
//  Writing Method size for method: ::VROSC::ControllerComponent_TooltipRequest._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent_TooltipRequest::*)(::VROSC::TooltipData*, ::System::Object*)>(&::VROSC::ControllerComponent_TooltipRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17327b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent_TooltipRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TooltipData*& VROSC::ControllerComponent_TooltipRequest::__cordl_internal_get_Tooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tooltip;
}
constexpr ::VROSC::TooltipData* const& VROSC::ControllerComponent_TooltipRequest::__cordl_internal_get_Tooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tooltip;
}
constexpr void VROSC::ControllerComponent_TooltipRequest::__cordl_internal_set_Tooltip(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& VROSC::ControllerComponent_TooltipRequest::__cordl_internal_get_Requester()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Requester;
}
constexpr ::System::Object* const& VROSC::ControllerComponent_TooltipRequest::__cordl_internal_get_Requester() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Requester;
}
constexpr void VROSC::ControllerComponent_TooltipRequest::__cordl_internal_set_Requester(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Requester)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ControllerComponent_TooltipRequest::_ctor(::VROSC::TooltipData*  tooltip, ::System::Object*  requester)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent_TooltipRequest*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tooltip, requester);
}
inline ::VROSC::ControllerComponent_TooltipRequest* VROSC::ControllerComponent_TooltipRequest::New_ctor(::VROSC::TooltipData*  tooltip, ::System::Object*  requester)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerComponent_TooltipRequest*>(tooltip, requester));
}
// Ctor Parameters []
constexpr ::VROSC::ControllerComponent_TooltipRequest::ControllerComponent_TooltipRequest()   {
}
//  Writing Method size for method: ::VROSC::ControllerComponent.set_CurrentColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)(::UnityEngine::Color)>(&::VROSC::ControllerComponent::set_CurrentColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17324ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "set_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.get_CurrentColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::get_CurrentColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17324b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "get_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.get_ComponentType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HighlightControllerComponents_Component (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::get_ComponentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17324c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "get_ComponentType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.get_TriggerButton
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TriggerButton (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::get_TriggerButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17324cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "get_TriggerButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.SetTooltipActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)(bool, ::VROSC::TooltipData*, ::System::Object*)>(&::VROSC::ControllerComponent::SetTooltipActive)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x17324d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetTooltipActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.ClearTooltip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::ClearTooltip)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1732904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "ClearTooltip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.UpdateTooltipDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::UpdateTooltipDisplay)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x17327e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "UpdateTooltipDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.SetButtonColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)(::UnityEngine::Color)>(&::VROSC::ControllerComponent::SetButtonColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1732b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetButtonColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.SetPressing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)(float_t)>(&::VROSC::ControllerComponent::SetPressing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1732b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetPressing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.GetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::GetColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1732aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent.SetType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)(::VROSC::HighlightControllerComponents_Component, ::VROSC::TriggerButton)>(&::VROSC::ControllerComponent::SetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1732b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerComponent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerComponent::*)()>(&::VROSC::ControllerComponent::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1732430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& VROSC::ControllerComponent::__cordl_internal_get__CurrentColor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentColor_k__BackingField;
}
constexpr ::UnityEngine::Color const& VROSC::ControllerComponent::__cordl_internal_get__CurrentColor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentColor_k__BackingField;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__CurrentColor_k__BackingField(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentColor_k__BackingField = value;
}
constexpr ::UnityW<::VROSC::ControllerHintUI>& VROSC::ControllerComponent::__cordl_internal_get__hintUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintUI;
}
constexpr ::UnityW<::VROSC::ControllerHintUI> const& VROSC::ControllerComponent::__cordl_internal_get__hintUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintUI;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__hintUI(::UnityW<::VROSC::ControllerHintUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hintUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HighlightControllerComponents_Component& VROSC::ControllerComponent::__cordl_internal_get__componentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentType;
}
constexpr ::VROSC::HighlightControllerComponents_Component const& VROSC::ControllerComponent::__cordl_internal_get__componentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentType;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__componentType(::VROSC::HighlightControllerComponents_Component  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____componentType = value;
}
constexpr ::VROSC::TriggerButton& VROSC::ControllerComponent::__cordl_internal_get__triggerButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerButton;
}
constexpr ::VROSC::TriggerButton const& VROSC::ControllerComponent::__cordl_internal_get__triggerButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerButton;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__triggerButton(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerButton = value;
}
constexpr bool& VROSC::ControllerComponent::__cordl_internal_get__tooltipActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipActive;
}
constexpr bool const& VROSC::ControllerComponent::__cordl_internal_get__tooltipActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipActive;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__tooltipActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tooltipActive = value;
}
constexpr float_t& VROSC::ControllerComponent::__cordl_internal_get__pressing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressing;
}
constexpr float_t const& VROSC::ControllerComponent::__cordl_internal_get__pressing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressing;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__pressing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressing = value;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>*& VROSC::ControllerComponent::__cordl_internal_get__tooltipRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipRequests;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>* const& VROSC::ControllerComponent::__cordl_internal_get__tooltipRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipRequests;
}
constexpr void VROSC::ControllerComponent::__cordl_internal_set__tooltipRequests(::System::Collections::Generic::List_1<::VROSC::ControllerComponent_TooltipRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tooltipRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ControllerComponent::set_CurrentColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "set_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color VROSC::ControllerComponent::get_CurrentColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "get_CurrentColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::VROSC::HighlightControllerComponents_Component VROSC::ControllerComponent::get_ComponentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "get_ComponentType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::HighlightControllerComponents_Component, false>(this, ___internal_method);
}
inline ::VROSC::TriggerButton VROSC::ControllerComponent::get_TriggerButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "get_TriggerButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::TriggerButton, false>(this, ___internal_method);
}
inline void VROSC::ControllerComponent::SetTooltipActive(bool  active, ::VROSC::TooltipData*  tooltip, ::System::Object*  requester)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetTooltipActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active, tooltip, requester);
}
inline void VROSC::ControllerComponent::ClearTooltip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "ClearTooltip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ControllerComponent::UpdateTooltipDisplay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "UpdateTooltipDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ControllerComponent::SetButtonColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetButtonColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::ControllerComponent::SetPressing(float_t  pressing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetPressing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pressing);
}
inline ::UnityEngine::Color VROSC::ControllerComponent::GetColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void VROSC::ControllerComponent::SetType(::VROSC::HighlightControllerComponents_Component  componentType, ::VROSC::TriggerButton  triggerButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        "SetType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TriggerButton>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, componentType, triggerButton);
}
inline void VROSC::ControllerComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerComponent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ControllerComponent* VROSC::ControllerComponent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerComponent*>());
}
// Ctor Parameters []
constexpr ::VROSC::ControllerComponent::ControllerComponent()   {
}
