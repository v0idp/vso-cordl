#pragma once
// IWYU pragma private; include "VROSC/IntComparer.hpp"
#include "VROSC/zzzz__SignalFilter_impl.hpp"
#include "VROSC/zzzz__IntComparer_def.hpp"
#include "VROSC/zzzz__IntField_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::IntComparer.FilterSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntComparer::*)(::VROSC::Signal*)>(&::VROSC::IntComparer::FilterSignal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x17216f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntComparer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntComparer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::IntComparer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::IntComparer::*)()>(&::VROSC::IntComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172173c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::IntField*& VROSC::IntComparer::__cordl_internal_get__intA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intA;
}
constexpr ::VROSC::IntField* const& VROSC::IntComparer::__cordl_internal_get__intA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intA;
}
constexpr void VROSC::IntComparer::__cordl_internal_set__intA(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IntField*& VROSC::IntComparer::__cordl_internal_get__intB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intB;
}
constexpr ::VROSC::IntField* const& VROSC::IntComparer::__cordl_internal_get__intB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intB;
}
constexpr void VROSC::IntComparer::__cordl_internal_set__intB(::VROSC::IntField*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intB)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::IntComparer::FilterSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntComparer*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::IntComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::IntComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::IntComparer* VROSC::IntComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::IntComparer*>());
}
// Ctor Parameters []
constexpr ::VROSC::IntComparer::IntComparer()   {
}
