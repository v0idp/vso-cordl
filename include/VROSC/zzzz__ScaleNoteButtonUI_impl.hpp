#pragma once
// IWYU pragma private; include "VROSC/ScaleNoteButtonUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__Note_impl.hpp"
#include "VROSC/zzzz__ScaleNoteButtonUI_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "VROSC/UI/zzzz__UIScalePanelButtonColoring_def.hpp"
#include "VROSC/zzzz__ControllerInputNode_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include "VROSC/zzzz__Scale_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)()>(&::VROSC::ScaleNoteButtonUI::Start)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x179770c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.SetAxis
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)(int32_t)>(&::VROSC::ScaleNoteButtonUI::SetAxis)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1797ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "SetAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.AssignStartNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::ScaleNoteButtonUI::AssignStartNote)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1797afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "AssignStartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.SetToScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)(::VROSC::Scale, ::VROSC::Note)>(&::VROSC::ScaleNoteButtonUI::SetToScale)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1797b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "SetToScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.Toggle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)(::VROSC::InputDevice*, bool)>(&::VROSC::ScaleNoteButtonUI::Toggle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1797c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "Toggle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)()>(&::VROSC::ScaleNoteButtonUI::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1797c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.SetText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)()>(&::VROSC::ScaleNoteButtonUI::SetText)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1797c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "SetText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI.IsHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)(bool)>(&::VROSC::ScaleNoteButtonUI::IsHovering)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1797d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "IsHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ScaleNoteButtonUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ScaleNoteButtonUI::*)()>(&::VROSC::ScaleNoteButtonUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1797dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::Note& VROSC::ScaleNoteButtonUI::__cordl_internal_get__note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr ::VROSC::Note const& VROSC::ScaleNoteButtonUI::__cordl_internal_get__note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____note;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set__note(::VROSC::Note  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____note = value;
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::ScaleNoteButtonUI::__cordl_internal_get__toggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::ScaleNoteButtonUI::__cordl_internal_get__toggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set__toggleButton(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::ScaleNoteButtonUI::__cordl_internal_get__startNoteToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNoteToggle;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::ScaleNoteButtonUI::__cordl_internal_get__startNoteToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNoteToggle;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set__startNoteToggle(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startNoteToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControllerInputNode>& VROSC::ScaleNoteButtonUI::__cordl_internal_get__inputNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputNode;
}
constexpr ::UnityW<::VROSC::ControllerInputNode> const& VROSC::ScaleNoteButtonUI::__cordl_internal_get__inputNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputNode;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set__inputNode(::UnityW<::VROSC::ControllerInputNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ScaleNoteButtonUI::__cordl_internal_get__display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____display;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ScaleNoteButtonUI::__cordl_internal_get__display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____display;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set__display(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____display)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::UIScalePanelButtonColoring>& VROSC::ScaleNoteButtonUI::__cordl_internal_get__backgroundColoring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundColoring;
}
constexpr ::UnityW<::VROSC::UI::UIScalePanelButtonColoring> const& VROSC::ScaleNoteButtonUI::__cordl_internal_get__backgroundColoring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundColoring;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set__backgroundColoring(::UnityW<::VROSC::UI::UIScalePanelButtonColoring>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundColoring)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Note>*& VROSC::ScaleNoteButtonUI::__cordl_internal_get_OnSetAsStartNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSetAsStartNode;
}
constexpr ::System::Action_1<::VROSC::Note>* const& VROSC::ScaleNoteButtonUI::__cordl_internal_get_OnSetAsStartNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSetAsStartNode;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set_OnSetAsStartNode(::System::Action_1<::VROSC::Note>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSetAsStartNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::VROSC::Note,bool>*& VROSC::ScaleNoteButtonUI::__cordl_internal_get_OnSetNoteActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSetNoteActive;
}
constexpr ::System::Action_2<::VROSC::Note,bool>* const& VROSC::ScaleNoteButtonUI::__cordl_internal_get_OnSetNoteActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSetNoteActive;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set_OnSetNoteActive(::System::Action_2<::VROSC::Note,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSetNoteActive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::VROSC::Note,bool>*& VROSC::ScaleNoteButtonUI::__cordl_internal_get_OnNoteHovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteHovered;
}
constexpr ::System::Action_2<::VROSC::Note,bool>* const& VROSC::ScaleNoteButtonUI::__cordl_internal_get_OnNoteHovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNoteHovered;
}
constexpr void VROSC::ScaleNoteButtonUI::__cordl_internal_set_OnNoteHovered(::System::Action_2<::VROSC::Note,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnNoteHovered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ScaleNoteButtonUI::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ScaleNoteButtonUI::SetAxis(int32_t  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "SetAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis);
}
inline void VROSC::ScaleNoteButtonUI::AssignStartNote(::VROSC::InputDevice*  device, bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "AssignStartNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, active);
}
inline void VROSC::ScaleNoteButtonUI::SetToScale(::VROSC::Scale  scale, ::VROSC::Note  startNote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "SetToScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Scale>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Note>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale, startNote);
}
inline void VROSC::ScaleNoteButtonUI::Toggle(::VROSC::InputDevice*  device, bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "Toggle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, active);
}
inline void VROSC::ScaleNoteButtonUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ScaleNoteButtonUI::SetText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "SetText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ScaleNoteButtonUI::IsHovering(bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        "IsHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hovering);
}
inline void VROSC::ScaleNoteButtonUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ScaleNoteButtonUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ScaleNoteButtonUI* VROSC::ScaleNoteButtonUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ScaleNoteButtonUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::ScaleNoteButtonUI::ScaleNoteButtonUI()   {
}
