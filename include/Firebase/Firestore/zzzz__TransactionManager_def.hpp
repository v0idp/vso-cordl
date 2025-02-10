#pragma once
// IWYU pragma private; include "Firebase/Firestore/TransactionManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransactionManager)
namespace Firebase::Firestore {
class FirebaseFirestore;
}
namespace Firebase::Firestore {
class FirestoreProxy;
}
namespace Firebase::Firestore {
template<typename T>
class ListenerRegistrationMap_1;
}
namespace Firebase::Firestore {
class TransactionCallbackProxy;
}
namespace Firebase::Firestore {
class TransactionManagerProxy;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Firebase::Firestore {
class TransactionManager;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::TransactionManager);
// Dependencies System.IDisposable, System.Object
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.TransactionManager
class CORDL_TYPE TransactionManager : public ::System::Object {
public:
// Declarations
/// @brief Field _callbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__callbacks, put=setStaticF__callbacks)) ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>*  _callbacks;

/// @brief Field _firestore, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__firestore, put=__cordl_internal_set__firestore)) ::Firebase::Firestore::FirebaseFirestore*  _firestore;

/// @brief Field _transactionManagerProxy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__transactionManagerProxy, put=__cordl_internal_set__transactionManagerProxy)) ::Firebase::Firestore::TransactionManagerProxy*  _transactionManagerProxy;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x190eb08, size 0xbc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x190ea74, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Firestore::TransactionManager* New_ctor(::Firebase::Firestore::FirebaseFirestore*  firestore, ::Firebase::Firestore::FirestoreProxy*  firestoreProxy) ;

constexpr ::Firebase::Firestore::FirebaseFirestore* const& __cordl_internal_get__firestore() const;

constexpr ::Firebase::Firestore::FirebaseFirestore*& __cordl_internal_get__firestore() ;

constexpr ::Firebase::Firestore::TransactionManagerProxy* const& __cordl_internal_get__transactionManagerProxy() const;

constexpr ::Firebase::Firestore::TransactionManagerProxy*& __cordl_internal_get__transactionManagerProxy() ;

constexpr void __cordl_internal_set__firestore(::Firebase::Firestore::FirebaseFirestore*  value) ;

constexpr void __cordl_internal_set__transactionManagerProxy(::Firebase::Firestore::TransactionManagerProxy*  value) ;

/// @brief Method .ctor, addr 0x190e9a4, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::FirebaseFirestore*  firestore, ::Firebase::Firestore::FirestoreProxy*  firestoreProxy) ;

static inline ::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>* getStaticF__callbacks() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__callbacks(::Firebase::Firestore::ListenerRegistrationMap_1<::System::Func_2<::Firebase::Firestore::TransactionCallbackProxy*,::System::Threading::Tasks::Task*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransactionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransactionManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransactionManager(TransactionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransactionManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransactionManager(TransactionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11143};

/// @brief Field _firestore, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Firestore::FirebaseFirestore*  ____firestore;

/// @brief Field _transactionManagerProxy, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Firestore::TransactionManagerProxy*  ____transactionManagerProxy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::TransactionManager, ____firestore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::TransactionManager, ____transactionManagerProxy) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::TransactionManager, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::TransactionManager);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::TransactionManager*, "Firebase.Firestore", "TransactionManager");
