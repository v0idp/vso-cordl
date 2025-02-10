#pragma once
// IWYU pragma private; include "RSG/IPendingPromise.hpp"
#include "RSG/zzzz__IRejectable_impl.hpp"
#include "RSG/zzzz__IPendingPromise_def.hpp"
//  Writing Method size for method: ::RSG::IPendingPromise.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RSG::IPendingPromise::*)()>(&::RSG::IPendingPromise::get_Id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::IPendingPromise.Resolve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::IPendingPromise::*)()>(&::RSG::IPendingPromise::Resolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::IPendingPromise.ReportProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::IPendingPromise::*)(float_t)>(&::RSG::IPendingPromise::ReportProgress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline int32_t RSG::IPendingPromise::get_Id()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void RSG::IPendingPromise::Resolve()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RSG::IPendingPromise::ReportProgress(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
/// @brief Convert operator to "::RSG::IRejectable"
constexpr  RSG::IPendingPromise::operator ::RSG::IRejectable*() noexcept {
return static_cast<::RSG::IRejectable*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IRejectable"
constexpr ::RSG::IRejectable* RSG::IPendingPromise::i___RSG__IRejectable() noexcept {
return static_cast<::RSG::IRejectable*>(static_cast<void*>(this));
}
