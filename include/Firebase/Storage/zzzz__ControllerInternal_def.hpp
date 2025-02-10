#pragma once
// IWYU pragma private; include "Firebase/Storage/ControllerInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerInternal)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Storage {
class ControllerInternal;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::ControllerInternal);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.ControllerInternal
class CORDL_TYPE ControllerInternal : public ::System::Object {
public:
// Declarations
/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Cancel, addr 0x19267bc, size 0x98, virtual false, abstract: false, final false
inline bool Cancel() ;

/// @brief Method Dispose, addr 0x1927d04, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1927c68, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Storage::ControllerInternal* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1926594, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerInternal(ControllerInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerInternal(ControllerInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11684};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::ControllerInternal, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::ControllerInternal, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::ControllerInternal, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::ControllerInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::ControllerInternal*, "Firebase.Storage", "ControllerInternal");
