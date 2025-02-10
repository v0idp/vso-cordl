#pragma once
// IWYU pragma private; include "VROSC/UIButton.hpp"
#include "VROSC/zzzz__UIInteractable_impl.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__SimpleHaptic_def.hpp"
//  Writing Method size for method: ::VROSC::UIButton.get_InteractionStopsLaser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UIButton::*)()>(&::VROSC::UIButton::get_InteractionStopsLaser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177230c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIButton.get_Text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UIButton::*)()>(&::VROSC::UIButton::get_Text)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1772314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        "get_Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIButton.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIButton::*)()>(&::VROSC::UIButton::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x17723ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIButton.ButtonWasPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIButton::*)(::VROSC::ClickData*)>(&::VROSC::UIButton::ButtonWasPressed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1772474;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIButton.SetText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIButton::*)(::StringW)>(&::VROSC::UIButton::SetText)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x17724e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        "SetText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIButton::*)()>(&::VROSC::UIButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17725c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextMesh>& VROSC::UIButton::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::UnityEngine::TextMesh> const& VROSC::UIButton::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void VROSC::UIButton::__cordl_internal_set__label(::UnityW<::UnityEngine::TextMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::UIButton::__cordl_internal_get__tmpLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::UIButton::__cordl_internal_get__tmpLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpLabel;
}
constexpr void VROSC::UIButton::__cordl_internal_set__tmpLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tmpLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SimpleHaptic*& VROSC::UIButton::__cordl_internal_get__hapticFeedBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticFeedBack;
}
constexpr ::VROSC::SimpleHaptic* const& VROSC::UIButton::__cordl_internal_get__hapticFeedBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticFeedBack;
}
constexpr void VROSC::UIButton::__cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedBack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UIButton::__cordl_internal_get_OnButtonPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnButtonPress;
}
constexpr ::System::Action* const& VROSC::UIButton::__cordl_internal_get_OnButtonPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnButtonPress;
}
constexpr void VROSC::UIButton::__cordl_internal_set_OnButtonPress(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnButtonPress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::UIButton::get_InteractionStopsLaser()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW VROSC::UIButton::get_Text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        "get_Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::UIButton::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIButton::ButtonWasPressed(::VROSC::ClickData*  clickData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::UIButton::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        "SetText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void VROSC::UIButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIButton* VROSC::UIButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIButton::UIButton()   {
}
