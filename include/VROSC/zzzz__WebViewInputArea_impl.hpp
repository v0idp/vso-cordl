#pragma once
// IWYU pragma private; include "VROSC/WebViewInputArea.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "VROSC/zzzz__Clickable_impl.hpp"
#include "VROSC/zzzz__WebViewInputArea_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::VROSC::WebViewInputArea.get_InteractionStopsLaser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::WebViewInputArea::*)()>(&::VROSC::WebViewInputArea::get_InteractionStopsLaser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1890960;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)()>(&::VROSC::WebViewInputArea::Awake)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1890968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)()>(&::VROSC::WebViewInputArea::LateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1890af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)()>(&::VROSC::WebViewInputArea::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1890bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.Pressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)(::VROSC::ClickData*, bool)>(&::VROSC::WebViewInputArea::Pressed)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1890c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "Pressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.GetNormalizedPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::WebViewInputArea::*)(::UnityEngine::Vector3)>(&::VROSC::WebViewInputArea::GetNormalizedPosition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1890df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "GetNormalizedPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.ThumbStickPushed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&::VROSC::WebViewInputArea::ThumbStickPushed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1890e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "ThumbStickPushed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea.ContinousHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)(::VROSC::InputDevice*, ::UnityEngine::Vector3, bool, bool)>(&::VROSC::WebViewInputArea::ContinousHovering)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1890eec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WebViewInputArea._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WebViewInputArea::*)()>(&::VROSC::WebViewInputArea::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1891018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::WebViewInputArea::__cordl_internal_get__area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____area;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::WebViewInputArea::__cordl_internal_get__area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____area;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set__area(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____area)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& VROSC::WebViewInputArea::__cordl_internal_get__scrollDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollDirection;
}
constexpr ::UnityEngine::Vector2 const& VROSC::WebViewInputArea::__cordl_internal_get__scrollDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollDirection;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set__scrollDirection(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollDirection = value;
}
constexpr ::System::Action_2<::UnityEngine::Vector2,bool>*& VROSC::WebViewInputArea::__cordl_internal_get_OnAreaClicked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAreaClicked;
}
constexpr ::System::Action_2<::UnityEngine::Vector2,bool>* const& VROSC::WebViewInputArea::__cordl_internal_get_OnAreaClicked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAreaClicked;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set_OnAreaClicked(::System::Action_2<::UnityEngine::Vector2,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnAreaClicked)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*& VROSC::WebViewInputArea::__cordl_internal_get_OnScroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnScroll;
}
constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>* const& VROSC::WebViewInputArea::__cordl_internal_get_OnScroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnScroll;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set_OnScroll(::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnScroll)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Vector2>*& VROSC::WebViewInputArea::__cordl_internal_get_OnAreaHovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAreaHovered;
}
constexpr ::System::Action_1<::UnityEngine::Vector2>* const& VROSC::WebViewInputArea::__cordl_internal_get_OnAreaHovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAreaHovered;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set_OnAreaHovered(::System::Action_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnAreaHovered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*& VROSC::WebViewInputArea::__cordl_internal_get_OnAreaDragged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAreaDragged;
}
constexpr ::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>* const& VROSC::WebViewInputArea::__cordl_internal_get_OnAreaDragged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAreaDragged;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set_OnAreaDragged(::System::Action_2<::UnityEngine::Vector2,::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnAreaDragged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::WebViewInputArea::__cordl_internal_get__draggingController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____draggingController;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::WebViewInputArea::__cordl_internal_get__draggingController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____draggingController;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set__draggingController(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____draggingController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& VROSC::WebViewInputArea::__cordl_internal_get__lastDraggedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDraggedPosition;
}
constexpr ::UnityEngine::Vector2 const& VROSC::WebViewInputArea::__cordl_internal_get__lastDraggedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastDraggedPosition;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set__lastDraggedPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastDraggedPosition = value;
}
constexpr ::UnityEngine::Vector2& VROSC::WebViewInputArea::__cordl_internal_get__lastNormalizedHoverPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastNormalizedHoverPosition;
}
constexpr ::UnityEngine::Vector2 const& VROSC::WebViewInputArea::__cordl_internal_get__lastNormalizedHoverPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastNormalizedHoverPosition;
}
constexpr void VROSC::WebViewInputArea::__cordl_internal_set__lastNormalizedHoverPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastNormalizedHoverPosition = value;
}
inline bool VROSC::WebViewInputArea::get_InteractionStopsLaser()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::WebViewInputArea::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WebViewInputArea::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WebViewInputArea::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WebViewInputArea::Pressed(::VROSC::ClickData*  clickData, bool  pressed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "Pressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData, pressed);
}
inline ::UnityEngine::Vector2 VROSC::WebViewInputArea::GetNormalizedPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "GetNormalizedPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, position);
}
inline void VROSC::WebViewInputArea::ThumbStickPushed(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        "ThumbStickPushed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, direction);
}
inline void VROSC::WebViewInputArea::ContinousHovering(::VROSC::InputDevice*  device, ::UnityEngine::Vector3  position, bool  pointedAt, bool  v)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, position, pointedAt, v);
}
inline void VROSC::WebViewInputArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WebViewInputArea*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WebViewInputArea* VROSC::WebViewInputArea::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WebViewInputArea*>());
}
// Ctor Parameters []
constexpr ::VROSC::WebViewInputArea::WebViewInputArea()   {
}
