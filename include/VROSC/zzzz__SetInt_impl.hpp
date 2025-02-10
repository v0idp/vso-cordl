#pragma once
// IWYU pragma private; include "VROSC/SetInt.hpp"
#include "VROSC/zzzz__IntChanger_impl.hpp"
#include "VROSC/zzzz__SetInt_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::SetInt.SetValueBySignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetInt::*)(::VROSC::Signal*)>(&::VROSC::SetInt::SetValueBySignal)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x171b190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetInt*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetInt*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SetInt._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SetInt::*)()>(&::VROSC::SetInt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171b30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetInt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::IntField*& VROSC::SetInt::__cordl_internal_get__setTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setTo;
}
constexpr ::VROSC::IntField* const& VROSC::SetInt::__cordl_internal_get__setTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setTo;
}
constexpr void VROSC::SetInt::__cordl_internal_set__setTo(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setTo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SetInt::__cordl_internal_get__useSignalValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useSignalValue;
}
constexpr bool const& VROSC::SetInt::__cordl_internal_get__useSignalValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useSignalValue;
}
constexpr void VROSC::SetInt::__cordl_internal_set__useSignalValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useSignalValue = value;
}
constexpr ::VROSC::IntField*& VROSC::SetInt::__cordl_internal_get__minValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr ::VROSC::IntField* const& VROSC::SetInt::__cordl_internal_get__minValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minValue;
}
constexpr void VROSC::SetInt::__cordl_internal_set__minValue(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____minValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::SetInt::__cordl_internal_get__maxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr ::VROSC::IntField* const& VROSC::SetInt::__cordl_internal_get__maxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxValue;
}
constexpr void VROSC::SetInt::__cordl_internal_set__maxValue(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SetInt::SetValueBySignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetInt*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SetInt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SetInt*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SetInt* VROSC::SetInt::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SetInt*>());
}
// Ctor Parameters []
constexpr ::VROSC::SetInt::SetInt()   {
}
