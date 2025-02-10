#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageMetadata.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StorageMetadata)
namespace Firebase::Storage {
class MetadataChange;
}
namespace Firebase::Storage {
class MetadataInternal;
}
namespace Firebase::Storage {
class StorageReference;
}
// Forward declare root types
namespace Firebase::Storage {
class StorageMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Storage::StorageMetadata);
// Dependencies System.DateTime, System.Object
namespace Firebase::Storage {
// Is value type: false
// CS Name: Firebase.Storage.StorageMetadata
class CORDL_TYPE StorageMetadata : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Internal, put=set_Internal)) ::Firebase::Storage::MetadataInternal*  Internal;

/// @brief Field UnixEpoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnixEpoch, put=setStaticF_UnixEpoch)) ::System::DateTime  UnixEpoch;

/// @brief Field <Internal>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Internal_k__BackingField, put=__cordl_internal_set__Internal_k__BackingField)) ::Firebase::Storage::MetadataInternal*  _Internal_k__BackingField;

/// @brief Field storageReference, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_storageReference, put=__cordl_internal_set_storageReference)) ::Firebase::Storage::StorageReference*  storageReference;

/// @brief Method BuildMetadataInternal, addr 0x192a170, size 0x74, virtual false, abstract: false, final false
static inline ::Firebase::Storage::MetadataInternal* BuildMetadataInternal(::Firebase::Storage::MetadataChange*  metadataChange) ;

/// @brief Method GetMetadataInternal, addr 0x192c01c, size 0xc, virtual false, abstract: false, final false
static inline ::Firebase::Storage::MetadataInternal* GetMetadataInternal(::Firebase::Storage::StorageMetadata*  metadata) ;

static inline ::Firebase::Storage::StorageMetadata* New_ctor() ;

static inline ::Firebase::Storage::StorageMetadata* New_ctor(::Firebase::Storage::StorageMetadata*  metadataToCopy) ;

static inline ::Firebase::Storage::StorageMetadata* New_ctor(::Firebase::Storage::StorageReference*  reference, ::Firebase::Storage::MetadataInternal*  metadata) ;

constexpr ::Firebase::Storage::MetadataInternal* const& __cordl_internal_get__Internal_k__BackingField() const;

constexpr ::Firebase::Storage::MetadataInternal*& __cordl_internal_get__Internal_k__BackingField() ;

constexpr ::Firebase::Storage::StorageReference* const& __cordl_internal_get_storageReference() const;

constexpr ::Firebase::Storage::StorageReference*& __cordl_internal_get_storageReference() ;

constexpr void __cordl_internal_set__Internal_k__BackingField(::Firebase::Storage::MetadataInternal*  value) ;

constexpr void __cordl_internal_set_storageReference(::Firebase::Storage::StorageReference*  value) ;

/// @brief Method .ctor, addr 0x192bea8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x192bfc8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::StorageMetadata*  metadataToCopy) ;

/// @brief Method .ctor, addr 0x192b67c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Firebase::Storage::StorageReference*  reference, ::Firebase::Storage::MetadataInternal*  metadata) ;

static inline ::System::DateTime getStaticF_UnixEpoch() ;

/// @brief Method get_Internal, addr 0x192c00c, size 0x8, virtual false, abstract: false, final false
inline ::Firebase::Storage::MetadataInternal* get_Internal() ;

static inline void setStaticF_UnixEpoch(::System::DateTime  value) ;

/// @brief Method set_Internal, addr 0x192c014, size 0x8, virtual false, abstract: false, final false
inline void set_Internal(::Firebase::Storage::MetadataInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageMetadata", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageMetadata(StorageMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageMetadata", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageMetadata(StorageMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11706};

/// @brief Field storageReference, offset: 0x10, size: 0x8, def value: None
 ::Firebase::Storage::StorageReference*  ___storageReference;

/// @brief Field <Internal>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Firebase::Storage::MetadataInternal*  ____Internal_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::StorageMetadata, ___storageReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Storage::StorageMetadata, ____Internal_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::StorageMetadata, 0x20>, "Size mismatch!");

} // namespace end def Firebase::Storage
NEED_NO_BOX(::Firebase::Storage::StorageMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageMetadata*, "Firebase.Storage", "StorageMetadata");
