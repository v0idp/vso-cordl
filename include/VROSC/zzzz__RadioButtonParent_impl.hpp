#pragma once
// IWYU pragma private; include "VROSC/RadioButtonParent.hpp"
#include "VROSC/zzzz__Node_impl.hpp"
#include "VROSC/zzzz__RadioButtonParent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "VROSC/zzzz__RadioButton_def.hpp"
//  Writing Method size for method: ::VROSC::RadioButtonParent.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButtonParent::*)()>(&::VROSC::RadioButtonParent::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1725280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButtonParent.RegisterButton
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButtonParent::*)(::VROSC::RadioButton*)>(&::VROSC::RadioButtonParent::RegisterButton)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1724f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        "RegisterButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::RadioButton*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButtonParent.Trigger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButtonParent::*)(::VROSC::RadioButton*)>(&::VROSC::RadioButtonParent::Trigger)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x172506c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        "Trigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::RadioButton*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RadioButtonParent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RadioButtonParent::*)()>(&::VROSC::RadioButtonParent::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1725288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>*& VROSC::RadioButtonParent::__cordl_internal_get__radioButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radioButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>* const& VROSC::RadioButtonParent::__cordl_internal_get__radioButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radioButtons;
}
constexpr void VROSC::RadioButtonParent::__cordl_internal_set__radioButtons(::System::Collections::Generic::List_1<::UnityW<::VROSC::RadioButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____radioButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::RadioButtonParent::__cordl_internal_get__changedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changedThisFrame;
}
constexpr bool const& VROSC::RadioButtonParent::__cordl_internal_get__changedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changedThisFrame;
}
constexpr void VROSC::RadioButtonParent::__cordl_internal_set__changedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changedThisFrame = value;
}
inline void VROSC::RadioButtonParent::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RadioButtonParent::RegisterButton(::VROSC::RadioButton*  radioButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        "RegisterButton",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::RadioButton*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, radioButton);
}
inline void VROSC::RadioButtonParent::Trigger(::VROSC::RadioButton*  radioButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        "Trigger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::RadioButton*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, radioButton);
}
inline void VROSC::RadioButtonParent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RadioButtonParent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::RadioButtonParent* VROSC::RadioButtonParent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::RadioButtonParent*>());
}
// Ctor Parameters []
constexpr ::VROSC::RadioButtonParent::RadioButtonParent()   {
}
