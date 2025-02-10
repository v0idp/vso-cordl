#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreConverter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__FirestoreConverter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline ::System::Object* Firebase::Firestore::FirestoreConverter_1<T>::ToFirestore(T  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreConverter_1<T>*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
template<typename T>
inline T Firebase::Firestore::FirestoreConverter_1<T>::FromFirestore(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::FirestoreConverter_1<T>*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Firestore::FirestoreConverter_1<T>::FirestoreConverter_1()   {
}
