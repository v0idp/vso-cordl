#pragma once
// IWYU pragma private; include "VROSC/CloudSessionsDataModel.hpp"
#include "VROSC/zzzz__SessionsDataModel_impl.hpp"
#include "VROSC/zzzz__CloudSessionsDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::CloudSessionsDataModel.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::CloudSessionsDataModel::*)()>(&::VROSC::CloudSessionsDataModel::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18546c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudSessionsDataModel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudSessionsDataModel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudSessionsDataModel._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudSessionsDataModel::*)()>(&::VROSC::CloudSessionsDataModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18526f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudSessionsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::StringW VROSC::CloudSessionsDataModel::get_Key()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudSessionsDataModel*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::CloudSessionsDataModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudSessionsDataModel*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::CloudSessionsDataModel* VROSC::CloudSessionsDataModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudSessionsDataModel*>());
}
// Ctor Parameters []
constexpr ::VROSC::CloudSessionsDataModel::CloudSessionsDataModel()   {
}
