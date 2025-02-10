#pragma once
// IWYU pragma private; include "VROSC/GrabMalletButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__GrabMalletButton_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
//  Writing Method size for method: ::VROSC::GrabMalletButton.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabMalletButton::*)()>(&::VROSC::GrabMalletButton::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1717f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabMalletButton.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabMalletButton::*)()>(&::VROSC::GrabMalletButton::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1718038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabMalletButton.GrabSticks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabMalletButton::*)(::VROSC::ClickData*)>(&::VROSC::GrabMalletButton::GrabSticks)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1718110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        "GrabSticks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GrabMalletButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GrabMalletButton::*)()>(&::VROSC::GrabMalletButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1718260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIButton>& VROSC::GrabMalletButton::__cordl_internal_get__grabSticksButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabSticksButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::GrabMalletButton::__cordl_internal_get__grabSticksButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabSticksButton;
}
constexpr void VROSC::GrabMalletButton::__cordl_internal_set__grabSticksButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____grabSticksButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::GrabMalletButton::__cordl_internal_get__grabBoth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabBoth;
}
constexpr bool const& VROSC::GrabMalletButton::__cordl_internal_get__grabBoth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabBoth;
}
constexpr void VROSC::GrabMalletButton::__cordl_internal_set__grabBoth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabBoth = value;
}
inline void VROSC::GrabMalletButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabMalletButton::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::GrabMalletButton::GrabSticks(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        "GrabSticks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::GrabMalletButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GrabMalletButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GrabMalletButton* VROSC::GrabMalletButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GrabMalletButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::GrabMalletButton::GrabMalletButton()   {
}
