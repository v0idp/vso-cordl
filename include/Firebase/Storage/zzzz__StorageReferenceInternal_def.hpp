#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageReferenceInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StorageReferenceInternal)
namespace Firebase::Storage {
class MetadataInternal;
}
namespace Firebase::Storage {
class MonitorControllerInternal;
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
namespace Firebase::Storage {
class StorageReferenceInternal;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::StorageReferenceInternal);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReferenceInternal
class CORDL_TYPE StorageReferenceInternal : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bucket)) ::StringW  Bucket;

 __declspec(property(get=get_FullPath)) ::StringW  FullPath;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Child, addr 0x1926cc0, size 0x104, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageReferenceInternal* Child(::StringW  path) ;

/// @brief Method DeleteAsync, addr 0x1926dc4, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DeleteAsync() ;

/// @brief Method Dispose, addr 0x1926b24, size 0x19c, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method Finalize, addr 0x1926a88, size 0x9c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetFileUsingMonitorControllerAsync, addr 0x1926fa4, size 0x124, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* GetFileUsingMonitorControllerAsync(::StringW  path, ::Firebase::Storage::MonitorControllerInternal*  monitor_controller) ;

static inline ::Firebase::Storage::StorageReferenceInternal* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method PutBytesUsingMonitorControllerAsync, addr 0x1927330, size 0x160, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* PutBytesUsingMonitorControllerAsync(::System::IntPtr  buffer, uint32_t  buffer_size, ::Firebase::Storage::MetadataInternal*  metadata, ::Firebase::Storage::MonitorControllerInternal*  monitor_controller) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x19252ac, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x192575c, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Storage::StorageReferenceInternal*  obj) ;

/// @brief Method get_Bucket, addr 0x1926e74, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_Bucket() ;

/// @brief Method get_FullPath, addr 0x1926f0c, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_FullPath() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReferenceInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReferenceInternal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReferenceInternal(StorageReferenceInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReferenceInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReferenceInternal(StorageReferenceInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11682};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReferenceInternal, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReferenceInternal, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReferenceInternal, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::StorageReferenceInternal);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReferenceInternal*, "Firebase.Storage", "StorageReferenceInternal");
