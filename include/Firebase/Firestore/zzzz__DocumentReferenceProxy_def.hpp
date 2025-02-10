#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentReferenceProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocumentReferenceProxy)
namespace Firebase::Firestore {
class CollectionReferenceProxy;
}
namespace Firebase::Firestore {
class DocumentSnapshotProxy;
}
namespace Firebase::Firestore {
struct SourceProxy;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
class DocumentReferenceProxy;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::DocumentReferenceProxy);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.DocumentReferenceProxy
class CORDL_TYPE DocumentReferenceProxy : public ::System::Object {
public:
// Declarations
/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Collection, addr 0x1909fc0, size 0xd0, virtual true, abstract: false, final false
inline ::Firebase::Firestore::CollectionReferenceProxy* Collection(::StringW  collectionPath) ;

/// @brief Method DeleteAsync, addr 0x190a3d4, size 0xa8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* DeleteAsync() ;

/// @brief Method Dispose, addr 0x1909d04, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1909c68, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetAsync, addr 0x190a090, size 0xdc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshotProxy*>* GetAsync(::Firebase::Firestore::SourceProxy  source) ;

static inline ::Firebase::Firestore::DocumentReferenceProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x190766c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x18fdf7c, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::DocumentReferenceProxy*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method id, addr 0x1909ea0, size 0x90, virtual true, abstract: false, final false
inline ::StringW id() ;

/// @brief Method is_valid, addr 0x190a47c, size 0x90, virtual false, abstract: false, final false
inline bool is_valid() ;

/// @brief Method path, addr 0x1909f30, size 0x90, virtual true, abstract: false, final false
inline ::StringW path() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocumentReferenceProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocumentReferenceProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocumentReferenceProxy(DocumentReferenceProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocumentReferenceProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocumentReferenceProxy(DocumentReferenceProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11115};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::DocumentReferenceProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::DocumentReferenceProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DocumentReferenceProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::DocumentReferenceProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentReferenceProxy*, "Firebase.Firestore", "DocumentReferenceProxy");
