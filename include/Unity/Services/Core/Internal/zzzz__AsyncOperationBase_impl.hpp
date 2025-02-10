#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/AsyncOperationBase.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationBase_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationBase.get_keepWaiting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::AsyncOperationBase::*)()>(&::Unity::Services::Core::Internal::AsyncOperationBase::get_keepWaiting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e9d8b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationBase.get_IsCompleted
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::AsyncOperationBase::*)()>(&::Unity::Services::Core::Internal::AsyncOperationBase::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
inline bool Unity::Services::Core::Internal::AsyncOperationBase::get_keepWaiting()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Services::Core::Internal::AsyncOperationBase::get_IsCompleted()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationBase*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::AsyncOperationBase::AsyncOperationBase()   {
}
