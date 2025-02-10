#pragma once
// IWYU pragma private; include "VROSC/BrowserController.hpp"
#include "VROSC/zzzz__ToolController_impl.hpp"
#include "VROSC/zzzz__BrowserController_def.hpp"
#include "VROSC/zzzz__BrowserUI_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::BrowserController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserController::*)()>(&::VROSC::BrowserController::Setup)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x172e5d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserController.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserController::*)(::VROSC::UserDataControllers*)>(&::VROSC::BrowserController::UserDataLoaded)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x172e818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserController.CloseButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserController::*)()>(&::VROSC::BrowserController::CloseButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x172e838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BrowserController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BrowserController::*)()>(&::VROSC::BrowserController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172e844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIButton>& VROSC::BrowserController::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::BrowserController::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void VROSC::BrowserController::__cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::BrowserUI>& VROSC::BrowserController::__cordl_internal_get__browserUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____browserUI;
}
constexpr ::UnityW<::VROSC::BrowserUI> const& VROSC::BrowserController::__cordl_internal_get__browserUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____browserUI;
}
constexpr void VROSC::BrowserController::__cordl_internal_set__browserUI(::UnityW<::VROSC::BrowserUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____browserUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::BrowserController::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserController::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::BrowserController::CloseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BrowserController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BrowserController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BrowserController* VROSC::BrowserController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BrowserController*>());
}
// Ctor Parameters []
constexpr ::VROSC::BrowserController::BrowserController()   {
}
