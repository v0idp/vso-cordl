#pragma once
// IWYU pragma private; include "VROSC/TapeRecorderController.hpp"
#include "VROSC/zzzz__ToolController_impl.hpp"
#include "VROSC/zzzz__TapeRecorderController_def.hpp"
#include "VROSC/zzzz__ControlPanelUI_def.hpp"
#include "VROSC/zzzz__InfoPanel_def.hpp"
#include "VROSC/zzzz__TapeRecorder_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::TapeRecorderController.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderController::*)()>(&::VROSC::TapeRecorderController::Setup)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x16fcb54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderController.UserDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderController::*)(::VROSC::UserDataControllers*)>(&::VROSC::TapeRecorderController::UserDataLoaded)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16fccc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderController.CloseButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderController::*)()>(&::VROSC::TapeRecorderController::CloseButtonPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16fcd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TapeRecorderController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TapeRecorderController::*)()>(&::VROSC::TapeRecorderController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fcd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIButton>& VROSC::TapeRecorderController::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::TapeRecorderController::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void VROSC::TapeRecorderController::__cordl_internal_set__closeButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::TapeRecorder>& VROSC::TapeRecorderController::__cordl_internal_get__tapeRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapeRecorder;
}
constexpr ::UnityW<::VROSC::TapeRecorder> const& VROSC::TapeRecorderController::__cordl_internal_get__tapeRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tapeRecorder;
}
constexpr void VROSC::TapeRecorderController::__cordl_internal_set__tapeRecorder(::UnityW<::VROSC::TapeRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tapeRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ControlPanelUI>& VROSC::TapeRecorderController::__cordl_internal_get__controlPanelUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPanelUI;
}
constexpr ::UnityW<::VROSC::ControlPanelUI> const& VROSC::TapeRecorderController::__cordl_internal_get__controlPanelUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPanelUI;
}
constexpr void VROSC::TapeRecorderController::__cordl_internal_set__controlPanelUI(::UnityW<::VROSC::ControlPanelUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controlPanelUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::InfoPanel>& VROSC::TapeRecorderController::__cordl_internal_get__infoPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____infoPanel;
}
constexpr ::UnityW<::VROSC::InfoPanel> const& VROSC::TapeRecorderController::__cordl_internal_get__infoPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____infoPanel;
}
constexpr void VROSC::TapeRecorderController::__cordl_internal_set__infoPanel(::UnityW<::VROSC::InfoPanel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____infoPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TapeRecorderController::Setup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderController::UserDataLoaded(::VROSC::UserDataControllers*  user)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user);
}
inline void VROSC::TapeRecorderController::CloseButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                        "CloseButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TapeRecorderController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TapeRecorderController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TapeRecorderController* VROSC::TapeRecorderController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TapeRecorderController*>());
}
// Ctor Parameters []
constexpr ::VROSC::TapeRecorderController::TapeRecorderController()   {
}
