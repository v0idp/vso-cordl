#pragma once
// IWYU pragma private; include "RSG/IPendingPromise_1.hpp"
#include "RSG/zzzz__IRejectable_impl.hpp"
#include "RSG/zzzz__IPendingPromise_1_def.hpp"
template<typename PromisedT>
inline int32_t RSG::IPendingPromise_1<PromisedT>::get_Id()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise_1<PromisedT>*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename PromisedT>
inline void RSG::IPendingPromise_1<PromisedT>::Resolve(PromisedT  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise_1<PromisedT>*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename PromisedT>
inline void RSG::IPendingPromise_1<PromisedT>::ReportProgress(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPendingPromise_1<PromisedT>*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
/// @brief Convert operator to "::RSG::IRejectable"
template<typename PromisedT>
constexpr  RSG::IPendingPromise_1<PromisedT>::operator ::RSG::IRejectable*() noexcept {
return static_cast<::RSG::IRejectable*>(static_cast<void*>(this));
}
/// @brief Convert to "::RSG::IRejectable"
template<typename PromisedT>
constexpr ::RSG::IRejectable* RSG::IPendingPromise_1<PromisedT>::i___RSG__IRejectable() noexcept {
return static_cast<::RSG::IRejectable*>(static_cast<void*>(this));
}
