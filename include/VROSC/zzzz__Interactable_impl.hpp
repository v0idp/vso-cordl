#pragma once
// IWYU pragma private; include "VROSC/Interactable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
//  Writing Method size for method: ::VROSC::Interactable.set_IsHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(bool)>(&::VROSC::Interactable::set_IsHovering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188ff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "set_IsHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.get_IsHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Interactable::*)()>(&::VROSC::Interactable::get_IsHovering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x188ffa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_IsHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.get_IsDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Interactable::*)()>(&::VROSC::Interactable::get_IsDisabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x188ffac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_IsDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.set_IsInteracting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(bool)>(&::VROSC::Interactable::set_IsInteracting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x188fffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "set_IsInteracting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.get_IsInteracting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Interactable::*)()>(&::VROSC::Interactable::get_IsInteracting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1890008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_IsInteracting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.get_CanBeInteractedWith
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::Interactable::*)()>(&::VROSC::Interactable::get_CanBeInteractedWith)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1890010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_CanBeInteractedWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.SetDisabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(::System::Object*, bool)>(&::VROSC::Interactable::SetDisabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x189003c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.SetCanBeInteractedWith
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(bool)>(&::VROSC::Interactable::SetCanBeInteractedWith)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x189017c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "SetCanBeInteractedWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.SetHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&::VROSC::Interactable::SetHovering)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1890188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.ContinousHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&::VROSC::Interactable::ContinousHovering)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18903d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.UpdateHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(bool)>(&::VROSC::Interactable::UpdateHovering)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1890558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)()>(&::VROSC::Interactable::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1890594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.SetTooltipData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(::VROSC::TooltipData*)>(&::VROSC::Interactable::SetTooltipData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x18905a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "SetTooltipData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.SetTooltipData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*)>(&::VROSC::Interactable::SetTooltipData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x189068c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "SetTooltipData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::TooltipData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable.GetTooltipDatas
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::TooltipData*>* (::VROSC::Interactable::*)()>(&::VROSC::Interactable::GetTooltipDatas)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1890694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Interactable._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Interactable::*)()>(&::VROSC::Interactable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x188fcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::Interactable::__cordl_internal_get__IsHovering_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsHovering_k__BackingField;
}
constexpr bool const& VROSC::Interactable::__cordl_internal_get__IsHovering_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsHovering_k__BackingField;
}
constexpr void VROSC::Interactable::__cordl_internal_set__IsHovering_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsHovering_k__BackingField = value;
}
constexpr bool& VROSC::Interactable::__cordl_internal_get__IsInteracting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInteracting_k__BackingField;
}
constexpr bool const& VROSC::Interactable::__cordl_internal_get__IsInteracting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInteracting_k__BackingField;
}
constexpr void VROSC::Interactable::__cordl_internal_set__IsInteracting_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInteracting_k__BackingField = value;
}
constexpr ::System::Action*& VROSC::Interactable::__cordl_internal_get_OnHoverStay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHoverStay;
}
constexpr ::System::Action* const& VROSC::Interactable::__cordl_internal_get_OnHoverStay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHoverStay;
}
constexpr void VROSC::Interactable::__cordl_internal_set_OnHoverStay(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnHoverStay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::Interactable::__cordl_internal_get_OnHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHover;
}
constexpr ::System::Action_1<bool>* const& VROSC::Interactable::__cordl_internal_get_OnHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHover;
}
constexpr void VROSC::Interactable::__cordl_internal_set_OnHover(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnHover)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::Interactable::__cordl_internal_get_OnInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInteraction;
}
constexpr ::System::Action_1<bool>* const& VROSC::Interactable::__cordl_internal_get_OnInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInteraction;
}
constexpr void VROSC::Interactable::__cordl_internal_set_OnInteraction(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<bool>*& VROSC::Interactable::__cordl_internal_get_OnInteractableDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInteractableDisabled;
}
constexpr ::System::Action_1<bool>* const& VROSC::Interactable::__cordl_internal_get_OnInteractableDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnInteractableDisabled;
}
constexpr void VROSC::Interactable::__cordl_internal_set_OnInteractableDisabled(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnInteractableDisabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::Interactable::__cordl_internal_get__lastHoverPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHoverPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::Interactable::__cordl_internal_get__lastHoverPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHoverPosition;
}
constexpr void VROSC::Interactable::__cordl_internal_set__lastHoverPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHoverPosition = value;
}
constexpr bool& VROSC::Interactable::__cordl_internal_get__lastPointedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPointedAt;
}
constexpr bool const& VROSC::Interactable::__cordl_internal_get__lastPointedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPointedAt;
}
constexpr void VROSC::Interactable::__cordl_internal_set__lastPointedAt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPointedAt = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*& VROSC::Interactable::__cordl_internal_get__hoveringControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringControllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>* const& VROSC::Interactable::__cordl_internal_get__hoveringControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoveringControllers;
}
constexpr void VROSC::Interactable::__cordl_internal_set__hoveringControllers(::System::Collections::Generic::List_1<::UnityW<::VROSC::InputDevice>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoveringControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>*& VROSC::Interactable::__cordl_internal_get__tooltipDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipDatas;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* const& VROSC::Interactable::__cordl_internal_get__tooltipDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tooltipDatas;
}
constexpr void VROSC::Interactable::__cordl_internal_set__tooltipDatas(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tooltipDatas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& VROSC::Interactable::__cordl_internal_get__disablingObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablingObjects;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& VROSC::Interactable::__cordl_internal_get__disablingObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disablingObjects;
}
constexpr void VROSC::Interactable::__cordl_internal_set__disablingObjects(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disablingObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::Interactable::__cordl_internal_get__canBeinteractedWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canBeinteractedWith;
}
constexpr bool const& VROSC::Interactable::__cordl_internal_get__canBeinteractedWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canBeinteractedWith;
}
constexpr void VROSC::Interactable::__cordl_internal_set__canBeinteractedWith(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canBeinteractedWith = value;
}
inline void VROSC::Interactable::set_IsHovering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "set_IsHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::Interactable::get_IsHovering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_IsHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::Interactable::get_IsDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_IsDisabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::Interactable::set_IsInteracting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "set_IsInteracting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool VROSC::Interactable::get_IsInteracting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_IsInteracting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VROSC::Interactable::get_CanBeInteractedWith()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "get_CanBeInteractedWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::Interactable::SetDisabled(::System::Object*  disabler, bool  shouldBeDisabled)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disabler, shouldBeDisabled);
}
inline void VROSC::Interactable::SetCanBeInteractedWith(bool  canBeInteractedWith)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "SetCanBeInteractedWith",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canBeInteractedWith);
}
inline void VROSC::Interactable::SetHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  controllerIsHovering)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, position, pointedAt, controllerIsHovering);
}
inline void VROSC::Interactable::ContinousHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  v)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, position, pointedAt, v);
}
inline void VROSC::Interactable::UpdateHovering(bool  hovering)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hovering);
}
inline void VROSC::Interactable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Interactable::SetTooltipData(::VROSC::TooltipData*  tooltipData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "SetTooltipData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tooltipData);
}
inline void VROSC::Interactable::SetTooltipData(::System::Collections::Generic::List_1<::VROSC::TooltipData*>*  tooltipDatas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        "SetTooltipData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::TooltipData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tooltipDatas);
}
inline ::System::Collections::Generic::List_1<::VROSC::TooltipData*>* VROSC::Interactable::GetTooltipDatas()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::TooltipData*>*, false>(this, ___internal_method);
}
inline void VROSC::Interactable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Interactable*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Interactable* VROSC::Interactable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Interactable*>());
}
// Ctor Parameters []
constexpr ::VROSC::Interactable::Interactable()   {
}
