#pragma once
// IWYU pragma private; include "Firebase/Firestore/DocumentSnapshotProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DocumentSnapshotProxy)
namespace Firebase::Firestore {
class DocumentReferenceProxy;
}
namespace Firebase::Firestore {
struct DocumentSnapshotProxy_ServerTimestampBehavior;
}
namespace Firebase::Firestore {
class FieldPathProxy;
}
namespace Firebase::Firestore {
class FieldValueProxy;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
struct DocumentSnapshotProxy_ServerTimestampBehavior;
}
namespace Firebase::Firestore {
class DocumentSnapshotProxy;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior);
MARK_REF_PTR_T(::Firebase::Firestore::DocumentSnapshotProxy);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.DocumentSnapshotProxy/ServerTimestampBehavior
struct CORDL_TYPE DocumentSnapshotProxy_ServerTimestampBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DocumentSnapshotProxy_ServerTimestampBehavior_Unwrapped
enum struct __DocumentSnapshotProxy_ServerTimestampBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Estimate = static_cast<int32_t>(0x1),
__E_Previous = static_cast<int32_t>(0x2),
__E_Default = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DocumentSnapshotProxy_ServerTimestampBehavior_Unwrapped () const noexcept {
return static_cast<__DocumentSnapshotProxy_ServerTimestampBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DocumentSnapshotProxy_ServerTimestampBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DocumentSnapshotProxy_ServerTimestampBehavior(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior const Default;

/// @brief Field Estimate value: I32(1)
static ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior const Estimate;

/// @brief Field None value: I32(0)
static ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior const None;

/// @brief Field Previous value: I32(2)
static ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior const Previous;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.DocumentSnapshotProxy
class CORDL_TYPE DocumentSnapshotProxy : public ::System::Object {
public:
// Declarations
using ServerTimestampBehavior = ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x190975c, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x19096c0, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Get, addr 0x1909b04, size 0x120, virtual true, abstract: false, final false
inline ::Firebase::Firestore::FieldValueProxy* Get(::Firebase::Firestore::FieldPathProxy*  field, ::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior  stb) ;

static inline ::Firebase::Firestore::DocumentSnapshotProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1904710, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method exists, addr 0x1909a74, size 0x90, virtual true, abstract: false, final false
inline bool exists() ;

/// @brief Method getCPtr, addr 0x18fd4a0, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::DocumentSnapshotProxy*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method id, addr 0x19098f8, size 0x90, virtual true, abstract: false, final false
inline ::StringW id() ;

/// @brief Method reference, addr 0x1909988, size 0xec, virtual true, abstract: false, final false
inline ::Firebase::Firestore::DocumentReferenceProxy* reference() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DocumentSnapshotProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DocumentSnapshotProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DocumentSnapshotProxy(DocumentSnapshotProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DocumentSnapshotProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DocumentSnapshotProxy(DocumentSnapshotProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11114};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::DocumentSnapshotProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::DocumentSnapshotProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::DocumentSnapshotProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentSnapshotProxy_ServerTimestampBehavior, "Firebase.Firestore", "DocumentSnapshotProxy/ServerTimestampBehavior");
NEED_NO_BOX(::Firebase::Firestore::DocumentSnapshotProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::DocumentSnapshotProxy*, "Firebase.Firestore", "DocumentSnapshotProxy");
