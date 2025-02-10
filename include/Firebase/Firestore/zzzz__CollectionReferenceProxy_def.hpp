#pragma once
// IWYU pragma private; include "Firebase/Firestore/CollectionReferenceProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Firebase/Firestore/zzzz__QueryProxy_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionReferenceProxy)
namespace Firebase::Firestore {
class DocumentReferenceProxy;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
class CollectionReferenceProxy;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::CollectionReferenceProxy);
// Dependencies Firebase.Firestore.QueryProxy, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.CollectionReferenceProxy
class CORDL_TYPE CollectionReferenceProxy : public ::Firebase::Firestore::QueryProxy {
public:
// Declarations
/// @brief Field swigCPtr, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Method Dispose, addr 0x19071b0, size 0x1a4, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Document, addr 0x1907580, size 0xec, virtual true, abstract: false, final false
inline ::Firebase::Firestore::DocumentReferenceProxy* Document() ;

/// @brief Method Document, addr 0x19076c0, size 0xfc, virtual true, abstract: false, final false
inline ::Firebase::Firestore::DocumentReferenceProxy* Document(::StringW  documentPath) ;

/// @brief Method Finalize, addr 0x1907120, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Firestore::CollectionReferenceProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1905bf4, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method path, addr 0x19074f0, size 0x90, virtual true, abstract: false, final false
inline ::StringW path() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionReferenceProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionReferenceProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionReferenceProxy(CollectionReferenceProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionReferenceProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionReferenceProxy(CollectionReferenceProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11108};

/// @brief Field swigCPtr, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::CollectionReferenceProxy, ___swigCPtr) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::CollectionReferenceProxy, 0x38>, "Size mismatch!");

} // namespace end def Firebase::Firestore
NEED_NO_BOX(::Firebase::Firestore::CollectionReferenceProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::CollectionReferenceProxy*, "Firebase.Firestore", "CollectionReferenceProxy");
