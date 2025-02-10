#pragma once
// IWYU pragma private; include "Firebase/Firestore/TransactionManager.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Firestore/zzzz__TransactionManager_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "Firebase/Firestore/zzzz__FirestoreProxy_def.hpp"
#include "Firebase/Firestore/zzzz__ListenerRegistrationMap_1_def.hpp"
#include "Firebase/Firestore/zzzz__TransactionCallbackProxy_def.hpp"
#include "Firebase/Firestore/zzzz__TransactionManagerProxy_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Firebase::Firestore::TransactionManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::TransactionManager::*)(::Firebase::Firestore::FirebaseFirestore*, ::Firebase::Firestore::FirestoreProxy*)>(&::Firebase::Firestore::TransactionManager::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x190e9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::TransactionManager.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::TransactionManager::*)()>(&::Firebase::Firestore::TransactionManager::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x190ea74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::TransactionManager.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::TransactionManager::*)()>(&::Firebase::Firestore::TransactionManager::Dispose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x190eb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::FirebaseFirestore*& Firebase::Firestore::TransactionManager::__cordl_internal_get__firestore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr ::Firebase::Firestore::FirebaseFirestore* const& Firebase::Firestore::TransactionManager::__cordl_internal_get__firestore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestore;
}
constexpr void Firebase::Firestore::TransactionManager::__cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firestore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::TransactionManagerProxy*& Firebase::Firestore::TransactionManager::__cordl_internal_get__transactionManagerProxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transactionManagerProxy;
}
constexpr ::Firebase::Firestore::TransactionManagerProxy* const& Firebase::Firestore::TransactionManager::__cordl_internal_get__transactionManagerProxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transactionManagerProxy;
}
constexpr void Firebase::Firestore::TransactionManager::__cordl_internal_set__transactionManagerProxy(::Firebase::Firestore::TransactionManagerProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transactionManagerProxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Firestore::TransactionManager::setStaticF__callbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>*  value)  {
::cordl_internals::setStaticField<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>*, "_callbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get>(std::forward<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>*>(value));
}
inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>* Firebase::Firestore::TransactionManager::getStaticF__callbacks()  {
return ::cordl_internals::getStaticField<::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>*, "_callbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get>();
}
inline void Firebase::Firestore::TransactionManager::_ctor(::Firebase::Firestore::FirebaseFirestore*  firestore, ::Firebase::Firestore::FirestoreProxy*  firestoreProxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirebaseFirestore*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::FirestoreProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firestore, firestoreProxy);
}
inline void Firebase::Firestore::TransactionManager::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Firestore::TransactionManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::TransactionManager*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::TransactionManager* Firebase::Firestore::TransactionManager::New_ctor(::Firebase::Firestore::FirebaseFirestore*  firestore, ::Firebase::Firestore::FirestoreProxy*  firestoreProxy)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::TransactionManager*>(firestore, firestoreProxy));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::Firestore::TransactionManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::Firestore::TransactionManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::TransactionManager::TransactionManager()   {
}
