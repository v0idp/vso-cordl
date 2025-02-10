#pragma once
// IWYU pragma private; include "Firebase/Firestore/LoadBundleTaskProgressProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBundleTaskProgressProxy)
namespace Firebase::Firestore {
struct LoadBundleTaskProgressProxy_State;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Firestore {
struct LoadBundleTaskProgressProxy_State;
}
namespace Firebase::Firestore {
class LoadBundleTaskProgressProxy;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::LoadBundleTaskProgressProxy_State);
MARK_REF_PTR_T(::Firebase::Firestore::LoadBundleTaskProgressProxy);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.LoadBundleTaskProgressProxy/State
struct CORDL_TYPE LoadBundleTaskProgressProxy_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LoadBundleTaskProgressProxy_State_Unwrapped
enum struct __LoadBundleTaskProgressProxy_State_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x0),
__E_InProgress = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoadBundleTaskProgressProxy_State_Unwrapped () const noexcept {
return static_cast<__LoadBundleTaskProgressProxy_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LoadBundleTaskProgressProxy_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoadBundleTaskProgressProxy_State(int32_t  value__) noexcept;

/// @brief Field Error value: I32(0)
static ::Firebase::Firestore::LoadBundleTaskProgressProxy_State const Error;

/// @brief Field InProgress value: I32(1)
static ::Firebase::Firestore::LoadBundleTaskProgressProxy_State const InProgress;

/// @brief Field Success value: I32(2)
static ::Firebase::Firestore::LoadBundleTaskProgressProxy_State const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgressProxy_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::LoadBundleTaskProgressProxy_State, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Firestore {
// Is value type: false
// CS Name: Firebase.Firestore.LoadBundleTaskProgressProxy
class CORDL_TYPE LoadBundleTaskProgressProxy : public ::System::Object {
public:
// Declarations
using State = ::Firebase::Firestore::LoadBundleTaskProgressProxy_State;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1906140, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x19060a4, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Firestore::LoadBundleTaskProgressProxy* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1906050, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method bytes_loaded, addr 0x19063fc, size 0x90, virtual false, abstract: false, final false
inline int64_t bytes_loaded() ;

/// @brief Method documents_loaded, addr 0x19062dc, size 0x90, virtual false, abstract: false, final false
inline int32_t documents_loaded() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method state, addr 0x190651c, size 0x90, virtual false, abstract: false, final false
inline ::Firebase::Firestore::LoadBundleTaskProgressProxy_State state() ;

/// @brief Method total_bytes, addr 0x190648c, size 0x90, virtual false, abstract: false, final false
inline int64_t total_bytes() ;

/// @brief Method total_documents, addr 0x190636c, size 0x90, virtual false, abstract: false, final false
inline int32_t total_documents() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBundleTaskProgressProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBundleTaskProgressProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBundleTaskProgressProxy(LoadBundleTaskProgressProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBundleTaskProgressProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBundleTaskProgressProxy(LoadBundleTaskProgressProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11105};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgressProxy, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Firestore::LoadBundleTaskProgressProxy, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::LoadBundleTaskProgressProxy, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::LoadBundleTaskProgressProxy_State, "Firebase.Firestore", "LoadBundleTaskProgressProxy/State");
NEED_NO_BOX(::Firebase::Firestore::LoadBundleTaskProgressProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::LoadBundleTaskProgressProxy*, "Firebase.Firestore", "LoadBundleTaskProgressProxy");
