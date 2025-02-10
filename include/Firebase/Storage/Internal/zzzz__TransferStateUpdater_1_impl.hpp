#pragma once
// IWYU pragma private; include "Firebase/Storage/Internal/TransferStateUpdater_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/Internal/zzzz__TransferStateUpdater_1_def.hpp"
#include "Firebase/Storage/Internal/zzzz__TransferState_def.hpp"
#include "Firebase/Storage/zzzz__MonitorControllerInternal_def.hpp"
#include "Firebase/Storage/zzzz__StorageMetadata_def.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::IProgress_1<T>*& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr ::System::IProgress_1<T>* const& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr void Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_set_handler(::System::IProgress_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___handler, value);
}
template<typename T>
constexpr ::Firebase::Storage::Internal::TransferState*& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get_transferState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferState;
}
template<typename T>
constexpr ::Firebase::Storage::Internal::TransferState* const& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get_transferState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferState;
}
template<typename T>
constexpr void Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_set_transferState(::Firebase::Storage::Internal::TransferState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___transferState, value);
}
template<typename T>
constexpr T& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get__ProgressState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProgressState_k__BackingField;
}
template<typename T>
constexpr T const& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get__ProgressState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ProgressState_k__BackingField;
}
template<typename T>
constexpr void Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_set__ProgressState_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____ProgressState_k__BackingField, value);
}
template<typename T>
constexpr ::Firebase::Storage::MonitorControllerInternal*& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get__MonitorController_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MonitorController_k__BackingField;
}
template<typename T>
constexpr ::Firebase::Storage::MonitorControllerInternal* const& Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_get__MonitorController_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MonitorController_k__BackingField;
}
template<typename T>
constexpr void Firebase::Storage::Internal::TransferStateUpdater_1<T>::__cordl_internal_set__MonitorController_k__BackingField(::Firebase::Storage::MonitorControllerInternal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____MonitorController_k__BackingField, value);
}
template<typename T>
inline void Firebase::Storage::Internal::TransferStateUpdater_1<T>::_ctor(::Firebase::Storage::StorageReference*  storageReference, ::System::IProgress_1<T>*  progressHandler, T  progressState, ::Firebase::Storage::Internal::TransferState*  progressStateBackingStore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IProgress_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::Internal::TransferState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, storageReference, progressHandler, progressState, progressStateBackingStore);
}
template<typename T>
inline void Firebase::Storage::Internal::TransferStateUpdater_1<T>::SetMetadata(::Firebase::Storage::StorageMetadata*  metadata)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        "SetMetadata",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::StorageMetadata*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, metadata);
}
template<typename T>
inline T Firebase::Storage::Internal::TransferStateUpdater_1<T>::get_ProgressState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        "get_ProgressState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline void Firebase::Storage::Internal::TransferStateUpdater_1<T>::set_ProgressState(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        "set_ProgressState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline ::Firebase::Storage::MonitorControllerInternal* Firebase::Storage::Internal::TransferStateUpdater_1<T>::get_MonitorController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        "get_MonitorController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Storage::MonitorControllerInternal*, false>(this, ___internal_method);
}
template<typename T>
inline void Firebase::Storage::Internal::TransferStateUpdater_1<T>::set_MonitorController(::Firebase::Storage::MonitorControllerInternal*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        "set_MonitorController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::MonitorControllerInternal*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline void Firebase::Storage::Internal::TransferStateUpdater_1<T>::_TransferStateUpdater_m__0(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>::get(),
                        "<TransferStateUpdater>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
template<typename T>
inline ::Firebase::Storage::Internal::TransferStateUpdater_1<T>* Firebase::Storage::Internal::TransferStateUpdater_1<T>::New_ctor(::Firebase::Storage::StorageReference*  storageReference, ::System::IProgress_1<T>*  progressHandler, T  progressState, ::Firebase::Storage::Internal::TransferState*  progressStateBackingStore)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::Internal::TransferStateUpdater_1<T>*>(storageReference, progressHandler, progressState, progressStateBackingStore));
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Storage::Internal::TransferStateUpdater_1<T>::TransferStateUpdater_1()   {
}
