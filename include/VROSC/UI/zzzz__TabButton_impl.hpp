#pragma once
// IWYU pragma private; include "VROSC/UI/TabButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/UI/zzzz__TabButton_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
//  Writing Method size for method: ::VROSC::UI::TabButton.get_Target
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::VROSC::UI::TabButton::*)()>(&::VROSC::UI::TabButton::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e2ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "get_Target",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TabButton.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::TabButton::*)()>(&::VROSC::UI::TabButton::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17e2ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TabButton.Clicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::TabButton::*)()>(&::VROSC::UI::TabButton::Clicked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17e30c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "Clicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TabButton.SetEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::TabButton::*)(bool)>(&::VROSC::UI::TabButton::SetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17e30f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "SetEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TabButton.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::TabButton::*)(bool)>(&::VROSC::UI::TabButton::SetActive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17e30fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TabButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::TabButton::*)()>(&::VROSC::UI::TabButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17e3158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIButton>& VROSC::UI::TabButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::UI::TabButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void VROSC::UI::TabButton::__cordl_internal_set__button(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::UI::TabButton::__cordl_internal_get__activeBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeBackground;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::UI::TabButton::__cordl_internal_get__activeBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeBackground;
}
constexpr void VROSC::UI::TabButton::__cordl_internal_set__activeBackground(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeBackground)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::UI::TabButton::__cordl_internal_get__tabTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabTarget;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::UI::TabButton::__cordl_internal_get__tabTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabTarget;
}
constexpr void VROSC::UI::TabButton::__cordl_internal_set__tabTarget(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tabTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UI::TabButton::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& VROSC::UI::TabButton::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void VROSC::UI::TabButton::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr bool& VROSC::UI::TabButton::__cordl_internal_get__isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr bool const& VROSC::UI::TabButton::__cordl_internal_get__isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr void VROSC::UI::TabButton::__cordl_internal_set__isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEnabled = value;
}
constexpr ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*& VROSC::UI::TabButton::__cordl_internal_get_OnTabActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabActivated;
}
constexpr ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>* const& VROSC::UI::TabButton::__cordl_internal_get_OnTabActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTabActivated;
}
constexpr void VROSC::UI::TabButton::__cordl_internal_set_OnTabActivated(::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnTabActivated)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::GameObject> VROSC::UI::TabButton::get_Target()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "get_Target",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void VROSC::UI::TabButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::TabButton::Clicked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "Clicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::TabButton::SetEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "SetEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void VROSC::UI::TabButton::SetActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::UI::TabButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TabButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::TabButton* VROSC::UI::TabButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::TabButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::TabButton::TabButton()   {
}
