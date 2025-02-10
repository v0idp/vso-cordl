#pragma once
// IWYU pragma private; include "VROSC/MultiplyBySignal.hpp"
#include "VROSC/zzzz__IntChanger_impl.hpp"
#include "VROSC/zzzz__MultiplyBySignal_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::MultiplyBySignal.SetValueBySignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MultiplyBySignal::*)(::VROSC::Signal*)>(&::VROSC::MultiplyBySignal::SetValueBySignal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x171ab98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MultiplyBySignal*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MultiplyBySignal*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MultiplyBySignal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MultiplyBySignal::*)()>(&::VROSC::MultiplyBySignal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x171aca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MultiplyBySignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MultiplyBySignal::SetValueBySignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MultiplyBySignal*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::MultiplyBySignal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MultiplyBySignal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MultiplyBySignal* VROSC::MultiplyBySignal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MultiplyBySignal*>());
}
// Ctor Parameters []
constexpr ::VROSC::MultiplyBySignal::MultiplyBySignal()   {
}
