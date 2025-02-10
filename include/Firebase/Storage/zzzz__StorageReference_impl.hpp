#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageReference.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
#include "Firebase/Storage/Internal/zzzz__ModuleLogger_def.hpp"
#include "Firebase/Storage/Internal/zzzz__TransferStateUpdater_1_def.hpp"
#include "Firebase/Storage/zzzz__DownloadState_def.hpp"
#include "Firebase/Storage/zzzz__FirebaseStorage_def.hpp"
#include "Firebase/Storage/zzzz__MetadataChange_def.hpp"
#include "Firebase/Storage/zzzz__MetadataInternal_def.hpp"
#include "Firebase/Storage/zzzz__MonitorControllerInternal_def.hpp"
#include "Firebase/Storage/zzzz__StorageMetadata_def.hpp"
#include "Firebase/Storage/zzzz__StorageReferenceInternal_def.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
#include "Firebase/Storage/zzzz__UploadState_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)(::System::Threading::Tasks::Task*, ::StringW, ::Firebase::Storage::Internal::ModuleLogger*)>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x192ab00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::ModuleLogger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.get_IsSuccessful
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)()>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::get_IsSuccessful)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192b408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "get_IsSuccessful",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.set_IsSuccessful
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)(bool)>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::set_IsSuccessful)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x192b410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "set_IsSuccessful",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.get_IsCanceled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)()>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::get_IsCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192b41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "get_IsCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.set_IsCanceled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)(bool)>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::set_IsCanceled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x192b424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "set_IsCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.get_Exception
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)()>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192b430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "get_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.set_Exception
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)(::System::Exception*)>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::set_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192b438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "set_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference_TaskCompletionStatus.ToTask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Storage::StorageReference_TaskCompletionStatus::*)()>(&::Firebase::Storage::StorageReference_TaskCompletionStatus::ToTask)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x192ad7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "ToTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_get__IsSuccessful_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSuccessful_k__BackingField;
}
constexpr bool const& Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_get__IsSuccessful_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSuccessful_k__BackingField;
}
constexpr void Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_set__IsSuccessful_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSuccessful_k__BackingField = value;
}
constexpr bool& Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_get__IsCanceled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCanceled_k__BackingField;
}
constexpr bool const& Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_get__IsCanceled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCanceled_k__BackingField;
}
constexpr void Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_set__IsCanceled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCanceled_k__BackingField = value;
}
constexpr ::System::Exception*& Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_get__Exception_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exception_k__BackingField;
}
constexpr ::System::Exception* const& Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_get__Exception_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exception_k__BackingField;
}
constexpr void Firebase::Storage::StorageReference_TaskCompletionStatus::__cordl_internal_set__Exception_k__BackingField(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Exception_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference_TaskCompletionStatus::_ctor(::System::Threading::Tasks::Task*  task, ::StringW  operationDescription, ::Firebase::Storage::Internal::ModuleLogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::ModuleLogger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task, operationDescription, logger);
}
inline bool Firebase::Storage::StorageReference_TaskCompletionStatus::get_IsSuccessful()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "get_IsSuccessful",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference_TaskCompletionStatus::set_IsSuccessful(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "set_IsSuccessful",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Firebase::Storage::StorageReference_TaskCompletionStatus::get_IsCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "get_IsCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference_TaskCompletionStatus::set_IsCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "set_IsCanceled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Exception* Firebase::Storage::StorageReference_TaskCompletionStatus::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "get_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference_TaskCompletionStatus::set_Exception(::System::Exception*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "set_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Firebase::Storage::StorageReference_TaskCompletionStatus::ToTask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference_TaskCompletionStatus*>::get(),
                        "ToTask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageReference_TaskCompletionStatus* Firebase::Storage::StorageReference_TaskCompletionStatus::New_ctor(::System::Threading::Tasks::Task*  task, ::StringW  operationDescription, ::Firebase::Storage::Internal::ModuleLogger*  logger)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference_TaskCompletionStatus*>(task, operationDescription, logger));
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference_TaskCompletionStatus::StorageReference_TaskCompletionStatus()   {
}
//  Writing Method size for method: ::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::*)()>(&::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1929f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* (::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::*)(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*)>(&::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__m__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x192b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::MonitorControllerInternal*& Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__cordl_internal_get_monitorController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitorController;
}
constexpr ::Firebase::Storage::MonitorControllerInternal* const& Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__cordl_internal_get_monitorController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitorController;
}
constexpr void Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__cordl_internal_set_monitorController(::Firebase::Storage::MonitorControllerInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___monitorController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::MetadataInternal*& Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__cordl_internal_get_metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metadata;
}
constexpr ::Firebase::Storage::MetadataInternal* const& Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__cordl_internal_get_metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metadata;
}
constexpr void Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__cordl_internal_set_metadata(::Firebase::Storage::MetadataInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___metadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::__m__0(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  completedTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*, false>(this, ___internal_method, completedTask);
}
inline ::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0* Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0::StorageReference__PutBytesUsingMonitorControllerAsync_c__AnonStorey0()   {
}
//  Writing Method size for method: ::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::*)()>(&::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192b5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageMetadata* (::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::*)()>(&::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__m__0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x192b5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*& Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* const& Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__cordl_internal_set_task(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*& Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__cordl_internal_get___f__ref$1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__ref$1;
}
constexpr ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1* const& Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__cordl_internal_get___f__ref$1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____f__ref$1;
}
constexpr void Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__cordl_internal_set___f__ref$1(::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____f__ref$1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageMetadata* Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageMetadata*, false>(this, ___internal_method);
}
inline ::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2* Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2::_PutBytesUsingCompletionSourceAsync_c__AnonStorey1_StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey2()   {
}
//  Writing Method size for method: ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::*)()>(&::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192a168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::*)(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*)>(&::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__m__0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x192b48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_bytesHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_bytesHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bytesHandle;
}
constexpr void Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_set_bytesHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bytesHandle = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_completionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>* const& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_completionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completionSource;
}
constexpr void Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_set_completionSource(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>*& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_transferStateUpdater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferStateUpdater;
}
constexpr ::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>* const& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_transferStateUpdater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferStateUpdater;
}
constexpr void Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_set_transferStateUpdater(::Firebase::Storage::Internal::TransferStateUpdater_1<::Firebase::Storage::UploadState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transferStateUpdater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::StorageReference*& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_$this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr ::Firebase::Storage::StorageReference* const& Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_get_$this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr void Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__cordl_internal_set_$this(::Firebase::Storage::StorageReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___$this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::__m__0(::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1* Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1::StorageReference__PutBytesUsingCompletionSourceAsync_c__AnonStorey1()   {
}
//  Writing Method size for method: ::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::*)()>(&::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192a380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::*)()>(&::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__m__0)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x192b6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::MetadataChange*& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_customMetadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMetadata;
}
constexpr ::Firebase::Storage::MetadataChange* const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_customMetadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMetadata;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_customMetadata(::Firebase::Storage::MetadataChange*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customMetadata)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IProgress_1<::Firebase::Storage::UploadState*>*& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_progressHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressHandler;
}
constexpr ::System::IProgress_1<::Firebase::Storage::UploadState*>* const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_progressHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressHandler;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_progressHandler(::System::IProgress_1<::Firebase::Storage::UploadState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___progressHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_cancelToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr ::System::Threading::CancellationToken const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_cancelToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelToken;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_cancelToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelToken = value;
}
constexpr ::System::Uri*& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_previousSessionUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSessionUri;
}
constexpr ::System::Uri* const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_previousSessionUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSessionUri;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_previousSessionUri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousSessionUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>* const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_result(::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::StorageReference*& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_$this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr ::Firebase::Storage::StorageReference* const& Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_get_$this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
constexpr void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__cordl_internal_set_$this(::Firebase::Storage::StorageReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___$this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7* Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference__PutStreamAsync_c__AnonStorey7::StorageReference__PutStreamAsync_c__AnonStorey7()   {
}
//  Writing Method size for method: ::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::*)()>(&::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192a500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::*)(::System::Threading::Tasks::Task_1<int64_t>*)>(&::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::__m__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x192b908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int64_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::MonitorControllerInternal*& Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::__cordl_internal_get_monitorController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitorController;
}
constexpr ::Firebase::Storage::MonitorControllerInternal* const& Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::__cordl_internal_get_monitorController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitorController;
}
constexpr void Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::__cordl_internal_set_monitorController(::Firebase::Storage::MonitorControllerInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___monitorController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int64_t>* Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::__m__0(::System::Threading::Tasks::Task_1<int64_t>*  completedTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int64_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*, false>(this, ___internal_method, completedTask);
}
inline ::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11* Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11::StorageReference__GetFileUsingMonitorControllerAsync_c__AnonStorey11()   {
}
//  Writing Method size for method: ::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::*)()>(&::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192af94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15.__m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::*)()>(&::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::__m__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x192b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::__cordl_internal_set_task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15* Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15*>());
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference__DeleteAsync_c__AnonStorey15::StorageReference__DeleteAsync_c__AnonStorey15()   {
}
//  Writing Method size for method: ::Firebase::Storage::StorageReference._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference::*)(::Firebase::Storage::FirebaseStorage*, ::Firebase::Storage::StorageReferenceInternal*)>(&::Firebase::Storage::StorageReference::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x19299a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::FirebaseStorage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReferenceInternal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.get_Logger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::Internal::ModuleLogger* (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1929d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.set_Logger
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference::*)(::Firebase::Storage::Internal::ModuleLogger*)>(&::Firebase::Storage::StorageReference::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1929d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "set_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::ModuleLogger*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.get_Path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::get_Path)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1929d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.get_Bucket
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::get_Bucket)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1929d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Bucket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.Child
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageReference* (::Firebase::Storage::StorageReference::*)(::StringW)>(&::Firebase::Storage::StorageReference::Child)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1929d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "Child",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.PutBytesUsingMonitorControllerAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* (::Firebase::Storage::StorageReference::*)(::System::IntPtr, uint32_t, ::Firebase::Storage::MetadataInternal*, ::Firebase::Storage::MonitorControllerInternal*, ::System::Threading::CancellationToken)>(&::Firebase::Storage::StorageReference::PutBytesUsingMonitorControllerAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1929de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "PutBytesUsingMonitorControllerAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MonitorControllerInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.PutBytesUsingCompletionSourceAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>* (::Firebase::Storage::StorageReference::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Firebase::Storage::MetadataChange*, ::System::IProgress_1<::Firebase::Storage::UploadState*>*, ::System::Threading::CancellationToken, ::System::Uri*, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*)>(&::Firebase::Storage::StorageReference::PutBytesUsingCompletionSourceAsync)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x1929f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "PutBytesUsingCompletionSourceAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataChange*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<::Firebase::Storage::UploadState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.PutStreamAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>* (::Firebase::Storage::StorageReference::*)(::System::IO::Stream*, ::Firebase::Storage::MetadataChange*, ::System::IProgress_1<::Firebase::Storage::UploadState*>*, ::System::Threading::CancellationToken, ::System::Uri*)>(&::Firebase::Storage::StorageReference::PutStreamAsync)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x192a1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "PutStreamAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataChange*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<::Firebase::Storage::UploadState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.GetFileUsingMonitorControllerAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (::Firebase::Storage::StorageReference::*)(::StringW, ::Firebase::Storage::MonitorControllerInternal*, ::System::Threading::CancellationToken)>(&::Firebase::Storage::StorageReference::GetFileUsingMonitorControllerAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x192a3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "GetFileUsingMonitorControllerAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MonitorControllerInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.GetFileAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Storage::StorageReference::*)(::StringW, ::System::IProgress_1<::Firebase::Storage::DownloadState*>*, ::System::Threading::CancellationToken)>(&::Firebase::Storage::StorageReference::GetFileAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x192a508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "GetFileAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<::Firebase::Storage::DownloadState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.DeleteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::DeleteAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x192a840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "DeleteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x192a928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Storage::StorageReference::*)(::System::Object*)>(&::Firebase::Storage::StorageReference::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x192a9a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x192aa3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.get_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::StorageReferenceInternal* (::Firebase::Storage::StorageReference::*)()>(&::Firebase::Storage::StorageReference::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192aa64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference.set_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Storage::StorageReference::*)(::Firebase::Storage::StorageReferenceInternal*)>(&::Firebase::Storage::StorageReference::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192aa6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "set_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReferenceInternal*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference._GetFileAsync_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Firebase::Storage::StorageReference::*)(::System::Threading::Tasks::Task_1<int64_t>*)>(&::Firebase::Storage::StorageReference::_GetFileAsync_m__0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x192aa74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "<GetFileAsync>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int64_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Storage::StorageReference._DeleteAsync_m__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::Tasks::Task*)>(&::Firebase::Storage::StorageReference::_DeleteAsync_m__1)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x192ae8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "<DeleteAsync>m__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Storage::FirebaseStorage*& Firebase::Storage::StorageReference::__cordl_internal_get_firebaseStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firebaseStorage;
}
constexpr ::Firebase::Storage::FirebaseStorage* const& Firebase::Storage::StorageReference::__cordl_internal_get_firebaseStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firebaseStorage;
}
constexpr void Firebase::Storage::StorageReference::__cordl_internal_set_firebaseStorage(::Firebase::Storage::FirebaseStorage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firebaseStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::Internal::ModuleLogger*& Firebase::Storage::StorageReference::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Firebase::Storage::Internal::ModuleLogger* const& Firebase::Storage::StorageReference::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Firebase::Storage::StorageReference::__cordl_internal_set__Logger_k__BackingField(::Firebase::Storage::Internal::ModuleLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Logger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::StorageReferenceInternal*& Firebase::Storage::StorageReference::__cordl_internal_get__Internal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Internal_k__BackingField;
}
constexpr ::Firebase::Storage::StorageReferenceInternal* const& Firebase::Storage::StorageReference::__cordl_internal_get__Internal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Internal_k__BackingField;
}
constexpr void Firebase::Storage::StorageReference::__cordl_internal_set__Internal_k__BackingField(::Firebase::Storage::StorageReferenceInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Internal_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Firebase::Storage::StorageReference::setStaticF___f__am$cache0(::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>*, "<>f__am$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get>(std::forward<::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>* Firebase::Storage::StorageReference::getStaticF___f__am$cache0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task*,::System::Threading::Tasks::Task*>*, "<>f__am$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get>();
}
inline void Firebase::Storage::StorageReference::_ctor(::Firebase::Storage::FirebaseStorage*  storage, ::Firebase::Storage::StorageReferenceInternal*  storageReferenceInternal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::FirebaseStorage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReferenceInternal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storage, storageReferenceInternal);
}
inline ::Firebase::Storage::Internal::ModuleLogger* Firebase::Storage::StorageReference::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::Internal::ModuleLogger*, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference::set_Logger(::Firebase::Storage::Internal::ModuleLogger*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "set_Logger",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::ModuleLogger*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Firebase::Storage::StorageReference::get_Path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Firebase::Storage::StorageReference::get_Bucket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Bucket",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageReference* Firebase::Storage::StorageReference::Child(::StringW  pathString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "Child",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageReference*, false>(this, ___internal_method, pathString);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>* Firebase::Storage::StorageReference::PutBytesUsingMonitorControllerAsync(::System::IntPtr  buffer, uint32_t  bufferSize, ::Firebase::Storage::MetadataInternal*  metadata, ::Firebase::Storage::MonitorControllerInternal*  monitorController, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "PutBytesUsingMonitorControllerAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MonitorControllerInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Storage::MetadataInternal*>*, false>(this, ___internal_method, buffer, bufferSize, metadata, monitorController, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>* Firebase::Storage::StorageReference::PutBytesUsingCompletionSourceAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, ::Firebase::Storage::MetadataChange*  customMetadata, ::System::IProgress_1<::Firebase::Storage::UploadState*>*  progressHandler, ::System::Threading::CancellationToken  cancelToken, ::System::Uri*  previousSessionUri, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*  completionSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "PutBytesUsingCompletionSourceAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataChange*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<::Firebase::Storage::UploadState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Storage::StorageMetadata*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*, false>(this, ___internal_method, bytes, customMetadata, progressHandler, cancelToken, previousSessionUri, completionSource);
}
inline ::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>* Firebase::Storage::StorageReference::PutStreamAsync(::System::IO::Stream*  stream, ::Firebase::Storage::MetadataChange*  customMetadata, ::System::IProgress_1<::Firebase::Storage::UploadState*>*  progressHandler, ::System::Threading::CancellationToken  cancelToken, ::System::Uri*  previousSessionUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "PutStreamAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MetadataChange*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<::Firebase::Storage::UploadState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*, false>(this, ___internal_method, stream, customMetadata, progressHandler, cancelToken, previousSessionUri);
}
inline ::System::Threading::Tasks::Task_1<int64_t>* Firebase::Storage::StorageReference::GetFileUsingMonitorControllerAsync(::StringW  path, ::Firebase::Storage::MonitorControllerInternal*  monitorController, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "GetFileUsingMonitorControllerAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MonitorControllerInternal*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int64_t>*, false>(this, ___internal_method, path, monitorController, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Firebase::Storage::StorageReference::GetFileAsync(::StringW  destinationFilePath, ::System::IProgress_1<::Firebase::Storage::DownloadState*>*  progressHandler, ::System::Threading::CancellationToken  cancelToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "GetFileAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<::Firebase::Storage::DownloadState*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, destinationFilePath, progressHandler, cancelToken);
}
inline ::System::Threading::Tasks::Task* Firebase::Storage::StorageReference::DeleteAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "DeleteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::StringW Firebase::Storage::StorageReference::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Firebase::Storage::StorageReference::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t Firebase::Storage::StorageReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Firebase::Storage::StorageReferenceInternal* Firebase::Storage::StorageReference::get_Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "get_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::StorageReferenceInternal*, false>(this, ___internal_method);
}
inline void Firebase::Storage::StorageReference::set_Internal(::Firebase::Storage::StorageReferenceInternal*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "set_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReferenceInternal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename I,typename O>
inline O Firebase::Storage::StorageReference::CompleteTask(::System::Threading::Tasks::Task_1<I>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<O>*  completionSource, ::System::Func_1<O>*  getResult, ::StringW  operationDescription, bool  setCompletionSourceResult)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                    "CompleteTask",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<O>::get()},
                    ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<I>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<O>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<O>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<O>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<O, false>(this, ___internal_method, task, completionSource, getResult, operationDescription, setCompletionSourceResult);
}
inline ::System::Threading::Tasks::Task* Firebase::Storage::StorageReference::_GetFileAsync_m__0(::System::Threading::Tasks::Task_1<int64_t>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "<GetFileAsync>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int64_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task* Firebase::Storage::StorageReference::_DeleteAsync_m__1(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageReference*>::get(),
                        "<DeleteAsync>m__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, task);
}
inline ::Firebase::Storage::StorageReference* Firebase::Storage::StorageReference::New_ctor(::Firebase::Storage::FirebaseStorage*  storage, ::Firebase::Storage::StorageReferenceInternal*  storageReferenceInternal)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageReference*>(storage, storageReferenceInternal));
}
// Ctor Parameters []
constexpr ::Firebase::Storage::StorageReference::StorageReference()   {
}
