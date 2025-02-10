#pragma once
// IWYU pragma private; include "VROSC/UI/WidgetToggleMoverRelay.hpp"
#include "VROSC/zzzz__Grabable_impl.hpp"
#include "VROSC/UI/zzzz__WidgetToggleMoverRelay_def.hpp"
#include "VROSC/zzzz__GrabData_def.hpp"
#include "VROSC/zzzz__WidgetController_def.hpp"
//  Writing Method size for method: ::VROSC::UI::WidgetToggleMoverRelay.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::WidgetToggleMoverRelay::*)(::VROSC::WidgetController*)>(&::VROSC::UI::WidgetToggleMoverRelay::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e45dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::WidgetToggleMoverRelay.Grab
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::WidgetToggleMoverRelay::*)(::VROSC::GrabData*, bool)>(&::VROSC::UI::WidgetToggleMoverRelay::Grab)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x17e45e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::WidgetToggleMoverRelay._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::WidgetToggleMoverRelay::*)()>(&::VROSC::UI::WidgetToggleMoverRelay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e4758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::WidgetController>& VROSC::UI::WidgetToggleMoverRelay::__cordl_internal_get__widgetController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____widgetController;
}
constexpr ::UnityW<::VROSC::WidgetController> const& VROSC::UI::WidgetToggleMoverRelay::__cordl_internal_get__widgetController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____widgetController;
}
constexpr void VROSC::UI::WidgetToggleMoverRelay::__cordl_internal_set__widgetController(::UnityW<::VROSC::WidgetController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____widgetController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UI::WidgetToggleMoverRelay::Setup(::VROSC::WidgetController*  widgetController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widgetController);
}
inline void VROSC::UI::WidgetToggleMoverRelay::Grab(::VROSC::GrabData*  grabData, bool  grabbing)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, grabData, grabbing);
}
inline void VROSC::UI::WidgetToggleMoverRelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::WidgetToggleMoverRelay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::WidgetToggleMoverRelay* VROSC::UI::WidgetToggleMoverRelay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::WidgetToggleMoverRelay*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::WidgetToggleMoverRelay::WidgetToggleMoverRelay()   {
}
