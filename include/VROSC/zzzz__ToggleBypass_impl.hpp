#pragma once
// IWYU pragma private; include "VROSC/ToggleBypass.hpp"
#include "VROSC/zzzz__SignalNode_impl.hpp"
#include "VROSC/zzzz__ToggleBypass_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
//  Writing Method size for method: ::VROSC::ToggleBypass.NodeBegin
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToggleBypass::*)(::VROSC::Signal*)>(&::VROSC::ToggleBypass::NodeBegin)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1720b48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToggleBypass*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToggleBypass*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ToggleBypass._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToggleBypass::*)()>(&::VROSC::ToggleBypass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1720c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToggleBypass*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& VROSC::ToggleBypass::__cordl_internal_get__nodesToToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodesToToggle;
}
constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& VROSC::ToggleBypass::__cordl_internal_get__nodesToToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodesToToggle;
}
constexpr void VROSC::ToggleBypass::__cordl_internal_set__nodesToToggle(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodesToToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ToggleBypass::NodeBegin(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToggleBypass*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::ToggleBypass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToggleBypass*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ToggleBypass* VROSC::ToggleBypass::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ToggleBypass*>());
}
// Ctor Parameters []
constexpr ::VROSC::ToggleBypass::ToggleBypass()   {
}
