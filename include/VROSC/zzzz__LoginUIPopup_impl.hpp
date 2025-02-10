#pragma once
// IWYU pragma private; include "VROSC/LoginUIPopup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoginUIPopup_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "VROSC/zzzz__LoginUIPopupAcceptTermsPanel_def.hpp"
#include "VROSC/zzzz__LoginUIPopupChangeEmailPanel_def.hpp"
#include "VROSC/zzzz__LoginUIPopupChangePasswordPanel_def.hpp"
#include "VROSC/zzzz__LoginUIPopupEmailVerificationPanel_def.hpp"
#include "VROSC/zzzz__LoginUIPopupLoginPanel_def.hpp"
#include "VROSC/zzzz__LoginUIPopupPanelBase_def.hpp"
#include "VROSC/zzzz__LoginUIPopup_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::LoginUIPopup_Panel::LoginUIPopup_Panel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::LoginUIPopup_Panel::LoginUIPopup_Panel()   {
}
constexpr ::VROSC::LoginUIPopup_Panel  VROSC::LoginUIPopup_Panel::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::LoginUIPopup_Panel  VROSC::LoginUIPopup_Panel::Login{static_cast<int32_t>(0x1)};
constexpr ::VROSC::LoginUIPopup_Panel  VROSC::LoginUIPopup_Panel::EmailVerification{static_cast<int32_t>(0x2)};
constexpr ::VROSC::LoginUIPopup_Panel  VROSC::LoginUIPopup_Panel::ChangeEmail{static_cast<int32_t>(0x3)};
constexpr ::VROSC::LoginUIPopup_Panel  VROSC::LoginUIPopup_Panel::ChangePassword{static_cast<int32_t>(0x4)};
constexpr ::VROSC::LoginUIPopup_Panel  VROSC::LoginUIPopup_Panel::AcceptTerms{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::VROSC::LoginUIPopup.get_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174fa04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "get_IsOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.set_IsOpen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)(bool)>(&::VROSC::LoginUIPopup::set_IsOpen)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x174fa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "set_IsOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::Awake)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x174fa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::Setup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x174fb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.OpenPanel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)(::VROSC::LoginUIPopup_Panel)>(&::VROSC::LoginUIPopup::OpenPanel)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x174fc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "OpenPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoginUIPopup_Panel>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.ClosePanel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::ClosePanel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x174fe80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "ClosePanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.ClosePopup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::ClosePopup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x174fe18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "ClosePopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup.PrivacyPolicyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::PrivacyPolicyPressed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x174ff18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "PrivacyPolicyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoginUIPopup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoginUIPopup::*)()>(&::VROSC::LoginUIPopup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174ff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoginUIPopupLoginPanel>& VROSC::LoginUIPopup::__cordl_internal_get__loginPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loginPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupLoginPanel> const& VROSC::LoginUIPopup::__cordl_internal_get__loginPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loginPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__loginPanel(::UnityW<::VROSC::LoginUIPopupLoginPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loginPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel>& VROSC::LoginUIPopup::__cordl_internal_get__waitingForVerificationPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForVerificationPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel> const& VROSC::LoginUIPopup::__cordl_internal_get__waitingForVerificationPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForVerificationPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__waitingForVerificationPanel(::UnityW<::VROSC::LoginUIPopupEmailVerificationPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____waitingForVerificationPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoginUIPopupChangeEmailPanel>& VROSC::LoginUIPopup::__cordl_internal_get__changeEmailPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeEmailPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupChangeEmailPanel> const& VROSC::LoginUIPopup::__cordl_internal_get__changeEmailPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeEmailPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__changeEmailPanel(::UnityW<::VROSC::LoginUIPopupChangeEmailPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____changeEmailPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoginUIPopupChangePasswordPanel>& VROSC::LoginUIPopup::__cordl_internal_get__changePasswordPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changePasswordPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupChangePasswordPanel> const& VROSC::LoginUIPopup::__cordl_internal_get__changePasswordPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changePasswordPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__changePasswordPanel(::UnityW<::VROSC::LoginUIPopupChangePasswordPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____changePasswordPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel>& VROSC::LoginUIPopup::__cordl_internal_get__acceptTermsPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptTermsPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel> const& VROSC::LoginUIPopup::__cordl_internal_get__acceptTermsPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acceptTermsPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__acceptTermsPanel(::UnityW<::VROSC::LoginUIPopupAcceptTermsPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____acceptTermsPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::LoginUIPopup::__cordl_internal_get__privacyPolicyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::LoginUIPopup::__cordl_internal_get__privacyPolicyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyButton;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__privacyPolicyButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase>& VROSC::LoginUIPopup::__cordl_internal_get__previousPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase> const& VROSC::LoginUIPopup::__cordl_internal_get__previousPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__previousPanel(::UnityW<::VROSC::LoginUIPopupPanelBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previousPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase>& VROSC::LoginUIPopup::__cordl_internal_get__currentPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPanel;
}
constexpr ::UnityW<::VROSC::LoginUIPopupPanelBase> const& VROSC::LoginUIPopup::__cordl_internal_get__currentPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPanel;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__currentPanel(::UnityW<::VROSC::LoginUIPopupPanelBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::LoginUIPopup::__cordl_internal_get__IsOpen_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOpen_k__BackingField;
}
constexpr bool const& VROSC::LoginUIPopup::__cordl_internal_get__IsOpen_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOpen_k__BackingField;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set__IsOpen_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsOpen_k__BackingField = value;
}
constexpr ::System::Action*& VROSC::LoginUIPopup::__cordl_internal_get_OnLoginPopupClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginPopupClosed;
}
constexpr ::System::Action* const& VROSC::LoginUIPopup::__cordl_internal_get_OnLoginPopupClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoginPopupClosed;
}
constexpr void VROSC::LoginUIPopup::__cordl_internal_set_OnLoginPopupClosed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLoginPopupClosed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VROSC::LoginUIPopup::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "get_IsOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::LoginUIPopup::set_IsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "set_IsOpen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::LoginUIPopup::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoginUIPopup::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoginUIPopup::OpenPanel(::VROSC::LoginUIPopup_Panel  panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "OpenPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::LoginUIPopup_Panel>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void VROSC::LoginUIPopup::ClosePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "ClosePanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoginUIPopup::ClosePopup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "ClosePopup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoginUIPopup::PrivacyPolicyPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        "PrivacyPolicyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoginUIPopup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoginUIPopup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoginUIPopup* VROSC::LoginUIPopup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoginUIPopup*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoginUIPopup::LoginUIPopup()   {
}
