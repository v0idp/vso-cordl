#pragma once
// IWYU pragma private; include "Firebase/Storage/Internal/TransferStateUpdater_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransferStateUpdater_1)
namespace Firebase::Storage::Internal {
class TransferState;
}
namespace Firebase::Storage {
class MonitorControllerInternal;
}
namespace Firebase::Storage {
class StorageMetadata;
}
namespace Firebase::Storage {
class StorageReference;
}
namespace System {
class EventArgs;
}
namespace System {
template<typename T>
class IProgress_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Storage::Internal {
template<typename T>
class TransferStateUpdater_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Storage::Internal::TransferStateUpdater_1);
// Dependencies System.Object
namespace Firebase::Storage::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Storage.Internal.TransferStateUpdater`1<T>
class CORDL_TYPE TransferStateUpdater_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MonitorController, put=set_MonitorController)) ::Firebase::Storage::MonitorControllerInternal*  MonitorController;

 __declspec(property(get=get_ProgressState, put=set_ProgressState)) T  ProgressState;

/// @brief Field <MonitorController>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__MonitorController_k__BackingField, put=__cordl_internal_set__MonitorController_k__BackingField)) ::Firebase::Storage::MonitorControllerInternal*  _MonitorController_k__BackingField;

/// @brief Field <ProgressState>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ProgressState_k__BackingField, put=__cordl_internal_set__ProgressState_k__BackingField)) T  _ProgressState_k__BackingField;

/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::IProgress_1<T>*  handler;

/// @brief Field transferState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferState, put=__cordl_internal_set_transferState)) ::Firebase::Storage::Internal::TransferState*  transferState;

static inline ::Firebase::Storage::Internal::TransferStateUpdater_1<T>* New_ctor(::Firebase::Storage::StorageReference*  storageReference, ::System::IProgress_1<T>*  progressHandler, T  progressState, ::Firebase::Storage::Internal::TransferState*  progressStateBackingStore) ;

/// @brief Method SetMetadata, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetMetadata(::Firebase::Storage::StorageMetadata*  metadata) ;

/// @brief Method <TransferStateUpdater>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _TransferStateUpdater_m__0(::System::Object*  sender, ::System::EventArgs*  eventArgs) ;

constexpr ::Firebase::Storage::MonitorControllerInternal* const& __cordl_internal_get__MonitorController_k__BackingField() const;

constexpr ::Firebase::Storage::MonitorControllerInternal*& __cordl_internal_get__MonitorController_k__BackingField() ;

constexpr T const& __cordl_internal_get__ProgressState_k__BackingField() const;

constexpr T& __cordl_internal_get__ProgressState_k__BackingField() ;

constexpr ::System::IProgress_1<T>* const& __cordl_internal_get_handler() const;

constexpr ::System::IProgress_1<T>*& __cordl_internal_get_handler() ;

constexpr ::Firebase::Storage::Internal::TransferState* const& __cordl_internal_get_transferState() const;

constexpr ::Firebase::Storage::Internal::TransferState*& __cordl_internal_get_transferState() ;

constexpr void __cordl_internal_set__MonitorController_k__BackingField(::Firebase::Storage::MonitorControllerInternal*  value) ;

constexpr void __cordl_internal_set__ProgressState_k__BackingField(T  value) ;

constexpr void __cordl_internal_set_handler(::System::IProgress_1<T>*  value) ;

constexpr void __cordl_internal_set_transferState(::Firebase::Storage::Internal::TransferState*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::StorageReference*  storageReference, ::System::IProgress_1<T>*  progressHandler, T  progressState, ::Firebase::Storage::Internal::TransferState*  progressStateBackingStore) ;

/// @brief Method get_MonitorController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Firebase::Storage::MonitorControllerInternal* get_MonitorController() ;

/// @brief Method get_ProgressState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_ProgressState() ;

/// @brief Method set_MonitorController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_MonitorController(::Firebase::Storage::MonitorControllerInternal*  value) ;

/// @brief Method set_ProgressState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_ProgressState(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferStateUpdater_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferStateUpdater_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferStateUpdater_1(TransferStateUpdater_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferStateUpdater_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferStateUpdater_1(TransferStateUpdater_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11708};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::System::IProgress_1<T>*  ___handler;

/// @brief Field transferState, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::Internal::TransferState*  ___transferState;

/// @brief Field <ProgressState>k__BackingField, offset: 0x20, size: 0x8, def value: None
 T  ____ProgressState_k__BackingField;

/// @brief Field <MonitorController>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Storage::MonitorControllerInternal*  ____MonitorController_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Storage::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Storage::Internal::TransferStateUpdater_1, "Firebase.Storage.Internal", "TransferStateUpdater`1");
