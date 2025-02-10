#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/IProfile.hpp"
#include "Unity/Services/Authentication/zzzz__IProfile_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::IProfile.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Authentication::IProfile::*)()>(&::Unity::Services::Authentication::IProfile::get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IProfile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IProfile*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline ::StringW Unity::Services::Authentication::IProfile::get_Current()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::IProfile*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
