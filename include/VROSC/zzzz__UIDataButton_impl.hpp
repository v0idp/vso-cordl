#pragma once
// IWYU pragma private; include "VROSC/UIDataButton.hpp"
#include "VROSC/zzzz__UIButton_impl.hpp"
#include "VROSC/zzzz__UIDataButton_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
//  Writing Method size for method: ::VROSC::UIDataButton.SetData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIDataButton::*)(::System::Object*)>(&::VROSC::UIDataButton::SetData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17725d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                        "SetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIDataButton.ButtonWasPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIDataButton::*)(::VROSC::ClickData*)>(&::VROSC::UIDataButton::ButtonWasPressed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17725dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIDataButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIDataButton::*)()>(&::VROSC::UIDataButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1772654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& VROSC::UIDataButton::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::System::Object* const& VROSC::UIDataButton::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::UIDataButton::__cordl_internal_set__data(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Object*>*& VROSC::UIDataButton::__cordl_internal_get_OnButtonPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnButtonPress;
}
constexpr ::System::Action_1<::System::Object*>* const& VROSC::UIDataButton::__cordl_internal_get_OnButtonPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnButtonPress;
}
constexpr void VROSC::UIDataButton::__cordl_internal_set_OnButtonPress(::System::Action_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnButtonPress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UIDataButton::SetData(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                        "SetData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VROSC::UIDataButton::ButtonWasPressed(::VROSC::ClickData*  clickData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::UIDataButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIDataButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIDataButton* VROSC::UIDataButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIDataButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIDataButton::UIDataButton()   {
}
