#pragma once
// IWYU pragma private; include "Firebase/Firestore/ListenerRegistrationMap_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__ListenerRegistrationMap_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>*& Firebase::Firestore::ListenerRegistrationMap_1<T>::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>* const& Firebase::Firestore::ListenerRegistrationMap_1<T>::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr void Firebase::Firestore::ListenerRegistrationMap_1<T>::__cordl_internal_set_callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___callbacks, value);
}
template<typename T>
inline void Firebase::Firestore::ListenerRegistrationMap_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ListenerRegistrationMap_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void Firebase::Firestore::ListenerRegistrationMap_1<T>::AssertGenericArgumentIsDelegate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ListenerRegistrationMap_1<T>*>::get(),
                        "AssertGenericArgumentIsDelegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline bool Firebase::Firestore::ListenerRegistrationMap_1<T>::TryGetCallback(int32_t  uid, ::ByRef<T>  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ListenerRegistrationMap_1<T>*>::get(),
                        "TryGetCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uid, callback);
}
template<typename T>
inline void Firebase::Firestore::ListenerRegistrationMap_1<T>::Unregister(int32_t  uid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ListenerRegistrationMap_1<T>*>::get(),
                        "Unregister",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uid);
}
template<typename T>
inline void Firebase::Firestore::ListenerRegistrationMap_1<T>::ClearCallbacksForOwner(::System::Object*  owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::ListenerRegistrationMap_1<T>*>::get(),
                        "ClearCallbacksForOwner",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
template<typename T>
inline ::Firebase::Firestore::ListenerRegistrationMap_1<T>* Firebase::Firestore::ListenerRegistrationMap_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::ListenerRegistrationMap_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Firestore::ListenerRegistrationMap_1<T>::ListenerRegistrationMap_1()   {
}
