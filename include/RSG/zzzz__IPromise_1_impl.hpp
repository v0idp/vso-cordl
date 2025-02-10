#pragma once
// IWYU pragma private; include "RSG/IPromise_1.hpp"
#include "RSG/zzzz__IPromise_1_def.hpp"
#include "RSG/zzzz__IPromise_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename PromisedT>
inline int32_t RSG::IPromise_1<PromisedT>::get_Id()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename PromisedT>
inline ::RSG::IPromise_1<PromisedT>* RSG::IPromise_1<PromisedT>::WithName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal_method, name);
}
template<typename PromisedT>
inline void RSG::IPromise_1<PromisedT>::Done(::System::Action_1<PromisedT>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onResolved, onRejected);
}
template<typename PromisedT>
inline void RSG::IPromise_1<PromisedT>::Done(::System::Action_1<PromisedT>*  onResolved)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onResolved);
}
template<typename PromisedT>
inline void RSG::IPromise_1<PromisedT>::Done()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Catch(::System::Action_1<::System::Exception*>*  onRejected)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onRejected);
}
template<typename PromisedT>
inline ::RSG::IPromise_1<PromisedT>* RSG::IPromise_1<PromisedT>::Catch(::System::Func_2<::System::Exception*,PromisedT>*  onRejected)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal_method, onRejected);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onResolved);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Then(::System::Action_1<PromisedT>*  onResolved)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onResolved, onRejected);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Then(::System::Action_1<PromisedT>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,::RSG::IPromise_1<ConvertedT>*>*  onResolved, ::System::Func_2<::System::Exception*,::RSG::IPromise_1<ConvertedT>*>*  onRejected, ::System::Action_1<float_t>*  onProgress)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onResolved, onRejected, onProgress);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,::RSG::IPromise*>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected, onProgress);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::Then(::System::Action_1<PromisedT>*  onResolved, ::System::Action_1<::System::Exception*>*  onRejected, ::System::Action_1<float_t>*  onProgress)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved, onRejected, onProgress);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::IPromise_1<PromisedT>::Then(::System::Func_2<PromisedT,ConvertedT>*  transform)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, transform);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>* RSG::IPromise_1<PromisedT>::ThenAll(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<::System::Collections::Generic::IEnumerable_1<ConvertedT>*>*, false>(this, ___internal_method, chain);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::ThenAll(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, chain);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::IPromise_1<PromisedT>::ThenRace(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise_1<ConvertedT>*>*>*  chain)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, chain);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::ThenRace(::System::Func_2<PromisedT,::System::Collections::Generic::IEnumerable_1<::RSG::IPromise*>*>*  chain)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, chain);
}
template<typename PromisedT>
inline ::RSG::IPromise_1<PromisedT>* RSG::IPromise_1<PromisedT>::Finally(::System::Action*  onComplete)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal_method, onComplete);
}
template<typename PromisedT>
inline ::RSG::IPromise* RSG::IPromise_1<PromisedT>::ContinueWith(::System::Func_1<::RSG::IPromise*>*  onResolved)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise*, false>(this, ___internal_method, onResolved);
}
template<typename PromisedT>
template<typename ConvertedT>
inline ::RSG::IPromise_1<ConvertedT>* RSG::IPromise_1<PromisedT>::ContinueWith(::System::Func_1<::RSG::IPromise_1<ConvertedT>*>*  onComplete)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<ConvertedT>*, false>(this, ___internal_method, onComplete);
}
template<typename PromisedT>
inline ::RSG::IPromise_1<PromisedT>* RSG::IPromise_1<PromisedT>::Progress(::System::Action_1<float_t>*  onProgress)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::IPromise_1<PromisedT>*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<::RSG::IPromise_1<PromisedT>*, false>(this, ___internal_method, onProgress);
}
