#pragma once
// IWYU pragma private; include "VROSC/MarimbaController.hpp"
#include "VROSC/zzzz__SynthController_impl.hpp"
#include "VROSC/zzzz__MarimbaController_def.hpp"
#include "VROSC/zzzz__MarimbaDataController_def.hpp"
//  Writing Method size for method: ::VROSC::MarimbaController.get_MarimbaDataController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MarimbaDataController* (::VROSC::MarimbaController::*)()>(&::VROSC::MarimbaController::get_MarimbaDataController)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1790ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaController*>::get(),
                        "get_MarimbaDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MarimbaController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MarimbaController::*)()>(&::VROSC::MarimbaController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x179412c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::VROSC::MarimbaDataController* VROSC::MarimbaController::get_MarimbaDataController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaController*>::get(),
                        "get_MarimbaDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::MarimbaDataController*, false>(this, ___internal_method);
}
inline void VROSC::MarimbaController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MarimbaController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::MarimbaController* VROSC::MarimbaController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MarimbaController*>());
}
// Ctor Parameters []
constexpr ::VROSC::MarimbaController::MarimbaController()   {
}
