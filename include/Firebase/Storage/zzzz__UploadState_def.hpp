#pragma once
// IWYU pragma private; include "Firebase/Storage/UploadState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadState)
namespace Firebase::Storage::Internal {
class TransferState;
}
namespace Firebase::Storage {
class StorageReference;
}
// Forward declare root types
namespace Firebase::Storage {
class UploadState;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::UploadState);
// Dependencies System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.UploadState
class CORDL_TYPE UploadState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BytesTransferred)) int64_t  BytesTransferred;

 __declspec(property(get=get_State, put=set_State)) ::Firebase::Storage::Internal::TransferState*  State;

 __declspec(property(get=get_TotalByteCount)) int64_t  TotalByteCount;

/// @brief Field <State>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Firebase::Storage::Internal::TransferState*  _State_k__BackingField;

static inline ::Firebase::Storage::UploadState* New_ctor(::Firebase::Storage::StorageReference*  reference, int64_t  totalByteCount) ;

constexpr ::Firebase::Storage::Internal::TransferState* const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Firebase::Storage::Internal::TransferState*& __cordl_internal_get__State_k__BackingField() ;

constexpr void __cordl_internal_set__State_k__BackingField(::Firebase::Storage::Internal::TransferState*  value) ;

/// @brief Method .ctor, addr 0x19298b4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::StorageReference*  reference, int64_t  totalByteCount) ;

/// @brief Method get_BytesTransferred, addr 0x1929958, size 0x1c, virtual false, abstract: false, final false
inline int64_t get_BytesTransferred() ;

/// @brief Method get_State, addr 0x1929990, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Storage::Internal::TransferState* get_State() ;

/// @brief Method get_TotalByteCount, addr 0x1929974, size 0x1c, virtual false, abstract: false, final false
inline int64_t get_TotalByteCount() ;

/// @brief Method set_State, addr 0x1929998, size 0x8, virtual false, abstract: false, final false
inline void set_State(::Firebase::Storage::Internal::TransferState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadState(UploadState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadState(UploadState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11694};

/// @brief Field <State>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::Internal::TransferState*  ____State_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::UploadState, ____State_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::UploadState, 0x18>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::UploadState);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::UploadState*, "Firebase.Storage", "UploadState");
