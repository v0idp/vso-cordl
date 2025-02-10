#pragma once
// IWYU pragma private; include "VROSC/Increment.hpp"
#include "VROSC/zzzz__IntChanger_impl.hpp"
#include "VROSC/zzzz__Increment_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::Increment.SetValueBySignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Increment::*)(::VROSC::Signal*)>(&::VROSC::Increment::SetValueBySignal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x171a874;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Increment*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Increment*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Increment._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Increment::*)()>(&::VROSC::Increment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x171a8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Increment*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::Increment::__cordl_internal_get__amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr int32_t const& VROSC::Increment::__cordl_internal_get__amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr void VROSC::Increment::__cordl_internal_set__amount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amount = value;
}
inline void VROSC::Increment::SetValueBySignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Increment*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Increment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Increment*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Increment* VROSC::Increment::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Increment*>());
}
// Ctor Parameters []
constexpr ::VROSC::Increment::Increment()   {
}
