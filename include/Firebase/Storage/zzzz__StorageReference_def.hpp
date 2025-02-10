#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StorageReference)
namespace Firebase::Storage::Internal {
class ModuleLogger;
}
namespace Firebase::Storage::Internal {
template<typename T>
class TransferStateUpdater_1;
}
namespace Firebase::Storage {
class DownloadState;
}
namespace Firebase::Storage {
class FirebaseStorage;
}
namespace Firebase::Storage {
class MetadataChange;
}
namespace Firebase::Storage {
class MetadataInternal;
}
namespace Firebase::Storage {
class MonitorControllerInternal;
}
namespace Firebase::Storage {
class StorageMetadata;
}
namespace Firebase::Storage {
class StorageReferenceInternal;
}
namespace Firebase::Storage {
class StorageReference_TaskCompletionStatus;
}
namespace Firebase::Storage {
class StorageReference__DeleteAsync_c__AnonStorey15;
}
namespace Firebase::Storage {
class StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11;
}
namespace Firebase::Storage {
class StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1;
}
namespace Firebase::Storage {
class StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0;
}
namespace Firebase::Storage {
class StorageReference__PutStreamAsync_c__AnonStorey7;
}
namespace Firebase::Storage {
class UploadState;
}
namespace Firebase::Storage {
class _PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IProgress_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Firebase::Storage {
class StorageReference;
}
namespace Firebase::Storage {
class StorageReference_TaskCompletionStatus;
}
namespace Firebase::Storage {
class StorageReference__DeleteAsync_c__AnonStorey15;
}
namespace Firebase::Storage {
class StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11;
}
namespace Firebase::Storage {
class StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1;
}
namespace Firebase::Storage {
class StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0;
}
namespace Firebase::Storage {
class StorageReference__PutStreamAsync_c__AnonStorey7;
}
namespace Firebase::Storage {
class _PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::StorageReference);
MARK_REF_PTR_T(::Firebase::Storage::StorageReference_TaskCompletionStatus);
MARK_REF_PTR_T(::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15);
MARK_REF_PTR_T(::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11);
MARK_REF_PTR_T(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1);
MARK_REF_PTR_T(::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0);
MARK_REF_PTR_T(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7);
MARK_REF_PTR_T(::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2);
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/TaskCompletionStatus
class CORDL_TYPE StorageReference_TaskCompletionStatus : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Exception, put=set_Exception)) ::System::Exception*  Exception;

 __declspec(property(get=get_IsCanceled, put=set_IsCanceled)) bool  IsCanceled;

 __declspec(property(get=get_IsSuccessful, put=set_IsSuccessful)) bool  IsSuccessful;

/// @brief Field <Exception>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Exception_k__BackingField, put=__cordl_internal_set__Exception_k__BackingField)) ::System::Exception*  _Exception_k__BackingField;

/// @brief Field <IsCanceled>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCanceled_k__BackingField, put=__cordl_internal_set__IsCanceled_k__BackingField)) bool  _IsCanceled_k__BackingField;

/// @brief Field <IsSuccessful>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSuccessful_k__BackingField, put=__cordl_internal_set__IsSuccessful_k__BackingField)) bool  _IsSuccessful_k__BackingField;

static inline ::Firebase::Storage::StorageReference_TaskCompletionStatus* New_ctor(::System::Threading::Tasks::Task*  task, ::StringW  operationDescription, ::Firebase::Storage::Internal::ModuleLogger*  logger) ;

/// @brief Method ToTask, addr 0x192ad7c, size 0x110, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ToTask() ;

constexpr ::System::Exception* const& __cordl_internal_get__Exception_k__BackingField() const;

constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsCanceled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCanceled_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSuccessful_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSuccessful_k__BackingField() ;

constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception*  value) ;

constexpr void __cordl_internal_set__IsCanceled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSuccessful_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x192ab00, size 0x27c, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Tasks::Task*  task, ::StringW  operationDescription, ::Firebase::Storage::Internal::ModuleLogger*  logger) ;

