#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Options/IPlugOptions.hpp"
#include "DG/Tweening/Plugins/Options/zzzz__IPlugOptions_def.hpp"
//  Writing Method size for method: ::DG::Tweening::Plugins::Options::IPlugOptions.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DG::Tweening::Plugins::Options::IPlugOptions::*)()>(&::DG::Tweening::Plugins::Options::IPlugOptions::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::IPlugOptions*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::IPlugOptions*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline void DG::Tweening::Plugins::Options::IPlugOptions::Reset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Options::IPlugOptions*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
