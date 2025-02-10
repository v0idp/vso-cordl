#pragma once
// IWYU pragma private; include "DG/Tweening/IDOTweenInit.hpp"
#include "DG/Tweening/zzzz__IDOTweenInit_def.hpp"
//  Writing Method size for method: ::DG::Tweening::IDOTweenInit.SetCapacity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::IDOTweenInit* (::DG::Tweening::IDOTweenInit::*)(int32_t, int32_t)>(&::DG::Tweening::IDOTweenInit::SetCapacity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::IDOTweenInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::IDOTweenInit*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::DG::Tweening::IDOTweenInit* DG::Tweening::IDOTweenInit::SetCapacity(int32_t  tweenersCapacity, int32_t  sequencesCapacity)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::IDOTweenInit*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::IDOTweenInit*, false>(this, ___internal_method, tweenersCapacity, sequencesCapacity);
}
