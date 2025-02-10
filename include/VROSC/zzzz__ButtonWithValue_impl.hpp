#pragma once
// IWYU pragma private; include "VROSC/ButtonWithValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__ButtonWithValue_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
//  Writing Method size for method: ::VROSC::ButtonWithValue.get_Button
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::UIButton> (::VROSC::ButtonWithValue::*)()>(&::VROSC::ButtonWithValue::get_Button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1771b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "get_Button",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonWithValue.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::ButtonWithValue::*)()>(&::VROSC::ButtonWithValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1771b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonWithValue.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonWithValue::*)()>(&::VROSC::ButtonWithValue::Setup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1771b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonWithValue.ClickPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonWithValue::*)()>(&::VROSC::ButtonWithValue::ClickPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1771c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "ClickPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonWithValue.TearDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonWithValue::*)()>(&::VROSC::ButtonWithValue::TearDown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1771c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "TearDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonWithValue._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonWithValue::*)()>(&::VROSC::ButtonWithValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1771d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UIButton>& VROSC::ButtonWithValue::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::ButtonWithValue::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void VROSC::ButtonWithValue::__cordl_internal_set__button(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ButtonWithValue::__cordl_internal_get__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr float_t const& VROSC::ButtonWithValue::__cordl_internal_get__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____value;
}
constexpr void VROSC::ButtonWithValue::__cordl_internal_set__value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____value = value;
}
constexpr ::System::Action_1<::VROSC::ButtonWithValue*>*& VROSC::ButtonWithValue::__cordl_internal_get_OnClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClick;
}
constexpr ::System::Action_1<::VROSC::ButtonWithValue*>* const& VROSC::ButtonWithValue::__cordl_internal_get_OnClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClick;
}
constexpr void VROSC::ButtonWithValue::__cordl_internal_set_OnClick(::System::Action_1<::VROSC::ButtonWithValue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnClick)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::UIButton> VROSC::ButtonWithValue::get_Button()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "get_Button",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::UIButton>, false>(this, ___internal_method);
}
inline float_t VROSC::ButtonWithValue::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::ButtonWithValue::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ButtonWithValue::ClickPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "ClickPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ButtonWithValue::TearDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        "TearDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ButtonWithValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonWithValue*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ButtonWithValue* VROSC::ButtonWithValue::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ButtonWithValue*>());
}
// Ctor Parameters []
constexpr ::VROSC::ButtonWithValue::ButtonWithValue()   {
}
