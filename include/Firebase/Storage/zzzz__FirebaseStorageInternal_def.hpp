#pragma once
// IWYU pragma private; include "Firebase/Storage/FirebaseStorageInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseStorageInternal)
namespace Firebase::Storage {
class StorageReferenceInternal;
}
namespace Firebase {
class FirebaseApp;
}
namespace Firebase {
struct InitResult;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Storage {
class FirebaseStorageInternal;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::FirebaseStorageInternal);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.FirebaseStorageInternal
class CORDL_TYPE FirebaseStorageInternal : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_App)) ::Firebase::FirebaseApp*  App;

 __declspec(property(get=get_InstanceKey)) ::StringW  InstanceKey;

 __declspec(property(get=get_Url)) ::StringW  Url;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1924e48, size 0x110, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1924dac, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetInstanceInternal, addr 0x1925300, size 0x1c8, virtual false, abstract: false, final false
static inline ::Firebase::Storage::FirebaseStorageInternal* GetInstanceInternal(::Firebase::FirebaseApp*  app, ::StringW  url, ::ByRef<::Firebase::InitResult>  init_result_out) ;

/// @brief Method GetReference, addr 0x19251b8, size 0xf4, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageReferenceInternal* GetReference() ;

static inline ::Firebase::Storage::FirebaseStorageInternal* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ReleaseReferenceInternal, addr 0x1924f58, size 0x9c, virtual false, abstract: false, final false
static inline void ReleaseReferenceInternal(::Firebase::Storage::FirebaseStorageInternal*  instance) ;

/// @brief Method SetSwigCMemOwn, addr 0x19251ac, size 0xc, virtual false, abstract: false, final false
inline void SetSwigCMemOwn(bool  ownership) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x1924d14, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x1924d68, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Storage::FirebaseStorageInternal*  obj) ;

/// @brief Method get_App, addr 0x1925038, size 0xdc, virtual false, abstract: false, final false
inline ::Firebase::FirebaseApp* get_App() ;

/// @brief Method get_InstanceKey, addr 0x1924ff4, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_InstanceKey() ;

/// @brief Method get_Url, addr 0x1925114, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_Url() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseStorageInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseStorageInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseStorageInternal(FirebaseStorageInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseStorageInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseStorageInternal(FirebaseStorageInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11676};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::FirebaseStorageInternal, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::FirebaseStorageInternal, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::FirebaseStorageInternal, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::FirebaseStorageInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::FirebaseStorageInternal*, "Firebase.Storage", "FirebaseStorageInternal");
