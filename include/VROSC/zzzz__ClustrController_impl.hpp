#pragma once
// IWYU pragma private; include "VROSC/ClustrController.hpp"
#include "VROSC/zzzz__SynthController_impl.hpp"
#include "VROSC/zzzz__ClustrController_def.hpp"
#include "VROSC/zzzz__ClustrDataController_def.hpp"
//  Writing Method size for method: ::VROSC::ClustrController.get_ClustrDataController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ClustrDataController* (::VROSC::ClustrController::*)()>(&::VROSC::ClustrController::get_ClustrDataController)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1785b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrController*>::get(),
                        "get_ClustrDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ClustrController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ClustrController::*)()>(&::VROSC::ClustrController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1785b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::VROSC::ClustrDataController* VROSC::ClustrController::get_ClustrDataController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrController*>::get(),
                        "get_ClustrDataController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::ClustrDataController*, false>(this, ___internal_method);
}
inline void VROSC::ClustrController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ClustrController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ClustrController* VROSC::ClustrController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ClustrController*>());
}
// Ctor Parameters []
constexpr ::VROSC::ClustrController::ClustrController()   {
}
