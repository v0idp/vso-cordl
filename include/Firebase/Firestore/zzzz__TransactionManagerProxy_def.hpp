#pragma once
// IWYU pragma private; include "Firebase/Firestore/TransactionManagerProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransactionManagerProxy)
namespace Firebase::Firestore {
class FirestoreProxy;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
class TransactionManagerProxy;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::TransactionManagerProxy);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.TransactionManagerProxy
class CORDL_TYPE TransactionManagerProxy : public ::System::Object {
public:
// Declarations
/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CppDispose, addr 0x19054c4, size 0x88, virtual false, abstract: false, final false
inline void CppDispose() ;

/// @brief Method Dispose, addr 0x1905328, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x190528c, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Firestore::TransactionManagerProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

static inline ::Firebase::Firestore::TransactionManagerProxy* New_ctor(::Firebase::Firestore::FirestoreProxy*  firestore) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1905114, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method .ctor, addr 0x1905168, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Firestore::FirestoreProxy*  firestore) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransactionManagerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransactionManagerProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransactionManagerProxy(TransactionManagerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransactionManagerProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransactionManagerProxy(TransactionManagerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11100};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::TransactionManagerProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::TransactionManagerProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::TransactionManagerProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::TransactionManagerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::TransactionManagerProxy*, "Firebase.Firestore", "TransactionManagerProxy");
