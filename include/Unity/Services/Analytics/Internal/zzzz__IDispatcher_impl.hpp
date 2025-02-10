#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/IDispatcher.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IDispatcher_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBuffer_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IDispatcher.get_ConsecutiveFailedUploadCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Analytics::Internal::IDispatcher::*)()>(&::Unity::Services::Analytics::Internal::IDispatcher::get_ConsecutiveFailedUploadCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IDispatcher.SetBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::IDispatcher::*)(::Unity::Services::Analytics::Internal::IBuffer*)>(&::Unity::Services::Analytics::Internal::IDispatcher::SetBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::IDispatcher.Flush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::IDispatcher::*)()>(&::Unity::Services::Analytics::Internal::IDispatcher::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline int32_t Unity::Services::Analytics::Internal::IDispatcher::get_ConsecutiveFailedUploadCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::IDispatcher::SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void Unity::Services::Analytics::Internal::IDispatcher::Flush()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::IDispatcher*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
