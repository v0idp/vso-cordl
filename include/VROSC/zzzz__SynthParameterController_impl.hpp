#pragma once
// IWYU pragma private; include "VROSC/SynthParameterController.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__SynthParameterController_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "VROSC/zzzz__SynthController_def.hpp"
//  Writing Method size for method: ::VROSC::SynthParameterController.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthParameterController::*)(::VROSC::Signal*)>(&::VROSC::SynthParameterController::NodeBegin)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1720614;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthParameterController.NodeStay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthParameterController::*)(::VROSC::Signal*)>(&::VROSC::SynthParameterController::NodeStay)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1720630;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SynthParameterController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SynthParameterController::*)()>(&::VROSC::SynthParameterController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x172064c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SynthController>& VROSC::SynthParameterController::__cordl_internal_get__synthController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synthController;
}
constexpr ::UnityW<::VROSC::SynthController> const& VROSC::SynthParameterController::__cordl_internal_get__synthController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____synthController;
}
constexpr void VROSC::SynthParameterController::__cordl_internal_set__synthController(::UnityW<::VROSC::SynthController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____synthController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SynthParameterController::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SynthParameterController::NodeStay(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::SynthParameterController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SynthParameterController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SynthParameterController* VROSC::SynthParameterController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SynthParameterController*>());
}
// Ctor Parameters []
constexpr ::VROSC::SynthParameterController::SynthParameterController()   {
}
