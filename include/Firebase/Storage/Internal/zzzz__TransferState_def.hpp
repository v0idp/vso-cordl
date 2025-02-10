#pragma once
// IWYU pragma private; include "Firebase/Storage/Internal/TransferState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransferState)
namespace Firebase::Storage {
class StorageMetadata;
}
namespace Firebase::Storage {
class StorageReference;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Firebase::Storage::Internal {
class TransferState;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::Internal::TransferState);
// Dependencies System.Object
namespace Firebase::Storage::Internal {
// Is value type: false
// CS Name: Firebase.Storage.Internal.TransferState
class CORDL_TYPE TransferState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BytesTransferred, put=set_BytesTransferred)) int64_t  BytesTransferred;

 __declspec(property(put=set_Metadata)) ::Firebase::Storage::StorageMetadata*  Metadata;

 __declspec(property(put=set_Reference)) ::Firebase::Storage::StorageReference*  Reference;

 __declspec(property(get=get_TotalByteCount, put=set_TotalByteCount)) int64_t  TotalByteCount;

 __declspec(property(put=set_UploadSessionUri)) ::System::Uri*  UploadSessionUri;

/// @brief Field <BytesTransferred>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BytesTransferred_k__BackingField, put=__cordl_internal_set__BytesTransferred_k__BackingField)) int64_t  _BytesTransferred_k__BackingField;

/// @brief Field <Metadata>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Metadata_k__BackingField, put=__cordl_internal_set__Metadata_k__BackingField)) ::Firebase::Storage::StorageMetadata*  _Metadata_k__BackingField;

/// @brief Field <Reference>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Reference_k__BackingField, put=__cordl_internal_set__Reference_k__BackingField)) ::Firebase::Storage::StorageReference*  _Reference_k__BackingField;

/// @brief Field <TotalByteCount>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalByteCount_k__BackingField, put=__cordl_internal_set__TotalByteCount_k__BackingField)) int64_t  _TotalByteCount_k__BackingField;

/// @brief Field <UploadSessionUri>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__UploadSessionUri_k__BackingField, put=__cordl_internal_set__UploadSessionUri_k__BackingField)) ::System::Uri*  _UploadSessionUri_k__BackingField;

static inline ::Firebase::Storage::Internal::TransferState* New_ctor(::Firebase::Storage::StorageReference*  reference) ;

constexpr int64_t const& __cordl_internal_get__BytesTransferred_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__BytesTransferred_k__BackingField() ;

constexpr ::Firebase::Storage::StorageMetadata* const& __cordl_internal_get__Metadata_k__BackingField() const;

constexpr ::Firebase::Storage::StorageMetadata*& __cordl_internal_get__Metadata_k__BackingField() ;

constexpr ::Firebase::Storage::StorageReference* const& __cordl_internal_get__Reference_k__BackingField() const;

constexpr ::Firebase::Storage::StorageReference*& __cordl_internal_get__Reference_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__TotalByteCount_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__TotalByteCount_k__BackingField() ;

constexpr ::System::Uri* const& __cordl_internal_get__UploadSessionUri_k__BackingField() const;

constexpr ::System::Uri*& __cordl_internal_get__UploadSessionUri_k__BackingField() ;

constexpr void __cordl_internal_set__BytesTransferred_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Metadata_k__BackingField(::Firebase::Storage::StorageMetadata*  value) ;

constexpr void __cordl_internal_set__Reference_k__BackingField(::Firebase::Storage::StorageReference*  value) ;

constexpr void __cordl_internal_set__TotalByteCount_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__UploadSessionUri_k__BackingField(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0x1929930, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::StorageReference*  reference) ;

/// @brief Method get_BytesTransferred, addr 0x192c18c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesTransferred() ;

/// @brief Method get_TotalByteCount, addr 0x192c19c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalByteCount() ;

/// @brief Method set_BytesTransferred, addr 0x192c194, size 0x8, virtual false, abstract: false, final false
inline void set_BytesTransferred(int64_t  value) ;

/// @brief Method set_Metadata, addr 0x192c1b4, size 0x8, virtual false, abstract: false, final false
inline void set_Metadata(::Firebase::Storage::StorageMetadata*  value) ;

/// @brief Method set_Reference, addr 0x192c1bc, size 0x8, virtual false, abstract: false, final false
inline void set_Reference(::Firebase::Storage::StorageReference*  value) ;

/// @brief Method set_TotalByteCount, addr 0x192c1a4, size 0x8, virtual false, abstract: false, final false
inline void set_TotalByteCount(int64_t  value) ;

/// @brief Method set_UploadSessionUri, addr 0x192c1ac, size 0x8, virtual false, abstract: false, final false
inline void set_UploadSessionUri(::System::Uri*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferState(TransferState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferState(TransferState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11709};

/// @brief Field <BytesTransferred>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____BytesTransferred_k__BackingField;

/// @brief Field <TotalByteCount>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____TotalByteCount_k__BackingField;

/// @brief Field <UploadSessionUri>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Uri*  ____UploadSessionUri_k__BackingField;

/// @brief Field <Metadata>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Storage::StorageMetadata*  ____Metadata_k__BackingField;

/// @brief Field <Reference>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Firebase::Storage::StorageReference*  ____Reference_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::Internal::TransferState, ____BytesTransferred_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::TransferState, ____TotalByteCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::TransferState, ____UploadSessionUri_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::TransferState, ____Metadata_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::Internal::TransferState, ____Reference_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::Internal::TransferState, 0x38>, "Size mismatch!");

} // namespace end def Firebase::Storage::Internal
NEED_NO_BOX(::Firebase::Storage::Internal::TransferState);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::Internal::TransferState*, "Firebase.Storage.Internal", "TransferState");
