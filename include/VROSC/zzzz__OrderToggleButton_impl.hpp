#pragma once
// IWYU pragma private; include "VROSC/OrderToggleButton.hpp"
#include "VROSC/zzzz__UIToggle_impl.hpp"
#include "VROSC/zzzz__OrderToggleButton_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
//  Writing Method size for method: ::VROSC::OrderToggleButton.get_CurrentState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::OrderToggleButton::*)()>(&::VROSC::OrderToggleButton::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1749f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                        "get_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrderToggleButton.set_CurrentState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrderToggleButton::*)(int32_t)>(&::VROSC::OrderToggleButton::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1749f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                        "set_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrderToggleButton.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrderToggleButton::*)()>(&::VROSC::OrderToggleButton::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1749f64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrderToggleButton.ButtonWasPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrderToggleButton::*)(::VROSC::ClickData*)>(&::VROSC::OrderToggleButton::ButtonWasPressed)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1749fac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OrderToggleButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OrderToggleButton::*)()>(&::VROSC::OrderToggleButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x174a094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& VROSC::OrderToggleButton::__cordl_internal_get__statesText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statesText;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& VROSC::OrderToggleButton::__cordl_internal_get__statesText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statesText;
}
constexpr void VROSC::OrderToggleButton::__cordl_internal_set__statesText(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::OrderToggleButton::__cordl_internal_get__CurrentState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState_k__BackingField;
}
constexpr int32_t const& VROSC::OrderToggleButton::__cordl_internal_get__CurrentState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState_k__BackingField;
}
constexpr void VROSC::OrderToggleButton::__cordl_internal_set__CurrentState_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentState_k__BackingField = value;
}
constexpr ::System::Action_1<int32_t>*& VROSC::OrderToggleButton::__cordl_internal_get_OnStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChanged;
}
constexpr ::System::Action_1<int32_t>* const& VROSC::OrderToggleButton::__cordl_internal_get_OnStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChanged;
}
constexpr void VROSC::OrderToggleButton::__cordl_internal_set_OnStateChanged(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnStateChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t VROSC::OrderToggleButton::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                        "get_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::OrderToggleButton::set_CurrentState(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                        "set_CurrentState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::OrderToggleButton::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OrderToggleButton::ButtonWasPressed(::VROSC::ClickData*  clickData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::OrderToggleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OrderToggleButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OrderToggleButton* VROSC::OrderToggleButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OrderToggleButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::OrderToggleButton::OrderToggleButton()   {
}
