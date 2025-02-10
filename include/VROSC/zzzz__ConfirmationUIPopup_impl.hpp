#pragma once
// IWYU pragma private; include "VROSC/ConfirmationUIPopup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ConfirmationUIPopup_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "VROSC/zzzz__ConfirmationUIPopup_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup_Data._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup_Data::*)()>(&::VROSC::ConfirmationUIPopup_Data::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x174efb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup_Data*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::ConfirmationUIPopup_Data::__cordl_internal_get_HeaderText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeaderText;
}
constexpr ::StringW const& VROSC::ConfirmationUIPopup_Data::__cordl_internal_get_HeaderText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeaderText;
}
constexpr void VROSC::ConfirmationUIPopup_Data::__cordl_internal_set_HeaderText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HeaderText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::ConfirmationUIPopup_Data::__cordl_internal_get_BodyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyText;
}
constexpr ::StringW const& VROSC::ConfirmationUIPopup_Data::__cordl_internal_get_BodyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BodyText;
}
constexpr void VROSC::ConfirmationUIPopup_Data::__cordl_internal_set_BodyText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BodyText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ConfirmationUIPopup_Data::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup_Data*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ConfirmationUIPopup_Data* VROSC::ConfirmationUIPopup_Data::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ConfirmationUIPopup_Data*>());
}
// Ctor Parameters []
constexpr ::VROSC::ConfirmationUIPopup_Data::ConfirmationUIPopup_Data()   {
}
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)()>(&::VROSC::ConfirmationUIPopup::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x174ea94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)()>(&::VROSC::ConfirmationUIPopup::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x174ebd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)(bool, ::VROSC::ConfirmationUIPopup_Data*, ::System::Action*, ::System::Action*)>(&::VROSC::ConfirmationUIPopup::SetActive)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x174ed0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ConfirmationUIPopup_Data*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.ShowError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)(::StringW)>(&::VROSC::ConfirmationUIPopup::ShowError)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x174eecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "ShowError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.EnableButtons
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)(bool)>(&::VROSC::ConfirmationUIPopup::EnableButtons)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x174ee54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "EnableButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.ConfirmButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)()>(&::VROSC::ConfirmationUIPopup::ConfirmButtonPressed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x174ef00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "ConfirmButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup.CancelButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)()>(&::VROSC::ConfirmationUIPopup::CancelButtonPressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x174ef80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "CancelButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ConfirmationUIPopup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ConfirmationUIPopup::*)()>(&::VROSC::ConfirmationUIPopup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174efb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ConfirmationUIPopup::__cordl_internal_get__headerText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ConfirmationUIPopup::__cordl_internal_get__headerText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerText;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__headerText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ConfirmationUIPopup::__cordl_internal_get__bodyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ConfirmationUIPopup::__cordl_internal_get__bodyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyText;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__bodyText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bodyText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ConfirmationUIPopup::__cordl_internal_get__errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ConfirmationUIPopup::__cordl_internal_get__errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorText;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__errorText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____errorText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::ConfirmationUIPopup::__cordl_internal_get__confirmButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::ConfirmationUIPopup::__cordl_internal_get__confirmButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____confirmButton;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__confirmButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____confirmButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::ConfirmationUIPopup::__cordl_internal_get__cancelButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::ConfirmationUIPopup::__cordl_internal_get__cancelButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelButton;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__cancelButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::ConfirmationUIPopup::__cordl_internal_get__onConfirmedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onConfirmedCallback;
}
constexpr ::System::Action* const& VROSC::ConfirmationUIPopup::__cordl_internal_get__onConfirmedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onConfirmedCallback;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__onConfirmedCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onConfirmedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::ConfirmationUIPopup::__cordl_internal_get__onCanceledCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCanceledCallback;
}
constexpr ::System::Action* const& VROSC::ConfirmationUIPopup::__cordl_internal_get__onCanceledCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onCanceledCallback;
}
constexpr void VROSC::ConfirmationUIPopup::__cordl_internal_set__onCanceledCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onCanceledCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ConfirmationUIPopup::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ConfirmationUIPopup::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ConfirmationUIPopup::SetActive(bool  isActive, ::VROSC::ConfirmationUIPopup_Data*  data, ::System::Action*  confirmCallback, ::System::Action*  cancelCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ConfirmationUIPopup_Data*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isActive, data, confirmCallback, cancelCallback);
}
inline void VROSC::ConfirmationUIPopup::ShowError(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "ShowError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage);
}
inline void VROSC::ConfirmationUIPopup::EnableButtons(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "EnableButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void VROSC::ConfirmationUIPopup::ConfirmButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "ConfirmButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ConfirmationUIPopup::CancelButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        "CancelButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ConfirmationUIPopup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ConfirmationUIPopup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ConfirmationUIPopup* VROSC::ConfirmationUIPopup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ConfirmationUIPopup*>());
}
// Ctor Parameters []
constexpr ::VROSC::ConfirmationUIPopup::ConfirmationUIPopup()   {
}
