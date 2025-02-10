#pragma once
// IWYU pragma private; include "VROSC/Decrement.hpp"
#include "VROSC/zzzz__IntChanger_impl.hpp"
#include "VROSC/zzzz__Decrement_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::Decrement.SetValueBySignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Decrement::*)(::VROSC::Signal*)>(&::VROSC::Decrement::SetValueBySignal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x171a584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Decrement*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Decrement*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Decrement._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Decrement::*)()>(&::VROSC::Decrement::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x171a5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Decrement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::Decrement::__cordl_internal_get__amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr int32_t const& VROSC::Decrement::__cordl_internal_get__amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amount;
}
constexpr void VROSC::Decrement::__cordl_internal_set__amount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amount = value;
}
inline void VROSC::Decrement::SetValueBySignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Decrement*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::Decrement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Decrement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Decrement* VROSC::Decrement::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Decrement*>());
}
// Ctor Parameters []
constexpr ::VROSC::Decrement::Decrement()   {
}