/// @brief Method get_Exception, addr 0x192b430, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// @brief Method get_IsCanceled, addr 0x192b41c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsCanceled() ;

/// @brief Method get_IsSuccessful, addr 0x192b408, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSuccessful() ;

/// @brief Method set_Exception, addr 0x192b438, size 0x8, virtual false, abstract: false, final false
inline void set_Exception(::System::Exception*  value) ;

/// @brief Method set_IsCanceled, addr 0x192b424, size 0xc, virtual false, abstract: false, final false
inline void set_IsCanceled(bool  value) ;

/// @brief Method set_IsSuccessful, addr 0x192b410, size 0xc, virtual false, abstract: false, final false
inline void set_IsSuccessful(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference_TaskCompletionStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference_TaskCompletionStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference_TaskCompletionStatus(StorageReference_TaskCompletionStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference_TaskCompletionStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference_TaskCompletionStatus(StorageReference_TaskCompletionStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11695};

/// @brief Field <IsSuccessful>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsSuccessful_k__BackingField;

/// @brief Field <IsCanceled>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____IsCanceled_k__BackingField;

/// @brief Field <Exception>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ____Exception_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference_TaskCompletionStatus, ____IsSuccessful_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference_TaskCompletionStatus, ____IsCanceled_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference_TaskCompletionStatus, ____Exception_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference_TaskCompletionStatus, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/<PutBytesUsingMonitorControllerAsync>c__AnonStorey0
class CORDL_TYPE StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0 : public ::System::Object {
public:
// Declarations
/// @brief Field metadata, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_metadata, put=__cordl_internal_set_metadata)) ::Firebase::Storage::MetadataInternal*  metadata;

/// @brief Field monitorController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitorController, put=__cordl_internal_set_monitorController)) ::Firebase::Storage::MonitorControllerInternal*  monitorController;

static inline ::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0* New_ctor() ;

constexpr ::Firebase::Storage::MetadataInternal* const& __cordl_internal_get_metadata() const;

constexpr ::Firebase::Storage::MetadataInternal*& __cordl_internal_get_metadata() ;

constexpr ::Firebase::Storage::MonitorControllerInternal* const& __cordl_internal_get_monitorController() const;

constexpr ::Firebase::Storage::MonitorControllerInternal*& __cordl_internal_get_monitorController() ;

constexpr void __cordl_internal_set_metadata(::Firebase::Storage::MetadataInternal*  value) ;

constexpr void __cordl_internal_set_monitorController(::Firebase::Storage::MonitorControllerInternal*  value) ;

/// @brief Method <>m__0, addr 0x192b440, size 0x4c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* __m__0(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  completedTask) ;

/// @brief Method .ctor, addr 0x1929f2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0(StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0(StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11696};

/// @brief Field monitorController, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::MonitorControllerInternal*  ___monitorController;

/// @brief Field metadata, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::MetadataInternal*  ___metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0, ___monitorController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0, ___metadata) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1/<PutBytesUsingCompletionSourceAsync>c__AnonStorey2
class CORDL_TYPE _PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2 : public ::System::Object {
public:
// Declarations
/// @brief Field <>f__ref$1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___f__ref$1, put=__cordl_internal_set___f__ref$1)) ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*  __f__ref$1;

/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  task;

static inline ::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2* New_ctor() ;

constexpr ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1* const& __cordl_internal_get___f__ref$1() const;

constexpr ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*& __cordl_internal_get___f__ref$1() ;

constexpr ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___f__ref$1(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  value) ;

/// @brief Method <>m__0, addr 0x192b5ac, size 0xd0, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageMetadata* __m__0() ;

/// @brief Method .ctor, addr 0x192b5a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr _PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2(_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2(_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11697};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  ___task;

/// @brief Field <>f__ref$1, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*  _____f__ref$1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2, _____f__ref$1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1
class CORDL_TYPE StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1 : public ::System::Object {
public:
// Declarations
using _PutBytesUsingCompletionSourceAsync_c__AnonStorey2 = ::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2;

/// @brief Field $this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::Firebase::Storage::StorageReference*  $this;

/// @brief Field bytesHandle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bytesHandle, put=__cordl_internal_set_bytesHandle)) ::System::Runtime::InteropServices::GCHandle  bytesHandle;

/// @brief Field completionSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  completionSource;

/// @brief Field transferStateUpdater, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferStateUpdater, put=__cordl_internal_set_transferStateUpdater)) ::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>*  transferStateUpdater;

static inline ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1* New_ctor() ;

constexpr ::Firebase::Storage::StorageReference* const& __cordl_internal_get_$this() const;

constexpr ::Firebase::Storage::StorageReference*& __cordl_internal_get_$this() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_bytesHandle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_bytesHandle() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>* const& __cordl_internal_get_completionSource() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*& __cordl_internal_get_completionSource() ;

constexpr ::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>* const& __cordl_internal_get_transferStateUpdater() const;

constexpr ::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>*& __cordl_internal_get_transferStateUpdater() ;

constexpr void __cordl_internal_set_$this(::Firebase::Storage::StorageReference*  value) ;

constexpr void __cordl_internal_set_bytesHandle(::System::Runtime::InteropServices::GCHandle  value) ;

constexpr void __cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  value) ;

constexpr void __cordl_internal_set_transferStateUpdater(::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>*  value) ;

/// @brief Method <>m__0, addr 0x192b48c, size 0x118, virtual false, abstract: false, final false
inline void __m__0(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  task) ;

/// @brief Method .ctor, addr 0x192a168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1(StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1(StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11698};

/// @brief Field bytesHandle, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___bytesHandle;

/// @brief Field completionSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  ___completionSource;

/// @brief Field transferStateUpdater, offset: 0x20, size: 0x8, def value: None
 ::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>*  ___transferStateUpdater;

/// @brief Field $this, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Storage::StorageReference*  ___$this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1, ___bytesHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1, ___completionSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1, ___transferStateUpdater) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1, ___$this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object, System.Threading.CancellationToken
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/<PutStreamAsync>c__AnonStorey7
class CORDL_TYPE StorageReference__PutStreamAsync_c__AnonStorey7 : public ::System::Object {
public:
// Declarations
/// @brief Field $this, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_$this, put=__cordl_internal_set_$this)) ::Firebase::Storage::StorageReference*  $this;

/// @brief Field cancelToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancelToken, put=__cordl_internal_set_cancelToken)) ::System::Threading::CancellationToken  cancelToken;

/// @brief Field customMetadata, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMetadata, put=__cordl_internal_set_customMetadata)) ::Firebase::Storage::MetadataChange*  customMetadata;

/// @brief Field previousSessionUri, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousSessionUri, put=__cordl_internal_set_previousSessionUri)) ::System::Uri*  previousSessionUri;

/// @brief Field progressHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressHandler, put=__cordl_internal_set_progressHandler)) ::System::IProgress_1<::Firebase::Storage::UploadState*>*  progressHandler;

/// @brief Field result, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  result;

/// @brief Field stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

static inline ::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7* New_ctor() ;

constexpr ::Firebase::Storage::StorageReference* const& __cordl_internal_get_$this() const;

constexpr ::Firebase::Storage::StorageReference*& __cordl_internal_get_$this() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancelToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancelToken() ;

constexpr ::Firebase::Storage::MetadataChange* const& __cordl_internal_get_customMetadata() const;

constexpr ::Firebase::Storage::MetadataChange*& __cordl_internal_get_customMetadata() ;

constexpr ::System::Uri* const& __cordl_internal_get_previousSessionUri() const;

constexpr ::System::Uri*& __cordl_internal_get_previousSessionUri() ;

constexpr ::System::IProgress_1<::Firebase::Storage::UploadState*>* const& __cordl_internal_get_progressHandler() const;

constexpr ::System::IProgress_1<::Firebase::Storage::UploadState*>*& __cordl_internal_get_progressHandler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>* const& __cordl_internal_get_result() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*& __cordl_internal_get_result() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr void __cordl_internal_set_$this(::Firebase::Storage::StorageReference*  value) ;

constexpr void __cordl_internal_set_cancelToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_customMetadata(::Firebase::Storage::MetadataChange*  value) ;

constexpr void __cordl_internal_set_previousSessionUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set_progressHandler(::System::IProgress_1<::Firebase::Storage::UploadState*>*  value) ;

constexpr void __cordl_internal_set_result(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

/// @brief Method <>m__0, addr 0x192b6a8, size 0x260, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x192a380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference__PutStreamAsync_c__AnonStorey7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__PutStreamAsync_c__AnonStorey7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference__PutStreamAsync_c__AnonStorey7(StorageReference__PutStreamAsync_c__AnonStorey7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__PutStreamAsync_c__AnonStorey7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference__PutStreamAsync_c__AnonStorey7(StorageReference__PutStreamAsync_c__AnonStorey7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11699};

/// @brief Field stream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field customMetadata, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::MetadataChange*  ___customMetadata;

/// @brief Field progressHandler, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<::Firebase::Storage::UploadState*>*  ___progressHandler;

/// @brief Field cancelToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancelToken;

/// @brief Field previousSessionUri, offset: 0x30, size: 0x8, def value: None
 ::System::Uri*  ___previousSessionUri;

/// @brief Field result, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  ___result;

/// @brief Field $this, offset: 0x40, size: 0x8, def value: None
 ::Firebase::Storage::StorageReference*  ___$this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___customMetadata) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___progressHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___cancelToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___previousSessionUri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___result) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, ___$this) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7, 0x48>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/<GetFileUsingMonitorControllerAsync>c__AnonStorey11
class CORDL_TYPE StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11 : public ::System::Object {
public:
// Declarations
/// @brief Field monitorController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitorController, put=__cordl_internal_set_monitorController)) ::Firebase::Storage::MonitorControllerInternal*  monitorController;

static inline ::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11* New_ctor() ;

constexpr ::Firebase::Storage::MonitorControllerInternal* const& __cordl_internal_get_monitorController() const;

constexpr ::Firebase::Storage::MonitorControllerInternal*& __cordl_internal_get_monitorController() ;

constexpr void __cordl_internal_set_monitorController(::Firebase::Storage::MonitorControllerInternal*  value) ;

/// @brief Method <>m__0, addr 0x192b908, size 0x2c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* __m__0(::System::Threading::Tasks::Task_1<int64_t>*  completedTask) ;

/// @brief Method .ctor, addr 0x192a500, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11(StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11(StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11700};

/// @brief Field monitorController, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::MonitorControllerInternal*  ___monitorController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11, ___monitorController) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference/<DeleteAsync>c__AnonStorey15
class CORDL_TYPE StorageReference__DeleteAsync_c__AnonStorey15 : public ::System::Object {
public:
// Declarations
/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::Task*  task;

static inline ::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15* New_ctor() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task*  value) ;

/// @brief Method <>m__0, addr 0x192b934, size 0x54, virtual false, abstract: false, final false
inline void __m__0() ;

/// @brief Method .ctor, addr 0x192af94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference__DeleteAsync_c__AnonStorey15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__DeleteAsync_c__AnonStorey15", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference__DeleteAsync_c__AnonStorey15(StorageReference__DeleteAsync_c__AnonStorey15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference__DeleteAsync_c__AnonStorey15", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference__DeleteAsync_c__AnonStorey15(StorageReference__DeleteAsync_c__AnonStorey15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11701};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15, ___task) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageReference
class CORDL_TYPE StorageReference : public ::System::Object {
public:
// Declarations
using TaskCompletionStatus = ::Firebase::Storage::StorageReference_TaskCompletionStatus;

using _DeleteAsync_c__AnonStorey15 = ::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15;

using _GetFileUsingMonitorControllerAsync_c__AnonStorey11 = ::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11;

using _PutBytesUsingCompletionSourceAsync_c__AnonStorey1 = ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1;

using _PutBytesUsingMonitorControllerAsync_c__AnonStorey0 = ::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0;

using _PutStreamAsync_c__AnonStorey7 = ::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7;

 __declspec(property(get=get_Bucket)) ::StringW  Bucket;

 __declspec(property(get=get_Internal, put=set_Internal)) ::Firebase::Storage::StorageReferenceInternal*  Internal;

 __declspec(property(get=get_Logger, put=set_Logger)) ::Firebase::Storage::Internal::ModuleLogger*  Logger;

 __declspec(property(get=get_Path)) ::StringW  Path;

/// @brief Field <Internal>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Internal_k__BackingField, put=__cordl_internal_set__Internal_k__BackingField)) ::Firebase::Storage::StorageReferenceInternal*  _Internal_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Firebase::Storage::Internal::ModuleLogger*  _Logger_k__BackingField;

/// @brief Field <>f__am$cache0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___f__am$cache0, put=setStaticF___f__am$cache0)) ::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>*  __f__am$cache0;

/// @brief Field firebaseStorage, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_firebaseStorage, put=__cordl_internal_set_firebaseStorage)) ::Firebase::Storage::FirebaseStorage*  firebaseStorage;

/// @brief Method Child, addr 0x1929d68, size 0x80, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageReference* Child(::StringW  pathString) ;

/// @brief Method CompleteTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename I,typename O>
inline O CompleteTask(::System::Threading::Tasks::Task_1<I>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<O>*  completionSource, ::System::Func_1<O>*  getResult, ::StringW  operationDescription, bool  setCompletionSourceResult) ;

/// @brief Method DeleteAsync, addr 0x192a840, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DeleteAsync() ;

/// @brief Method Equals, addr 0x192a9a0, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetFileAsync, addr 0x192a508, size 0x1a4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetFileAsync(::StringW  destinationFilePath, ::System::IProgress_1<::Firebase::Storage::DownloadState*>*  progressHandler, ::System::Threading::CancellationToken  cancelToken) ;

/// @brief Method GetFileUsingMonitorControllerAsync, addr 0x192a3d4, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int64_t>* GetFileUsingMonitorControllerAsync(::StringW  path, ::Firebase::Storage::MonitorControllerInternal*  monitorController, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetHashCode, addr 0x192aa3c, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Firebase::Storage::StorageReference* New_ctor(::Firebase::Storage::FirebaseStorage*  storage, ::Firebase::Storage::StorageReferenceInternal*  storageReferenceInternal) ;

/// @brief Method PutBytesUsingCompletionSourceAsync, addr 0x1929f34, size 0x234, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>* PutBytesUsingCompletionSourceAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::Firebase::Storage::MetadataChange*  customMetadata, ::System::IProgress_1<::Firebase::Storage::UploadState*>*  progressHandler, ::System::Threading::CancellationToken  cancelToken, ::System::Uri*  previousSessionUri, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  completionSource) ;

/// @brief Method PutBytesUsingMonitorControllerAsync, addr 0x1929de8, size 0x144, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* PutBytesUsingMonitorControllerAsync(::System::IntPtr  buffer, uint32_t  bufferSize, ::Firebase::Storage::MetadataInternal*  metadata, ::Firebase::Storage::MonitorControllerInternal*  monitorController, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method PutStreamAsync, addr 0x192a1e4, size 0x19c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>* PutStreamAsync(::System::IO::Stream*  stream, ::Firebase::Storage::MetadataChange*  customMetadata, ::System::IProgress_1<::Firebase::Storage::UploadState*>*  progressHandler, ::System::Threading::CancellationToken  cancelToken, ::System::Uri*  previousSessionUri) ;

/// @brief Method ToString, addr 0x192a928, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method <DeleteAsync>m__1, addr 0x192ae8c, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* _DeleteAsync_m__1(::System::Threading::Tasks::Task*  task) ;

/// @brief Method <GetFileAsync>m__0, addr 0x192aa74, size 0x8c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _GetFileAsync_m__0(::System::Threading::Tasks::Task_1<int64_t>*  task) ;

constexpr ::Firebase::Storage::StorageReferenceInternal* const& __cordl_internal_get__Internal_k__BackingField() const;

constexpr ::Firebase::Storage::StorageReferenceInternal*& __cordl_internal_get__Internal_k__BackingField() ;

constexpr ::Firebase::Storage::Internal::ModuleLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Firebase::Storage::Internal::ModuleLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Firebase::Storage::FirebaseStorage* const& __cordl_internal_get_firebaseStorage() const;

constexpr ::Firebase::Storage::FirebaseStorage*& __cordl_internal_get_firebaseStorage() ;

constexpr void __cordl_internal_set__Internal_k__BackingField(::Firebase::Storage::StorageReferenceInternal*  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Firebase::Storage::Internal::ModuleLogger*  value) ;

constexpr void __cordl_internal_set_firebaseStorage(::Firebase::Storage::FirebaseStorage*  value) ;

/// @brief Method .ctor, addr 0x19299a0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::FirebaseStorage*  storage, ::Firebase::Storage::StorageReferenceInternal*  storageReferenceInternal) ;

static inline ::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>* getStaticF___f__am$cache0() ;

/// @brief Method get_Bucket, addr 0x1929d50, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Bucket() ;

/// @brief Method get_Internal, addr 0x192aa64, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Storage::StorageReferenceInternal* get_Internal() ;

/// @brief Method get_Logger, addr 0x1929d28, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Storage::Internal::ModuleLogger* get_Logger() ;

/// @brief Method get_Path, addr 0x1929d38, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

static inline void setStaticF___f__am$cache0(::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>*  value) ;

/// @brief Method set_Internal, addr 0x192aa6c, size 0x8, virtual false, abstract: false, final false
inline void set_Internal(::Firebase::Storage::StorageReferenceInternal*  value) ;

/// @brief Method set_Logger, addr 0x1929d30, size 0x8, virtual false, abstract: false, final false
inline void set_Logger(::Firebase::Storage::Internal::ModuleLogger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageReference(StorageReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageReference(StorageReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11702};

/// @brief Field firebaseStorage, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::FirebaseStorage*  ___firebaseStorage;

/// @brief Field <Logger>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::Internal::ModuleLogger*  ____Logger_k__BackingField;

/// @brief Field <Internal>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Firebase::Storage::StorageReferenceInternal*  ____Internal_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageReference, ___firebaseStorage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference, ____Logger_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageReference, ____Internal_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageReference, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::StorageReference);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference*, "Firebase.Storage", "StorageReference");
NEED_NO_BOX(::Firebase::Storage::StorageReference_TaskCompletionStatus);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference_TaskCompletionStatus*, "Firebase.Storage", "StorageReference/TaskCompletionStatus");
NEED_NO_BOX(::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15*, "Firebase.Storage", "StorageReference/<DeleteAsync>c__AnonStorey15");
NEED_NO_BOX(::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11*, "Firebase.Storage", "StorageReference/<GetFileUsingMonitorControllerAsync>c__AnonStorey11");
NEED_NO_BOX(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*, "Firebase.Storage", "StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1");
NEED_NO_BOX(::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0*, "Firebase.Storage", "StorageReference/<PutBytesUsingMonitorControllerAsync>c__AnonStorey0");
NEED_NO_BOX(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7*, "Firebase.Storage", "StorageReference/<PutStreamAsync>c__AnonStorey7");
NEED_NO_BOX(::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2*, "Firebase.Storage", "StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1/<PutBytesUsingCompletionSourceAsync>c__AnonStorey2");
